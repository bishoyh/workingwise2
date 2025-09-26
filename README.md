

# Compiling on Modern Systems

## Prerequisites

Install the following dependencies:
- **Clang compiler**: Modern C compiler with C90 support
- **glib-2.0 development libraries**: `pkg-config --cflags --libs glib-2.0` should work
- **Bison**: Parser generator (replacement for yacc)
- **Flex**: Lexical analyzer (replacement for lex)

On Ubuntu/Debian:
```bash
sudo apt-get install clang libglib2.0-dev bison flex
```

On other systems using Homebrew:
```bash
brew install clang glib bison flex
```

## Compilation Steps

1. **Set environment variables**:
   ```bash
   export WISECONFIGDIR="/path/to/workingwise2/wisecfg"
   ```

2. **Build the Dynamite compiler**:
   ```bash
   cd src/dyc
   bison -d -t calc.y
   flex calc.l
   make CC="clang" CFLAGS="-c -O3 -I../base/ -std=gnu90" linux
   ```

3. **Add dyc to PATH and build main package**:
   ```bash
   export PATH="$(pwd):$PATH"
   cd ..
   make all
   ```

4. **Run tests** (optional but recommended):
   ```bash
   make test
   ```

## Installation

Binaries will be located in `src/bin/` after successful compilation. There is no automated install process - copy binaries to your desired location manually.

## Programs Available

After compilation, the following programs will be available in `src/bin/`:
- **genewise**: Protein to genomic DNA alignment
- **estwise**: EST to genomic DNA alignment
- **genewisedb**: Database version of genewise
- **estwisedb**: Database version of estwise
- **psw**: Protein Smith-Waterman alignment
- **pswdb**: Database protein alignment
- **dba**: DNA block aligner
- **dnal**: DNA alignment
- **scanwise**: Protein database search
- **promoterwise**: Promoter region alignment

# Original readme
```
README for Wise2/Dynamite development


Wise2/Dynamite is written and maintained by Ewan Birney
<birney@ebi.ac.uk>.

The paper for Genewise is:

GeneWise and Genomewise. Birney E, Clamp M, Durbin R.
Genome Res. 2004 May;14(5):988-95.


The paper for Dynamite is:

Dynamite: a flexible code generating language for dynamic programming methods used in sequence comparison.
Birney E, Durbin R.  Proc Int Conf Intell Syst Mol Biol. 1997;5:56-64.


If you are using Genewise, almost certainly you want to
be also using Exonerate is protein2genome mode - for reasonably
close genomes (ie, inter-mammalian, or human/chicken), this
is as accurate as genewise and about 1,000 times faster.

Exonerate was written by Guy Slater and is available at:

http://www.ebi.ac.uk/~guy/exonerate/



INSTALLATION
-------------

cd into src and type

make all

possibly followed by

make test


there is not a make install. binaries are in src/bin after make.


The pthreads port no longer cleanly compiles. There was never
really that much point in using the pthreads port as (a) you
could trivially split databases and recombine the results 
for the same effect, and this was more sensible as it
would work on farm configurations and (b) it was excessively
long computation in anycase and probably you are better
off with Exonerate.


Development Notes:
------------------

Wise2 package is having a bit of a renaissance as my own (ie, Ewan's)
coding development package. You will see alot more experimental
code in these distributions and programs in development.


The old war-horse, genewise is being gently tweaked. There is far more
flexible splice site model. However currently this does not give
better results that plain old gt-ag for all cases. Because of that the
default is to use the gt-ag rule.


Other interesting programs that will come out from this include
promoterwise - a small region aligner designed for promoters
and scanwise - a new protein searching engine.
```

 




