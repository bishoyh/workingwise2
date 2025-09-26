#!/bin/bash

# Wise2 Build Script
# Clean and build the entire Wise2 bioinformatics package

set -e  # Exit on any error

# Function to display usage
usage() {
    echo "Usage: $0 [clean|build-all]"
    echo ""
    echo "Options:"
    echo "  clean      - Remove all compiled files and build artifacts"
    echo "  build-all  - Clean and build the entire project from scratch"
    echo "  (no args)  - Same as build-all (default behavior)"
    echo ""
    exit 1
}

# Function to perform cleaning
do_clean() {
    echo "=== Cleaning Wise2 Build Artifacts ==="

    # Set required environment variables for clean operations
    export WISECONFIGDIR="$(pwd)/wisecfg"
    echo "Setting WISECONFIGDIR to: $WISECONFIGDIR"

    echo "Cleaning src directory..."
    cd src
    make clean 2>/dev/null || true

    # Additional cleanup of generated files
    echo "Cleaning dyc generated files..."
    cd dyc
    rm -f calc.tab.c calc.tab.h y.tab.c y.tab.h lex.yy.c lex.yy.o calc.tab.o
    rm -f dyc *.o
    cd ..

    # Clean up any remaining object files and libraries
    echo "Cleaning remaining build artifacts..."
    find . -name "*.o" -delete 2>/dev/null || true
    find . -name "*.a" -delete 2>/dev/null || true
    rm -rf bin/ 2>/dev/null || true
    rm -rf intelbin/ 2>/dev/null || true

    # Remove compiled binaries from models directory
    echo "Cleaning compiled binaries..."
    cd models 2>/dev/null && {
        rm -f genewise estwise psw dba dnal estwisedb genewisedb pswdb
        rm -f genomewise pseudowise promoterwise sywise scanwise
    } || true
    cd ..

    cd ..
    echo "=== Clean Complete ==="
}

# Function to build everything from scratch
do_build_all() {
    echo "=== Wise2 Build Script ==="

    # Set required environment variables
    export WISECONFIGDIR="$(pwd)/wisecfg"
    export PATH="$(pwd)/src/dyc:$PATH"
    echo "Setting WISECONFIGDIR to: $WISECONFIGDIR"
    echo "Adding dyc to PATH: $(pwd)/src/dyc"

    # First clean everything
    do_clean

    echo "=== Starting Fresh Build ==="

    # Build the dyc compiler first
    echo "Building dyc compiler..."
    cd src/dyc
    bison -d -t calc.y
    flex calc.l
    # Create symlinks for yacc compatibility
    ln -sf calc.tab.c y.tab.c
    ln -sf calc.tab.h y.tab.h
    cd ..

    # Build base library first (required by dyc)
    echo "Building base library..."
    cd base
    make CC="clang" CFLAGS="-c -O3 -I. -std=gnu90" libwisebase.a
    cd ..

    # Now build dyc with the base library available
    echo "Building dyc compiler with base library..."
    cd dyc
    make CC="clang" CFLAGS="-c -O3 -I../base/ -std=gnu90" linux
    cd ..

    # Build the entire package
    echo "Building Wise2 package..."
    make all

    cd ..
    echo "=== Build Complete ==="
    echo "Binaries available in src/bin/"
    echo "Main programs: genewise, estwise, psw, dba, scanwise, etc."
}

# Parse command line arguments
case "${1:-build-all}" in
    clean)
        do_clean
        ;;
    build-all)
        do_build_all
        ;;
    -h|--help|help)
        usage
        ;;
    *)
        if [ $# -eq 0 ]; then
            # No arguments provided, default to build-all
            do_build_all
        else
            echo "Error: Unknown option '$1'"
            usage
        fi
        ;;
esac