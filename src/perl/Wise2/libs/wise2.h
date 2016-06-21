
#include <stdio.h>

typedef char aa;
typedef int base;
typedef double Probability;
typedef double Bits;
typedef int Score;
typedef int codon;
typedef int boolean;

#define WISE2_FATAL    1
#define WISE2_WARNING  2
#define WISE2_INFO     8
#define WISE2_REPORT   16


char * Wise2_stringalloc(char *);
void   Wise2_error_off(int type);
void   Wise2_error_on(int type);
typedef struct Wise2_AlnBlock Wise2_AlnBlock;

typedef struct Wise2_AlnColumn Wise2_AlnColumn;

typedef struct Wise2_AlnUnit Wise2_AlnUnit;

typedef struct Wise2_AlnSequence Wise2_AlnSequence;

typedef struct Wise2_AlnRange Wise2_AlnRange;

typedef struct Wise2_AlnRangeSet Wise2_AlnRangeSet;

typedef struct Wise2_cDNA Wise2_cDNA;

typedef struct Wise2_cDNADB Wise2_cDNADB;

typedef struct Wise2_CodonTable Wise2_CodonTable;

typedef struct Wise2_CodonMapper Wise2_CodonMapper;

typedef struct Wise2_ComplexSequence Wise2_ComplexSequence;

typedef struct Wise2_ComplexSequenceEvalSet Wise2_ComplexSequenceEvalSet;

typedef struct Wise2_CompMat Wise2_CompMat;

typedef struct Wise2_DBSearchImpl Wise2_DBSearchImpl;

typedef struct Wise2_DnaMatrix Wise2_DnaMatrix;

typedef struct Wise2_DnaProbMatrix Wise2_DnaProbMatrix;

typedef struct Wise2_Gene Wise2_Gene;

typedef struct Wise2_Genomic Wise2_Genomic;

typedef struct Wise2_GenomicRepeat Wise2_GenomicRepeat;

typedef struct Wise2_GenomicDB Wise2_GenomicDB;

typedef struct Wise2_GenomicRegion Wise2_GenomicRegion;

typedef struct Wise2_Histogram Wise2_Histogram;

typedef struct Wise2_Hscore Wise2_Hscore;

typedef struct Wise2_DataScore Wise2_DataScore;

typedef struct Wise2_DataEntry Wise2_DataEntry;

typedef struct Wise2_PackAln Wise2_PackAln;

typedef struct Wise2_PackAlnUnit Wise2_PackAlnUnit;

typedef struct Wise2_Protein Wise2_Protein;

typedef struct Wise2_ProteinDB Wise2_ProteinDB;

typedef struct Wise2_RandomProteinDB Wise2_RandomProteinDB;

typedef struct Wise2_RandomDNADB Wise2_RandomDNADB;

typedef struct Wise2_RandomModelDNA Wise2_RandomModelDNA;

typedef struct Wise2_RandomModel Wise2_RandomModel;

typedef struct Wise2_Sequence Wise2_Sequence;

typedef struct Wise2_SequenceSet Wise2_SequenceSet;

typedef struct Wise2_SequenceDB Wise2_SequenceDB;

typedef struct Wise2_FileSource Wise2_FileSource;

typedef struct Wise2_Exon Wise2_Exon;

typedef struct Wise2_Transcript Wise2_Transcript;

typedef struct Wise2_Translation Wise2_Translation;

typedef struct Wise2_cDNAParser Wise2_cDNAParser;

typedef struct Wise2_DnaStartEnd Wise2_DnaStartEnd;

typedef struct Wise2_GeneFrequency21 Wise2_GeneFrequency21;

typedef struct Wise2_GeneConsensus Wise2_GeneConsensus;

typedef struct Wise2_GeneSingleCons Wise2_GeneSingleCons;

typedef struct Wise2_GeneParameter21 Wise2_GeneParameter21;

typedef struct Wise2_MatchSummarySet Wise2_MatchSummarySet;

typedef struct Wise2_MatchSummary Wise2_MatchSummary;

typedef struct Wise2_PfamHmmer1DB Wise2_PfamHmmer1DB;

typedef struct Wise2_PfamHmmer1Entry Wise2_PfamHmmer1Entry;

typedef struct Wise2_DnaSequenceHitList Wise2_DnaSequenceHitList;

typedef struct Wise2_SegmentHitList Wise2_SegmentHitList;

typedef struct Wise2_SegmentHit Wise2_SegmentHit;

typedef struct Wise2_ThreeStateDB Wise2_ThreeStateDB;

typedef struct Wise2_ThreeStateModel Wise2_ThreeStateModel;

typedef struct Wise2_ThreeStateUnit Wise2_ThreeStateUnit;



/* Functions that create, manipulate or act on AlnBlock
 *
 * Wise2_dump_ascii_AlnBlock
 * Wise2_hard_link_AlnBlock
 * Wise2_AlnBlock_alloc_std
 * Wise2_replace_start_AlnBlock
 * Wise2_access_start_AlnBlock
 * Wise2_access_seq_AlnBlock
 * Wise2_length_seq_AlnBlock
 * Wise2_flush_AlnBlock
 * Wise2_add_AlnBlock
 * Wise2_replace_length_AlnBlock
 * Wise2_access_length_AlnBlock
 * Wise2_replace_score_AlnBlock
 * Wise2_access_score_AlnBlock
 * Wise2_free_AlnBlock [destructor]
 *
 */



/* Functions that create, manipulate or act on AlnColumn
 *
 * Wise2_at_end_AlnColumn
 * Wise2_hard_link_AlnColumn
 * Wise2_AlnColumn_alloc_std
 * Wise2_access_alu_AlnColumn
 * Wise2_length_alu_AlnColumn
 * Wise2_flush_AlnColumn
 * Wise2_add_AlnColumn
 * Wise2_replace_next_AlnColumn
 * Wise2_access_next_AlnColumn
 * Wise2_free_AlnColumn [destructor]
 *
 */



/* Functions that create, manipulate or act on AlnUnit
 *
 * Wise2_bio_start_AlnUnit
 * Wise2_bio_end_AlnUnit
 * Wise2_hard_link_AlnUnit
 * Wise2_AlnUnit_alloc
 * Wise2_replace_start_AlnUnit
 * Wise2_access_start_AlnUnit
 * Wise2_replace_end_AlnUnit
 * Wise2_access_end_AlnUnit
 * Wise2_replace_label_AlnUnit
 * Wise2_access_label_AlnUnit
 * Wise2_replace_text_label_AlnUnit
 * Wise2_access_text_label_AlnUnit
 * Wise2_replace_next_AlnUnit
 * Wise2_access_next_AlnUnit
 * Wise2_replace_in_column_AlnUnit
 * Wise2_access_in_column_AlnUnit
 * Wise2_replace_seq_AlnUnit
 * Wise2_access_seq_AlnUnit
 * Wise2_free_AlnUnit [destructor]
 *
 */



/* Functions that create, manipulate or act on AlnSequence
 *
 * Wise2_hard_link_AlnSequence
 * Wise2_AlnSequence_alloc
 * Wise2_replace_start_AlnSequence
 * Wise2_access_start_AlnSequence
 * Wise2_replace_data_type_AlnSequence
 * Wise2_access_data_type_AlnSequence
 * Wise2_replace_data_AlnSequence
 * Wise2_access_data_AlnSequence
 * Wise2_replace_bio_start_AlnSequence
 * Wise2_access_bio_start_AlnSequence
 * Wise2_replace_bio_end_AlnSequence
 * Wise2_access_bio_end_AlnSequence
 * Wise2_free_AlnSequence [destructor]
 *
 */

/* API for object AlnBlock */
/* Function:  Wise2_dump_ascii_AlnBlock(alb,ofp)
 *
 * Descrip:    Dumps the alignment in rereadable ascii form.
 *
 *             Not really for human consumption
 *
 *
 * Arg:        alb          AlnBlock to dump [Wise2_AlnBlock *]
 * Arg:        ofp          File stream to dump to [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_dump_ascii_AlnBlock( Wise2_AlnBlock * alb,FILE * ofp);

/* Function:  Wise2_hard_link_AlnBlock(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_AlnBlock *]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_hard_link_AlnBlock( Wise2_AlnBlock * obj);

/* Function:  Wise2_AlnBlock_alloc_std(void)
 *
 * Descrip:    Equivalent to AlnBlock_alloc_len(AlnBlockLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_AlnBlock_alloc_std();

/* Function:  Wise2_replace_start_AlnBlock(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnBlock *]
 * Arg:        start        New value of the variable [Wise2_AlnColumn *]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_AlnBlock( Wise2_AlnBlock * obj,Wise2_AlnColumn * start);

/* Function:  Wise2_access_start_AlnBlock(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnBlock *]
 *
 * Returns member variable start [Wise2_AlnColumn *]
 *
 */
Wise2_AlnColumn * Wise2_access_start_AlnBlock( Wise2_AlnBlock * obj);

/* Function:  Wise2_access_seq_AlnBlock(obj,i)
 *
 * Descrip:    Access members stored in the seq list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_AlnBlock *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_AlnSequence *]
 *
 */
Wise2_AlnSequence * Wise2_access_seq_AlnBlock( Wise2_AlnBlock * obj,int i);

/* Function:  Wise2_length_seq_AlnBlock(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_AlnBlock *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_seq_AlnBlock( Wise2_AlnBlock * obj);

/* Function:  Wise2_flush_AlnBlock(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_AlnBlock *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_AlnBlock( Wise2_AlnBlock * obj);

/* Function:  Wise2_add_AlnBlock(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_AlnBlock *]
 * Arg:        add          Object to add to the list [Wise2_AlnSequence *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_AlnBlock( Wise2_AlnBlock * obj,Wise2_AlnSequence * add);

/* Function:  Wise2_replace_length_AlnBlock(obj,length)
 *
 * Descrip:    Replace member variable length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnBlock *]
 * Arg:        length       New value of the variable [int]
 *
 * Returns member variable length [boolean]
 *
 */
boolean Wise2_replace_length_AlnBlock( Wise2_AlnBlock * obj,int length);

/* Function:  Wise2_access_length_AlnBlock(obj)
 *
 * Descrip:    Access member variable length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnBlock *]
 *
 * Returns member variable length [int]
 *
 */
int Wise2_access_length_AlnBlock( Wise2_AlnBlock * obj);

/* Function:  Wise2_replace_score_AlnBlock(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnBlock *]
 * Arg:        score        New value of the variable [int]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_AlnBlock( Wise2_AlnBlock * obj,int score);

/* Function:  Wise2_access_score_AlnBlock(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnBlock *]
 *
 * Returns member variable score [int]
 *
 */
int Wise2_access_score_AlnBlock( Wise2_AlnBlock * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_AlnBlock(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_AlnBlock *]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_free_AlnBlock( Wise2_AlnBlock * obj);

/* API for object AlnColumn */
/* Function:  Wise2_at_end_AlnColumn(alc)
 *
 * Descrip:    This tells you whether the AlnColumn is at the
 *             end without passing NULL's around
 *
 *
 *
 * Arg:        alc          AlnColumn [Wise2_AlnColumn *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_at_end_AlnColumn( Wise2_AlnColumn * alc);

/* Function:  Wise2_hard_link_AlnColumn(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_AlnColumn *]
 *
 * Returns Undocumented return value [Wise2_AlnColumn *]
 *
 */
Wise2_AlnColumn * Wise2_hard_link_AlnColumn( Wise2_AlnColumn * obj);

/* Function:  Wise2_AlnColumn_alloc_std(void)
 *
 * Descrip:    Equivalent to AlnColumn_alloc_len(AlnColumnLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_AlnColumn *]
 *
 */
Wise2_AlnColumn * Wise2_AlnColumn_alloc_std();

/* Function:  Wise2_access_alu_AlnColumn(obj,i)
 *
 * Descrip:    Access members stored in the alu list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_AlnColumn *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_AlnUnit *]
 *
 */
Wise2_AlnUnit * Wise2_access_alu_AlnColumn( Wise2_AlnColumn * obj,int i);

/* Function:  Wise2_length_alu_AlnColumn(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_AlnColumn *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_alu_AlnColumn( Wise2_AlnColumn * obj);

/* Function:  Wise2_flush_AlnColumn(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_AlnColumn *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_AlnColumn( Wise2_AlnColumn * obj);

/* Function:  Wise2_add_AlnColumn(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_AlnColumn *]
 * Arg:        add          Object to add to the list [Wise2_AlnUnit *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_AlnColumn( Wise2_AlnColumn * obj,Wise2_AlnUnit * add);

/* Function:  Wise2_replace_next_AlnColumn(obj,next)
 *
 * Descrip:    Replace member variable next
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnColumn *]
 * Arg:        next         New value of the variable [Wise2_AlnColumn *]
 *
 * Returns member variable next [boolean]
 *
 */
boolean Wise2_replace_next_AlnColumn( Wise2_AlnColumn * obj,Wise2_AlnColumn * next);

/* Function:  Wise2_access_next_AlnColumn(obj)
 *
 * Descrip:    Access member variable next
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnColumn *]
 *
 * Returns member variable next [Wise2_AlnColumn *]
 *
 */
Wise2_AlnColumn * Wise2_access_next_AlnColumn( Wise2_AlnColumn * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_AlnColumn(obj)
 *
 * Descrip:    Specilased deconstructor needed because
 *             of linked list nature of the data structure
 *
 *
 * Arg:        obj          Undocumented argument [Wise2_AlnColumn *]
 *
 * Returns Undocumented return value [Wise2_AlnColumn *]
 *
 */
Wise2_AlnColumn * Wise2_free_AlnColumn( Wise2_AlnColumn * obj);

/* API for object AlnUnit */
/* Function:  Wise2_bio_start_AlnUnit(alu)
 *
 * Descrip:    Tells the bio-coordinate of the
 *             start point of this alnunit
 *
 *
 * Arg:        alu          Undocumented argument [Wise2_AlnUnit *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_bio_start_AlnUnit( Wise2_AlnUnit * alu);

/* Function:  Wise2_bio_end_AlnUnit(alu)
 *
 * Descrip:    Tells the bio-coordinate of the
 *             end point of this alnunit
 *
 *
 * Arg:        alu          Undocumented argument [Wise2_AlnUnit *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_bio_end_AlnUnit( Wise2_AlnUnit * alu);

/* Function:  Wise2_hard_link_AlnUnit(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_AlnUnit *]
 *
 * Returns Undocumented return value [Wise2_AlnUnit *]
 *
 */
Wise2_AlnUnit * Wise2_hard_link_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_AlnUnit_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_AlnUnit *]
 *
 */
Wise2_AlnUnit * Wise2_AlnUnit_alloc();

/* Function:  Wise2_replace_start_AlnUnit(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        start        New value of the variable [int]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_AlnUnit( Wise2_AlnUnit * obj,int start);

/* Function:  Wise2_access_start_AlnUnit(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable start [int]
 *
 */
int Wise2_access_start_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_replace_end_AlnUnit(obj,end)
 *
 * Descrip:    Replace member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        end          New value of the variable [int]
 *
 * Returns member variable end [boolean]
 *
 */
boolean Wise2_replace_end_AlnUnit( Wise2_AlnUnit * obj,int end);

/* Function:  Wise2_access_end_AlnUnit(obj)
 *
 * Descrip:    Access member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable end [int]
 *
 */
int Wise2_access_end_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_replace_label_AlnUnit(obj,label)
 *
 * Descrip:    Replace member variable label
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        label        New value of the variable [int]
 *
 * Returns member variable label [boolean]
 *
 */
boolean Wise2_replace_label_AlnUnit( Wise2_AlnUnit * obj,int label);

/* Function:  Wise2_access_label_AlnUnit(obj)
 *
 * Descrip:    Access member variable label
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable label [int]
 *
 */
int Wise2_access_label_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_replace_text_label_AlnUnit(obj,text_label)
 *
 * Descrip:    Replace member variable text_label
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        text_label   New value of the variable [char *]
 *
 * Returns member variable text_label [boolean]
 *
 */
boolean Wise2_replace_text_label_AlnUnit( Wise2_AlnUnit * obj,char * text_label);

/* Function:  Wise2_access_text_label_AlnUnit(obj)
 *
 * Descrip:    Access member variable text_label
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable text_label [char *]
 *
 */
char * Wise2_access_text_label_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_replace_next_AlnUnit(obj,next)
 *
 * Descrip:    Replace member variable next
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        next         New value of the variable [Wise2_AlnUnit *]
 *
 * Returns member variable next [boolean]
 *
 */
boolean Wise2_replace_next_AlnUnit( Wise2_AlnUnit * obj,Wise2_AlnUnit * next);

/* Function:  Wise2_access_next_AlnUnit(obj)
 *
 * Descrip:    Access member variable next
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable next [Wise2_AlnUnit *]
 *
 */
Wise2_AlnUnit * Wise2_access_next_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_replace_in_column_AlnUnit(obj,in_column)
 *
 * Descrip:    Replace member variable in_column
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        in_column    New value of the variable [boolean]
 *
 * Returns member variable in_column [boolean]
 *
 */
boolean Wise2_replace_in_column_AlnUnit( Wise2_AlnUnit * obj,boolean in_column);

/* Function:  Wise2_access_in_column_AlnUnit(obj)
 *
 * Descrip:    Access member variable in_column
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable in_column [boolean]
 *
 */
boolean Wise2_access_in_column_AlnUnit( Wise2_AlnUnit * obj);

/* Function:  Wise2_replace_seq_AlnUnit(obj,seq)
 *
 * Descrip:    Replace member variable seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 * Arg:        seq          New value of the variable [Wise2_AlnSequence *]
 *
 * Returns member variable seq [boolean]
 *
 */
boolean Wise2_replace_seq_AlnUnit( Wise2_AlnUnit * obj,Wise2_AlnSequence * seq);

/* Function:  Wise2_access_seq_AlnUnit(obj)
 *
 * Descrip:    Access member variable seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnUnit *]
 *
 * Returns member variable seq [Wise2_AlnSequence *]
 *
 */
Wise2_AlnSequence * Wise2_access_seq_AlnUnit( Wise2_AlnUnit * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_AlnUnit(obj)
 *
 * Descrip:    Specilased deconstructor needed because
 *             of linked list nature of the data structure
 *
 *
 * Arg:        obj          Undocumented argument [Wise2_AlnUnit *]
 *
 * Returns Undocumented return value [Wise2_AlnUnit *]
 *
 */
Wise2_AlnUnit * Wise2_free_AlnUnit( Wise2_AlnUnit * obj);

/* API for object AlnSequence */
/* Function:  Wise2_hard_link_AlnSequence(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_AlnSequence *]
 *
 * Returns Undocumented return value [Wise2_AlnSequence *]
 *
 */
Wise2_AlnSequence * Wise2_hard_link_AlnSequence( Wise2_AlnSequence * obj);

/* Function:  Wise2_AlnSequence_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_AlnSequence *]
 *
 */
Wise2_AlnSequence * Wise2_AlnSequence_alloc();

/* Function:  Wise2_replace_start_AlnSequence(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 * Arg:        start        New value of the variable [Wise2_AlnUnit *]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_AlnSequence( Wise2_AlnSequence * obj,Wise2_AlnUnit * start);

/* Function:  Wise2_access_start_AlnSequence(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 *
 * Returns member variable start [Wise2_AlnUnit *]
 *
 */
Wise2_AlnUnit * Wise2_access_start_AlnSequence( Wise2_AlnSequence * obj);

/* Function:  Wise2_replace_data_type_AlnSequence(obj,data_type)
 *
 * Descrip:    Replace member variable data_type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 * Arg:        data_type    New value of the variable [int]
 *
 * Returns member variable data_type [boolean]
 *
 */
boolean Wise2_replace_data_type_AlnSequence( Wise2_AlnSequence * obj,int data_type);

/* Function:  Wise2_access_data_type_AlnSequence(obj)
 *
 * Descrip:    Access member variable data_type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 *
 * Returns member variable data_type [int]
 *
 */
int Wise2_access_data_type_AlnSequence( Wise2_AlnSequence * obj);

/* Function:  Wise2_replace_data_AlnSequence(obj,data)
 *
 * Descrip:    Replace member variable data
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 * Arg:        data         New value of the variable [void *]
 *
 * Returns member variable data [boolean]
 *
 */
boolean Wise2_replace_data_AlnSequence( Wise2_AlnSequence * obj,void * data);

/* Function:  Wise2_access_data_AlnSequence(obj)
 *
 * Descrip:    Access member variable data
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 *
 * Returns member variable data [void *]
 *
 */
void * Wise2_access_data_AlnSequence( Wise2_AlnSequence * obj);

/* Function:  Wise2_replace_bio_start_AlnSequence(obj,bio_start)
 *
 * Descrip:    Replace member variable bio_start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 * Arg:        bio_start    New value of the variable [int]
 *
 * Returns member variable bio_start [boolean]
 *
 */
boolean Wise2_replace_bio_start_AlnSequence( Wise2_AlnSequence * obj,int bio_start);

/* Function:  Wise2_access_bio_start_AlnSequence(obj)
 *
 * Descrip:    Access member variable bio_start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 *
 * Returns member variable bio_start [int]
 *
 */
int Wise2_access_bio_start_AlnSequence( Wise2_AlnSequence * obj);

/* Function:  Wise2_replace_bio_end_AlnSequence(obj,bio_end)
 *
 * Descrip:    Replace member variable bio_end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 * Arg:        bio_end      New value of the variable [int]
 *
 * Returns member variable bio_end [boolean]
 *
 */
boolean Wise2_replace_bio_end_AlnSequence( Wise2_AlnSequence * obj,int bio_end);

/* Function:  Wise2_access_bio_end_AlnSequence(obj)
 *
 * Descrip:    Access member variable bio_end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnSequence *]
 *
 * Returns member variable bio_end [int]
 *
 */
int Wise2_access_bio_end_AlnSequence( Wise2_AlnSequence * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_AlnSequence(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_AlnSequence *]
 *
 * Returns Undocumented return value [Wise2_AlnSequence *]
 *
 */
Wise2_AlnSequence * Wise2_free_AlnSequence( Wise2_AlnSequence * obj);



/* Functions that create, manipulate or act on AlnRange
 *
 * Wise2_hard_link_AlnRange
 * Wise2_AlnRange_alloc
 * Wise2_replace_starti_AlnRange
 * Wise2_access_starti_AlnRange
 * Wise2_replace_startj_AlnRange
 * Wise2_access_startj_AlnRange
 * Wise2_replace_startstate_AlnRange
 * Wise2_access_startstate_AlnRange
 * Wise2_replace_stopi_AlnRange
 * Wise2_access_stopi_AlnRange
 * Wise2_replace_stopj_AlnRange
 * Wise2_access_stopj_AlnRange
 * Wise2_replace_stopstate_AlnRange
 * Wise2_access_stopstate_AlnRange
 * Wise2_replace_startscore_AlnRange
 * Wise2_access_startscore_AlnRange
 * Wise2_replace_stopscore_AlnRange
 * Wise2_access_stopscore_AlnRange
 * Wise2_free_AlnRange [destructor]
 *
 */



/* Functions that create, manipulate or act on AlnRangeSet
 *
 * Wise2_hard_link_AlnRangeSet
 * Wise2_AlnRangeSet_alloc_std
 * Wise2_replace_score_AlnRangeSet
 * Wise2_access_score_AlnRangeSet
 * Wise2_access_alr_AlnRangeSet
 * Wise2_length_alr_AlnRangeSet
 * Wise2_flush_AlnRangeSet
 * Wise2_add_AlnRangeSet
 * Wise2_free_AlnRangeSet [destructor]
 *
 */

/* API for object AlnRange */
/* Function:  Wise2_hard_link_AlnRange(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_AlnRange *]
 *
 * Returns Undocumented return value [Wise2_AlnRange *]
 *
 */
Wise2_AlnRange * Wise2_hard_link_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_AlnRange_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_AlnRange *]
 *
 */
Wise2_AlnRange * Wise2_AlnRange_alloc();

/* Function:  Wise2_replace_starti_AlnRange(obj,starti)
 *
 * Descrip:    Replace member variable starti
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        starti       New value of the variable [int]
 *
 * Returns member variable starti [boolean]
 *
 */
boolean Wise2_replace_starti_AlnRange( Wise2_AlnRange * obj,int starti);

/* Function:  Wise2_access_starti_AlnRange(obj)
 *
 * Descrip:    Access member variable starti
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable starti [int]
 *
 */
int Wise2_access_starti_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_startj_AlnRange(obj,startj)
 *
 * Descrip:    Replace member variable startj
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        startj       New value of the variable [int]
 *
 * Returns member variable startj [boolean]
 *
 */
boolean Wise2_replace_startj_AlnRange( Wise2_AlnRange * obj,int startj);

/* Function:  Wise2_access_startj_AlnRange(obj)
 *
 * Descrip:    Access member variable startj
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable startj [int]
 *
 */
int Wise2_access_startj_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_startstate_AlnRange(obj,startstate)
 *
 * Descrip:    Replace member variable startstate
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        startstate   New value of the variable [int]
 *
 * Returns member variable startstate [boolean]
 *
 */
boolean Wise2_replace_startstate_AlnRange( Wise2_AlnRange * obj,int startstate);

/* Function:  Wise2_access_startstate_AlnRange(obj)
 *
 * Descrip:    Access member variable startstate
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable startstate [int]
 *
 */
int Wise2_access_startstate_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_stopi_AlnRange(obj,stopi)
 *
 * Descrip:    Replace member variable stopi
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        stopi        New value of the variable [int]
 *
 * Returns member variable stopi [boolean]
 *
 */
boolean Wise2_replace_stopi_AlnRange( Wise2_AlnRange * obj,int stopi);

/* Function:  Wise2_access_stopi_AlnRange(obj)
 *
 * Descrip:    Access member variable stopi
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable stopi [int]
 *
 */
int Wise2_access_stopi_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_stopj_AlnRange(obj,stopj)
 *
 * Descrip:    Replace member variable stopj
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        stopj        New value of the variable [int]
 *
 * Returns member variable stopj [boolean]
 *
 */
boolean Wise2_replace_stopj_AlnRange( Wise2_AlnRange * obj,int stopj);

/* Function:  Wise2_access_stopj_AlnRange(obj)
 *
 * Descrip:    Access member variable stopj
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable stopj [int]
 *
 */
int Wise2_access_stopj_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_stopstate_AlnRange(obj,stopstate)
 *
 * Descrip:    Replace member variable stopstate
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        stopstate    New value of the variable [int]
 *
 * Returns member variable stopstate [boolean]
 *
 */
boolean Wise2_replace_stopstate_AlnRange( Wise2_AlnRange * obj,int stopstate);

/* Function:  Wise2_access_stopstate_AlnRange(obj)
 *
 * Descrip:    Access member variable stopstate
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable stopstate [int]
 *
 */
int Wise2_access_stopstate_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_startscore_AlnRange(obj,startscore)
 *
 * Descrip:    Replace member variable startscore
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        startscore   New value of the variable [int]
 *
 * Returns member variable startscore [boolean]
 *
 */
boolean Wise2_replace_startscore_AlnRange( Wise2_AlnRange * obj,int startscore);

/* Function:  Wise2_access_startscore_AlnRange(obj)
 *
 * Descrip:    Access member variable startscore
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable startscore [int]
 *
 */
int Wise2_access_startscore_AlnRange( Wise2_AlnRange * obj);

/* Function:  Wise2_replace_stopscore_AlnRange(obj,stopscore)
 *
 * Descrip:    Replace member variable stopscore
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 * Arg:        stopscore    New value of the variable [int]
 *
 * Returns member variable stopscore [boolean]
 *
 */
boolean Wise2_replace_stopscore_AlnRange( Wise2_AlnRange * obj,int stopscore);

/* Function:  Wise2_access_stopscore_AlnRange(obj)
 *
 * Descrip:    Access member variable stopscore
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRange *]
 *
 * Returns member variable stopscore [int]
 *
 */
int Wise2_access_stopscore_AlnRange( Wise2_AlnRange * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_AlnRange(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_AlnRange *]
 *
 * Returns Undocumented return value [Wise2_AlnRange *]
 *
 */
Wise2_AlnRange * Wise2_free_AlnRange( Wise2_AlnRange * obj);

/* API for object AlnRangeSet */
/* Function:  Wise2_hard_link_AlnRangeSet(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_AlnRangeSet *]
 *
 * Returns Undocumented return value [Wise2_AlnRangeSet *]
 *
 */
Wise2_AlnRangeSet * Wise2_hard_link_AlnRangeSet( Wise2_AlnRangeSet * obj);

/* Function:  Wise2_AlnRangeSet_alloc_std(void)
 *
 * Descrip:    Equivalent to AlnRangeSet_alloc_len(AlnRangeSetLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_AlnRangeSet *]
 *
 */
Wise2_AlnRangeSet * Wise2_AlnRangeSet_alloc_std();

/* Function:  Wise2_replace_score_AlnRangeSet(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRangeSet *]
 * Arg:        score        New value of the variable [int]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_AlnRangeSet( Wise2_AlnRangeSet * obj,int score);

/* Function:  Wise2_access_score_AlnRangeSet(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_AlnRangeSet *]
 *
 * Returns member variable score [int]
 *
 */
int Wise2_access_score_AlnRangeSet( Wise2_AlnRangeSet * obj);

/* Function:  Wise2_access_alr_AlnRangeSet(obj,i)
 *
 * Descrip:    Access members stored in the alr list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_AlnRangeSet *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_AlnRange *]
 *
 */
Wise2_AlnRange * Wise2_access_alr_AlnRangeSet( Wise2_AlnRangeSet * obj,int i);

/* Function:  Wise2_length_alr_AlnRangeSet(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_AlnRangeSet *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_alr_AlnRangeSet( Wise2_AlnRangeSet * obj);

/* Function:  Wise2_flush_AlnRangeSet(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_AlnRangeSet *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_AlnRangeSet( Wise2_AlnRangeSet * obj);

/* Function:  Wise2_add_AlnRangeSet(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_AlnRangeSet *]
 * Arg:        add          Object to add to the list [Wise2_AlnRange *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_AlnRangeSet( Wise2_AlnRangeSet * obj,Wise2_AlnRange * add);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_AlnRangeSet(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_AlnRangeSet *]
 *
 * Returns Undocumented return value [Wise2_AlnRangeSet *]
 *
 */
Wise2_AlnRangeSet * Wise2_free_AlnRangeSet( Wise2_AlnRangeSet * obj);



/* Helper functions in the module
 *
 * Wise2_change_max_BaseMatrix_kbytes
 * Wise2_get_max_BaseMatrix_kbytes
 *



/* These functions are not associated with an object */
/* Function:  Wise2_change_max_BaseMatrix_kbytes(new_kilo_number)
 *
 * Descrip:    This is to change, at run-time the maximum level of bytes basematrix *thinks*
 *             it can use. This number is *not* used for any actual calls to basematrix
 *             allocation: it is only used with /get_max_BaseMatrix_kbytes
 *
 *
 * Arg:        new_kilo_number max kilobytes allowed [int]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_change_max_BaseMatrix_kbytes( int new_kilo_number);

/* Function:  Wise2_get_max_BaseMatrix_kbytes(void)
 *
 * Descrip:    returns the max. number of kilobytes suggested as a limited
 *             to BaseMatrix. 
 *
 *
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_get_max_BaseMatrix_kbytes();



/* Functions that create, manipulate or act on cDNA
 *
 * Wise2_truncate_cDNA
 * Wise2_read_fasta_file_cDNA
 * Wise2_cDNA_name
 * Wise2_cDNA_length
 * Wise2_cDNA_seqchar
 * Wise2_cDNA_from_Sequence
 * Wise2_hard_link_cDNA
 * Wise2_cDNA_alloc
 * Wise2_replace_baseseq_cDNA
 * Wise2_access_baseseq_cDNA
 * Wise2_free_cDNA [destructor]
 *
 */

/* API for object cDNA */
/* Function:  Wise2_truncate_cDNA(cdna,start,stop)
 *
 * Descrip:    Truncates a cDNA sequence. Basically uses
 *             the /magic_trunc_Sequence function (of course!)
 *
 *             It does not alter cdna, rather it returns a new
 *             sequence with that truncation
 *
 *
 * Arg:        cdna         cDNA that is truncated [Wise2_cDNA *]
 * Arg:        start        Undocumented argument [int]
 * Arg:        stop         Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_truncate_cDNA( Wise2_cDNA * cdna,int start,int stop);

/* Function:  Wise2_read_fasta_file_cDNA(filename)
 *
 * Descrip:    Reads a fasta file assumming that it is cDNA. 
 *             Will complain if it is not, and return NULL.
 *
 *
 * Arg:        filename     filename to be opened and read [char *]
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_read_fasta_file_cDNA( char * filename);

/* Function:  Wise2_cDNA_name(cdna)
 *
 * Descrip:    Returns the name of the cDNA
 *
 *
 * Arg:        cdna         Undocumented argument [Wise2_cDNA *]
 *
 * Returns Undocumented return value [char *]
 *
 */
char * Wise2_cDNA_name( Wise2_cDNA * cdna);

/* Function:  Wise2_cDNA_length(cdna)
 *
 * Descrip:    Returns the length of the cDNA
 *
 *
 * Arg:        cdna         Undocumented argument [Wise2_cDNA *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_cDNA_length( Wise2_cDNA * cdna);

/* Function:  Wise2_cDNA_seqchar(cdna,pos)
 *
 * Descrip:    Returns sequence character at this position.
 *
 *
 * Arg:        cdna         cDNA [Wise2_cDNA *]
 * Arg:        pos          position in cDNA to get char [int]
 *
 * Returns Undocumented return value [char]
 *
 */
char Wise2_cDNA_seqchar( Wise2_cDNA * cdna,int pos);

/* Function:  Wise2_cDNA_from_Sequence(seq)
 *
 * Descrip:    makes a new cDNA from a Sequence. It 
 *             owns the Sequence memory, ie will attempt a /free_Sequence
 *             on the structure when /free_cDNA is called
 *
 *             If you want to give this cDNA this Sequence and
 *             forget about it, then just hand it this sequence and set
 *             seq to NULL (no need to free it). If you intend to use 
 *             the sequence object elsewhere outside of the cDNA datastructure
 *             then use cDNA_from_Sequence(/hard_link_Sequence(seq))
 *
 *
 *
 * Arg:        seq          Sequence to make cDNA from [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_cDNA_from_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_hard_link_cDNA(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_cDNA *]
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_hard_link_cDNA( Wise2_cDNA * obj);

/* Function:  Wise2_cDNA_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_cDNA_alloc();

/* Function:  Wise2_replace_baseseq_cDNA(obj,baseseq)
 *
 * Descrip:    Replace member variable baseseq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNA *]
 * Arg:        baseseq      New value of the variable [Wise2_Sequence *]
 *
 * Returns member variable baseseq [boolean]
 *
 */
boolean Wise2_replace_baseseq_cDNA( Wise2_cDNA * obj,Wise2_Sequence * baseseq);

/* Function:  Wise2_access_baseseq_cDNA(obj)
 *
 * Descrip:    Access member variable baseseq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNA *]
 *
 * Returns member variable baseseq [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_access_baseseq_cDNA( Wise2_cDNA * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_cDNA(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_cDNA *]
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_free_cDNA( Wise2_cDNA * obj);



/* Functions that create, manipulate or act on cDNADB
 *
 * Wise2_get_cDNA_from_cDNADB
 * Wise2_hard_link_cDNADB
 * Wise2_cDNADB_alloc
 * Wise2_replace_is_single_seq_cDNADB
 * Wise2_access_is_single_seq_cDNADB
 * Wise2_replace_done_forward_cDNADB
 * Wise2_access_done_forward_cDNADB
 * Wise2_replace_forward_only_cDNADB
 * Wise2_access_forward_only_cDNADB
 * Wise2_replace_forw_cDNADB
 * Wise2_access_forw_cDNADB
 * Wise2_replace_rev_cDNADB
 * Wise2_access_rev_cDNADB
 * Wise2_replace_sdb_cDNADB
 * Wise2_access_sdb_cDNADB
 * Wise2_replace_current_cDNADB
 * Wise2_access_current_cDNADB
 * Wise2_replace_cses_cDNADB
 * Wise2_access_cses_cDNADB
 * Wise2_free_cDNADB [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_new_cDNADB_from_single_seq
 * Wise2_new_cDNADB
 *

/* API for object cDNADB */
/* Function:  Wise2_get_cDNA_from_cDNADB(cdnadb,de)
 *
 * Descrip:    Gets cDNA sequence out from
 *             the cDNADB using the information stored in
 *             dataentry
 *
 *
 * Arg:        cdnadb       cDNA database [Wise2_cDNADB *]
 * Arg:        de           DataEntry information  [Wise2_DataEntry *]
 *
 * Returns Undocumented return value [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_get_cDNA_from_cDNADB( Wise2_cDNADB * cdnadb,Wise2_DataEntry * de);

/* Function:  Wise2_hard_link_cDNADB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_cDNADB *]
 *
 * Returns Undocumented return value [Wise2_cDNADB *]
 *
 */
Wise2_cDNADB * Wise2_hard_link_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_cDNADB_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_cDNADB *]
 *
 */
Wise2_cDNADB * Wise2_cDNADB_alloc();

/* Function:  Wise2_replace_is_single_seq_cDNADB(obj,is_single_seq)
 *
 * Descrip:    Replace member variable is_single_seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        is_single_seq New value of the variable [boolean]
 *
 * Returns member variable is_single_seq [boolean]
 *
 */
boolean Wise2_replace_is_single_seq_cDNADB( Wise2_cDNADB * obj,boolean is_single_seq);

/* Function:  Wise2_access_is_single_seq_cDNADB(obj)
 *
 * Descrip:    Access member variable is_single_seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable is_single_seq [boolean]
 *
 */
boolean Wise2_access_is_single_seq_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_done_forward_cDNADB(obj,done_forward)
 *
 * Descrip:    Replace member variable done_forward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        done_forward New value of the variable [boolean]
 *
 * Returns member variable done_forward [boolean]
 *
 */
boolean Wise2_replace_done_forward_cDNADB( Wise2_cDNADB * obj,boolean done_forward);

/* Function:  Wise2_access_done_forward_cDNADB(obj)
 *
 * Descrip:    Access member variable done_forward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable done_forward [boolean]
 *
 */
boolean Wise2_access_done_forward_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_forward_only_cDNADB(obj,forward_only)
 *
 * Descrip:    Replace member variable forward_only
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        forward_only New value of the variable [boolean]
 *
 * Returns member variable forward_only [boolean]
 *
 */
boolean Wise2_replace_forward_only_cDNADB( Wise2_cDNADB * obj,boolean forward_only);

/* Function:  Wise2_access_forward_only_cDNADB(obj)
 *
 * Descrip:    Access member variable forward_only
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable forward_only [boolean]
 *
 */
boolean Wise2_access_forward_only_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_forw_cDNADB(obj,forw)
 *
 * Descrip:    Replace member variable forw
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        forw         New value of the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable forw [boolean]
 *
 */
boolean Wise2_replace_forw_cDNADB( Wise2_cDNADB * obj,Wise2_ComplexSequence * forw);

/* Function:  Wise2_access_forw_cDNADB(obj)
 *
 * Descrip:    Access member variable forw
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable forw [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_access_forw_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_rev_cDNADB(obj,rev)
 *
 * Descrip:    Replace member variable rev
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        rev          New value of the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable rev [boolean]
 *
 */
boolean Wise2_replace_rev_cDNADB( Wise2_cDNADB * obj,Wise2_ComplexSequence * rev);

/* Function:  Wise2_access_rev_cDNADB(obj)
 *
 * Descrip:    Access member variable rev
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable rev [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_access_rev_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_sdb_cDNADB(obj,sdb)
 *
 * Descrip:    Replace member variable sdb
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        sdb          New value of the variable [Wise2_SequenceDB *]
 *
 * Returns member variable sdb [boolean]
 *
 */
boolean Wise2_replace_sdb_cDNADB( Wise2_cDNADB * obj,Wise2_SequenceDB * sdb);

/* Function:  Wise2_access_sdb_cDNADB(obj)
 *
 * Descrip:    Access member variable sdb
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable sdb [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_access_sdb_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_current_cDNADB(obj,current)
 *
 * Descrip:    Replace member variable current
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        current      New value of the variable [Wise2_Sequence *]
 *
 * Returns member variable current [boolean]
 *
 */
boolean Wise2_replace_current_cDNADB( Wise2_cDNADB * obj,Wise2_Sequence * current);

/* Function:  Wise2_access_current_cDNADB(obj)
 *
 * Descrip:    Access member variable current
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable current [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_access_current_cDNADB( Wise2_cDNADB * obj);

/* Function:  Wise2_replace_cses_cDNADB(obj,cses)
 *
 * Descrip:    Replace member variable cses
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 * Arg:        cses         New value of the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable cses [boolean]
 *
 */
boolean Wise2_replace_cses_cDNADB( Wise2_cDNADB * obj,Wise2_ComplexSequenceEvalSet * cses);

/* Function:  Wise2_access_cses_cDNADB(obj)
 *
 * Descrip:    Access member variable cses
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_cDNADB *]
 *
 * Returns member variable cses [Wise2_ComplexSequenceEvalSet *]
 *
 */
Wise2_ComplexSequenceEvalSet * Wise2_access_cses_cDNADB( Wise2_cDNADB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_cDNADB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_cDNADB *]
 *
 * Returns Undocumented return value [Wise2_cDNADB *]
 *
 */
Wise2_cDNADB * Wise2_free_cDNADB( Wise2_cDNADB * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_new_cDNADB_from_single_seq(seq)
 *
 * Descrip:    To make a new cDNA database
 *             from a single cDNA Sequence with a eval system
 *
 *
 * Arg:        seq          sequence which as placed into cDNADB structure. [Wise2_cDNA *]
 *
 * Returns Undocumented return value [Wise2_cDNADB *]
 *
 */
Wise2_cDNADB * Wise2_new_cDNADB_from_single_seq( Wise2_cDNA * seq);

/* Function:  Wise2_new_cDNADB(seqdb)
 *
 * Descrip:    To make a new cDNA database
 *
 *
 * Arg:        seqdb        sequence database [Wise2_SequenceDB *]
 *
 * Returns Undocumented return value [Wise2_cDNADB *]
 *
 */
Wise2_cDNADB * Wise2_new_cDNADB( Wise2_SequenceDB * seqdb);



/* Functions that create, manipulate or act on CodonTable
 *
 * Wise2_read_CodonTable_file
 * Wise2_read_CodonTable
 * Wise2_aminoacid_from_seq
 * Wise2_aminoacid_from_codon
 * Wise2_is_stop_codon
 * Wise2_is_valid_aminoacid
 * Wise2_hard_link_CodonTable
 * Wise2_CodonTable_alloc
 * Wise2_replace_name_CodonTable
 * Wise2_access_name_CodonTable
 * Wise2_free_CodonTable [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_is_non_ambiguous_codon_seq
 * Wise2_codon_from_base4_codon
 * Wise2_base4_codon_from_codon
 * Wise2_has_random_bases
 * Wise2_permute_possible_random_bases
 * Wise2_base_from_codon
 * Wise2_codon_from_seq
 * Wise2_base4_codon_from_seq
 * Wise2_char_from_base
 * Wise2_base_from_char
 * Wise2_char_complement_base
 * Wise2_complement_base
 *

/* API for object CodonTable */
/* Function:  Wise2_read_CodonTable_file(file)
 *
 * Descrip:    Opens filename, reads it as if a Ewan style
 *             codon table and closes.
 *
 *
 * Arg:        file         filename to open [char *]
 *
 * Returns A codon-table, NULL if error [Wise2_CodonTable *]
 *
 */
Wise2_CodonTable * Wise2_read_CodonTable_file( char * file);

/* Function:  Wise2_read_CodonTable(ifp)
 *
 * Descrip:    reads a codon table from a filestream in Ewan
 *             format.
 *
 *             As Ewan format is really bad and has no start/stop
 *             this will effectively read to the end of the file.
 *             Ooops.
 *
 *
 * Arg:        ifp          file input [FILE *]
 *
 * Returns Undocumented return value [Wise2_CodonTable *]
 *
 */
Wise2_CodonTable * Wise2_read_CodonTable( FILE * ifp);

/* Function:  Wise2_aminoacid_from_seq(ct,seq)
 *
 * Descrip:    Returns the amino acid for this position in the DNA sequence
 *             Takes the pointer +1 and +2 points.
 *
 *             No error checks implemented. Probably a mistake ;)
 *
 *
 * Arg:        ct           codon table [Wise2_CodonTable *]
 * Arg:        seq          pointer to DNA chars [char *]
 *
 * Returns an amino acid char (A-Z) [aa]
 *
 */
aa Wise2_aminoacid_from_seq( Wise2_CodonTable * ct,char * seq);

/* Function:  Wise2_aminoacid_from_codon(ct,c)
 *
 * Descrip:    returns amino acid for this codon number (NB codon numbers 0-125)
 *
 *
 * Arg:        ct           codon table [Wise2_CodonTable *]
 * Arg:        c            codon number [codon]
 *
 * Returns aminoacid that is this codon (X for ambiguous, * for stop) [aa]
 *
 */
aa Wise2_aminoacid_from_codon( Wise2_CodonTable * ct,codon c);

/* Function:  Wise2_is_stop_codon(c,ct)
 *
 * Descrip:    tells you whether this codon number is really a stop
 *             in this translation table
 *
 *
 * Arg:        c            codon number [codon]
 * Arg:        ct           codon table [Wise2_CodonTable *]
 *
 * Returns TRUE if is stop, FALSE otherwise [boolean]
 *
 */
boolean Wise2_is_stop_codon( codon c,Wise2_CodonTable * ct);

/* Function:  Wise2_is_valid_aminoacid(ct,c)
 *
 * Descrip:    Tells you if this letter (c) is recognised as a valid amino acid
 *             in this codon table
 *
 *
 * Arg:        ct           Codon Table [Wise2_CodonTable *]
 * Arg:        c            aminoacid [char]
 *
 * Returns TRUE if valid, FALSE if not. [boolean]
 *
 */
boolean Wise2_is_valid_aminoacid( Wise2_CodonTable * ct,char c);

/* Function:  Wise2_hard_link_CodonTable(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_CodonTable *]
 *
 * Returns Undocumented return value [Wise2_CodonTable *]
 *
 */
Wise2_CodonTable * Wise2_hard_link_CodonTable( Wise2_CodonTable * obj);

/* Function:  Wise2_CodonTable_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_CodonTable *]
 *
 */
Wise2_CodonTable * Wise2_CodonTable_alloc();

/* Function:  Wise2_replace_name_CodonTable(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_CodonTable *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_CodonTable( Wise2_CodonTable * obj,char * name);

/* Function:  Wise2_access_name_CodonTable(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_CodonTable *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_CodonTable( Wise2_CodonTable * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_CodonTable(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_CodonTable *]
 *
 * Returns Undocumented return value [Wise2_CodonTable *]
 *
 */
Wise2_CodonTable * Wise2_free_CodonTable( Wise2_CodonTable * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_is_non_ambiguous_codon_seq(seq)
 *
 * Descrip:    Tells you if this codon is a real codon
 *
 *
 * Arg:        seq          pointer to DNA sequence [char *]
 *
 * Returns TRUE if real codon, FALSE if contains N's [boolean]
 *
 */
boolean Wise2_is_non_ambiguous_codon_seq( char * seq);

/* Function:  Wise2_codon_from_base4_codon(c)
 *
 * Descrip:    maps a 0-63 codon to a 0-123 codon. Suprisingly useful.
 *
 *
 * Arg:        c            Undocumented argument [int]
 *
 * Returns Undocumented return value [codon]
 *
 */
codon Wise2_codon_from_base4_codon( int c);

/* Function:  Wise2_base4_codon_from_codon(c)
 *
 * Descrip:    maps a 0-125 codon to a 0-63 codon.
 *
 *             If ambiguous then returns 64 having issued a warning.
 *
 *
 * Arg:        c            codon 0-125 [codon]
 *
 * Returns base 4 codon (0-63) [int]
 *
 */
int Wise2_base4_codon_from_codon( codon c);

/* Function:  Wise2_has_random_bases(c)
 *
 * Descrip:    Tests to see if this codon number has any N's in it
 *
 *
 * Arg:        c            codon number 0-124 [codon]
 *
 * Returns TRUE if has N's , FALSE otherwise [boolean]
 *
 */
boolean Wise2_has_random_bases( codon c);

/* Function:  Wise2_permute_possible_random_bases(c,one,two,three)
 *
 * Descrip:    Bizarely useful function for calculating ambiguity scores.
 *
 *             This takes the codon c, and for each possible base, 
 *             if it is N, replaces it with one, two or three.
 *
 *             If the base is not N, it remains the same
 *
 *
 * Arg:        c            codon number [codon]
 * Arg:        one          base to replace first position if N [base]
 * Arg:        two          base to replace second position if N [base]
 * Arg:        three        base to replace third position if N [base]
 *
 * Returns codon number  [codon]
 *
 */
codon Wise2_permute_possible_random_bases( codon c,base one,base two,base three);

/* Function:  Wise2_base_from_codon(c,pos)
 *
 * Descrip:    Probably not the best function to use for this, but 
 *             useful. Takes a codon and with pos being 1,2,3 gives
 *             you the firt,second of third base
 *
 *
 * Arg:        c            Undocumented argument [codon]
 * Arg:        pos          Undocumented argument [int]
 *
 * Returns Undocumented return value [base]
 *
 */
base Wise2_base_from_codon( codon c,int pos);

/* Function:  Wise2_codon_from_seq(seq)
 *
 * Descrip:    takes an ASCII coded pointer to a 3 base pair
 *             sequence (it could be the part of a sequence: it only
 *             assummes that the seq points with 3 chars at pos 0,1,2 
 *             in C coordinates from seq. No NULL is required). It 
 *             ives back the codon as made from standard mapping, ie,
 *             25*base_1+5*base_2 + base3 being a number from 0-124 inc.
 *
 *
 * Arg:        seq          pointer to sequence of at least 3 chrs long. [char *]
 *
 * Returns Undocumented return value [codon]
 *
 */
codon Wise2_codon_from_seq( char * seq);

/* Function:  Wise2_base4_codon_from_seq(seq)
 *
 * Descrip:    Sometimes it is more useful to work in base64, ie, 
 *             non N. this functions does the same thing as 
 *             /codon_from_seq but produces a seq being
 *             16*base1 + 4 *base2 + base3
 *
 *
 * Arg:        seq          pointer to sequence of at least 3 chrs long [char *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_base4_codon_from_seq( char * seq);

/* Function:  Wise2_char_from_base(b)
 *
 * Descrip:    maps a base number (-04 inc) to A,T,G,C,N
 *
 *
 * Arg:        b            Undocumented argument [base]
 *
 * Returns Undocumented return value [char]
 *
 */
char Wise2_char_from_base( base b);

/* Function:  Wise2_base_from_char(c)
 *
 * Descrip:    maps a char (atcgn) to number, 
 *             case insensitive, returns BASE_N
 *             if not atcgn
 *
 *
 * Arg:        c            Undocumented argument [char]
 *
 * Returns Undocumented return value [base]
 *
 */
base Wise2_base_from_char( char c);

/* Function:  Wise2_char_complement_base(c)
 *
 * Descrip:    the char equivalent of /complement_base.
 *             this gives the complement in char of a base
 *             in char. Does not check for non ATGCN
 *
 *
 * Arg:        c            Undocumented argument [char]
 *
 * Returns Undocumented return value [char]
 *
 */
char Wise2_char_complement_base( char c);

/* Function:  Wise2_complement_base(b)
 *
 * Descrip:    gives back the complement as a number
 *             ofthe base (given as a number)
 *
 *
 * Arg:        b            Undocumented argument [base]
 *
 * Returns Undocumented return value [base]
 *
 */
base Wise2_complement_base( base b);



/* Functions that create, manipulate or act on CodonMapper
 *
 * Wise2_sprinkle_errors_over_CodonMapper
 * Wise2_hard_link_CodonMapper
 * Wise2_CodonMapper_alloc
 * Wise2_replace_ct_CodonMapper
 * Wise2_access_ct_CodonMapper
 * Wise2_free_CodonMapper [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_flat_CodonMapper
 *

/* API for object CodonMapper */
/* Function:  Wise2_sprinkle_errors_over_CodonMapper(cm,error)
 *
 * Descrip:    Takes a codon mapper and assummes that the majority of errors
 *             are due to a single base change in the codon at probability error.
 *             Therefore, for each codon it adds error * prob(codon) * 0.25 to each 
 *             other codon one base away, taking away therefore the result.
 *
 *
 *
 * Arg:        cm           CodonMapper to be sprinkled [Wise2_CodonMapper *]
 * Arg:        error        substitution error rate [double]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_sprinkle_errors_over_CodonMapper( Wise2_CodonMapper * cm,double error);

/* Function:  Wise2_hard_link_CodonMapper(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_CodonMapper *]
 *
 * Returns Undocumented return value [Wise2_CodonMapper *]
 *
 */
Wise2_CodonMapper * Wise2_hard_link_CodonMapper( Wise2_CodonMapper * obj);

/* Function:  Wise2_CodonMapper_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_CodonMapper *]
 *
 */
Wise2_CodonMapper * Wise2_CodonMapper_alloc();

/* Function:  Wise2_replace_ct_CodonMapper(obj,ct)
 *
 * Descrip:    Replace member variable ct
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_CodonMapper *]
 * Arg:        ct           New value of the variable [Wise2_CodonTable *]
 *
 * Returns member variable ct [boolean]
 *
 */
boolean Wise2_replace_ct_CodonMapper( Wise2_CodonMapper * obj,Wise2_CodonTable * ct);

/* Function:  Wise2_access_ct_CodonMapper(obj)
 *
 * Descrip:    Access member variable ct
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_CodonMapper *]
 *
 * Returns member variable ct [Wise2_CodonTable *]
 *
 */
Wise2_CodonTable * Wise2_access_ct_CodonMapper( Wise2_CodonMapper * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_CodonMapper(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_CodonMapper *]
 *
 * Returns Undocumented return value [Wise2_CodonMapper *]
 *
 */
Wise2_CodonMapper * Wise2_free_CodonMapper( Wise2_CodonMapper * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_flat_CodonMapper(ct)
 *
 * Descrip:    Makes a CodonMapper with no codon bias
 *             or error possiblities from codon table
 *
 *
 *
 * Arg:        ct           Codon Table giving codon->aa info [Wise2_CodonTable *]
 *
 * Returns Undocumented return value [Wise2_CodonMapper *]
 *
 */
Wise2_CodonMapper * Wise2_flat_CodonMapper( Wise2_CodonTable * ct);



/* Functions that create, manipulate or act on ComplexSequence
 *
 * Wise2_hard_link_ComplexSequence
 * Wise2_ComplexSequence_alloc
 * Wise2_replace_type_ComplexSequence
 * Wise2_access_type_ComplexSequence
 * Wise2_replace_seq_ComplexSequence
 * Wise2_access_seq_ComplexSequence
 * Wise2_free_ComplexSequence [destructor]
 *
 */



/* Functions that create, manipulate or act on ComplexSequenceEvalSet
 *
 * Wise2_hard_link_ComplexSequenceEvalSet
 * Wise2_ComplexSequenceEvalSet_alloc_std
 * Wise2_replace_type_ComplexSequenceEvalSet
 * Wise2_access_type_ComplexSequenceEvalSet
 * Wise2_replace_has_been_prepared_ComplexSequenceEvalSet
 * Wise2_access_has_been_prepared_ComplexSequenceEvalSet
 * Wise2_replace_left_window_ComplexSequenceEvalSet
 * Wise2_access_left_window_ComplexSequenceEvalSet
 * Wise2_replace_right_window_ComplexSequenceEvalSet
 * Wise2_access_right_window_ComplexSequenceEvalSet
 * Wise2_replace_left_lookback_ComplexSequenceEvalSet
 * Wise2_access_left_lookback_ComplexSequenceEvalSet
 * Wise2_free_ComplexSequenceEvalSet [destructor]
 *
 */

/* API for object ComplexSequence */
/* Function:  Wise2_hard_link_ComplexSequence(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_ComplexSequence *]
 *
 * Returns Undocumented return value [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_hard_link_ComplexSequence( Wise2_ComplexSequence * obj);

/* Function:  Wise2_ComplexSequence_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_ComplexSequence_alloc();

/* Function:  Wise2_replace_type_ComplexSequence(obj,type)
 *
 * Descrip:    Replace member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequence *]
 * Arg:        type         New value of the variable [int]
 *
 * Returns member variable type [boolean]
 *
 */
boolean Wise2_replace_type_ComplexSequence( Wise2_ComplexSequence * obj,int type);

/* Function:  Wise2_access_type_ComplexSequence(obj)
 *
 * Descrip:    Access member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable type [int]
 *
 */
int Wise2_access_type_ComplexSequence( Wise2_ComplexSequence * obj);

/* Function:  Wise2_replace_seq_ComplexSequence(obj,seq)
 *
 * Descrip:    Replace member variable seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequence *]
 * Arg:        seq          New value of the variable [Wise2_Sequence *]
 *
 * Returns member variable seq [boolean]
 *
 */
boolean Wise2_replace_seq_ComplexSequence( Wise2_ComplexSequence * obj,Wise2_Sequence * seq);

/* Function:  Wise2_access_seq_ComplexSequence(obj)
 *
 * Descrip:    Access member variable seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable seq [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_access_seq_ComplexSequence( Wise2_ComplexSequence * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_ComplexSequence(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_ComplexSequence *]
 *
 * Returns Undocumented return value [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_free_ComplexSequence( Wise2_ComplexSequence * obj);

/* API for object ComplexSequenceEvalSet */
/* Function:  Wise2_hard_link_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns Undocumented return value [Wise2_ComplexSequenceEvalSet *]
 *
 */
Wise2_ComplexSequenceEvalSet * Wise2_hard_link_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);

/* Function:  Wise2_ComplexSequenceEvalSet_alloc_std(void)
 *
 * Descrip:    Equivalent to ComplexSequenceEvalSet_alloc_len(ComplexSequenceEvalSetLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_ComplexSequenceEvalSet *]
 *
 */
Wise2_ComplexSequenceEvalSet * Wise2_ComplexSequenceEvalSet_alloc_std();

/* Function:  Wise2_replace_type_ComplexSequenceEvalSet(obj,type)
 *
 * Descrip:    Replace member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 * Arg:        type         New value of the variable [int]
 *
 * Returns member variable type [boolean]
 *
 */
boolean Wise2_replace_type_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj,int type);

/* Function:  Wise2_access_type_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Access member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable type [int]
 *
 */
int Wise2_access_type_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);

/* Function:  Wise2_replace_has_been_prepared_ComplexSequenceEvalSet(obj,has_been_prepared)
 *
 * Descrip:    Replace member variable has_been_prepared
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 * Arg:        has_been_prepared New value of the variable [boolean]
 *
 * Returns member variable has_been_prepared [boolean]
 *
 */
boolean Wise2_replace_has_been_prepared_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj,boolean has_been_prepared);

/* Function:  Wise2_access_has_been_prepared_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Access member variable has_been_prepared
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable has_been_prepared [boolean]
 *
 */
boolean Wise2_access_has_been_prepared_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);

/* Function:  Wise2_replace_left_window_ComplexSequenceEvalSet(obj,left_window)
 *
 * Descrip:    Replace member variable left_window
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 * Arg:        left_window  New value of the variable [int]
 *
 * Returns member variable left_window [boolean]
 *
 */
boolean Wise2_replace_left_window_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj,int left_window);

/* Function:  Wise2_access_left_window_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Access member variable left_window
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable left_window [int]
 *
 */
int Wise2_access_left_window_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);

/* Function:  Wise2_replace_right_window_ComplexSequenceEvalSet(obj,right_window)
 *
 * Descrip:    Replace member variable right_window
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 * Arg:        right_window New value of the variable [int]
 *
 * Returns member variable right_window [boolean]
 *
 */
boolean Wise2_replace_right_window_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj,int right_window);

/* Function:  Wise2_access_right_window_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Access member variable right_window
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable right_window [int]
 *
 */
int Wise2_access_right_window_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);

/* Function:  Wise2_replace_left_lookback_ComplexSequenceEvalSet(obj,left_lookback)
 *
 * Descrip:    Replace member variable left_lookback
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 * Arg:        left_lookback New value of the variable [int]
 *
 * Returns member variable left_lookback [boolean]
 *
 */
boolean Wise2_replace_left_lookback_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj,int left_lookback);

/* Function:  Wise2_access_left_lookback_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Access member variable left_lookback
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable left_lookback [int]
 *
 */
int Wise2_access_left_lookback_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_ComplexSequenceEvalSet(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns Undocumented return value [Wise2_ComplexSequenceEvalSet *]
 *
 */
Wise2_ComplexSequenceEvalSet * Wise2_free_ComplexSequenceEvalSet( Wise2_ComplexSequenceEvalSet * obj);



/* Functions that create, manipulate or act on CompMat
 *
 * Wise2_fail_safe_CompMat_access
 * Wise2_write_Blast_CompMat
 * Wise2_read_Blast_file_CompMat
 * Wise2_read_Blast_CompMat
 * Wise2_hard_link_CompMat
 * Wise2_CompMat_alloc
 * Wise2_replace_name_CompMat
 * Wise2_access_name_CompMat
 * Wise2_free_CompMat [destructor]
 *
 */

/* API for object CompMat */
/* Function:  Wise2_fail_safe_CompMat_access(cm,aa1,aa2)
 *
 * Descrip:    gives the fail form of the macro CompMat_AAMATCH which 
 *             checks that aa1 and a2 are sensible and that cm is not NULL.
 *
 *
 * Arg:        cm           compmat object [Wise2_CompMat *]
 * Arg:        aa1          first amino acid [int]
 * Arg:        aa2          second amino acid [int]
 *
 * Returns Undocumented return value [Score]
 *
 */
Score Wise2_fail_safe_CompMat_access( Wise2_CompMat * cm,int aa1,int aa2);

/* Function:  Wise2_write_Blast_CompMat(cm,ofp)
 *
 * Descrip:    writes a protien CompMat with a standard
 *             alphabet.
 *
 *
 * Arg:        cm           CompMat object [Wise2_CompMat *]
 * Arg:        ofp          file to output [FILE *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_write_Blast_CompMat( Wise2_CompMat * cm,FILE * ofp);

/* Function:  Wise2_read_Blast_file_CompMat(filename)
 *
 * Descrip:    Opens file, reads matrix, closes file.
 *             calls /read_Blast_CompMat for the actual format
 *             reading. Uses /openfile to open the file,
 *             so will open from config files.
 *
 *
 * Arg:        filename     Undocumented argument [char *]
 *
 * Returns Undocumented return value [Wise2_CompMat *]
 *
 */
Wise2_CompMat * Wise2_read_Blast_file_CompMat( char * filename);

/* Function:  Wise2_read_Blast_CompMat(ifp)
 *
 * Descrip:    reads a BLAST format matrix and
 *             allocates a new ComMat structure.
 *
 *
 * Arg:        ifp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [Wise2_CompMat *]
 *
 */
Wise2_CompMat * Wise2_read_Blast_CompMat( FILE * ifp);

/* Function:  Wise2_hard_link_CompMat(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_CompMat *]
 *
 * Returns Undocumented return value [Wise2_CompMat *]
 *
 */
Wise2_CompMat * Wise2_hard_link_CompMat( Wise2_CompMat * obj);

/* Function:  Wise2_CompMat_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_CompMat *]
 *
 */
Wise2_CompMat * Wise2_CompMat_alloc();

/* Function:  Wise2_replace_name_CompMat(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_CompMat *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_CompMat( Wise2_CompMat * obj,char * name);

/* Function:  Wise2_access_name_CompMat(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_CompMat *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_CompMat( Wise2_CompMat * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_CompMat(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_CompMat *]
 *
 * Returns Undocumented return value [Wise2_CompMat *]
 *
 */
Wise2_CompMat * Wise2_free_CompMat( Wise2_CompMat * obj);



/* Functions that create, manipulate or act on DBSearchImpl
 *
 * Wise2_impl_string_DBSearchImpl
 * Wise2_hard_link_DBSearchImpl
 * Wise2_DBSearchImpl_alloc
 * Wise2_replace_type_DBSearchImpl
 * Wise2_access_type_DBSearchImpl
 * Wise2_replace_trace_level_DBSearchImpl
 * Wise2_access_trace_level_DBSearchImpl
 * Wise2_replace_trace_file_DBSearchImpl
 * Wise2_access_trace_file_DBSearchImpl
 * Wise2_replace_suggest_thread_no_DBSearchImpl
 * Wise2_access_suggest_thread_no_DBSearchImpl
 * Wise2_replace_search_routine_DBSearchImpl
 * Wise2_access_search_routine_DBSearchImpl
 * Wise2_free_DBSearchImpl [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_new_pthread_DBSearchImpl
 * Wise2_new_serial_DBSearchImpl
 *

/* API for object DBSearchImpl */
/* Function:  Wise2_impl_string_DBSearchImpl(dbsi)
 *
 * Descrip:    Gets a static text string out of the
 *             search implementation 
 *
 *
 * Arg:        dbsi         Undocumented argument [Wise2_DBSearchImpl *]
 *
 * Returns string of the search implementation [char *]
 *
 */
char * Wise2_impl_string_DBSearchImpl( Wise2_DBSearchImpl * dbsi);

/* Function:  Wise2_hard_link_DBSearchImpl(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DBSearchImpl *]
 *
 * Returns Undocumented return value [Wise2_DBSearchImpl *]
 *
 */
Wise2_DBSearchImpl * Wise2_hard_link_DBSearchImpl( Wise2_DBSearchImpl * obj);

/* Function:  Wise2_DBSearchImpl_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DBSearchImpl *]
 *
 */
Wise2_DBSearchImpl * Wise2_DBSearchImpl_alloc();

/* Function:  Wise2_replace_type_DBSearchImpl(obj,type)
 *
 * Descrip:    Replace member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 * Arg:        type         New value of the variable [int]
 *
 * Returns member variable type [boolean]
 *
 */
boolean Wise2_replace_type_DBSearchImpl( Wise2_DBSearchImpl * obj,int type);

/* Function:  Wise2_access_type_DBSearchImpl(obj)
 *
 * Descrip:    Access member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 *
 * Returns member variable type [int]
 *
 */
int Wise2_access_type_DBSearchImpl( Wise2_DBSearchImpl * obj);

/* Function:  Wise2_replace_trace_level_DBSearchImpl(obj,trace_level)
 *
 * Descrip:    Replace member variable trace_level
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 * Arg:        trace_level  New value of the variable [int]
 *
 * Returns member variable trace_level [boolean]
 *
 */
boolean Wise2_replace_trace_level_DBSearchImpl( Wise2_DBSearchImpl * obj,int trace_level);

/* Function:  Wise2_access_trace_level_DBSearchImpl(obj)
 *
 * Descrip:    Access member variable trace_level
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 *
 * Returns member variable trace_level [int]
 *
 */
int Wise2_access_trace_level_DBSearchImpl( Wise2_DBSearchImpl * obj);

/* Function:  Wise2_replace_trace_file_DBSearchImpl(obj,trace_file)
 *
 * Descrip:    Replace member variable trace_file
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 * Arg:        trace_file   New value of the variable [FILE *]
 *
 * Returns member variable trace_file [boolean]
 *
 */
boolean Wise2_replace_trace_file_DBSearchImpl( Wise2_DBSearchImpl * obj,FILE * trace_file);

/* Function:  Wise2_access_trace_file_DBSearchImpl(obj)
 *
 * Descrip:    Access member variable trace_file
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 *
 * Returns member variable trace_file [FILE *]
 *
 */
FILE * Wise2_access_trace_file_DBSearchImpl( Wise2_DBSearchImpl * obj);

/* Function:  Wise2_replace_suggest_thread_no_DBSearchImpl(obj,suggest_thread_no)
 *
 * Descrip:    Replace member variable suggest_thread_no
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 * Arg:        suggest_thread_no New value of the variable [int]
 *
 * Returns member variable suggest_thread_no [boolean]
 *
 */
boolean Wise2_replace_suggest_thread_no_DBSearchImpl( Wise2_DBSearchImpl * obj,int suggest_thread_no);

/* Function:  Wise2_access_suggest_thread_no_DBSearchImpl(obj)
 *
 * Descrip:    Access member variable suggest_thread_no
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 *
 * Returns member variable suggest_thread_no [int]
 *
 */
int Wise2_access_suggest_thread_no_DBSearchImpl( Wise2_DBSearchImpl * obj);

/* Function:  Wise2_replace_search_routine_DBSearchImpl(obj,search_routine)
 *
 * Descrip:    Replace member variable search_routine
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 * Arg:        search_routine New value of the variable [int]
 *
 * Returns member variable search_routine [boolean]
 *
 */
boolean Wise2_replace_search_routine_DBSearchImpl( Wise2_DBSearchImpl * obj,int search_routine);

/* Function:  Wise2_access_search_routine_DBSearchImpl(obj)
 *
 * Descrip:    Access member variable search_routine
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DBSearchImpl *]
 *
 * Returns member variable search_routine [int]
 *
 */
int Wise2_access_search_routine_DBSearchImpl( Wise2_DBSearchImpl * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DBSearchImpl(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_DBSearchImpl *]
 *
 * Returns Undocumented return value [Wise2_DBSearchImpl *]
 *
 */
Wise2_DBSearchImpl * Wise2_free_DBSearchImpl( Wise2_DBSearchImpl * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_new_pthread_DBSearchImpl(void)
 *
 * Descrip:    Makes a new pthreaded DBSearchImpl
 *
 *             For use mainly for api's who don't want
 *             to initalize the object from the command
 *             line
 *
 *
 *
 * Returns Undocumented return value [Wise2_DBSearchImpl *]
 *
 */
Wise2_DBSearchImpl * Wise2_new_pthread_DBSearchImpl();

/* Function:  Wise2_new_serial_DBSearchImpl(void)
 *
 * Descrip:    Makes a new serial DBSearchImpl
 *
 *             For use mainly for api's who don't want
 *             to initalize the object from the command
 *             line
 *
 *
 *
 * Returns Undocumented return value [Wise2_DBSearchImpl *]
 *
 */
Wise2_DBSearchImpl * Wise2_new_serial_DBSearchImpl();



/* Functions that create, manipulate or act on DnaMatrix
 *
 * Wise2_hard_link_DnaMatrix
 * Wise2_DnaMatrix_alloc
 * Wise2_free_DnaMatrix [destructor]
 *
 */



/* Functions that create, manipulate or act on DnaProbMatrix
 *
 * Wise2_flat_null_DnaProbMatrix
 * Wise2_hard_link_DnaProbMatrix
 * Wise2_DnaProbMatrix_alloc
 * Wise2_free_DnaProbMatrix [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_identity_DnaMatrix
 * Wise2_DnaProbMatrix_from_match
 * Wise2_DnaMatrix_from_DnaProbMatrix
 *

/* API for object DnaMatrix */
/* Function:  Wise2_hard_link_DnaMatrix(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DnaMatrix *]
 *
 * Returns Undocumented return value [Wise2_DnaMatrix *]
 *
 */
Wise2_DnaMatrix * Wise2_hard_link_DnaMatrix( Wise2_DnaMatrix * obj);

/* Function:  Wise2_DnaMatrix_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DnaMatrix *]
 *
 */
Wise2_DnaMatrix * Wise2_DnaMatrix_alloc();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DnaMatrix(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_DnaMatrix *]
 *
 * Returns Undocumented return value [Wise2_DnaMatrix *]
 *
 */
Wise2_DnaMatrix * Wise2_free_DnaMatrix( Wise2_DnaMatrix * obj);

/* API for object DnaProbMatrix */
/* Function:  Wise2_flat_null_DnaProbMatrix(dpm)
 *
 * Descrip:    makes a odds of dpm via a 0.25 factor 
 *             into each base.
 *
 *
 * Arg:        dpm          Undocumented argument [Wise2_DnaProbMatrix *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_flat_null_DnaProbMatrix( Wise2_DnaProbMatrix * dpm);

/* Function:  Wise2_hard_link_DnaProbMatrix(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DnaProbMatrix *]
 *
 * Returns Undocumented return value [Wise2_DnaProbMatrix *]
 *
 */
Wise2_DnaProbMatrix * Wise2_hard_link_DnaProbMatrix( Wise2_DnaProbMatrix * obj);

/* Function:  Wise2_DnaProbMatrix_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DnaProbMatrix *]
 *
 */
Wise2_DnaProbMatrix * Wise2_DnaProbMatrix_alloc();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DnaProbMatrix(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_DnaProbMatrix *]
 *
 * Returns Undocumented return value [Wise2_DnaProbMatrix *]
 *
 */
Wise2_DnaProbMatrix * Wise2_free_DnaProbMatrix( Wise2_DnaProbMatrix * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_identity_DnaMatrix(id_score,mismatch)
 *
 * Descrip:    makes an idenity matrix wth id_score on the leading
 *             diagonal and mismatch elsewhere.
 *
 *
 *
 * Arg:        id_score     score of idenities [Score]
 * Arg:        mismatch     score of mistmatches [Score]
 *
 * Returns Undocumented return value [Wise2_DnaMatrix *]
 *
 */
Wise2_DnaMatrix * Wise2_identity_DnaMatrix( Score id_score,Score mismatch);

/* Function:  Wise2_DnaProbMatrix_from_match(match,nmask_type)
 *
 * Descrip:    Makes a probability matrix from simple match/mismatch 
 *             probabilities.
 *
 *
 *
 * Arg:        match        Undocumented argument [Probability]
 * Arg:        nmask_type   Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_DnaProbMatrix *]
 *
 */
Wise2_DnaProbMatrix * Wise2_DnaProbMatrix_from_match( Probability match,int nmask_type);

/* Function:  Wise2_DnaMatrix_from_DnaProbMatrix(dpm)
 *
 * Descrip:    Maps probabilities to scores
 *
 *
 * Arg:        dpm          Undocumented argument [Wise2_DnaProbMatrix *]
 *
 * Returns Undocumented return value [Wise2_DnaMatrix *]
 *
 */
Wise2_DnaMatrix * Wise2_DnaMatrix_from_DnaProbMatrix( Wise2_DnaProbMatrix * dpm);



/* Functions that create, manipulate or act on Gene
 *
 * Wise2_get_Genomic_from_Gene
 * Wise2_show_pretty_Gene
 * Wise2_hard_link_Gene
 * Wise2_Gene_alloc_std
 * Wise2_replace_start_Gene
 * Wise2_access_start_Gene
 * Wise2_replace_end_Gene
 * Wise2_access_end_Gene
 * Wise2_replace_parent_Gene
 * Wise2_access_parent_Gene
 * Wise2_replace_genomic_Gene
 * Wise2_access_genomic_Gene
 * Wise2_access_transcript_Gene
 * Wise2_length_transcript_Gene
 * Wise2_flush_Gene
 * Wise2_add_Gene
 * Wise2_replace_name_Gene
 * Wise2_access_name_Gene
 * Wise2_replace_bits_Gene
 * Wise2_access_bits_Gene
 * Wise2_replace_seqname_Gene
 * Wise2_access_seqname_Gene
 * Wise2_replace_ispseudo_Gene
 * Wise2_access_ispseudo_Gene
 * Wise2_free_Gene [destructor]
 *
 */

/* API for object Gene */
/* Function:  Wise2_get_Genomic_from_Gene(gene)
 *
 * Descrip:    Gives back a Genomic sequence type
 *             from a gene.
 *
 *
 * Arg:        gene         gene to get Genomic from [Wise2_Gene *]
 *
 * Returns Genomic DNA data structure [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_get_Genomic_from_Gene( Wise2_Gene * gene);

/* Function:  Wise2_show_pretty_Gene(ge,show_supporting,ofp)
 *
 * Descrip:    Shows a gene in the biologically accepted form
 *
 *
 * Arg:        ge           Undocumented argument [Wise2_Gene *]
 * Arg:        show_supporting Undocumented argument [boolean]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_pretty_Gene( Wise2_Gene * ge,boolean show_supporting,FILE * ofp);

/* Function:  Wise2_hard_link_Gene(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Gene *]
 *
 * Returns Undocumented return value [Wise2_Gene *]
 *
 */
Wise2_Gene * Wise2_hard_link_Gene( Wise2_Gene * obj);

/* Function:  Wise2_Gene_alloc_std(void)
 *
 * Descrip:    Equivalent to Gene_alloc_len(GeneLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_Gene *]
 *
 */
Wise2_Gene * Wise2_Gene_alloc_std();

/* Function:  Wise2_replace_start_Gene(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        start        New value of the variable [int]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_Gene( Wise2_Gene * obj,int start);

/* Function:  Wise2_access_start_Gene(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable start [int]
 *
 */
int Wise2_access_start_Gene( Wise2_Gene * obj);

/* Function:  Wise2_replace_end_Gene(obj,end)
 *
 * Descrip:    Replace member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        end          New value of the variable [int]
 *
 * Returns member variable end [boolean]
 *
 */
boolean Wise2_replace_end_Gene( Wise2_Gene * obj,int end);

/* Function:  Wise2_access_end_Gene(obj)
 *
 * Descrip:    Access member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable end [int]
 *
 */
int Wise2_access_end_Gene( Wise2_Gene * obj);

/* Function:  Wise2_replace_parent_Gene(obj,parent)
 *
 * Descrip:    Replace member variable parent
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        parent       New value of the variable [Wise2_GenomicRegion *]
 *
 * Returns member variable parent [boolean]
 *
 */
boolean Wise2_replace_parent_Gene( Wise2_Gene * obj,Wise2_GenomicRegion * parent);

/* Function:  Wise2_access_parent_Gene(obj)
 *
 * Descrip:    Access member variable parent
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable parent [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_access_parent_Gene( Wise2_Gene * obj);

/* Function:  Wise2_replace_genomic_Gene(obj,genomic)
 *
 * Descrip:    Replace member variable genomic
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        genomic      New value of the variable [Wise2_Genomic *]
 *
 * Returns member variable genomic [boolean]
 *
 */
boolean Wise2_replace_genomic_Gene( Wise2_Gene * obj,Wise2_Genomic * genomic);

/* Function:  Wise2_access_genomic_Gene(obj)
 *
 * Descrip:    Access member variable genomic
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable genomic [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_access_genomic_Gene( Wise2_Gene * obj);

/* Function:  Wise2_access_transcript_Gene(obj,i)
 *
 * Descrip:    Access members stored in the transcript list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Gene *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_Transcript *]
 *
 */
Wise2_Transcript * Wise2_access_transcript_Gene( Wise2_Gene * obj,int i);

/* Function:  Wise2_length_transcript_Gene(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Gene *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_transcript_Gene( Wise2_Gene * obj);

/* Function:  Wise2_flush_Gene(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_Gene *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_Gene( Wise2_Gene * obj);

/* Function:  Wise2_add_Gene(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_Gene *]
 * Arg:        add          Object to add to the list [Wise2_Transcript *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_Gene( Wise2_Gene * obj,Wise2_Transcript * add);

/* Function:  Wise2_replace_name_Gene(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_Gene( Wise2_Gene * obj,char * name);

/* Function:  Wise2_access_name_Gene(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_Gene( Wise2_Gene * obj);

/* Function:  Wise2_replace_bits_Gene(obj,bits)
 *
 * Descrip:    Replace member variable bits
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        bits         New value of the variable [double]
 *
 * Returns member variable bits [boolean]
 *
 */
boolean Wise2_replace_bits_Gene( Wise2_Gene * obj,double bits);

/* Function:  Wise2_access_bits_Gene(obj)
 *
 * Descrip:    Access member variable bits
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable bits [double]
 *
 */
double Wise2_access_bits_Gene( Wise2_Gene * obj);

/* Function:  Wise2_replace_seqname_Gene(obj,seqname)
 *
 * Descrip:    Replace member variable seqname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        seqname      New value of the variable [char *]
 *
 * Returns member variable seqname [boolean]
 *
 */
boolean Wise2_replace_seqname_Gene( Wise2_Gene * obj,char * seqname);

/* Function:  Wise2_access_seqname_Gene(obj)
 *
 * Descrip:    Access member variable seqname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable seqname [char *]
 *
 */
char * Wise2_access_seqname_Gene( Wise2_Gene * obj);

/* Function:  Wise2_replace_ispseudo_Gene(obj,ispseudo)
 *
 * Descrip:    Replace member variable ispseudo
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 * Arg:        ispseudo     New value of the variable [boolean]
 *
 * Returns member variable ispseudo [boolean]
 *
 */
boolean Wise2_replace_ispseudo_Gene( Wise2_Gene * obj,boolean ispseudo);

/* Function:  Wise2_access_ispseudo_Gene(obj)
 *
 * Descrip:    Access member variable ispseudo
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Gene *]
 *
 * Returns member variable ispseudo [boolean]
 *
 */
boolean Wise2_access_ispseudo_Gene( Wise2_Gene * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Gene(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Gene *]
 *
 * Returns Undocumented return value [Wise2_Gene *]
 *
 */
Wise2_Gene * Wise2_free_Gene( Wise2_Gene * obj);



/* Functions that create, manipulate or act on Genomic
 *
 * Wise2_truncate_Genomic
 * Wise2_Genomic_name
 * Wise2_Genomic_length
 * Wise2_Genomic_seqchar
 * Wise2_show_Genomic
 * Wise2_hard_link_Genomic
 * Wise2_Genomic_alloc_std
 * Wise2_replace_baseseq_Genomic
 * Wise2_access_baseseq_Genomic
 * Wise2_access_repeat_Genomic
 * Wise2_length_repeat_Genomic
 * Wise2_flush_Genomic
 * Wise2_add_Genomic
 * Wise2_free_Genomic [destructor]
 *
 */



/* Functions that create, manipulate or act on GenomicRepeat
 *
 * Wise2_hard_link_GenomicRepeat
 * Wise2_GenomicRepeat_alloc
 * Wise2_replace_start_GenomicRepeat
 * Wise2_access_start_GenomicRepeat
 * Wise2_replace_end_GenomicRepeat
 * Wise2_access_end_GenomicRepeat
 * Wise2_replace_type_GenomicRepeat
 * Wise2_access_type_GenomicRepeat
 * Wise2_free_GenomicRepeat [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_read_fasta_file_Genomic
 * Wise2_read_fasta_Genomic
 * Wise2_Genomic_from_Sequence_Nheuristic
 * Wise2_Genomic_from_Sequence
 *

/* API for object Genomic */
/* Function:  Wise2_truncate_Genomic(gen,start,stop)
 *
 * Descrip:    Truncates a Genomic sequence. Basically uses
 *             the /magic_trunc_Sequence function (of course!)
 *
 *             It does not alter gen, rather it returns a new
 *             sequence with that truncation
 *
 *             Handles repeat information correctly.
 *
 *
 * Arg:        gen          Genomic that is truncated [Wise2_Genomic *]
 * Arg:        start        Undocumented argument [int]
 * Arg:        stop         Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_truncate_Genomic( Wise2_Genomic * gen,int start,int stop);

/* Function:  Wise2_Genomic_name(gen)
 *
 * Descrip:    Returns the name of the Genomic
 *
 *
 * Arg:        gen          Undocumented argument [Wise2_Genomic *]
 *
 * Returns Undocumented return value [char *]
 *
 */
char * Wise2_Genomic_name( Wise2_Genomic * gen);

/* Function:  Wise2_Genomic_length(gen)
 *
 * Descrip:    Returns the length of the Genomic
 *
 *
 * Arg:        gen          Undocumented argument [Wise2_Genomic *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_Genomic_length( Wise2_Genomic * gen);

/* Function:  Wise2_Genomic_seqchar(gen,pos)
 *
 * Descrip:    Returns sequence character at this position.
 *
 *
 * Arg:        gen          Genomic [Wise2_Genomic *]
 * Arg:        pos          position in Genomic to get char [int]
 *
 * Returns Undocumented return value [char]
 *
 */
char Wise2_Genomic_seqchar( Wise2_Genomic * gen,int pos);

/* Function:  Wise2_show_Genomic(gen,ofp)
 *
 * Descrip:    For debugging
 *
 *
 * Arg:        gen          Undocumented argument [Wise2_Genomic *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_Genomic( Wise2_Genomic * gen,FILE * ofp);

/* Function:  Wise2_hard_link_Genomic(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Genomic *]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_hard_link_Genomic( Wise2_Genomic * obj);

/* Function:  Wise2_Genomic_alloc_std(void)
 *
 * Descrip:    Equivalent to Genomic_alloc_len(GenomicLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_Genomic_alloc_std();

/* Function:  Wise2_replace_baseseq_Genomic(obj,baseseq)
 *
 * Descrip:    Replace member variable baseseq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Genomic *]
 * Arg:        baseseq      New value of the variable [Wise2_Sequence *]
 *
 * Returns member variable baseseq [boolean]
 *
 */
boolean Wise2_replace_baseseq_Genomic( Wise2_Genomic * obj,Wise2_Sequence * baseseq);

/* Function:  Wise2_access_baseseq_Genomic(obj)
 *
 * Descrip:    Access member variable baseseq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Genomic *]
 *
 * Returns member variable baseseq [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_access_baseseq_Genomic( Wise2_Genomic * obj);

/* Function:  Wise2_access_repeat_Genomic(obj,i)
 *
 * Descrip:    Access members stored in the repeat list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Genomic *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_GenomicRepeat *]
 *
 */
Wise2_GenomicRepeat * Wise2_access_repeat_Genomic( Wise2_Genomic * obj,int i);

/* Function:  Wise2_length_repeat_Genomic(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Genomic *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_repeat_Genomic( Wise2_Genomic * obj);

/* Function:  Wise2_flush_Genomic(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_Genomic *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_Genomic( Wise2_Genomic * obj);

/* Function:  Wise2_add_Genomic(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_Genomic *]
 * Arg:        add          Object to add to the list [Wise2_GenomicRepeat *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_Genomic( Wise2_Genomic * obj,Wise2_GenomicRepeat * add);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Genomic(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Genomic *]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_free_Genomic( Wise2_Genomic * obj);

/* API for object GenomicRepeat */
/* Function:  Wise2_hard_link_GenomicRepeat(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GenomicRepeat *]
 *
 * Returns Undocumented return value [Wise2_GenomicRepeat *]
 *
 */
Wise2_GenomicRepeat * Wise2_hard_link_GenomicRepeat( Wise2_GenomicRepeat * obj);

/* Function:  Wise2_GenomicRepeat_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_GenomicRepeat *]
 *
 */
Wise2_GenomicRepeat * Wise2_GenomicRepeat_alloc();

/* Function:  Wise2_replace_start_GenomicRepeat(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRepeat *]
 * Arg:        start        New value of the variable [int]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_GenomicRepeat( Wise2_GenomicRepeat * obj,int start);

/* Function:  Wise2_access_start_GenomicRepeat(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRepeat *]
 *
 * Returns member variable start [int]
 *
 */
int Wise2_access_start_GenomicRepeat( Wise2_GenomicRepeat * obj);

/* Function:  Wise2_replace_end_GenomicRepeat(obj,end)
 *
 * Descrip:    Replace member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRepeat *]
 * Arg:        end          New value of the variable [int]
 *
 * Returns member variable end [boolean]
 *
 */
boolean Wise2_replace_end_GenomicRepeat( Wise2_GenomicRepeat * obj,int end);

/* Function:  Wise2_access_end_GenomicRepeat(obj)
 *
 * Descrip:    Access member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRepeat *]
 *
 * Returns member variable end [int]
 *
 */
int Wise2_access_end_GenomicRepeat( Wise2_GenomicRepeat * obj);

/* Function:  Wise2_replace_type_GenomicRepeat(obj,type)
 *
 * Descrip:    Replace member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRepeat *]
 * Arg:        type         New value of the variable [char *]
 *
 * Returns member variable type [boolean]
 *
 */
boolean Wise2_replace_type_GenomicRepeat( Wise2_GenomicRepeat * obj,char * type);

/* Function:  Wise2_access_type_GenomicRepeat(obj)
 *
 * Descrip:    Access member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRepeat *]
 *
 * Returns member variable type [char *]
 *
 */
char * Wise2_access_type_GenomicRepeat( Wise2_GenomicRepeat * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GenomicRepeat(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GenomicRepeat *]
 *
 * Returns Undocumented return value [Wise2_GenomicRepeat *]
 *
 */
Wise2_GenomicRepeat * Wise2_free_GenomicRepeat( Wise2_GenomicRepeat * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_read_fasta_file_Genomic(filename,length_of_N)
 *
 * Descrip:    Reads a fasta file assumming that it is Genomic. 
 *             Will complain if it is not, and return NULL.
 *
 *
 * Arg:        filename     filename to be opened and read [char *]
 * Arg:        length_of_N  length of N to be considered repeat. -1 means none [int]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_read_fasta_file_Genomic( char * filename,int length_of_N);

/* Function:  Wise2_read_fasta_Genomic(ifp,length_of_N)
 *
 * Descrip:    Reads a fasta file assumming that it is Genomic. 
 *             Will complain if it is not, and return NULL.
 *
 *
 * Arg:        ifp          file point to be read from [FILE *]
 * Arg:        length_of_N  length of N to be considered repeat. -1 means none [int]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_read_fasta_Genomic( FILE * ifp,int length_of_N);

/* Function:  Wise2_Genomic_from_Sequence_Nheuristic(seq,length_of_N)
 *
 * Descrip:    makes a new genomic from a Sequence, but
 *             assummes that all the N runs greater than
 *             a certain level are actually repeats.
 *
 *
 * Arg:        seq          Undocumented argument [Wise2_Sequence *]
 * Arg:        length_of_N  Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_Genomic_from_Sequence_Nheuristic( Wise2_Sequence * seq,int length_of_N);

/* Function:  Wise2_Genomic_from_Sequence(seq)
 *
 * Descrip:    makes a new genomic from a Sequence. It 
 *             owns the Sequence memory, ie will attempt a /free_Sequence
 *             on the structure when /free_Genomic is called
 *
 *             If you want to give this genomic this Sequence and
 *             forget about it, then just hand it this sequence and set
 *             seq to NULL (no need to free it). If you intend to use 
 *             the sequence object elsewhere outside of the Genomic datastructure
 *             then use Genomic_from_Sequence(/hard_link_Sequence(seq))
 *
 *             This is part of a strict typing system, and therefore
 *             is going to convert all non ATGCNs to Ns. You will lose
 *             information here.
 *
 *
 * Arg:        seq          Sequence to make genomic from [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_Genomic_from_Sequence( Wise2_Sequence * seq);



/* Functions that create, manipulate or act on GenomicDB
 *
 * Wise2_get_Genomic_from_GenomicDB
 * Wise2_hard_link_GenomicDB
 * Wise2_GenomicDB_alloc
 * Wise2_replace_is_single_seq_GenomicDB
 * Wise2_access_is_single_seq_GenomicDB
 * Wise2_replace_done_forward_GenomicDB
 * Wise2_access_done_forward_GenomicDB
 * Wise2_replace_forw_GenomicDB
 * Wise2_access_forw_GenomicDB
 * Wise2_replace_rev_GenomicDB
 * Wise2_access_rev_GenomicDB
 * Wise2_replace_sdb_GenomicDB
 * Wise2_access_sdb_GenomicDB
 * Wise2_replace_current_GenomicDB
 * Wise2_access_current_GenomicDB
 * Wise2_replace_cses_GenomicDB
 * Wise2_access_cses_GenomicDB
 * Wise2_free_GenomicDB [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_new_GenomicDB_from_single_seq
 * Wise2_new_GenomicDB
 *

/* API for object GenomicDB */
/* Function:  Wise2_get_Genomic_from_GenomicDB(gendb,de)
 *
 * Descrip:    Gets Genomic sequence out from
 *             the GenomicDB using the information stored in
 *             dataentry
 *
 *
 * Arg:        gendb        Undocumented argument [Wise2_GenomicDB *]
 * Arg:        de           Undocumented argument [Wise2_DataEntry *]
 *
 * Returns Undocumented return value [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_get_Genomic_from_GenomicDB( Wise2_GenomicDB * gendb,Wise2_DataEntry * de);

/* Function:  Wise2_hard_link_GenomicDB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GenomicDB *]
 *
 * Returns Undocumented return value [Wise2_GenomicDB *]
 *
 */
Wise2_GenomicDB * Wise2_hard_link_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_GenomicDB_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_GenomicDB *]
 *
 */
Wise2_GenomicDB * Wise2_GenomicDB_alloc();

/* Function:  Wise2_replace_is_single_seq_GenomicDB(obj,is_single_seq)
 *
 * Descrip:    Replace member variable is_single_seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        is_single_seq New value of the variable [boolean]
 *
 * Returns member variable is_single_seq [boolean]
 *
 */
boolean Wise2_replace_is_single_seq_GenomicDB( Wise2_GenomicDB * obj,boolean is_single_seq);

/* Function:  Wise2_access_is_single_seq_GenomicDB(obj)
 *
 * Descrip:    Access member variable is_single_seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable is_single_seq [boolean]
 *
 */
boolean Wise2_access_is_single_seq_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_replace_done_forward_GenomicDB(obj,done_forward)
 *
 * Descrip:    Replace member variable done_forward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        done_forward New value of the variable [boolean]
 *
 * Returns member variable done_forward [boolean]
 *
 */
boolean Wise2_replace_done_forward_GenomicDB( Wise2_GenomicDB * obj,boolean done_forward);

/* Function:  Wise2_access_done_forward_GenomicDB(obj)
 *
 * Descrip:    Access member variable done_forward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable done_forward [boolean]
 *
 */
boolean Wise2_access_done_forward_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_replace_forw_GenomicDB(obj,forw)
 *
 * Descrip:    Replace member variable forw
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        forw         New value of the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable forw [boolean]
 *
 */
boolean Wise2_replace_forw_GenomicDB( Wise2_GenomicDB * obj,Wise2_ComplexSequence * forw);

/* Function:  Wise2_access_forw_GenomicDB(obj)
 *
 * Descrip:    Access member variable forw
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable forw [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_access_forw_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_replace_rev_GenomicDB(obj,rev)
 *
 * Descrip:    Replace member variable rev
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        rev          New value of the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable rev [boolean]
 *
 */
boolean Wise2_replace_rev_GenomicDB( Wise2_GenomicDB * obj,Wise2_ComplexSequence * rev);

/* Function:  Wise2_access_rev_GenomicDB(obj)
 *
 * Descrip:    Access member variable rev
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable rev [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_access_rev_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_replace_sdb_GenomicDB(obj,sdb)
 *
 * Descrip:    Replace member variable sdb
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        sdb          New value of the variable [Wise2_SequenceDB *]
 *
 * Returns member variable sdb [boolean]
 *
 */
boolean Wise2_replace_sdb_GenomicDB( Wise2_GenomicDB * obj,Wise2_SequenceDB * sdb);

/* Function:  Wise2_access_sdb_GenomicDB(obj)
 *
 * Descrip:    Access member variable sdb
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable sdb [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_access_sdb_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_replace_current_GenomicDB(obj,current)
 *
 * Descrip:    Replace member variable current
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        current      New value of the variable [Wise2_Genomic *]
 *
 * Returns member variable current [boolean]
 *
 */
boolean Wise2_replace_current_GenomicDB( Wise2_GenomicDB * obj,Wise2_Genomic * current);

/* Function:  Wise2_access_current_GenomicDB(obj)
 *
 * Descrip:    Access member variable current
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable current [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_access_current_GenomicDB( Wise2_GenomicDB * obj);

/* Function:  Wise2_replace_cses_GenomicDB(obj,cses)
 *
 * Descrip:    Replace member variable cses
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 * Arg:        cses         New value of the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable cses [boolean]
 *
 */
boolean Wise2_replace_cses_GenomicDB( Wise2_GenomicDB * obj,Wise2_ComplexSequenceEvalSet * cses);

/* Function:  Wise2_access_cses_GenomicDB(obj)
 *
 * Descrip:    Access member variable cses
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicDB *]
 *
 * Returns member variable cses [Wise2_ComplexSequenceEvalSet *]
 *
 */
Wise2_ComplexSequenceEvalSet * Wise2_access_cses_GenomicDB( Wise2_GenomicDB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GenomicDB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GenomicDB *]
 *
 * Returns Undocumented return value [Wise2_GenomicDB *]
 *
 */
Wise2_GenomicDB * Wise2_free_GenomicDB( Wise2_GenomicDB * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_new_GenomicDB_from_single_seq(gen,cses,score_in_repeat_coding)
 *
 * Descrip:    To make a new genomic database
 *             from a single Genomic Sequence with a eval system
 *
 *
 * Arg:        gen          sequence which as placed into GenomicDB structure. [Wise2_Genomic *]
 * Arg:        cses         Undocumented argument [Wise2_ComplexSequenceEvalSet *]
 * Arg:        score_in_repeat_coding Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_GenomicDB *]
 *
 */
Wise2_GenomicDB * Wise2_new_GenomicDB_from_single_seq( Wise2_Genomic * gen,Wise2_ComplexSequenceEvalSet * cses,int score_in_repeat_coding);

/* Function:  Wise2_new_GenomicDB(seqdb,cses,length_of_N,repeat_in_cds_score)
 *
 * Descrip:    To make a new genomic database
 *
 *
 * Arg:        seqdb        sequence database [Wise2_SequenceDB *]
 * Arg:        cses         protein evaluation set [Wise2_ComplexSequenceEvalSet *]
 * Arg:        length_of_N  Undocumented argument [int]
 * Arg:        repeat_in_cds_score Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_GenomicDB *]
 *
 */
Wise2_GenomicDB * Wise2_new_GenomicDB( Wise2_SequenceDB * seqdb,Wise2_ComplexSequenceEvalSet * cses,int length_of_N,int repeat_in_cds_score);



/* Functions that create, manipulate or act on GenomicRegion
 *
 * Wise2_new_GenomicRegion
 * Wise2_read_EMBL_GenomicRegion_file
 * Wise2_read_EMBL_GenomicRegion
 * Wise2_add_Gene_to_GenomicRegion
 * Wise2_show_ace_GenomicRegion
 * Wise2_show_pretty_GenomicRegion
 * Wise2_write_Diana_FT_GenomicRegion
 * Wise2_write_Embl_FT_GenomicRegion
 * Wise2_hard_link_GenomicRegion
 * Wise2_GenomicRegion_alloc_std
 * Wise2_access_gene_GenomicRegion
 * Wise2_length_gene_GenomicRegion
 * Wise2_flush_GenomicRegion
 * Wise2_add_GenomicRegion
 * Wise2_replace_genomic_GenomicRegion
 * Wise2_access_genomic_GenomicRegion
 * Wise2_free_GenomicRegion [destructor]
 *
 */

/* API for object GenomicRegion */
/* Function:  Wise2_new_GenomicRegion(gen)
 *
 * Descrip:    makes a genomicregion from a genomic sequence
 *
 *
 * Arg:        gen          Undocumented argument [Wise2_Genomic *]
 *
 * Returns Undocumented return value [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_new_GenomicRegion( Wise2_Genomic * gen);

/* Function:  Wise2_read_EMBL_GenomicRegion_file(filename)
 *
 * Descrip:    Reads in both EMBL sequence and features 
 *
 *
 * Arg:        filename     Undocumented argument [char *]
 *
 * Returns Undocumented return value [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_read_EMBL_GenomicRegion_file( char * filename);

/* Function:  Wise2_read_EMBL_GenomicRegion(ifp)
 *
 * Descrip:    Reads in both EMBL sequence and features 
 *
 *
 * Arg:        ifp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_read_EMBL_GenomicRegion( FILE * ifp);

/* Function:  Wise2_add_Gene_to_GenomicRegion(gr,gene)
 *
 * Descrip:    adds a Gene to this GenomicRegion, making
 *             sure that it parent/son relationship is ok
 *
 *
 * Arg:        gr           GenomicRegion to be added to [Wise2_GenomicRegion *]
 * Arg:        gene         Gene to be added [Wise2_Gene *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_Gene_to_GenomicRegion( Wise2_GenomicRegion * gr,Wise2_Gene * gene);

/* Function:  Wise2_show_ace_GenomicRegion(gr,seq_name,ofp)
 *
 * Descrip:    shows ACeDB subsequence source.
 *
 *             Assummes
 *               a only one transcript per gene
 *               b only cds exons are used
 *
 *
 * Arg:        gr           Undocumented argument [Wise2_GenomicRegion *]
 * Arg:        seq_name     Undocumented argument [char *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_ace_GenomicRegion( Wise2_GenomicRegion * gr,char * seq_name,FILE * ofp);

/* Function:  Wise2_show_pretty_GenomicRegion(gr,show_supporting,ofp)
 *
 * Descrip: No Description
 *
 * Arg:        gr           Undocumented argument [Wise2_GenomicRegion *]
 * Arg:        show_supporting Undocumented argument [boolean]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_pretty_GenomicRegion( Wise2_GenomicRegion * gr,boolean show_supporting,FILE * ofp);

/* Function:  Wise2_write_Diana_FT_GenomicRegion(gr,ofp)
 *
 * Descrip:    Writes Embl feature table for diana use. Does assumme that
 *             there is only one transcript per gene and only
 *             cds exons are used
 *
 *             Output like
 *
 *                FT   misc_feature       join(100..200)
 *
 *
 * Arg:        gr           Undocumented argument [Wise2_GenomicRegion *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_write_Diana_FT_GenomicRegion( Wise2_GenomicRegion * gr,FILE * ofp);

/* Function:  Wise2_write_Embl_FT_GenomicRegion(gr,ofp)
 *
 * Descrip:    Writes Embl feature table. Does assumme that
 *             there is only one transcript per gene and only
 *             cds exons are used
 *
 *             Output like
 *
 *                FT   CDS          join(100..200)
 *
 *
 * Arg:        gr           Undocumented argument [Wise2_GenomicRegion *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_write_Embl_FT_GenomicRegion( Wise2_GenomicRegion * gr,FILE * ofp);

/* Function:  Wise2_hard_link_GenomicRegion(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GenomicRegion *]
 *
 * Returns Undocumented return value [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_hard_link_GenomicRegion( Wise2_GenomicRegion * obj);

/* Function:  Wise2_GenomicRegion_alloc_std(void)
 *
 * Descrip:    Equivalent to GenomicRegion_alloc_len(GenomicRegionLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_GenomicRegion_alloc_std();

/* Function:  Wise2_access_gene_GenomicRegion(obj,i)
 *
 * Descrip:    Access members stored in the gene list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_GenomicRegion *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_Gene *]
 *
 */
Wise2_Gene * Wise2_access_gene_GenomicRegion( Wise2_GenomicRegion * obj,int i);

/* Function:  Wise2_length_gene_GenomicRegion(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_GenomicRegion *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_gene_GenomicRegion( Wise2_GenomicRegion * obj);

/* Function:  Wise2_flush_GenomicRegion(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_GenomicRegion *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_GenomicRegion( Wise2_GenomicRegion * obj);

/* Function:  Wise2_add_GenomicRegion(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_GenomicRegion *]
 * Arg:        add          Object to add to the list [Wise2_Gene *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_GenomicRegion( Wise2_GenomicRegion * obj,Wise2_Gene * add);

/* Function:  Wise2_replace_genomic_GenomicRegion(obj,genomic)
 *
 * Descrip:    Replace member variable genomic
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRegion *]
 * Arg:        genomic      New value of the variable [Wise2_Genomic *]
 *
 * Returns member variable genomic [boolean]
 *
 */
boolean Wise2_replace_genomic_GenomicRegion( Wise2_GenomicRegion * obj,Wise2_Genomic * genomic);

/* Function:  Wise2_access_genomic_GenomicRegion(obj)
 *
 * Descrip:    Access member variable genomic
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GenomicRegion *]
 *
 * Returns member variable genomic [Wise2_Genomic *]
 *
 */
Wise2_Genomic * Wise2_access_genomic_GenomicRegion( Wise2_GenomicRegion * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GenomicRegion(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GenomicRegion *]
 *
 * Returns Undocumented return value [Wise2_GenomicRegion *]
 *
 */
Wise2_GenomicRegion * Wise2_free_GenomicRegion( Wise2_GenomicRegion * obj);



/* Functions that create, manipulate or act on Histogram
 *
 * Wise2_UnfitHistogram
 * Wise2_AddToHistogram
 * Wise2_PrintASCIIHistogram
 * Wise2_EVDBasicFit
 * Wise2_ExtremeValueFitHistogram
 * Wise2_ExtremeValueSetHistogram
 * Wise2_GaussianFitHistogram
 * Wise2_GaussianSetHistogram
 * Wise2_Evalue_from_Histogram
 * Wise2_hard_link_Histogram
 * Wise2_Histogram_alloc
 * Wise2_free_Histogram [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_new_Histogram
 *

/* API for object Histogram */
/* Function:  Wise2_UnfitHistogram(h)
 *
 * Descrip: No Description
 *
 * Arg:        h            Undocumented argument [Wise2_Histogram *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_UnfitHistogram( Wise2_Histogram * h);

/* Function:  Wise2_AddToHistogram(h,sc)
 *
 * Descrip: No Description
 *
 * Arg:        h            Undocumented argument [Wise2_Histogram *]
 * Arg:        sc           Undocumented argument [float]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_AddToHistogram( Wise2_Histogram * h,float sc);

/* Function:  Wise2_PrintASCIIHistogram(h,fp)
 *
 * Descrip: No Description
 *
 * Arg:        h            histogram to print [Wise2_Histogram *]
 * Arg:        fp           open file to print to (stdout works) [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_PrintASCIIHistogram( Wise2_Histogram * h,FILE * fp);

/* Function:  Wise2_EVDBasicFit(h)
 *
 * Descrip: No Description
 *
 * Arg:        h            histogram to fit [Wise2_Histogram *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_EVDBasicFit( Wise2_Histogram * h);

/* Function:  Wise2_ExtremeValueFitHistogram(h,censor,high_hint)
 *
 * Descrip: No Description
 *
 * Arg:        h            histogram to fit [Wise2_Histogram *]
 * Arg:        censor       TRUE to censor data left of the peak [int]
 * Arg:        high_hint    score cutoff; above this are real hits that arent fit [float]
 *
 * Returns if fit is judged to be valid else 0 if fit is invalid (too few seqs.) [int]
 *
 */
int Wise2_ExtremeValueFitHistogram( Wise2_Histogram * h,int censor,float high_hint);

/* Function:  Wise2_ExtremeValueSetHistogram(h,mu,lambda,lowbound,highbound,wonka,ndegrees)
 *
 * Descrip: No Description
 *
 * Arg:        h            the histogram to set [Wise2_Histogram *]
 * Arg:        mu           mu location parameter                 [float]
 * Arg:        lambda       lambda scale parameter [float]
 * Arg:        lowbound     low bound of the histogram that was fit [float]
 * Arg:        highbound    high bound of histogram that was fit [float]
 * Arg:        wonka        fudge factor; fraction of hits estimated to be "EVD-like" [float]
 * Arg:        ndegrees     extra degrees of freedom to subtract in chi2 test: [int]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_ExtremeValueSetHistogram( Wise2_Histogram * h,float mu,float lambda,float lowbound,float highbound,float wonka,int ndegrees);

/* Function:  Wise2_GaussianFitHistogram(h,high_hint)
 *
 * Descrip: No Description
 *
 * Arg:        h            histogram to fit [Wise2_Histogram *]
 * Arg:        high_hint    score cutoff; above this are `real' hits that aren't fit [float]
 *
 * Returns if fit is judged to be valid else 0 if fit is invalid (too few seqs.)            [int]
 *
 */
int Wise2_GaussianFitHistogram( Wise2_Histogram * h,float high_hint);

/* Function:  Wise2_GaussianSetHistogram(h,mean,sd)
 *
 * Descrip: No Description
 *
 * Arg:        h            Undocumented argument [Wise2_Histogram *]
 * Arg:        mean         Undocumented argument [float]
 * Arg:        sd           Undocumented argument [float]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_GaussianSetHistogram( Wise2_Histogram * h,float mean,float sd);

/* Function:  Wise2_Evalue_from_Histogram(his,score)
 *
 * Descrip: No Description
 *
 * Arg:        his          Histogram object [Wise2_Histogram *]
 * Arg:        score        score you want the evalue for [double]
 *
 * Returns Undocumented return value [double]
 *
 */
double Wise2_Evalue_from_Histogram( Wise2_Histogram * his,double score);

/* Function:  Wise2_hard_link_Histogram(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Histogram *]
 *
 * Returns Undocumented return value [Wise2_Histogram *]
 *
 */
Wise2_Histogram * Wise2_hard_link_Histogram( Wise2_Histogram * obj);

/* Function:  Wise2_Histogram_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_Histogram *]
 *
 */
Wise2_Histogram * Wise2_Histogram_alloc();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Histogram(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Histogram *]
 *
 * Returns Undocumented return value [Wise2_Histogram *]
 *
 */
Wise2_Histogram * Wise2_free_Histogram( Wise2_Histogram * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_new_Histogram(min,max,lumpsize)
 *
 * Descrip: No Description
 *
 * Arg:        min          minimum score (integer) [int]
 * Arg:        max          maximum score (integer) [int]
 * Arg:        lumpsize     when reallocating histogram, the reallocation amount [int]
 *
 * Returns Undocumented return value [Wise2_Histogram *]
 *
 */
Wise2_Histogram * Wise2_new_Histogram( int min,int max,int lumpsize);



/* Functions that create, manipulate or act on Hscore
 *
 * Wise2_minimum_score_Hscore
 * Wise2_maximum_score_Hscore
 * Wise2_sort_Hscore_by_score
 * Wise2_length_datascore_Hscore
 * Wise2_get_datascore_Hscore
 * Wise2_get_score_Hscore
 * Wise2_get_evalue_Hscore
 * Wise2_basic_show_Hscore
 * Wise2_hard_link_Hscore
 * Wise2_Hscore_alloc_std
 * Wise2_free_Hscore [destructor]
 *
 */



/* Functions that create, manipulate or act on DataScore
 *
 * Wise2_hard_link_DataScore
 * Wise2_DataScore_alloc
 * Wise2_replace_query_DataScore
 * Wise2_access_query_DataScore
 * Wise2_replace_target_DataScore
 * Wise2_access_target_DataScore
 * Wise2_replace_score_DataScore
 * Wise2_access_score_DataScore
 * Wise2_replace_evalue_DataScore
 * Wise2_access_evalue_DataScore
 * Wise2_free_DataScore [destructor]
 *
 */



/* Functions that create, manipulate or act on DataEntry
 *
 * Wise2_hard_link_DataEntry
 * Wise2_DataEntry_alloc
 * Wise2_replace_name_DataEntry
 * Wise2_access_name_DataEntry
 * Wise2_replace_is_reversed_DataEntry
 * Wise2_access_is_reversed_DataEntry
 * Wise2_free_DataEntry [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_std_score_Hscore
 *

/* API for object Hscore */
/* Function:  Wise2_minimum_score_Hscore(hs)
 *
 * Descrip:    gets the minimum score from Hscore
 *
 *
 * Arg:        hs           Undocumented argument [Wise2_Hscore *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_minimum_score_Hscore( Wise2_Hscore * hs);

/* Function:  Wise2_maximum_score_Hscore(hs)
 *
 * Descrip:    gets the maximum score from Hscore
 *
 *
 * Arg:        hs           Undocumented argument [Wise2_Hscore *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_maximum_score_Hscore( Wise2_Hscore * hs);

/* Function:  Wise2_sort_Hscore_by_score(hs)
 *
 * Descrip:    As it says, sorts the high score by its score
 *
 *
 * Arg:        hs           Hscore to be sorted [Wise2_Hscore *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_sort_Hscore_by_score( Wise2_Hscore * hs);

/* Function:  Wise2_length_datascore_Hscore(obj)
 *
 * Descrip:    Returns the number of datascores in the hscore
 *             structure
 *
 *
 * Arg:        obj          Hscore object [Wise2_Hscore *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_length_datascore_Hscore( Wise2_Hscore * obj);

/* Function:  Wise2_get_datascore_Hscore(hs,i)
 *
 * Descrip:    Returns the specific datascore held at this
 *             position.
 *
 *             This requires a considerable amount of memory
 *             duplication, so please dont process all your
 *             results by looping through this.
 *
 *
 * Arg:        hs           Hscore object [Wise2_Hscore *]
 * Arg:        i            position to be read [int]
 *
 * Returns New datascore object [Wise2_DataScore *]
 *
 */
Wise2_DataScore * Wise2_get_datascore_Hscore( Wise2_Hscore * hs,int i);

/* Function:  Wise2_get_score_Hscore(hs,i)
 *
 * Descrip: No Description
 *
 * Arg:        hs           Hscore object [Wise2_Hscore *]
 * Arg:        i            position to be read [int]
 *
 * Returns score  [int]
 *
 */
int Wise2_get_score_Hscore( Wise2_Hscore * hs,int i);

/* Function:  Wise2_get_evalue_Hscore(hs,i)
 *
 * Descrip:    Returns the evalue of the specific datascore held at this position.
 *
 *
 *
 * Arg:        hs           Hscore object [Wise2_Hscore *]
 * Arg:        i            position to be read [int]
 *
 * Returns evalue  [double]
 *
 */
double Wise2_get_evalue_Hscore( Wise2_Hscore * hs,int i);

/* Function:  Wise2_basic_show_Hscore(hs,ofp)
 *
 * Descrip:    The most baby-talk showing of Hscore
 *
 *
 * Arg:        hs           Undocumented argument [Wise2_Hscore *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_basic_show_Hscore( Wise2_Hscore * hs,FILE * ofp);

/* Function:  Wise2_hard_link_Hscore(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Hscore *]
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_hard_link_Hscore( Wise2_Hscore * obj);

/* Function:  Wise2_Hscore_alloc_std(void)
 *
 * Descrip:    Equivalent to Hscore_alloc_len(HscoreLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_Hscore_alloc_std();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Hscore(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Hscore *]
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_free_Hscore( Wise2_Hscore * obj);

/* API for object DataScore */
/* Function:  Wise2_hard_link_DataScore(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DataScore *]
 *
 * Returns Undocumented return value [Wise2_DataScore *]
 *
 */
Wise2_DataScore * Wise2_hard_link_DataScore( Wise2_DataScore * obj);

/* Function:  Wise2_DataScore_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DataScore *]
 *
 */
Wise2_DataScore * Wise2_DataScore_alloc();

/* Function:  Wise2_replace_query_DataScore(obj,query)
 *
 * Descrip:    Replace member variable query
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 * Arg:        query        New value of the variable [Wise2_DataEntry *]
 *
 * Returns member variable query [boolean]
 *
 */
boolean Wise2_replace_query_DataScore( Wise2_DataScore * obj,Wise2_DataEntry * query);

/* Function:  Wise2_access_query_DataScore(obj)
 *
 * Descrip:    Access member variable query
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 *
 * Returns member variable query [Wise2_DataEntry *]
 *
 */
Wise2_DataEntry * Wise2_access_query_DataScore( Wise2_DataScore * obj);

/* Function:  Wise2_replace_target_DataScore(obj,target)
 *
 * Descrip:    Replace member variable target
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 * Arg:        target       New value of the variable [Wise2_DataEntry *]
 *
 * Returns member variable target [boolean]
 *
 */
boolean Wise2_replace_target_DataScore( Wise2_DataScore * obj,Wise2_DataEntry * target);

/* Function:  Wise2_access_target_DataScore(obj)
 *
 * Descrip:    Access member variable target
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 *
 * Returns member variable target [Wise2_DataEntry *]
 *
 */
Wise2_DataEntry * Wise2_access_target_DataScore( Wise2_DataScore * obj);

/* Function:  Wise2_replace_score_DataScore(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 * Arg:        score        New value of the variable [int]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_DataScore( Wise2_DataScore * obj,int score);

/* Function:  Wise2_access_score_DataScore(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 *
 * Returns member variable score [int]
 *
 */
int Wise2_access_score_DataScore( Wise2_DataScore * obj);

/* Function:  Wise2_replace_evalue_DataScore(obj,evalue)
 *
 * Descrip:    Replace member variable evalue
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 * Arg:        evalue       New value of the variable [double]
 *
 * Returns member variable evalue [boolean]
 *
 */
boolean Wise2_replace_evalue_DataScore( Wise2_DataScore * obj,double evalue);

/* Function:  Wise2_access_evalue_DataScore(obj)
 *
 * Descrip:    Access member variable evalue
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataScore *]
 *
 * Returns member variable evalue [double]
 *
 */
double Wise2_access_evalue_DataScore( Wise2_DataScore * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DataScore(obj)
 *
 * Descrip:    Correctly handles destruction of a datascore
 *
 *
 * Arg:        obj          Undocumented argument [Wise2_DataScore *]
 *
 * Returns Undocumented return value [Wise2_DataScore *]
 *
 */
Wise2_DataScore * Wise2_free_DataScore( Wise2_DataScore * obj);

/* API for object DataEntry */
/* Function:  Wise2_hard_link_DataEntry(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DataEntry *]
 *
 * Returns Undocumented return value [Wise2_DataEntry *]
 *
 */
Wise2_DataEntry * Wise2_hard_link_DataEntry( Wise2_DataEntry * obj);

/* Function:  Wise2_DataEntry_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DataEntry *]
 *
 */
Wise2_DataEntry * Wise2_DataEntry_alloc();

/* Function:  Wise2_replace_name_DataEntry(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataEntry *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_DataEntry( Wise2_DataEntry * obj,char * name);

/* Function:  Wise2_access_name_DataEntry(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataEntry *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_DataEntry( Wise2_DataEntry * obj);

/* Function:  Wise2_replace_is_reversed_DataEntry(obj,is_reversed)
 *
 * Descrip:    Replace member variable is_reversed
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataEntry *]
 * Arg:        is_reversed  New value of the variable [boolean]
 *
 * Returns member variable is_reversed [boolean]
 *
 */
boolean Wise2_replace_is_reversed_DataEntry( Wise2_DataEntry * obj,boolean is_reversed);

/* Function:  Wise2_access_is_reversed_DataEntry(obj)
 *
 * Descrip:    Access member variable is_reversed
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DataEntry *]
 *
 * Returns member variable is_reversed [boolean]
 *
 */
boolean Wise2_access_is_reversed_DataEntry( Wise2_DataEntry * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DataEntry(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_DataEntry *]
 *
 * Returns Undocumented return value [Wise2_DataEntry *]
 *
 */
Wise2_DataEntry * Wise2_free_DataEntry( Wise2_DataEntry * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_std_score_Hscore(cut_off,report_stagger)
 *
 * Descrip:    This gives you a standard Hscore
 *             module with a cutoff in score
 *
 *
 * Arg:        cut_off      Undocumented argument [int]
 * Arg:        report_stagger Undocumented argument [int]
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_std_score_Hscore( int cut_off,int report_stagger);



/* Functions that create, manipulate or act on PackAln
 *
 * Wise2_show_simple_PackAln
 * Wise2_show_bits_and_cumlative_PackAln
 * Wise2_hard_link_PackAln
 * Wise2_PackAln_alloc_std
 * Wise2_access_pau_PackAln
 * Wise2_length_pau_PackAln
 * Wise2_flush_PackAln
 * Wise2_add_PackAln
 * Wise2_replace_score_PackAln
 * Wise2_access_score_PackAln
 * Wise2_free_PackAln [destructor]
 *
 */



/* Functions that create, manipulate or act on PackAlnUnit
 *
 * Wise2_hard_link_PackAlnUnit
 * Wise2_PackAlnUnit_alloc
 * Wise2_replace_i_PackAlnUnit
 * Wise2_access_i_PackAlnUnit
 * Wise2_replace_j_PackAlnUnit
 * Wise2_access_j_PackAlnUnit
 * Wise2_replace_state_PackAlnUnit
 * Wise2_access_state_PackAlnUnit
 * Wise2_replace_score_PackAlnUnit
 * Wise2_access_score_PackAlnUnit
 * Wise2_free_PackAlnUnit [destructor]
 *
 */

/* API for object PackAln */
/* Function:  Wise2_show_simple_PackAln(pal,ofp)
 *
 * Descrip:    shows packaln with a pretty verbose debugging 
 *             format
 *
 *
 * Arg:        pal          Undocumented argument [Wise2_PackAln *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_simple_PackAln( Wise2_PackAln * pal,FILE * ofp);

/* Function:  Wise2_show_bits_and_cumlative_PackAln(pal,ofp)
 *
 * Descrip:    Shows packaln as: 
 *
 *             i,j,state,score,bits,cumlative-score,cumlative-bits
 *
 *             cumlative score and cumlative bits are useful sometimes
 *
 *
 * Arg:        pal          Undocumented argument [Wise2_PackAln *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_bits_and_cumlative_PackAln( Wise2_PackAln * pal,FILE * ofp);

/* Function:  Wise2_hard_link_PackAln(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_PackAln *]
 *
 * Returns Undocumented return value [Wise2_PackAln *]
 *
 */
Wise2_PackAln * Wise2_hard_link_PackAln( Wise2_PackAln * obj);

/* Function:  Wise2_PackAln_alloc_std(void)
 *
 * Descrip:    Equivalent to PackAln_alloc_len(PackAlnLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_PackAln *]
 *
 */
Wise2_PackAln * Wise2_PackAln_alloc_std();

/* Function:  Wise2_access_pau_PackAln(obj,i)
 *
 * Descrip:    Access members stored in the pau list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_PackAln *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_PackAlnUnit *]
 *
 */
Wise2_PackAlnUnit * Wise2_access_pau_PackAln( Wise2_PackAln * obj,int i);

/* Function:  Wise2_length_pau_PackAln(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_PackAln *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_pau_PackAln( Wise2_PackAln * obj);

/* Function:  Wise2_flush_PackAln(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_PackAln *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_PackAln( Wise2_PackAln * obj);

/* Function:  Wise2_add_PackAln(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_PackAln *]
 * Arg:        add          Object to add to the list [Wise2_PackAlnUnit *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_PackAln( Wise2_PackAln * obj,Wise2_PackAlnUnit * add);

/* Function:  Wise2_replace_score_PackAln(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAln *]
 * Arg:        score        New value of the variable [int]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_PackAln( Wise2_PackAln * obj,int score);

/* Function:  Wise2_access_score_PackAln(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAln *]
 *
 * Returns member variable score [int]
 *
 */
int Wise2_access_score_PackAln( Wise2_PackAln * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_PackAln(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_PackAln *]
 *
 * Returns Undocumented return value [Wise2_PackAln *]
 *
 */
Wise2_PackAln * Wise2_free_PackAln( Wise2_PackAln * obj);

/* API for object PackAlnUnit */
/* Function:  Wise2_hard_link_PackAlnUnit(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_PackAlnUnit *]
 *
 * Returns Undocumented return value [Wise2_PackAlnUnit *]
 *
 */
Wise2_PackAlnUnit * Wise2_hard_link_PackAlnUnit( Wise2_PackAlnUnit * obj);

/* Function:  Wise2_PackAlnUnit_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_PackAlnUnit *]
 *
 */
Wise2_PackAlnUnit * Wise2_PackAlnUnit_alloc();

/* Function:  Wise2_replace_i_PackAlnUnit(obj,i)
 *
 * Descrip:    Replace member variable i
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 * Arg:        i            New value of the variable [int]
 *
 * Returns member variable i [boolean]
 *
 */
boolean Wise2_replace_i_PackAlnUnit( Wise2_PackAlnUnit * obj,int i);

/* Function:  Wise2_access_i_PackAlnUnit(obj)
 *
 * Descrip:    Access member variable i
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 *
 * Returns member variable i [int]
 *
 */
int Wise2_access_i_PackAlnUnit( Wise2_PackAlnUnit * obj);

/* Function:  Wise2_replace_j_PackAlnUnit(obj,j)
 *
 * Descrip:    Replace member variable j
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 * Arg:        j            New value of the variable [int]
 *
 * Returns member variable j [boolean]
 *
 */
boolean Wise2_replace_j_PackAlnUnit( Wise2_PackAlnUnit * obj,int j);

/* Function:  Wise2_access_j_PackAlnUnit(obj)
 *
 * Descrip:    Access member variable j
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 *
 * Returns member variable j [int]
 *
 */
int Wise2_access_j_PackAlnUnit( Wise2_PackAlnUnit * obj);

/* Function:  Wise2_replace_state_PackAlnUnit(obj,state)
 *
 * Descrip:    Replace member variable state
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 * Arg:        state        New value of the variable [int]
 *
 * Returns member variable state [boolean]
 *
 */
boolean Wise2_replace_state_PackAlnUnit( Wise2_PackAlnUnit * obj,int state);

/* Function:  Wise2_access_state_PackAlnUnit(obj)
 *
 * Descrip:    Access member variable state
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 *
 * Returns member variable state [int]
 *
 */
int Wise2_access_state_PackAlnUnit( Wise2_PackAlnUnit * obj);

/* Function:  Wise2_replace_score_PackAlnUnit(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 * Arg:        score        New value of the variable [int]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_PackAlnUnit( Wise2_PackAlnUnit * obj,int score);

/* Function:  Wise2_access_score_PackAlnUnit(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PackAlnUnit *]
 *
 * Returns member variable score [int]
 *
 */
int Wise2_access_score_PackAlnUnit( Wise2_PackAlnUnit * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_PackAlnUnit(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_PackAlnUnit *]
 *
 * Returns Undocumented return value [Wise2_PackAlnUnit *]
 *
 */
Wise2_PackAlnUnit * Wise2_free_PackAlnUnit( Wise2_PackAlnUnit * obj);



/* Helper functions in the module
 *
 * Wise2_Probability_from_average_state_occupancy
 * Wise2_state_occupancy_from_Probability
 * Wise2_Probability2Score
 * Wise2_Score2Probability
 * Wise2_Score2Bits
 * Wise2_halfbit2Probability
 *



/* These functions are not associated with an object */
/* Function:  Wise2_Probability_from_average_state_occupancy(length)
 *
 * Descrip:    for single state (exponetial decays) takes an average length
 *             and converts that to a probability that will produce that
 *             length (on average) for the state. NB... this *assumes* that
 *             you want a single state exp decay.
 *
 *
 * Arg:        length       average length of state [double]
 *
 * Returns Undocumented return value [Probability]
 *
 */
Probability Wise2_Probability_from_average_state_occupancy( double length);

/* Function:  Wise2_state_occupancy_from_Probability(p)
 *
 * Descrip:    If you have a single state then this will tak
 *             the probability for the state->state transition and
 *             give you back the average length in the state
 *
 *
 * Arg:        p            probability of staying in the state [double]
 *
 * Returns Undocumented return value [double]
 *
 */
double Wise2_state_occupancy_from_Probability( double p);

/* Function:  Wise2_Probability2Score(p)
 *
 * Descrip:    maps probabilities to scores. Deals
 *             sensibly with 0's.
 *
 *
 * Arg:        p            Undocumented argument [Probability]
 *
 * Returns Undocumented return value [Score]
 *
 */
Score Wise2_Probability2Score( Probability p);

/* Function:  Wise2_Score2Probability(s)
 *
 * Descrip:    maps scores to probabilities
 *
 *
 * Arg:        s            Undocumented argument [Score]
 *
 * Returns Undocumented return value [Probability]
 *
 */
Probability Wise2_Score2Probability( Score s);

/* Function:  Wise2_Score2Bits(s)
 *
 * Descrip:    maps scores to bits
 *
 *
 * Arg:        s            Undocumented argument [Score]
 *
 * Returns Undocumented return value [Bits]
 *
 */
Bits Wise2_Score2Bits( Score s);

/* Function:  Wise2_halfbit2Probability(half_bit)
 *
 * Descrip:    maps halfbits (log2(prob*2) to
 *             probabilities
 *
 *
 * Arg:        half_bit     Undocumented argument [double]
 *
 * Returns Undocumented return value [Probability]
 *
 */
Probability Wise2_halfbit2Probability( double half_bit);



/* Functions that create, manipulate or act on Protein
 *
 * Wise2_Protein_from_Sequence
 * Wise2_hard_link_Protein
 * Wise2_Protein_alloc
 * Wise2_replace_baseseq_Protein
 * Wise2_access_baseseq_Protein
 * Wise2_free_Protein [destructor]
 *
 */

/* API for object Protein */
/* Function:  Wise2_Protein_from_Sequence(seq)
 *
 * Descrip:    makes a new protein from a Sequence. It 
 *             owns the Sequence memory, ie will attempt a /free_Sequence
 *             on the structure when /free_Protein is called
 *
 *             If you want to give this protein this Sequence and
 *             forget about it, then just hand it this sequence and set
 *             seq to NULL (no need to free it). If you intend to use 
 *             the sequecne object elsewhere outside of the Protein datastructure
 *             then use Protein_from_Sequence(/hard_link_Sequence(seq))
 *
 *
 *
 * Arg:        seq          Sequence to make protein from [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_Protein *]
 *
 */
Wise2_Protein * Wise2_Protein_from_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_hard_link_Protein(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Protein *]
 *
 * Returns Undocumented return value [Wise2_Protein *]
 *
 */
Wise2_Protein * Wise2_hard_link_Protein( Wise2_Protein * obj);

/* Function:  Wise2_Protein_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_Protein *]
 *
 */
Wise2_Protein * Wise2_Protein_alloc();

/* Function:  Wise2_replace_baseseq_Protein(obj,baseseq)
 *
 * Descrip:    Replace member variable baseseq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Protein *]
 * Arg:        baseseq      New value of the variable [Wise2_Sequence *]
 *
 * Returns member variable baseseq [boolean]
 *
 */
boolean Wise2_replace_baseseq_Protein( Wise2_Protein * obj,Wise2_Sequence * baseseq);

/* Function:  Wise2_access_baseseq_Protein(obj)
 *
 * Descrip:    Access member variable baseseq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Protein *]
 *
 * Returns member variable baseseq [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_access_baseseq_Protein( Wise2_Protein * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Protein(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Protein *]
 *
 * Returns Undocumented return value [Wise2_Protein *]
 *
 */
Wise2_Protein * Wise2_free_Protein( Wise2_Protein * obj);



/* Functions that create, manipulate or act on ProteinDB
 *
 * Wise2_hard_link_ProteinDB
 * Wise2_ProteinDB_alloc
 * Wise2_replace_is_single_seq_ProteinDB
 * Wise2_access_is_single_seq_ProteinDB
 * Wise2_replace_is_random_db_ProteinDB
 * Wise2_access_is_random_db_ProteinDB
 * Wise2_replace_single_ProteinDB
 * Wise2_access_single_ProteinDB
 * Wise2_replace_sdb_ProteinDB
 * Wise2_access_sdb_ProteinDB
 * Wise2_replace_cses_ProteinDB
 * Wise2_access_cses_ProteinDB
 * Wise2_replace_rnd_ProteinDB
 * Wise2_access_rnd_ProteinDB
 * Wise2_replace_test_dna_ProteinDB
 * Wise2_access_test_dna_ProteinDB
 * Wise2_free_ProteinDB [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_new_ProteinDB_from_single_seq
 * Wise2_single_fasta_ProteinDB
 * Wise2_new_ProteinDB
 *

/* API for object ProteinDB */
/* Function:  Wise2_hard_link_ProteinDB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_ProteinDB *]
 *
 * Returns Undocumented return value [Wise2_ProteinDB *]
 *
 */
Wise2_ProteinDB * Wise2_hard_link_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_ProteinDB_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_ProteinDB *]
 *
 */
Wise2_ProteinDB * Wise2_ProteinDB_alloc();

/* Function:  Wise2_replace_is_single_seq_ProteinDB(obj,is_single_seq)
 *
 * Descrip:    Replace member variable is_single_seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        is_single_seq New value of the variable [boolean]
 *
 * Returns member variable is_single_seq [boolean]
 *
 */
boolean Wise2_replace_is_single_seq_ProteinDB( Wise2_ProteinDB * obj,boolean is_single_seq);

/* Function:  Wise2_access_is_single_seq_ProteinDB(obj)
 *
 * Descrip:    Access member variable is_single_seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable is_single_seq [boolean]
 *
 */
boolean Wise2_access_is_single_seq_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_replace_is_random_db_ProteinDB(obj,is_random_db)
 *
 * Descrip:    Replace member variable is_random_db
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        is_random_db New value of the variable [boolean]
 *
 * Returns member variable is_random_db [boolean]
 *
 */
boolean Wise2_replace_is_random_db_ProteinDB( Wise2_ProteinDB * obj,boolean is_random_db);

/* Function:  Wise2_access_is_random_db_ProteinDB(obj)
 *
 * Descrip:    Access member variable is_random_db
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable is_random_db [boolean]
 *
 */
boolean Wise2_access_is_random_db_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_replace_single_ProteinDB(obj,single)
 *
 * Descrip:    Replace member variable single
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        single       New value of the variable [Wise2_ComplexSequence *]
 *
 * Returns member variable single [boolean]
 *
 */
boolean Wise2_replace_single_ProteinDB( Wise2_ProteinDB * obj,Wise2_ComplexSequence * single);

/* Function:  Wise2_access_single_ProteinDB(obj)
 *
 * Descrip:    Access member variable single
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable single [Wise2_ComplexSequence *]
 *
 */
Wise2_ComplexSequence * Wise2_access_single_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_replace_sdb_ProteinDB(obj,sdb)
 *
 * Descrip:    Replace member variable sdb
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        sdb          New value of the variable [Wise2_SequenceDB *]
 *
 * Returns member variable sdb [boolean]
 *
 */
boolean Wise2_replace_sdb_ProteinDB( Wise2_ProteinDB * obj,Wise2_SequenceDB * sdb);

/* Function:  Wise2_access_sdb_ProteinDB(obj)
 *
 * Descrip:    Access member variable sdb
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable sdb [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_access_sdb_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_replace_cses_ProteinDB(obj,cses)
 *
 * Descrip:    Replace member variable cses
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        cses         New value of the variable [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns member variable cses [boolean]
 *
 */
boolean Wise2_replace_cses_ProteinDB( Wise2_ProteinDB * obj,Wise2_ComplexSequenceEvalSet * cses);

/* Function:  Wise2_access_cses_ProteinDB(obj)
 *
 * Descrip:    Access member variable cses
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable cses [Wise2_ComplexSequenceEvalSet *]
 *
 */
Wise2_ComplexSequenceEvalSet * Wise2_access_cses_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_replace_rnd_ProteinDB(obj,rnd)
 *
 * Descrip:    Replace member variable rnd
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        rnd          New value of the variable [Wise2_RandomProteinDB *]
 *
 * Returns member variable rnd [boolean]
 *
 */
boolean Wise2_replace_rnd_ProteinDB( Wise2_ProteinDB * obj,Wise2_RandomProteinDB * rnd);

/* Function:  Wise2_access_rnd_ProteinDB(obj)
 *
 * Descrip:    Access member variable rnd
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable rnd [Wise2_RandomProteinDB *]
 *
 */
Wise2_RandomProteinDB * Wise2_access_rnd_ProteinDB( Wise2_ProteinDB * obj);

/* Function:  Wise2_replace_test_dna_ProteinDB(obj,test_dna)
 *
 * Descrip:    Replace member variable test_dna
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 * Arg:        test_dna     New value of the variable [boolean]
 *
 * Returns member variable test_dna [boolean]
 *
 */
boolean Wise2_replace_test_dna_ProteinDB( Wise2_ProteinDB * obj,boolean test_dna);

/* Function:  Wise2_access_test_dna_ProteinDB(obj)
 *
 * Descrip:    Access member variable test_dna
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ProteinDB *]
 *
 * Returns member variable test_dna [boolean]
 *
 */
boolean Wise2_access_test_dna_ProteinDB( Wise2_ProteinDB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_ProteinDB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_ProteinDB *]
 *
 * Returns Undocumented return value [Wise2_ProteinDB *]
 *
 */
Wise2_ProteinDB * Wise2_free_ProteinDB( Wise2_ProteinDB * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_new_ProteinDB_from_single_seq(seq)
 *
 * Descrip:    To make a new protein database
 *             from a single Sequence with default amino acid mapping
 *
 *
 * Arg:        seq          sequence which as placed into ProteinDB structure. [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_ProteinDB *]
 *
 */
Wise2_ProteinDB * Wise2_new_ProteinDB_from_single_seq( Wise2_Sequence * seq);

/* Function:  Wise2_single_fasta_ProteinDB(filename)
 *
 * Descrip:    pre-packed single fasta protein database
 *
 *
 *
 * Arg:        filename     name of fasta file [char *]
 *
 * Returns Undocumented return value [Wise2_ProteinDB *]
 *
 */
Wise2_ProteinDB * Wise2_single_fasta_ProteinDB( char * filename);

/* Function:  Wise2_new_ProteinDB(seqdb,cses)
 *
 * Descrip:    To make a new protein database
 *
 *
 * Arg:        seqdb        sequence database [Wise2_SequenceDB *]
 * Arg:        cses         protein evaluation set [Wise2_ComplexSequenceEvalSet *]
 *
 * Returns Undocumented return value [Wise2_ProteinDB *]
 *
 */
Wise2_ProteinDB * Wise2_new_ProteinDB( Wise2_SequenceDB * seqdb,Wise2_ComplexSequenceEvalSet * cses);



/* Functions that create, manipulate or act on RandomProteinDB
 *
 * Wise2_hard_link_RandomProteinDB
 * Wise2_RandomProteinDB_alloc
 * Wise2_replace_use_flat_length_RandomProteinDB
 * Wise2_access_use_flat_length_RandomProteinDB
 * Wise2_replace_length_RandomProteinDB
 * Wise2_access_length_RandomProteinDB
 * Wise2_replace_length_dist_RandomProteinDB
 * Wise2_access_length_dist_RandomProteinDB
 * Wise2_replace_emission_RandomProteinDB
 * Wise2_access_emission_RandomProteinDB
 * Wise2_replace_num_RandomProteinDB
 * Wise2_access_num_RandomProteinDB
 * Wise2_free_RandomProteinDB [destructor]
 *
 */



/* Functions that create, manipulate or act on RandomDNADB
 *
 * Wise2_hard_link_RandomDNADB
 * Wise2_RandomDNADB_alloc
 * Wise2_replace_use_flat_length_RandomDNADB
 * Wise2_access_use_flat_length_RandomDNADB
 * Wise2_replace_length_RandomDNADB
 * Wise2_access_length_RandomDNADB
 * Wise2_replace_length_dist_RandomDNADB
 * Wise2_access_length_dist_RandomDNADB
 * Wise2_replace_emission_RandomDNADB
 * Wise2_access_emission_RandomDNADB
 * Wise2_replace_num_RandomDNADB
 * Wise2_access_num_RandomDNADB
 * Wise2_free_RandomDNADB [destructor]
 *
 */

/* API for object RandomProteinDB */
/* Function:  Wise2_hard_link_RandomProteinDB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_RandomProteinDB *]
 *
 * Returns Undocumented return value [Wise2_RandomProteinDB *]
 *
 */
Wise2_RandomProteinDB * Wise2_hard_link_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* Function:  Wise2_RandomProteinDB_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_RandomProteinDB *]
 *
 */
Wise2_RandomProteinDB * Wise2_RandomProteinDB_alloc();

/* Function:  Wise2_replace_use_flat_length_RandomProteinDB(obj,use_flat_length)
 *
 * Descrip:    Replace member variable use_flat_length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 * Arg:        use_flat_length New value of the variable [boolean]
 *
 * Returns member variable use_flat_length [boolean]
 *
 */
boolean Wise2_replace_use_flat_length_RandomProteinDB( Wise2_RandomProteinDB * obj,boolean use_flat_length);

/* Function:  Wise2_access_use_flat_length_RandomProteinDB(obj)
 *
 * Descrip:    Access member variable use_flat_length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 *
 * Returns member variable use_flat_length [boolean]
 *
 */
boolean Wise2_access_use_flat_length_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* Function:  Wise2_replace_length_RandomProteinDB(obj,length)
 *
 * Descrip:    Replace member variable length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 * Arg:        length       New value of the variable [int]
 *
 * Returns member variable length [boolean]
 *
 */
boolean Wise2_replace_length_RandomProteinDB( Wise2_RandomProteinDB * obj,int length);

/* Function:  Wise2_access_length_RandomProteinDB(obj)
 *
 * Descrip:    Access member variable length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 *
 * Returns member variable length [int]
 *
 */
int Wise2_access_length_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* Function:  Wise2_replace_length_dist_RandomProteinDB(obj,length_dist)
 *
 * Descrip:    Replace member variable length_dist
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 * Arg:        length_dist  New value of the variable [Wise2_Histogram *]
 *
 * Returns member variable length_dist [boolean]
 *
 */
boolean Wise2_replace_length_dist_RandomProteinDB( Wise2_RandomProteinDB * obj,Wise2_Histogram * length_dist);

/* Function:  Wise2_access_length_dist_RandomProteinDB(obj)
 *
 * Descrip:    Access member variable length_dist
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 *
 * Returns member variable length_dist [Wise2_Histogram *]
 *
 */
Wise2_Histogram * Wise2_access_length_dist_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* Function:  Wise2_replace_emission_RandomProteinDB(obj,emission)
 *
 * Descrip:    Replace member variable emission
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 * Arg:        emission     New value of the variable [Wise2_RandomModel *]
 *
 * Returns member variable emission [boolean]
 *
 */
boolean Wise2_replace_emission_RandomProteinDB( Wise2_RandomProteinDB * obj,Wise2_RandomModel * emission);

/* Function:  Wise2_access_emission_RandomProteinDB(obj)
 *
 * Descrip:    Access member variable emission
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 *
 * Returns member variable emission [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_access_emission_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* Function:  Wise2_replace_num_RandomProteinDB(obj,num)
 *
 * Descrip:    Replace member variable num
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 * Arg:        num          New value of the variable [int]
 *
 * Returns member variable num [boolean]
 *
 */
boolean Wise2_replace_num_RandomProteinDB( Wise2_RandomProteinDB * obj,int num);

/* Function:  Wise2_access_num_RandomProteinDB(obj)
 *
 * Descrip:    Access member variable num
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomProteinDB *]
 *
 * Returns member variable num [int]
 *
 */
int Wise2_access_num_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_RandomProteinDB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_RandomProteinDB *]
 *
 * Returns Undocumented return value [Wise2_RandomProteinDB *]
 *
 */
Wise2_RandomProteinDB * Wise2_free_RandomProteinDB( Wise2_RandomProteinDB * obj);

/* API for object RandomDNADB */
/* Function:  Wise2_hard_link_RandomDNADB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_RandomDNADB *]
 *
 * Returns Undocumented return value [Wise2_RandomDNADB *]
 *
 */
Wise2_RandomDNADB * Wise2_hard_link_RandomDNADB( Wise2_RandomDNADB * obj);

/* Function:  Wise2_RandomDNADB_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_RandomDNADB *]
 *
 */
Wise2_RandomDNADB * Wise2_RandomDNADB_alloc();

/* Function:  Wise2_replace_use_flat_length_RandomDNADB(obj,use_flat_length)
 *
 * Descrip:    Replace member variable use_flat_length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 * Arg:        use_flat_length New value of the variable [boolean]
 *
 * Returns member variable use_flat_length [boolean]
 *
 */
boolean Wise2_replace_use_flat_length_RandomDNADB( Wise2_RandomDNADB * obj,boolean use_flat_length);

/* Function:  Wise2_access_use_flat_length_RandomDNADB(obj)
 *
 * Descrip:    Access member variable use_flat_length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 *
 * Returns member variable use_flat_length [boolean]
 *
 */
boolean Wise2_access_use_flat_length_RandomDNADB( Wise2_RandomDNADB * obj);

/* Function:  Wise2_replace_length_RandomDNADB(obj,length)
 *
 * Descrip:    Replace member variable length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 * Arg:        length       New value of the variable [int]
 *
 * Returns member variable length [boolean]
 *
 */
boolean Wise2_replace_length_RandomDNADB( Wise2_RandomDNADB * obj,int length);

/* Function:  Wise2_access_length_RandomDNADB(obj)
 *
 * Descrip:    Access member variable length
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 *
 * Returns member variable length [int]
 *
 */
int Wise2_access_length_RandomDNADB( Wise2_RandomDNADB * obj);

/* Function:  Wise2_replace_length_dist_RandomDNADB(obj,length_dist)
 *
 * Descrip:    Replace member variable length_dist
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 * Arg:        length_dist  New value of the variable [Wise2_Histogram *]
 *
 * Returns member variable length_dist [boolean]
 *
 */
boolean Wise2_replace_length_dist_RandomDNADB( Wise2_RandomDNADB * obj,Wise2_Histogram * length_dist);

/* Function:  Wise2_access_length_dist_RandomDNADB(obj)
 *
 * Descrip:    Access member variable length_dist
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 *
 * Returns member variable length_dist [Wise2_Histogram *]
 *
 */
Wise2_Histogram * Wise2_access_length_dist_RandomDNADB( Wise2_RandomDNADB * obj);

/* Function:  Wise2_replace_emission_RandomDNADB(obj,emission)
 *
 * Descrip:    Replace member variable emission
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 * Arg:        emission     New value of the variable [Wise2_RandomModelDNA *]
 *
 * Returns member variable emission [boolean]
 *
 */
boolean Wise2_replace_emission_RandomDNADB( Wise2_RandomDNADB * obj,Wise2_RandomModelDNA * emission);

/* Function:  Wise2_access_emission_RandomDNADB(obj)
 *
 * Descrip:    Access member variable emission
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 *
 * Returns member variable emission [Wise2_RandomModelDNA *]
 *
 */
Wise2_RandomModelDNA * Wise2_access_emission_RandomDNADB( Wise2_RandomDNADB * obj);

/* Function:  Wise2_replace_num_RandomDNADB(obj,num)
 *
 * Descrip:    Replace member variable num
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 * Arg:        num          New value of the variable [int]
 *
 * Returns member variable num [boolean]
 *
 */
boolean Wise2_replace_num_RandomDNADB( Wise2_RandomDNADB * obj,int num);

/* Function:  Wise2_access_num_RandomDNADB(obj)
 *
 * Descrip:    Access member variable num
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomDNADB *]
 *
 * Returns member variable num [int]
 *
 */
int Wise2_access_num_RandomDNADB( Wise2_RandomDNADB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_RandomDNADB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_RandomDNADB *]
 *
 * Returns Undocumented return value [Wise2_RandomDNADB *]
 *
 */
Wise2_RandomDNADB * Wise2_free_RandomDNADB( Wise2_RandomDNADB * obj);



/* Functions that create, manipulate or act on RandomModelDNA
 *
 * Wise2_hard_link_RandomModelDNA
 * Wise2_RandomModelDNA_alloc
 * Wise2_replace_name_RandomModelDNA
 * Wise2_access_name_RandomModelDNA
 * Wise2_free_RandomModelDNA [destructor]
 *
 */



/* Functions that create, manipulate or act on RandomModel
 *
 * Wise2_hard_link_RandomModel
 * Wise2_RandomModel_alloc
 * Wise2_replace_name_RandomModel
 * Wise2_access_name_RandomModel
 * Wise2_free_RandomModel [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_RandomModelDNA_std
 * Wise2_default_RandomModel
 *

/* API for object RandomModelDNA */
/* Function:  Wise2_hard_link_RandomModelDNA(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_RandomModelDNA *]
 *
 * Returns Undocumented return value [Wise2_RandomModelDNA *]
 *
 */
Wise2_RandomModelDNA * Wise2_hard_link_RandomModelDNA( Wise2_RandomModelDNA * obj);

/* Function:  Wise2_RandomModelDNA_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_RandomModelDNA *]
 *
 */
Wise2_RandomModelDNA * Wise2_RandomModelDNA_alloc();

/* Function:  Wise2_replace_name_RandomModelDNA(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomModelDNA *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_RandomModelDNA( Wise2_RandomModelDNA * obj,char * name);

/* Function:  Wise2_access_name_RandomModelDNA(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomModelDNA *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_RandomModelDNA( Wise2_RandomModelDNA * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_RandomModelDNA(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_RandomModelDNA *]
 *
 * Returns Undocumented return value [Wise2_RandomModelDNA *]
 *
 */
Wise2_RandomModelDNA * Wise2_free_RandomModelDNA( Wise2_RandomModelDNA * obj);

/* API for object RandomModel */
/* Function:  Wise2_hard_link_RandomModel(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_RandomModel *]
 *
 * Returns Undocumented return value [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_hard_link_RandomModel( Wise2_RandomModel * obj);

/* Function:  Wise2_RandomModel_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_RandomModel_alloc();

/* Function:  Wise2_replace_name_RandomModel(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomModel *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_RandomModel( Wise2_RandomModel * obj,char * name);

/* Function:  Wise2_access_name_RandomModel(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_RandomModel *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_RandomModel( Wise2_RandomModel * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_RandomModel(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_RandomModel *]
 *
 * Returns Undocumented return value [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_free_RandomModel( Wise2_RandomModel * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_RandomModelDNA_std(void)
 *
 * Descrip:    Returns a structure with 0.25 set in each place
 *
 *
 *
 * Returns Undocumented return value [Wise2_RandomModelDNA *]
 *
 */
Wise2_RandomModelDNA * Wise2_RandomModelDNA_std();

/* Function:  Wise2_default_RandomModel(void)
 *
 * Descrip:    Gives a default random model numbers from
 *             swissprot34- via the HMMEr1 package
 *
 *
 *
 * Returns Undocumented return value [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_default_RandomModel();



/* Functions that create, manipulate or act on Sequence
 *
 * Wise2_uppercase_Sequence
 * Wise2_force_to_dna_Sequence
 * Wise2_is_reversed_Sequence
 * Wise2_translate_Sequence
 * Wise2_reverse_complement_Sequence
 * Wise2_magic_trunc_Sequence
 * Wise2_trunc_Sequence
 * Wise2_read_fasta_file_Sequence
 * Wise2_read_Sequence_EMBL_seq
 * Wise2_read_fasta_Sequence
 * Wise2_show_Sequence_residue_list
 * Wise2_write_fasta_Sequence
 * Wise2_make_len_type_Sequence
 * Wise2_hard_link_Sequence
 * Wise2_Sequence_alloc
 * Wise2_replace_name_Sequence
 * Wise2_access_name_Sequence
 * Wise2_replace_seq_Sequence
 * Wise2_access_seq_Sequence
 * Wise2_replace_len_Sequence
 * Wise2_access_len_Sequence
 * Wise2_replace_maxlen_Sequence
 * Wise2_access_maxlen_Sequence
 * Wise2_replace_offset_Sequence
 * Wise2_access_offset_Sequence
 * Wise2_replace_end_Sequence
 * Wise2_access_end_Sequence
 * Wise2_replace_type_Sequence
 * Wise2_access_type_Sequence
 * Wise2_replace_tax_id_Sequence
 * Wise2_access_tax_id_Sequence
 * Wise2_replace_weight_Sequence
 * Wise2_access_weight_Sequence
 * Wise2_replace_desc_Sequence
 * Wise2_access_desc_Sequence
 * Wise2_free_Sequence [destructor]
 *
 */



/* Functions that create, manipulate or act on SequenceSet
 *
 * Wise2_hard_link_SequenceSet
 * Wise2_SequenceSet_alloc_std
 * Wise2_access_set_SequenceSet
 * Wise2_length_set_SequenceSet
 * Wise2_flush_SequenceSet
 * Wise2_add_SequenceSet
 * Wise2_free_SequenceSet [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_Sequence_type_to_string
 * Wise2_new_Sequence_from_strings
 *

/* API for object Sequence */
/* Function:  Wise2_uppercase_Sequence(seq)
 *
 * Descrip:    makes all the sequence uppercase
 *
 *
 * Arg:        seq          Sequence to be uppercased [Wise2_Sequence *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_uppercase_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_force_to_dna_Sequence(seq,fraction,number_of_conver)
 *
 * Descrip:    This 
 *              a) sees how many non ATGCN characters there are in Seq
 *              b) If the level is below fraction
 *                 a) flips non ATGC chars to N
 *                 b) writes number of conversions to number_of_conver
 *                 c) returns TRUE
 *              c) else returns FALSE
 *
 *             fraction of 0.0 means completely intolerant of errors
 *             fraction of 1.0 means completely tolerant of errors
 *
 *
 *
 * Arg:        seq          sequence object read and converted  [Wise2_Sequence *]
 * Arg:        fraction     number 0..1 for tolerance of conversion [double]
 * Arg:        number_of_conver number of conversions actually made [int *]
 *
 * Returns TRUE for conversion to DNA, FALSE if not [boolean]
 *
 */
boolean Wise2_force_to_dna_Sequence( Wise2_Sequence * seq,double fraction,int * number_of_conver);

/* Function:  Wise2_is_reversed_Sequence(seq)
 *
 * Descrip:    Currently the sequence object stores 
 *             reversed sequences as start > end.
 *
 *             This tests that and returns true if it is
 *
 *
 * Arg:        seq          sequence to test [Wise2_Sequence *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_is_reversed_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_translate_Sequence(dna,ct)
 *
 * Descrip:    This translates a DNA sequence to a protein.
 *             It assummes that it starts at first residue
 *             (use trunc_Sequence to chop a sequence up).
 *
 *
 * Arg:        dna          DNA sequence to be translated [Wise2_Sequence *]
 * Arg:        ct           Codon table to do codon->aa mapping [Wise2_CodonTable *]
 *
 * Returns new protein sequence [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_translate_Sequence( Wise2_Sequence * dna,Wise2_CodonTable * ct);

/* Function:  Wise2_reverse_complement_Sequence(seq)
 *
 * Descrip:    This both complements and reverses a sequence,
 *             - a common wish!
 *
 *             The start/end are correct with respect to the start/end
 *             of the sequence (ie start = end, end = start).
 *
 *
 * Arg:        seq          Sequence to that is used to reverse (makes a new Sequence) [Wise2_Sequence *]
 *
 * Returns new Sequence which is reversed [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_reverse_complement_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_magic_trunc_Sequence(seq,start,end)
 *
 * Descrip:    Clever function for dna sequences.
 *
 *             When start < end, truncates normally
 *
 *             when start > end, truncates end,start and then
 *             reverse complements.
 *
 *             ie. If you have a coordinate system where reverse 
 *             sequences are labelled in reverse start/end way,
 *             then this routine produces the correct sequence.
 *
 *
 * Arg:        seq          sequence that is the source to be truncated [Wise2_Sequence *]
 * Arg:        start        start point [int]
 * Arg:        end          end point [int]
 *
 * Returns new Sequence which is truncated/reversed [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_magic_trunc_Sequence( Wise2_Sequence * seq,int start,int end);

/* Function:  Wise2_trunc_Sequence(seq,start,end)
 *
 * Descrip:    truncates a sequence. It produces a new memory structure
 *             which is filled from sequence start to end.
 *
 *             Please notice
 *               
 *               Truncation is in C coordinates. That is
 *             the first residue is 0 and end is the number of the
 *             residue after the cut-point. In otherwords to 
 *             2 - 3 would be a single residue truncation. So - if
 *             you want to work in more usual, 'inclusive' molecular
 *             biology numbers, which start at 1, then you need to say
 *
 *               trunc_Sequence(seq,start-1,end);
 *
 *             (NB, should be (end - 1 + 1) = end for the last coordinate).
 *
 *               Truncation occurs against the *absolute* coordinate
 *             system of the Sequence, not the offset/end pair inside.
 *             So, this is a very bad error
 *              
 *               ** wrong code, and also leaks memory **
 *
 *               tru = trunc_Sequence(trunc_Sequence(seq,50,80),55,75); 
 *
 *             This the most portable way of doing this
 *
 *               temp = trunc_Sequence(seq,50,80);
 *
 *               tru  = trunc_Sequence(temp,55-temp->offset,75-temp->offset);
 *
 *               free_Sequence(temp);
 *
 *
 *
 * Arg:        seq          object holding the sequence to be truncated [Wise2_Sequence *]
 * Arg:        start        start point of truncation [int]
 * Arg:        end          end point of truncation [int]
 *
 * Returns newly allocated sequence structure [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_trunc_Sequence( Wise2_Sequence * seq,int start,int end);

/* Function:  Wise2_read_fasta_file_Sequence(filename)
 *
 * Descrip:    Just a call
 *               a) open filename
 *               b) read sequence with /read_fasta_Sequence
 *               c) close file.
 *
 *
 * Arg:        filename     filename to open  [char *]
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_read_fasta_file_Sequence( char * filename);

/* Function:  Wise2_read_Sequence_EMBL_seq(buffer,maxlen,ifp)
 *
 * Descrip:    reads the sequence part of an EMBL file.
 *
 *             This function can either take a file which 
 *             starts
 *
 *
 *
 * Arg:        buffer       buffer containing the first line. [char *]
 * Arg:        maxlen       length of buffer [int]
 * Arg:        ifp          input file to read from [FILE *]
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_read_Sequence_EMBL_seq( char * buffer,int maxlen,FILE * ifp);

/* Function:  Wise2_read_fasta_Sequence(ifp)
 *
 * Descrip:    reads a fasta file assumming pretty 
 *             standard sanity for the file layout
 *
 *
 * Arg:        ifp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_read_fasta_Sequence( FILE * ifp);

/* Function:  Wise2_show_Sequence_residue_list(seq,start,end,ofp)
 *
 * Descrip:    shows a region of a sequence as
 *                124  A
 *                125  T
 *
 *             etc from start to end. The numbers
 *             are in C coordinates (ie, 0 is the first
 *             letter).
 *
 *             useful for debugging
 *
 *
 * Arg:        seq          Sequence to show [Wise2_Sequence *]
 * Arg:        start        start of list [int]
 * Arg:        end          end of list [int]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_Sequence_residue_list( Wise2_Sequence * seq,int start,int end,FILE * ofp);

/* Function:  Wise2_write_fasta_Sequence(seq,ofp)
 *
 * Descrip:    writes a fasta file of the form
 *             >name
 *             Sequence
 *
 *
 * Arg:        seq          sequence to be written [Wise2_Sequence *]
 * Arg:        ofp          file to write to [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_write_fasta_Sequence( Wise2_Sequence * seq,FILE * ofp);

/* Function:  Wise2_make_len_type_Sequence(seq)
 *
 * Descrip:    makes seq->len and seq->end match the seq->seq
 *             length number. 
 *
 *             It also checks the type of the sequence with
 *             /best_guess_type
 *
 *
 * Arg:        seq          Sequence object [Wise2_Sequence *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_make_len_type_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_hard_link_Sequence(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_hard_link_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_Sequence_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_Sequence_alloc();

/* Function:  Wise2_replace_name_Sequence(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_Sequence( Wise2_Sequence * obj,char * name);

/* Function:  Wise2_access_name_Sequence(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_seq_Sequence(obj,seq)
 *
 * Descrip:    Replace member variable seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        seq          New value of the variable [char *]
 *
 * Returns member variable seq [boolean]
 *
 */
boolean Wise2_replace_seq_Sequence( Wise2_Sequence * obj,char * seq);

/* Function:  Wise2_access_seq_Sequence(obj)
 *
 * Descrip:    Access member variable seq
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable seq [char *]
 *
 */
char * Wise2_access_seq_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_len_Sequence(obj,len)
 *
 * Descrip:    Replace member variable len
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        len          New value of the variable [int]
 *
 * Returns member variable len [boolean]
 *
 */
boolean Wise2_replace_len_Sequence( Wise2_Sequence * obj,int len);

/* Function:  Wise2_access_len_Sequence(obj)
 *
 * Descrip:    Access member variable len
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable len [int]
 *
 */
int Wise2_access_len_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_maxlen_Sequence(obj,maxlen)
 *
 * Descrip:    Replace member variable maxlen
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        maxlen       New value of the variable [int]
 *
 * Returns member variable maxlen [boolean]
 *
 */
boolean Wise2_replace_maxlen_Sequence( Wise2_Sequence * obj,int maxlen);

/* Function:  Wise2_access_maxlen_Sequence(obj)
 *
 * Descrip:    Access member variable maxlen
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable maxlen [int]
 *
 */
int Wise2_access_maxlen_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_offset_Sequence(obj,offset)
 *
 * Descrip:    Replace member variable offset
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        offset       New value of the variable [int]
 *
 * Returns member variable offset [boolean]
 *
 */
boolean Wise2_replace_offset_Sequence( Wise2_Sequence * obj,int offset);

/* Function:  Wise2_access_offset_Sequence(obj)
 *
 * Descrip:    Access member variable offset
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable offset [int]
 *
 */
int Wise2_access_offset_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_end_Sequence(obj,end)
 *
 * Descrip:    Replace member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        end          New value of the variable [int]
 *
 * Returns member variable end [boolean]
 *
 */
boolean Wise2_replace_end_Sequence( Wise2_Sequence * obj,int end);

/* Function:  Wise2_access_end_Sequence(obj)
 *
 * Descrip:    Access member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable end [int]
 *
 */
int Wise2_access_end_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_type_Sequence(obj,type)
 *
 * Descrip:    Replace member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        type         New value of the variable [char]
 *
 * Returns member variable type [boolean]
 *
 */
boolean Wise2_replace_type_Sequence( Wise2_Sequence * obj,char type);

/* Function:  Wise2_access_type_Sequence(obj)
 *
 * Descrip:    Access member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable type [char]
 *
 */
char Wise2_access_type_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_tax_id_Sequence(obj,tax_id)
 *
 * Descrip:    Replace member variable tax_id
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        tax_id       New value of the variable [int]
 *
 * Returns member variable tax_id [boolean]
 *
 */
boolean Wise2_replace_tax_id_Sequence( Wise2_Sequence * obj,int tax_id);

/* Function:  Wise2_access_tax_id_Sequence(obj)
 *
 * Descrip:    Access member variable tax_id
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable tax_id [int]
 *
 */
int Wise2_access_tax_id_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_weight_Sequence(obj,weight)
 *
 * Descrip:    Replace member variable weight
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        weight       New value of the variable [double]
 *
 * Returns member variable weight [boolean]
 *
 */
boolean Wise2_replace_weight_Sequence( Wise2_Sequence * obj,double weight);

/* Function:  Wise2_access_weight_Sequence(obj)
 *
 * Descrip:    Access member variable weight
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable weight [double]
 *
 */
double Wise2_access_weight_Sequence( Wise2_Sequence * obj);

/* Function:  Wise2_replace_desc_Sequence(obj,desc)
 *
 * Descrip:    Replace member variable desc
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 * Arg:        desc         New value of the variable [char *]
 *
 * Returns member variable desc [boolean]
 *
 */
boolean Wise2_replace_desc_Sequence( Wise2_Sequence * obj,char * desc);

/* Function:  Wise2_access_desc_Sequence(obj)
 *
 * Descrip:    Access member variable desc
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Sequence *]
 *
 * Returns member variable desc [char *]
 *
 */
char * Wise2_access_desc_Sequence( Wise2_Sequence * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Sequence(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_free_Sequence( Wise2_Sequence * obj);

/* API for object SequenceSet */
/* Function:  Wise2_hard_link_SequenceSet(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_SequenceSet *]
 *
 * Returns Undocumented return value [Wise2_SequenceSet *]
 *
 */
Wise2_SequenceSet * Wise2_hard_link_SequenceSet( Wise2_SequenceSet * obj);

/* Function:  Wise2_SequenceSet_alloc_std(void)
 *
 * Descrip:    Equivalent to SequenceSet_alloc_len(SequenceSetLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_SequenceSet *]
 *
 */
Wise2_SequenceSet * Wise2_SequenceSet_alloc_std();

/* Function:  Wise2_access_set_SequenceSet(obj,i)
 *
 * Descrip:    Access members stored in the set list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_SequenceSet *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_access_set_SequenceSet( Wise2_SequenceSet * obj,int i);

/* Function:  Wise2_length_set_SequenceSet(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_SequenceSet *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_set_SequenceSet( Wise2_SequenceSet * obj);

/* Function:  Wise2_flush_SequenceSet(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_SequenceSet *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_SequenceSet( Wise2_SequenceSet * obj);

/* Function:  Wise2_add_SequenceSet(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_SequenceSet *]
 * Arg:        add          Object to add to the list [Wise2_Sequence *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_SequenceSet( Wise2_SequenceSet * obj,Wise2_Sequence * add);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_SequenceSet(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_SequenceSet *]
 *
 * Returns Undocumented return value [Wise2_SequenceSet *]
 *
 */
Wise2_SequenceSet * Wise2_free_SequenceSet( Wise2_SequenceSet * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_Sequence_type_to_string(type)
 *
 * Descrip:    Converts sequence type (SEQUENCE_*) to a string
 *
 *
 * Arg:        type         type eg SEQUENCE_PROTEIN [int]
 *
 * Returns Undocumented return value [char *]
 *
 */
char * Wise2_Sequence_type_to_string( int type);

/* Function:  Wise2_new_Sequence_from_strings(name,seq)
 *
 * Descrip:    Makes a new sequence from strings given. 
 *             Separate memory will be allocated for them
 *             and them copied into it.
 *
 *             They can be NULL, in which case 
 *             o  a dummy name SequenceName will be assigned
 *             o  No sequence placed and length of zero.
 *
 *             Though this is dangerous later on. 
 *
 *             The sequence type is calculated automatically using
 *             /best_guess_type. If you want a DNA sequence but are
 *             unsure of the content of, for example, IUPAC codes,
 *             please use /force_to_dna_Sequence before using the
 *             sequence. Most of the rest of dynamite relies on a
 *             five letter A,T,G,C,N alphabet, but this function
 *             will allow any sequence type to be stored, so please
 *             check if you want to save yourself alot of grief.
 *
 *             In perl and other interfaces, this is a much safer
 *             constructor than the raw "new" type
 *
 *
 * Arg:        name         name of sequence, memory is allocated for it. [char *]
 * Arg:        seq          char * of sequence, memory is allocated for it. [char *]
 *
 * Returns Undocumented return value [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_new_Sequence_from_strings( char * name,char * seq);



/* Helper functions in the module
 *
 * Wise2_reverse_complement_Sequence
 * Wise2_magic_trunc_Sequence
 * Wise2_translate_Sequence
 *



/* These functions are not associated with an object */
/* Function:  Wise2_reverse_complement_Sequence(seq)
 *
 * Descrip:    This both complements and reverses a sequence,
 *             - a common wish!
 *
 *             The start/end are correct with respect to the start/end
 *             of the sequence (ie start = end, end = start).
 *
 *
 * Arg:        seq          Sequence to that is used to reverse (makes a new Sequence) [Wise2_Sequence *]
 *
 * Returns new Sequence which is reversed [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_reverse_complement_Sequence( Wise2_Sequence * seq);

/* Function:  Wise2_magic_trunc_Sequence(seq,start,end)
 *
 * Descrip:    Clever function for dna sequences.
 *
 *             When start < end, truncates normally
 *
 *             when start > end, truncates end,start and then
 *             reverse complements.
 *
 *             ie. If you have a coordinate system where reverse 
 *             sequences are labelled in reverse start/end way,
 *             then this routine produces the correct sequence.
 *
 *
 * Arg:        seq          sequence that is the source to be truncated [Wise2_Sequence *]
 * Arg:        start        start point [int]
 * Arg:        end          end point [int]
 *
 * Returns new Sequence which is truncated/reversed [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_magic_trunc_Sequence( Wise2_Sequence * seq,int start,int end);

/* Function:  Wise2_translate_Sequence(dna,ct)
 *
 * Descrip:    This translates a DNA sequence to a protein.
 *             It assummes that it starts at first residue
 *             (use trunc_Sequence to chop a sequence up).
 *
 *
 * Arg:        dna          DNA sequence to be translated [Wise2_Sequence *]
 * Arg:        ct           Codon table to do codon->aa mapping [Wise2_CodonTable *]
 *
 * Returns new protein sequence [Wise2_Sequence *]
 *
 */
Wise2_Sequence * Wise2_translate_Sequence( Wise2_Sequence * dna,Wise2_CodonTable * ct);



/* Functions that create, manipulate or act on SequenceDB
 *
 * Wise2_close_SequenceDB
 * Wise2_hard_link_SequenceDB
 * Wise2_SequenceDB_alloc_std
 * Wise2_replace_name_SequenceDB
 * Wise2_access_name_SequenceDB
 * Wise2_access_fs_SequenceDB
 * Wise2_length_fs_SequenceDB
 * Wise2_flush_SequenceDB
 * Wise2_add_SequenceDB
 * Wise2_replace_current_source_SequenceDB
 * Wise2_access_current_source_SequenceDB
 * Wise2_replace_current_file_SequenceDB
 * Wise2_access_current_file_SequenceDB
 * Wise2_replace_sequence_no_SequenceDB
 * Wise2_access_sequence_no_SequenceDB
 * Wise2_replace_byte_position_SequenceDB
 * Wise2_access_byte_position_SequenceDB
 * Wise2_free_SequenceDB [destructor]
 *
 */



/* Functions that create, manipulate or act on FileSource
 *
 * Wise2_hard_link_FileSource
 * Wise2_FileSource_alloc
 * Wise2_replace_filename_FileSource
 * Wise2_access_filename_FileSource
 * Wise2_replace_input_FileSource
 * Wise2_access_input_FileSource
 * Wise2_replace_format_FileSource
 * Wise2_access_format_FileSource
 * Wise2_replace_type_FileSource
 * Wise2_access_type_FileSource
 * Wise2_free_FileSource [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_single_fasta_SequenceDB
 *

/* API for object SequenceDB */
/* Function:  Wise2_close_SequenceDB(last,sdb)
 *
 * Descrip:    top level function that closes the SequenceDB
 *             after the last sequence is read.
 *
 *
 * Arg:        last         Sequence object to be freed  [Wise2_Sequence *]
 * Arg:        sdb          database to be closed [Wise2_SequenceDB *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_close_SequenceDB( Wise2_Sequence * last,Wise2_SequenceDB * sdb);

/* Function:  Wise2_hard_link_SequenceDB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_SequenceDB *]
 *
 * Returns Undocumented return value [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_hard_link_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_SequenceDB_alloc_std(void)
 *
 * Descrip:    Equivalent to SequenceDB_alloc_len(SequenceDBLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_SequenceDB_alloc_std();

/* Function:  Wise2_replace_name_SequenceDB(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_SequenceDB( Wise2_SequenceDB * obj,char * name);

/* Function:  Wise2_access_name_SequenceDB(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_access_fs_SequenceDB(obj,i)
 *
 * Descrip:    Access members stored in the fs list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_SequenceDB *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_FileSource *]
 *
 */
Wise2_FileSource * Wise2_access_fs_SequenceDB( Wise2_SequenceDB * obj,int i);

/* Function:  Wise2_length_fs_SequenceDB(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_SequenceDB *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_fs_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_flush_SequenceDB(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_SequenceDB *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_add_SequenceDB(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_SequenceDB *]
 * Arg:        add          Object to add to the list [Wise2_FileSource *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_SequenceDB( Wise2_SequenceDB * obj,Wise2_FileSource * add);

/* Function:  Wise2_replace_current_source_SequenceDB(obj,current_source)
 *
 * Descrip:    Replace member variable current_source
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 * Arg:        current_source New value of the variable [int]
 *
 * Returns member variable current_source [boolean]
 *
 */
boolean Wise2_replace_current_source_SequenceDB( Wise2_SequenceDB * obj,int current_source);

/* Function:  Wise2_access_current_source_SequenceDB(obj)
 *
 * Descrip:    Access member variable current_source
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 *
 * Returns member variable current_source [int]
 *
 */
int Wise2_access_current_source_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_replace_current_file_SequenceDB(obj,current_file)
 *
 * Descrip:    Replace member variable current_file
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 * Arg:        current_file New value of the variable [FILE *]
 *
 * Returns member variable current_file [boolean]
 *
 */
boolean Wise2_replace_current_file_SequenceDB( Wise2_SequenceDB * obj,FILE * current_file);

/* Function:  Wise2_access_current_file_SequenceDB(obj)
 *
 * Descrip:    Access member variable current_file
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 *
 * Returns member variable current_file [FILE *]
 *
 */
FILE * Wise2_access_current_file_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_replace_sequence_no_SequenceDB(obj,sequence_no)
 *
 * Descrip:    Replace member variable sequence_no
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 * Arg:        sequence_no  New value of the variable [int]
 *
 * Returns member variable sequence_no [boolean]
 *
 */
boolean Wise2_replace_sequence_no_SequenceDB( Wise2_SequenceDB * obj,int sequence_no);

/* Function:  Wise2_access_sequence_no_SequenceDB(obj)
 *
 * Descrip:    Access member variable sequence_no
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 *
 * Returns member variable sequence_no [int]
 *
 */
int Wise2_access_sequence_no_SequenceDB( Wise2_SequenceDB * obj);

/* Function:  Wise2_replace_byte_position_SequenceDB(obj,byte_position)
 *
 * Descrip:    Replace member variable byte_position
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 * Arg:        byte_position New value of the variable [int]
 *
 * Returns member variable byte_position [boolean]
 *
 */
boolean Wise2_replace_byte_position_SequenceDB( Wise2_SequenceDB * obj,int byte_position);

/* Function:  Wise2_access_byte_position_SequenceDB(obj)
 *
 * Descrip:    Access member variable byte_position
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SequenceDB *]
 *
 * Returns member variable byte_position [int]
 *
 */
int Wise2_access_byte_position_SequenceDB( Wise2_SequenceDB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_SequenceDB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_SequenceDB *]
 *
 * Returns Undocumented return value [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_free_SequenceDB( Wise2_SequenceDB * obj);

/* API for object FileSource */
/* Function:  Wise2_hard_link_FileSource(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_FileSource *]
 *
 * Returns Undocumented return value [Wise2_FileSource *]
 *
 */
Wise2_FileSource * Wise2_hard_link_FileSource( Wise2_FileSource * obj);

/* Function:  Wise2_FileSource_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_FileSource *]
 *
 */
Wise2_FileSource * Wise2_FileSource_alloc();

/* Function:  Wise2_replace_filename_FileSource(obj,filename)
 *
 * Descrip:    Replace member variable filename
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 * Arg:        filename     New value of the variable [char *]
 *
 * Returns member variable filename [boolean]
 *
 */
boolean Wise2_replace_filename_FileSource( Wise2_FileSource * obj,char * filename);

/* Function:  Wise2_access_filename_FileSource(obj)
 *
 * Descrip:    Access member variable filename
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 *
 * Returns member variable filename [char *]
 *
 */
char * Wise2_access_filename_FileSource( Wise2_FileSource * obj);

/* Function:  Wise2_replace_input_FileSource(obj,input)
 *
 * Descrip:    Replace member variable input
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 * Arg:        input        New value of the variable [FILE *]
 *
 * Returns member variable input [boolean]
 *
 */
boolean Wise2_replace_input_FileSource( Wise2_FileSource * obj,FILE * input);

/* Function:  Wise2_access_input_FileSource(obj)
 *
 * Descrip:    Access member variable input
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 *
 * Returns member variable input [FILE *]
 *
 */
FILE * Wise2_access_input_FileSource( Wise2_FileSource * obj);

/* Function:  Wise2_replace_format_FileSource(obj,format)
 *
 * Descrip:    Replace member variable format
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 * Arg:        format       New value of the variable [int]
 *
 * Returns member variable format [boolean]
 *
 */
boolean Wise2_replace_format_FileSource( Wise2_FileSource * obj,int format);

/* Function:  Wise2_access_format_FileSource(obj)
 *
 * Descrip:    Access member variable format
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 *
 * Returns member variable format [int]
 *
 */
int Wise2_access_format_FileSource( Wise2_FileSource * obj);

/* Function:  Wise2_replace_type_FileSource(obj,type)
 *
 * Descrip:    Replace member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 * Arg:        type         New value of the variable [int]
 *
 * Returns member variable type [boolean]
 *
 */
boolean Wise2_replace_type_FileSource( Wise2_FileSource * obj,int type);

/* Function:  Wise2_access_type_FileSource(obj)
 *
 * Descrip:    Access member variable type
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_FileSource *]
 *
 * Returns member variable type [int]
 *
 */
int Wise2_access_type_FileSource( Wise2_FileSource * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_FileSource(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_FileSource *]
 *
 * Returns Undocumented return value [Wise2_FileSource *]
 *
 */
Wise2_FileSource * Wise2_free_FileSource( Wise2_FileSource * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_single_fasta_SequenceDB(filename)
 *
 * Descrip:    pre-packed single fasta file db
 *
 *
 *
 * Arg:        filename     name of fastadb [char *]
 *
 * Returns Undocumented return value [Wise2_SequenceDB *]
 *
 */
Wise2_SequenceDB * Wise2_single_fasta_SequenceDB( char * filename);



/* Functions that create, manipulate or act on Exon
 *
 * Wise2_hard_link_Exon
 * Wise2_Exon_alloc_std
 * Wise2_replace_start_Exon
 * Wise2_access_start_Exon
 * Wise2_replace_end_Exon
 * Wise2_access_end_Exon
 * Wise2_replace_used_Exon
 * Wise2_access_used_Exon
 * Wise2_replace_score_Exon
 * Wise2_access_score_Exon
 * Wise2_access_sf_Exon
 * Wise2_length_sf_Exon
 * Wise2_flush_Exon
 * Wise2_add_Exon
 * Wise2_replace_phase_Exon
 * Wise2_access_phase_Exon
 * Wise2_free_Exon [destructor]
 *
 */



/* Functions that create, manipulate or act on Transcript
 *
 * Wise2_get_cDNA_from_Transcript
 * Wise2_hard_link_Transcript
 * Wise2_Transcript_alloc_std
 * Wise2_access_exon_Transcript
 * Wise2_length_exon_Transcript
 * Wise2_flush_ex_Transcript
 * Wise2_add_ex_Transcript
 * Wise2_replace_parent_Transcript
 * Wise2_access_parent_Transcript
 * Wise2_access_translation_Transcript
 * Wise2_length_translation_Transcript
 * Wise2_flush_Transcript
 * Wise2_add_Transcript
 * Wise2_replace_cDNA_Transcript
 * Wise2_access_cDNA_Transcript
 * Wise2_free_Transcript [destructor]
 *
 */

/* API for object Exon */
/* Function:  Wise2_hard_link_Exon(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Exon *]
 *
 * Returns Undocumented return value [Wise2_Exon *]
 *
 */
Wise2_Exon * Wise2_hard_link_Exon( Wise2_Exon * obj);

/* Function:  Wise2_Exon_alloc_std(void)
 *
 * Descrip:    Equivalent to Exon_alloc_len(ExonLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_Exon *]
 *
 */
Wise2_Exon * Wise2_Exon_alloc_std();

/* Function:  Wise2_replace_start_Exon(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 * Arg:        start        New value of the variable [int]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_Exon( Wise2_Exon * obj,int start);

/* Function:  Wise2_access_start_Exon(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 *
 * Returns member variable start [int]
 *
 */
int Wise2_access_start_Exon( Wise2_Exon * obj);

/* Function:  Wise2_replace_end_Exon(obj,end)
 *
 * Descrip:    Replace member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 * Arg:        end          New value of the variable [int]
 *
 * Returns member variable end [boolean]
 *
 */
boolean Wise2_replace_end_Exon( Wise2_Exon * obj,int end);

/* Function:  Wise2_access_end_Exon(obj)
 *
 * Descrip:    Access member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 *
 * Returns member variable end [int]
 *
 */
int Wise2_access_end_Exon( Wise2_Exon * obj);

/* Function:  Wise2_replace_used_Exon(obj,used)
 *
 * Descrip:    Replace member variable used
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 * Arg:        used         New value of the variable [boolean]
 *
 * Returns member variable used [boolean]
 *
 */
boolean Wise2_replace_used_Exon( Wise2_Exon * obj,boolean used);

/* Function:  Wise2_access_used_Exon(obj)
 *
 * Descrip:    Access member variable used
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 *
 * Returns member variable used [boolean]
 *
 */
boolean Wise2_access_used_Exon( Wise2_Exon * obj);

/* Function:  Wise2_replace_score_Exon(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 * Arg:        score        New value of the variable [double]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_Exon( Wise2_Exon * obj,double score);

/* Function:  Wise2_access_score_Exon(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 *
 * Returns member variable score [double]
 *
 */
double Wise2_access_score_Exon( Wise2_Exon * obj);

/* Function:  Wise2_access_sf_Exon(obj,i)
 *
 * Descrip:    Access members stored in the sf list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Exon *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_SupportingFeature *]
 *
 */
Wise2_SupportingFeature * Wise2_access_sf_Exon( Wise2_Exon * obj,int i);

/* Function:  Wise2_length_sf_Exon(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Exon *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_sf_Exon( Wise2_Exon * obj);

/* Function:  Wise2_flush_Exon(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_Exon *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_Exon( Wise2_Exon * obj);

/* Function:  Wise2_add_Exon(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_Exon *]
 * Arg:        add          Object to add to the list [Wise2_SupportingFeature *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_Exon( Wise2_Exon * obj,Wise2_SupportingFeature * add);

/* Function:  Wise2_replace_phase_Exon(obj,phase)
 *
 * Descrip:    Replace member variable phase
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 * Arg:        phase        New value of the variable [int]
 *
 * Returns member variable phase [boolean]
 *
 */
boolean Wise2_replace_phase_Exon( Wise2_Exon * obj,int phase);

/* Function:  Wise2_access_phase_Exon(obj)
 *
 * Descrip:    Access member variable phase
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Exon *]
 *
 * Returns member variable phase [int]
 *
 */
int Wise2_access_phase_Exon( Wise2_Exon * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Exon(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Exon *]
 *
 * Returns Undocumented return value [Wise2_Exon *]
 *
 */
Wise2_Exon * Wise2_free_Exon( Wise2_Exon * obj);

/* API for object Transcript */
/* Function:  Wise2_get_cDNA_from_Transcript(trs)
 *
 * Descrip:    gets the cDNA associated with this transcript,
 *             if necessary, building it from the exon information
 *             provided.
 *
 *             returns a soft-linked object. If you want to ensure
 *             that this cDNA object remains in memory use
 *             /hard_link_cDNA on the object.
 *
 *
 * Arg:        trs          transcript to get cDNA from [Wise2_Transcript *]
 *
 * Returns cDNA of the transcript [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_get_cDNA_from_Transcript( Wise2_Transcript * trs);

/* Function:  Wise2_hard_link_Transcript(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Transcript *]
 *
 * Returns Undocumented return value [Wise2_Transcript *]
 *
 */
Wise2_Transcript * Wise2_hard_link_Transcript( Wise2_Transcript * obj);

/* Function:  Wise2_Transcript_alloc_std(void)
 *
 * Descrip:    Equivalent to Transcript_alloc_len(TranscriptLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_Transcript *]
 *
 */
Wise2_Transcript * Wise2_Transcript_alloc_std();

/* Function:  Wise2_access_exon_Transcript(obj,i)
 *
 * Descrip:    Access members stored in the exon list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Transcript *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_Exon *]
 *
 */
Wise2_Exon * Wise2_access_exon_Transcript( Wise2_Transcript * obj,int i);

/* Function:  Wise2_length_exon_Transcript(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Transcript *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_exon_Transcript( Wise2_Transcript * obj);

/* Function:  Wise2_flush_ex_Transcript(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_Transcript *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_ex_Transcript( Wise2_Transcript * obj);

/* Function:  Wise2_add_ex_Transcript(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_Transcript *]
 * Arg:        add          Object to add to the list [Wise2_Exon *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_ex_Transcript( Wise2_Transcript * obj,Wise2_Exon * add);

/* Function:  Wise2_replace_parent_Transcript(obj,parent)
 *
 * Descrip:    Replace member variable parent
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Transcript *]
 * Arg:        parent       New value of the variable [Wise2_Gene *]
 *
 * Returns member variable parent [boolean]
 *
 */
boolean Wise2_replace_parent_Transcript( Wise2_Transcript * obj,Wise2_Gene * parent);

/* Function:  Wise2_access_parent_Transcript(obj)
 *
 * Descrip:    Access member variable parent
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Transcript *]
 *
 * Returns member variable parent [Wise2_Gene *]
 *
 */
Wise2_Gene * Wise2_access_parent_Transcript( Wise2_Transcript * obj);

/* Function:  Wise2_access_translation_Transcript(obj,i)
 *
 * Descrip:    Access members stored in the translation list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Transcript *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_Translation *]
 *
 */
Wise2_Translation * Wise2_access_translation_Transcript( Wise2_Transcript * obj,int i);

/* Function:  Wise2_length_translation_Transcript(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_Transcript *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_translation_Transcript( Wise2_Transcript * obj);

/* Function:  Wise2_flush_Transcript(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_Transcript *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_Transcript( Wise2_Transcript * obj);

/* Function:  Wise2_add_Transcript(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_Transcript *]
 * Arg:        add          Object to add to the list [Wise2_Translation *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_Transcript( Wise2_Transcript * obj,Wise2_Translation * add);

/* Function:  Wise2_replace_cDNA_Transcript(obj,cDNA)
 *
 * Descrip:    Replace member variable cDNA
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Transcript *]
 * Arg:        cDNA         New value of the variable [Wise2_cDNA *]
 *
 * Returns member variable cDNA [boolean]
 *
 */
boolean Wise2_replace_cDNA_Transcript( Wise2_Transcript * obj,Wise2_cDNA * cDNA);

/* Function:  Wise2_access_cDNA_Transcript(obj)
 *
 * Descrip:    Access member variable cDNA
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Transcript *]
 *
 * Returns member variable cDNA [Wise2_cDNA *]
 *
 */
Wise2_cDNA * Wise2_access_cDNA_Transcript( Wise2_Transcript * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Transcript(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Transcript *]
 *
 * Returns Undocumented return value [Wise2_Transcript *]
 *
 */
Wise2_Transcript * Wise2_free_Transcript( Wise2_Transcript * obj);



/* Functions that create, manipulate or act on Translation
 *
 * Wise2_get_Protein_from_Translation
 * Wise2_hard_link_Translation
 * Wise2_Translation_alloc
 * Wise2_replace_start_Translation
 * Wise2_access_start_Translation
 * Wise2_replace_end_Translation
 * Wise2_access_end_Translation
 * Wise2_replace_parent_Translation
 * Wise2_access_parent_Translation
 * Wise2_replace_protein_Translation
 * Wise2_access_protein_Translation
 * Wise2_free_Translation [destructor]
 *
 */

/* API for object Translation */
/* Function:  Wise2_get_Protein_from_Translation(ts,ct)
 *
 * Descrip:    Gets the protein
 *
 *
 * Arg:        ts           translation [Wise2_Translation *]
 * Arg:        ct           codon table to use [Wise2_CodonTable *]
 *
 * Returns Protein sequence [Wise2_Protein *]
 *
 */
Wise2_Protein * Wise2_get_Protein_from_Translation( Wise2_Translation * ts,Wise2_CodonTable * ct);

/* Function:  Wise2_hard_link_Translation(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_Translation *]
 *
 * Returns Undocumented return value [Wise2_Translation *]
 *
 */
Wise2_Translation * Wise2_hard_link_Translation( Wise2_Translation * obj);

/* Function:  Wise2_Translation_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_Translation *]
 *
 */
Wise2_Translation * Wise2_Translation_alloc();

/* Function:  Wise2_replace_start_Translation(obj,start)
 *
 * Descrip:    Replace member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 * Arg:        start        New value of the variable [int]
 *
 * Returns member variable start [boolean]
 *
 */
boolean Wise2_replace_start_Translation( Wise2_Translation * obj,int start);

/* Function:  Wise2_access_start_Translation(obj)
 *
 * Descrip:    Access member variable start
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 *
 * Returns member variable start [int]
 *
 */
int Wise2_access_start_Translation( Wise2_Translation * obj);

/* Function:  Wise2_replace_end_Translation(obj,end)
 *
 * Descrip:    Replace member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 * Arg:        end          New value of the variable [int]
 *
 * Returns member variable end [boolean]
 *
 */
boolean Wise2_replace_end_Translation( Wise2_Translation * obj,int end);

/* Function:  Wise2_access_end_Translation(obj)
 *
 * Descrip:    Access member variable end
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 *
 * Returns member variable end [int]
 *
 */
int Wise2_access_end_Translation( Wise2_Translation * obj);

/* Function:  Wise2_replace_parent_Translation(obj,parent)
 *
 * Descrip:    Replace member variable parent
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 * Arg:        parent       New value of the variable [Wise2_Transcript *]
 *
 * Returns member variable parent [boolean]
 *
 */
boolean Wise2_replace_parent_Translation( Wise2_Translation * obj,Wise2_Transcript * parent);

/* Function:  Wise2_access_parent_Translation(obj)
 *
 * Descrip:    Access member variable parent
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 *
 * Returns member variable parent [Wise2_Transcript *]
 *
 */
Wise2_Transcript * Wise2_access_parent_Translation( Wise2_Translation * obj);

/* Function:  Wise2_replace_protein_Translation(obj,protein)
 *
 * Descrip:    Replace member variable protein
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 * Arg:        protein      New value of the variable [Wise2_Protein *]
 *
 * Returns member variable protein [boolean]
 *
 */
boolean Wise2_replace_protein_Translation( Wise2_Translation * obj,Wise2_Protein * protein);

/* Function:  Wise2_access_protein_Translation(obj)
 *
 * Descrip:    Access member variable protein
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_Translation *]
 *
 * Returns member variable protein [Wise2_Protein *]
 *
 */
Wise2_Protein * Wise2_access_protein_Translation( Wise2_Translation * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_Translation(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_Translation *]
 *
 * Returns Undocumented return value [Wise2_Translation *]
 *
 */
Wise2_Translation * Wise2_free_Translation( Wise2_Translation * obj);



/* Functions that create, manipulate or act on cDNAParser
 *
 * Wise2_hard_link_cDNAParser
 * Wise2_cDNAParser_alloc
 * Wise2_free_cDNAParser [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_flat_cDNAParser
 *

/* API for object cDNAParser */
/* Function:  Wise2_hard_link_cDNAParser(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_cDNAParser *]
 *
 * Returns Undocumented return value [Wise2_cDNAParser *]
 *
 */
Wise2_cDNAParser * Wise2_hard_link_cDNAParser( Wise2_cDNAParser * obj);

/* Function:  Wise2_cDNAParser_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_cDNAParser *]
 *
 */
Wise2_cDNAParser * Wise2_cDNAParser_alloc();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_cDNAParser(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_cDNAParser *]
 *
 * Returns Undocumented return value [Wise2_cDNAParser *]
 *
 */
Wise2_cDNAParser * Wise2_free_cDNAParser( Wise2_cDNAParser * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_flat_cDNAParser(p)
 *
 * Descrip:    Makes a flat (ie, indels of 1 or 2 == p)
 *             cDNA parser. This means that insertions
 *             and deletions of both 1 or 2 bases are
 *             all parameterised at the same probability
 *
 *
 *
 * Arg:        p            probability of an indel [Probability]
 *
 * Returns Undocumented return value [Wise2_cDNAParser *]
 *
 */
Wise2_cDNAParser * Wise2_flat_cDNAParser( Probability p);



/* Functions that create, manipulate or act on DnaStartEnd
 *
 * Wise2_hard_link_DnaStartEnd
 * Wise2_DnaStartEnd_alloc
 * Wise2_free_DnaStartEnd [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_make_align_dnaalign
 * Wise2_DnaStartEnd_from_policy
 *

/* API for object DnaStartEnd */
/* Function:  Wise2_hard_link_DnaStartEnd(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DnaStartEnd *]
 *
 * Returns Undocumented return value [Wise2_DnaStartEnd *]
 *
 */
Wise2_DnaStartEnd * Wise2_hard_link_DnaStartEnd( Wise2_DnaStartEnd * obj);

/* Function:  Wise2_DnaStartEnd_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DnaStartEnd *]
 *
 */
Wise2_DnaStartEnd * Wise2_DnaStartEnd_alloc();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DnaStartEnd(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_DnaStartEnd *]
 *
 * Returns Undocumented return value [Wise2_DnaStartEnd *]
 *
 */
Wise2_DnaStartEnd * Wise2_free_DnaStartEnd( Wise2_DnaStartEnd * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_make_align_dnaalign(one,two,mat,se,qgap,qext,tgap,text,dpri)
 *
 * Descrip:    Makes an alignment out of two DNA sequences
 *
 *
 * Arg:        one          first sequence to align [Wise2_Sequence *]
 * Arg:        two          second sequence to align [Wise2_Sequence *]
 * Arg:        mat          DnaMatrix for the matching [Wise2_DnaMatrix *]
 * Arg:        se           DnaStartEnd policy [Wise2_DnaStartEnd *]
 * Arg:        qgap         gap open penalty in query (one) coordinate [int]
 * Arg:        qext         gap extension penalty in query (one) coordinate [int]
 * Arg:        tgap         gap open penalty in target (two) coordinate [int]
 * Arg:        text         gap extension penalty in target (two) coordinate [int]
 * Arg:        dpri         DPRunImpl structure [Wise2_DPRunImpl *]
 *
 * Returns an alb structure of the alignment [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_make_align_dnaalign( Wise2_Sequence * one,Wise2_Sequence * two,Wise2_DnaMatrix * mat,Wise2_DnaStartEnd * se,int qgap,int qext,int tgap,int text,Wise2_DPRunImpl * dpri);

/* Function:  Wise2_DnaStartEnd_from_policy(policy)
 *
 * Descrip:    Makes a DnaStartEnd from a particular string.
 *             Possible strings are:
 *
 *             local - fully local
 *             global - fully global
 *             edge - aligns only to edges
 *
 *
 * Arg:        policy       Undocumented argument [char *]
 *
 * Returns Undocumented return value [Wise2_DnaStartEnd *]
 *
 */
Wise2_DnaStartEnd * Wise2_DnaStartEnd_from_policy( char * policy);



/* Helper functions in the module
 *
 * Wise2_Hscore_from_TSM_estwise
 * Wise2_AlnBlock_from_Protein_estwise_wrap
 * Wise2_AlnBlock_from_TSM_estwise_wrap
 * Wise2_alg_estwrap_from_string
 *



/* These functions are not associated with an object */
/* Function:  Wise2_Hscore_from_TSM_estwise(tdb,cdb,cp,cm,rmd,use_syn,alg,bits_cutoff,allN,flat_insert,report_level,die_on_error,dbsi)
 *
 * Descrip:    Runs a database search for the estwise set
 *             of algorithms
 *
 *
 * Arg:        tdb          a three state model database [Wise2_ThreeStateDB *]
 * Arg:        cdb          a dna sequence database [Wise2_cDNADB *]
 * Arg:        cp           the codon parser for this comparison [Wise2_cDNAParser *]
 * Arg:        cm           the codon mapper for this comparison [Wise2_CodonMapper *]
 * Arg:        rmd          random model used for the dna sequence comparison [Wise2_RandomModelDNA *]
 * Arg:        use_syn      whether a synchronous coding model should be used or not [boolean]
 * Arg:        alg          algorithm to use [int]
 * Arg:        bits_cutoff  Undocumented argument [double]
 * Arg:        allN         Undocumented argument [Probability]
 * Arg:        flat_insert  Undocumented argument [boolean]
 * Arg:        report_level Undocumented argument [int]
 * Arg:        die_on_error if true, dies if there is an error [boolean]
 * Arg:        dbsi         Undocumented argument [Wise2_DBSearchImpl *]
 *
 * Returns a newly allocated Hscore structure of the search [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_Hscore_from_TSM_estwise( Wise2_ThreeStateDB * tdb,Wise2_cDNADB * cdb,Wise2_cDNAParser * cp,Wise2_CodonMapper * cm,Wise2_RandomModelDNA * rmd,boolean use_syn,int alg,double bits_cutoff,Probability allN,boolean flat_insert,int report_level,boolean die_on_error,Wise2_DBSearchImpl * dbsi);

/* Function:  Wise2_AlnBlock_from_Protein_estwise_wrap(pro,cdna,cp,cm,ct,comp,gap,ext,is_global,rmd,alg,rm,use_syn,allN,dpri,palpoi)
 *
 * Descrip:    This function is the guts for the est single alignment
 *             mode.
 *
 *             It uses /AlnBlock_from_TSM_estwise_wrap for the
 *             heavy part of the call
 *
 *
 * Arg:        pro          protein to be used in the comparison [Wise2_Protein *]
 * Arg:        cdna         cdna to be compared to [Wise2_cDNA *]
 * Arg:        cp           cdna parser indicating insertion deletion probabilities [Wise2_cDNAParser *]
 * Arg:        cm           codon mapper indicating substitution errors etc [Wise2_CodonMapper *]
 * Arg:        ct           codon table for the codon->amino acid mappings [Wise2_CodonTable *]
 * Arg:        comp         comparison matrix to use [Wise2_CompMat *]
 * Arg:        gap          gap penalty [int]
 * Arg:        ext          extension penalty [int]
 * Arg:        is_global    if true, global start-end in protein is used [boolean]
 * Arg:        rmd          random model of dna to use [Wise2_RandomModelDNA *]
 * Arg:        alg          est algorithm type to use [int]
 * Arg:        rm           random protein model for use with compmat [Wise2_RandomModel *]
 * Arg:        use_syn      if true, uses a synchronous coding model [boolean]
 * Arg:        allN         Undocumented argument [Probability]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 * Arg:        palpoi       the raw packed alignment output if wanted [Wise2_PackAln **]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_AlnBlock_from_Protein_estwise_wrap( Wise2_Protein * pro,Wise2_cDNA * cdna,Wise2_cDNAParser * cp,Wise2_CodonMapper * cm,Wise2_CodonTable * ct,Wise2_CompMat * comp,int gap,int ext,boolean is_global,Wise2_RandomModelDNA * rmd,int alg,Wise2_RandomModel * rm,boolean use_syn,Probability allN,Wise2_DPRunImpl * dpri,Wise2_PackAln ** palpoi);

/* Function:  Wise2_AlnBlock_from_TSM_estwise_wrap(tsm,cdna,cp,cm,ct,rmd,alg,use_syn,force_flat_insert,allN,dpri,palpoi)
 *
 * Descrip:    This function is the basic wrap for Protein models
 *             vs cDNA sequences.
 *
 *
 * Arg:        tsm          threestatemodel to be compared to the dna [Wise2_ThreeStateModel *]
 * Arg:        cdna         cdna to be compared to [Wise2_cDNA *]
 * Arg:        cp           cdna parser indicating insertion deletion probabilities [Wise2_cDNAParser *]
 * Arg:        cm           codon mapper indicating substitution errors etc [Wise2_CodonMapper *]
 * Arg:        ct           codon table for the codon->amino acid mappings [Wise2_CodonTable *]
 * Arg:        rmd          random model of dna to use [Wise2_RandomModelDNA *]
 * Arg:        alg          est algorithm type to use [int]
 * Arg:        use_syn      if true, uses a synchronous coding model [boolean]
 * Arg:        force_flat_insert Undocumented argument [boolean]
 * Arg:        allN         Undocumented argument [Probability]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 * Arg:        palpoi       the raw packed alignment output if wanted [Wise2_PackAln **]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_AlnBlock_from_TSM_estwise_wrap( Wise2_ThreeStateModel * tsm,Wise2_cDNA * cdna,Wise2_cDNAParser * cp,Wise2_CodonMapper * cm,Wise2_CodonTable * ct,Wise2_RandomModelDNA * rmd,int alg,boolean use_syn,boolean force_flat_insert,Probability allN,Wise2_DPRunImpl * dpri,Wise2_PackAln ** palpoi);

/* Function:  Wise2_alg_estwrap_from_string(str)
 *
 * Descrip:    This function returns the algorithm type
 *             for an est search from the string
 *
 *
 * Arg:        str          Undocumented argument [char *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_alg_estwrap_from_string( char * str);



/* Helper functions in the module
 *
 * Wise2_protein2genomic_ascii_display
 * Wise2_protcdna_ascii_display
 *



/* These functions are not associated with an object */
/* Function:  Wise2_protein2genomic_ascii_display(alb,p,gen,ct,name,main,ofp)
 *
 * Descrip:    shows the alignment in alb between protsequence and protname
 *             with genomic into ofp with pretty formatting
 *
 *
 * Arg:        alb          logical alignment [Wise2_AlnBlock *]
 * Arg:        p            protein sequence [Wise2_Protein *]
 * Arg:        gen          genomic dna to do the comparison [Wise2_Genomic *]
 * Arg:        ct           codon table for translation [Wise2_CodonTable *]
 * Arg:        name         length of name block [int]
 * Arg:        main         length of main block [int]
 * Arg:        ofp          output file [FILE *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_protein2genomic_ascii_display( Wise2_AlnBlock * alb,Wise2_Protein * p,Wise2_Genomic * gen,Wise2_CodonTable * ct,int name,int main,FILE * ofp);

/* Function:  Wise2_protcdna_ascii_display(alb,protsequence,protname,protoff,cdna,ct,name,main,mult,ofp)
 *
 * Descrip:    shows the alignment in alb between protsequence and protname
 *             with cdna into ofp with pretty formatting
 *
 *
 * Arg:        alb          logical alignment [Wise2_AlnBlock *]
 * Arg:        protsequence protein sequence - either real or an artifical consensus [char *]
 * Arg:        protname     name of the protein [char *]
 * Arg:        protoff      offset of the alb from the protein [int]
 * Arg:        cdna         cdna of the match [Wise2_cDNA *]
 * Arg:        ct           codon table for translation [Wise2_CodonTable *]
 * Arg:        name         length of name block [int]
 * Arg:        main         length of main block [int]
 * Arg:        mult         is multi-match [boolean]
 * Arg:        ofp          output file [FILE *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_protcdna_ascii_display( Wise2_AlnBlock * alb,char * protsequence,char * protname,int protoff,Wise2_cDNA * cdna,Wise2_CodonTable * ct,int name,int main,boolean mult,FILE * ofp);



/* Functions that create, manipulate or act on GeneFrequency21
 *
 * Wise2_hard_link_GeneFrequency21
 * Wise2_GeneFrequency21_alloc
 * Wise2_replace_ss5_GeneFrequency21
 * Wise2_access_ss5_GeneFrequency21
 * Wise2_replace_ss3_GeneFrequency21
 * Wise2_access_ss3_GeneFrequency21
 * Wise2_free_GeneFrequency21 [destructor]
 *
 */



/* Functions that create, manipulate or act on GeneConsensus
 *
 * Wise2_hard_link_GeneConsensus
 * Wise2_GeneConsensus_alloc_std
 * Wise2_replace_center_GeneConsensus
 * Wise2_access_center_GeneConsensus
 * Wise2_access_gsc_GeneConsensus
 * Wise2_length_gsc_GeneConsensus
 * Wise2_flush_GeneConsensus
 * Wise2_add_GeneConsensus
 * Wise2_free_GeneConsensus [destructor]
 *
 */



/* Functions that create, manipulate or act on GeneSingleCons
 *
 * Wise2_hard_link_GeneSingleCons
 * Wise2_GeneSingleCons_alloc
 * Wise2_replace_string_GeneSingleCons
 * Wise2_access_string_GeneSingleCons
 * Wise2_replace_number_GeneSingleCons
 * Wise2_access_number_GeneSingleCons
 * Wise2_free_GeneSingleCons [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_read_GeneFrequency21_file
 * Wise2_read_GeneFrequency21
 *

/* API for object GeneFrequency21 */
/* Function:  Wise2_hard_link_GeneFrequency21(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GeneFrequency21 *]
 *
 * Returns Undocumented return value [Wise2_GeneFrequency21 *]
 *
 */
Wise2_GeneFrequency21 * Wise2_hard_link_GeneFrequency21( Wise2_GeneFrequency21 * obj);

/* Function:  Wise2_GeneFrequency21_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_GeneFrequency21 *]
 *
 */
Wise2_GeneFrequency21 * Wise2_GeneFrequency21_alloc();

/* Function:  Wise2_replace_ss5_GeneFrequency21(obj,ss5)
 *
 * Descrip:    Replace member variable ss5
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneFrequency21 *]
 * Arg:        ss5          New value of the variable [Wise2_GeneConsensus *]
 *
 * Returns member variable ss5 [boolean]
 *
 */
boolean Wise2_replace_ss5_GeneFrequency21( Wise2_GeneFrequency21 * obj,Wise2_GeneConsensus * ss5);

/* Function:  Wise2_access_ss5_GeneFrequency21(obj)
 *
 * Descrip:    Access member variable ss5
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneFrequency21 *]
 *
 * Returns member variable ss5 [Wise2_GeneConsensus *]
 *
 */
Wise2_GeneConsensus * Wise2_access_ss5_GeneFrequency21( Wise2_GeneFrequency21 * obj);

/* Function:  Wise2_replace_ss3_GeneFrequency21(obj,ss3)
 *
 * Descrip:    Replace member variable ss3
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneFrequency21 *]
 * Arg:        ss3          New value of the variable [Wise2_GeneConsensus *]
 *
 * Returns member variable ss3 [boolean]
 *
 */
boolean Wise2_replace_ss3_GeneFrequency21( Wise2_GeneFrequency21 * obj,Wise2_GeneConsensus * ss3);

/* Function:  Wise2_access_ss3_GeneFrequency21(obj)
 *
 * Descrip:    Access member variable ss3
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneFrequency21 *]
 *
 * Returns member variable ss3 [Wise2_GeneConsensus *]
 *
 */
Wise2_GeneConsensus * Wise2_access_ss3_GeneFrequency21( Wise2_GeneFrequency21 * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GeneFrequency21(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GeneFrequency21 *]
 *
 * Returns Undocumented return value [Wise2_GeneFrequency21 *]
 *
 */
Wise2_GeneFrequency21 * Wise2_free_GeneFrequency21( Wise2_GeneFrequency21 * obj);

/* API for object GeneConsensus */
/* Function:  Wise2_hard_link_GeneConsensus(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GeneConsensus *]
 *
 * Returns Undocumented return value [Wise2_GeneConsensus *]
 *
 */
Wise2_GeneConsensus * Wise2_hard_link_GeneConsensus( Wise2_GeneConsensus * obj);

/* Function:  Wise2_GeneConsensus_alloc_std(void)
 *
 * Descrip:    Equivalent to GeneConsensus_alloc_len(GeneConsensusLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_GeneConsensus *]
 *
 */
Wise2_GeneConsensus * Wise2_GeneConsensus_alloc_std();

/* Function:  Wise2_replace_center_GeneConsensus(obj,center)
 *
 * Descrip:    Replace member variable center
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneConsensus *]
 * Arg:        center       New value of the variable [int]
 *
 * Returns member variable center [boolean]
 *
 */
boolean Wise2_replace_center_GeneConsensus( Wise2_GeneConsensus * obj,int center);

/* Function:  Wise2_access_center_GeneConsensus(obj)
 *
 * Descrip:    Access member variable center
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneConsensus *]
 *
 * Returns member variable center [int]
 *
 */
int Wise2_access_center_GeneConsensus( Wise2_GeneConsensus * obj);

/* Function:  Wise2_access_gsc_GeneConsensus(obj,i)
 *
 * Descrip:    Access members stored in the gsc list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_GeneConsensus *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_GeneSingleCons *]
 *
 */
Wise2_GeneSingleCons * Wise2_access_gsc_GeneConsensus( Wise2_GeneConsensus * obj,int i);

/* Function:  Wise2_length_gsc_GeneConsensus(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_GeneConsensus *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_gsc_GeneConsensus( Wise2_GeneConsensus * obj);

/* Function:  Wise2_flush_GeneConsensus(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_GeneConsensus *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_GeneConsensus( Wise2_GeneConsensus * obj);

/* Function:  Wise2_add_GeneConsensus(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_GeneConsensus *]
 * Arg:        add          Object to add to the list [Wise2_GeneSingleCons *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_GeneConsensus( Wise2_GeneConsensus * obj,Wise2_GeneSingleCons * add);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GeneConsensus(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GeneConsensus *]
 *
 * Returns Undocumented return value [Wise2_GeneConsensus *]
 *
 */
Wise2_GeneConsensus * Wise2_free_GeneConsensus( Wise2_GeneConsensus * obj);

/* API for object GeneSingleCons */
/* Function:  Wise2_hard_link_GeneSingleCons(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GeneSingleCons *]
 *
 * Returns Undocumented return value [Wise2_GeneSingleCons *]
 *
 */
Wise2_GeneSingleCons * Wise2_hard_link_GeneSingleCons( Wise2_GeneSingleCons * obj);

/* Function:  Wise2_GeneSingleCons_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_GeneSingleCons *]
 *
 */
Wise2_GeneSingleCons * Wise2_GeneSingleCons_alloc();

/* Function:  Wise2_replace_string_GeneSingleCons(obj,string)
 *
 * Descrip:    Replace member variable string
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneSingleCons *]
 * Arg:        string       New value of the variable [char *]
 *
 * Returns member variable string [boolean]
 *
 */
boolean Wise2_replace_string_GeneSingleCons( Wise2_GeneSingleCons * obj,char * string);

/* Function:  Wise2_access_string_GeneSingleCons(obj)
 *
 * Descrip:    Access member variable string
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneSingleCons *]
 *
 * Returns member variable string [char *]
 *
 */
char * Wise2_access_string_GeneSingleCons( Wise2_GeneSingleCons * obj);

/* Function:  Wise2_replace_number_GeneSingleCons(obj,number)
 *
 * Descrip:    Replace member variable number
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneSingleCons *]
 * Arg:        number       New value of the variable [double]
 *
 * Returns member variable number [boolean]
 *
 */
boolean Wise2_replace_number_GeneSingleCons( Wise2_GeneSingleCons * obj,double number);

/* Function:  Wise2_access_number_GeneSingleCons(obj)
 *
 * Descrip:    Access member variable number
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_GeneSingleCons *]
 *
 * Returns member variable number [double]
 *
 */
double Wise2_access_number_GeneSingleCons( Wise2_GeneSingleCons * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GeneSingleCons(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GeneSingleCons *]
 *
 * Returns Undocumented return value [Wise2_GeneSingleCons *]
 *
 */
Wise2_GeneSingleCons * Wise2_free_GeneSingleCons( Wise2_GeneSingleCons * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_read_GeneFrequency21_file(filename)
 *
 * Descrip:    Opens the file with /openfile
 *
 *             Reads in a GeneFrequency (Mor-Ewan style)
 *
 *
 *
 * Arg:        filename     will open from WISECONFIGDIR etc via openfile [char *]
 *
 * Returns a newly allocated structure [Wise2_GeneFrequency21 *]
 *
 */
Wise2_GeneFrequency21 * Wise2_read_GeneFrequency21_file( char * filename);

/* Function:  Wise2_read_GeneFrequency21(ifp)
 *
 * Descrip:    Reads in a GeneFrequency (Mor-Ewan style)
 *             file from ifp
 *
 *
 * Arg:        ifp          file pointer [FILE *]
 *
 * Returns a newly allocated structure [Wise2_GeneFrequency21 *]
 *
 */
Wise2_GeneFrequency21 * Wise2_read_GeneFrequency21( FILE * ifp);



/* Functions that create, manipulate or act on GeneParameter21
 *
 * Wise2_hard_link_GeneParameter21
 * Wise2_GeneParameter21_alloc_std
 * Wise2_free_GeneParameter21 [destructor]
 *
 */

/* API for object GeneParameter21 */
/* Function:  Wise2_hard_link_GeneParameter21(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_GeneParameter21 *]
 *
 * Returns Undocumented return value [Wise2_GeneParameter21 *]
 *
 */
Wise2_GeneParameter21 * Wise2_hard_link_GeneParameter21( Wise2_GeneParameter21 * obj);

/* Function:  Wise2_GeneParameter21_alloc_std(void)
 *
 * Descrip:    Equivalent to GeneParameter21_alloc_len(GeneParameter21LISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_GeneParameter21 *]
 *
 */
Wise2_GeneParameter21 * Wise2_GeneParameter21_alloc_std();

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_GeneParameter21(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_GeneParameter21 *]
 *
 * Returns Undocumented return value [Wise2_GeneParameter21 *]
 *
 */
Wise2_GeneParameter21 * Wise2_free_GeneParameter21( Wise2_GeneParameter21 * obj);



/* Functions that create, manipulate or act on MatchSummarySet
 *
 * Wise2_MatchSummarySet_from_AlnBlock_estwise
 * Wise2_MatchSummarySet_from_AlnBlock_genewise
 * Wise2_hard_link_MatchSummarySet
 * Wise2_MatchSummarySet_alloc_std
 * Wise2_access_ms_MatchSummarySet
 * Wise2_length_ms_MatchSummarySet
 * Wise2_flush_MatchSummarySet
 * Wise2_add_MatchSummarySet
 * Wise2_free_MatchSummarySet [destructor]
 *
 */



/* Functions that create, manipulate or act on MatchSummary
 *
 * Wise2_hard_link_MatchSummary
 * Wise2_MatchSummary_alloc
 * Wise2_replace_bits_MatchSummary
 * Wise2_access_bits_MatchSummary
 * Wise2_replace_qname_MatchSummary
 * Wise2_access_qname_MatchSummary
 * Wise2_replace_tname_MatchSummary
 * Wise2_access_tname_MatchSummary
 * Wise2_replace_qstart_MatchSummary
 * Wise2_access_qstart_MatchSummary
 * Wise2_replace_qend_MatchSummary
 * Wise2_access_qend_MatchSummary
 * Wise2_replace_tstart_MatchSummary
 * Wise2_access_tstart_MatchSummary
 * Wise2_replace_tend_MatchSummary
 * Wise2_access_tend_MatchSummary
 * Wise2_replace_qintron_MatchSummary
 * Wise2_access_qintron_MatchSummary
 * Wise2_replace_qframeshift_MatchSummary
 * Wise2_access_qframeshift_MatchSummary
 * Wise2_replace_tintron_MatchSummary
 * Wise2_access_tintron_MatchSummary
 * Wise2_replace_tframeshift_MatchSummary
 * Wise2_access_tframeshift_MatchSummary
 * Wise2_free_MatchSummary [destructor]
 *
 */

/* API for object MatchSummarySet */
/* Function:  Wise2_MatchSummarySet_from_AlnBlock_estwise(alb,qname,offset,target)
 *
 * Descrip:    Builds a MatchSummarySet from a
 *             EstWise alignment. this makes
 *             alot of assumptions about the labels
 *             setc in alb, so make sure it was a 
 *             estwise alignment  - however as you
 *             can notice this is exactly the same 
 *             labels as found in genewise set
 *
 *
 * Arg:        alb          Undocumented argument [Wise2_AlnBlock *]
 * Arg:        qname        Undocumented argument [char *]
 * Arg:        offset       Undocumented argument [int]
 * Arg:        target       Undocumented argument [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_MatchSummarySet *]
 *
 */
Wise2_MatchSummarySet * Wise2_MatchSummarySet_from_AlnBlock_estwise( Wise2_AlnBlock * alb,char * qname,int offset,Wise2_Sequence * target);

/* Function:  Wise2_MatchSummarySet_from_AlnBlock_genewise(alb,qname,protoff,target)
 *
 * Descrip:    Builds a MatchSummarySet from a
 *             GeneWise alignment. this makes
 *             alot of assumptions about the labels
 *             setc in alb, so make sure it was a 
 *             genewise alignment 
 *
 *
 * Arg:        alb          Undocumented argument [Wise2_AlnBlock *]
 * Arg:        qname        Undocumented argument [char *]
 * Arg:        protoff      Undocumented argument [int]
 * Arg:        target       Undocumented argument [Wise2_Sequence *]
 *
 * Returns Undocumented return value [Wise2_MatchSummarySet *]
 *
 */
Wise2_MatchSummarySet * Wise2_MatchSummarySet_from_AlnBlock_genewise( Wise2_AlnBlock * alb,char * qname,int protoff,Wise2_Sequence * target);

/* Function:  Wise2_hard_link_MatchSummarySet(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_MatchSummarySet *]
 *
 * Returns Undocumented return value [Wise2_MatchSummarySet *]
 *
 */
Wise2_MatchSummarySet * Wise2_hard_link_MatchSummarySet( Wise2_MatchSummarySet * obj);

/* Function:  Wise2_MatchSummarySet_alloc_std(void)
 *
 * Descrip:    Equivalent to MatchSummarySet_alloc_len(MatchSummarySetLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_MatchSummarySet *]
 *
 */
Wise2_MatchSummarySet * Wise2_MatchSummarySet_alloc_std();

/* Function:  Wise2_access_ms_MatchSummarySet(obj,i)
 *
 * Descrip:    Access members stored in the ms list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_MatchSummarySet *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_MatchSummary *]
 *
 */
Wise2_MatchSummary * Wise2_access_ms_MatchSummarySet( Wise2_MatchSummarySet * obj,int i);

/* Function:  Wise2_length_ms_MatchSummarySet(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_MatchSummarySet *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_ms_MatchSummarySet( Wise2_MatchSummarySet * obj);

/* Function:  Wise2_flush_MatchSummarySet(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_MatchSummarySet *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_MatchSummarySet( Wise2_MatchSummarySet * obj);

/* Function:  Wise2_add_MatchSummarySet(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_MatchSummarySet *]
 * Arg:        add          Object to add to the list [Wise2_MatchSummary *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_MatchSummarySet( Wise2_MatchSummarySet * obj,Wise2_MatchSummary * add);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_MatchSummarySet(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_MatchSummarySet *]
 *
 * Returns Undocumented return value [Wise2_MatchSummarySet *]
 *
 */
Wise2_MatchSummarySet * Wise2_free_MatchSummarySet( Wise2_MatchSummarySet * obj);

/* API for object MatchSummary */
/* Function:  Wise2_hard_link_MatchSummary(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_MatchSummary *]
 *
 * Returns Undocumented return value [Wise2_MatchSummary *]
 *
 */
Wise2_MatchSummary * Wise2_hard_link_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_MatchSummary_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_MatchSummary *]
 *
 */
Wise2_MatchSummary * Wise2_MatchSummary_alloc();

/* Function:  Wise2_replace_bits_MatchSummary(obj,bits)
 *
 * Descrip:    Replace member variable bits
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        bits         New value of the variable [double]
 *
 * Returns member variable bits [boolean]
 *
 */
boolean Wise2_replace_bits_MatchSummary( Wise2_MatchSummary * obj,double bits);

/* Function:  Wise2_access_bits_MatchSummary(obj)
 *
 * Descrip:    Access member variable bits
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable bits [double]
 *
 */
double Wise2_access_bits_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_qname_MatchSummary(obj,qname)
 *
 * Descrip:    Replace member variable qname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        qname        New value of the variable [char *]
 *
 * Returns member variable qname [boolean]
 *
 */
boolean Wise2_replace_qname_MatchSummary( Wise2_MatchSummary * obj,char * qname);

/* Function:  Wise2_access_qname_MatchSummary(obj)
 *
 * Descrip:    Access member variable qname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable qname [char *]
 *
 */
char * Wise2_access_qname_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_tname_MatchSummary(obj,tname)
 *
 * Descrip:    Replace member variable tname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        tname        New value of the variable [char *]
 *
 * Returns member variable tname [boolean]
 *
 */
boolean Wise2_replace_tname_MatchSummary( Wise2_MatchSummary * obj,char * tname);

/* Function:  Wise2_access_tname_MatchSummary(obj)
 *
 * Descrip:    Access member variable tname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable tname [char *]
 *
 */
char * Wise2_access_tname_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_qstart_MatchSummary(obj,qstart)
 *
 * Descrip:    Replace member variable qstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        qstart       New value of the variable [int]
 *
 * Returns member variable qstart [boolean]
 *
 */
boolean Wise2_replace_qstart_MatchSummary( Wise2_MatchSummary * obj,int qstart);

/* Function:  Wise2_access_qstart_MatchSummary(obj)
 *
 * Descrip:    Access member variable qstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable qstart [int]
 *
 */
int Wise2_access_qstart_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_qend_MatchSummary(obj,qend)
 *
 * Descrip:    Replace member variable qend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        qend         New value of the variable [int]
 *
 * Returns member variable qend [boolean]
 *
 */
boolean Wise2_replace_qend_MatchSummary( Wise2_MatchSummary * obj,int qend);

/* Function:  Wise2_access_qend_MatchSummary(obj)
 *
 * Descrip:    Access member variable qend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable qend [int]
 *
 */
int Wise2_access_qend_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_tstart_MatchSummary(obj,tstart)
 *
 * Descrip:    Replace member variable tstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        tstart       New value of the variable [int]
 *
 * Returns member variable tstart [boolean]
 *
 */
boolean Wise2_replace_tstart_MatchSummary( Wise2_MatchSummary * obj,int tstart);

/* Function:  Wise2_access_tstart_MatchSummary(obj)
 *
 * Descrip:    Access member variable tstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable tstart [int]
 *
 */
int Wise2_access_tstart_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_tend_MatchSummary(obj,tend)
 *
 * Descrip:    Replace member variable tend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        tend         New value of the variable [int]
 *
 * Returns member variable tend [boolean]
 *
 */
boolean Wise2_replace_tend_MatchSummary( Wise2_MatchSummary * obj,int tend);

/* Function:  Wise2_access_tend_MatchSummary(obj)
 *
 * Descrip:    Access member variable tend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable tend [int]
 *
 */
int Wise2_access_tend_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_qintron_MatchSummary(obj,qintron)
 *
 * Descrip:    Replace member variable qintron
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        qintron      New value of the variable [int]
 *
 * Returns member variable qintron [boolean]
 *
 */
boolean Wise2_replace_qintron_MatchSummary( Wise2_MatchSummary * obj,int qintron);

/* Function:  Wise2_access_qintron_MatchSummary(obj)
 *
 * Descrip:    Access member variable qintron
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable qintron [int]
 *
 */
int Wise2_access_qintron_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_qframeshift_MatchSummary(obj,qframeshift)
 *
 * Descrip:    Replace member variable qframeshift
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        qframeshift  New value of the variable [int]
 *
 * Returns member variable qframeshift [boolean]
 *
 */
boolean Wise2_replace_qframeshift_MatchSummary( Wise2_MatchSummary * obj,int qframeshift);

/* Function:  Wise2_access_qframeshift_MatchSummary(obj)
 *
 * Descrip:    Access member variable qframeshift
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable qframeshift [int]
 *
 */
int Wise2_access_qframeshift_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_tintron_MatchSummary(obj,tintron)
 *
 * Descrip:    Replace member variable tintron
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        tintron      New value of the variable [int]
 *
 * Returns member variable tintron [boolean]
 *
 */
boolean Wise2_replace_tintron_MatchSummary( Wise2_MatchSummary * obj,int tintron);

/* Function:  Wise2_access_tintron_MatchSummary(obj)
 *
 * Descrip:    Access member variable tintron
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable tintron [int]
 *
 */
int Wise2_access_tintron_MatchSummary( Wise2_MatchSummary * obj);

/* Function:  Wise2_replace_tframeshift_MatchSummary(obj,tframeshift)
 *
 * Descrip:    Replace member variable tframeshift
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 * Arg:        tframeshift  New value of the variable [int]
 *
 * Returns member variable tframeshift [boolean]
 *
 */
boolean Wise2_replace_tframeshift_MatchSummary( Wise2_MatchSummary * obj,int tframeshift);

/* Function:  Wise2_access_tframeshift_MatchSummary(obj)
 *
 * Descrip:    Access member variable tframeshift
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_MatchSummary *]
 *
 * Returns member variable tframeshift [int]
 *
 */
int Wise2_access_tframeshift_MatchSummary( Wise2_MatchSummary * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_MatchSummary(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_MatchSummary *]
 *
 * Returns Undocumented return value [Wise2_MatchSummary *]
 *
 */
Wise2_MatchSummary * Wise2_free_MatchSummary( Wise2_MatchSummary * obj);



/* Functions that create, manipulate or act on PfamHmmer1DB
 *
 * Wise2_hard_link_PfamHmmer1DB
 * Wise2_PfamHmmer1DB_alloc_std
 * Wise2_access_en_PfamHmmer1DB
 * Wise2_length_en_PfamHmmer1DB
 * Wise2_flush_PfamHmmer1DB
 * Wise2_add_PfamHmmer1DB
 * Wise2_replace_dirname_PfamHmmer1DB
 * Wise2_access_dirname_PfamHmmer1DB
 * Wise2_replace_cur_PfamHmmer1DB
 * Wise2_access_cur_PfamHmmer1DB
 * Wise2_replace_def_PfamHmmer1DB
 * Wise2_access_def_PfamHmmer1DB
 * Wise2_free_PfamHmmer1DB [destructor]
 *
 */



/* Functions that create, manipulate or act on PfamHmmer1Entry
 *
 * Wise2_hard_link_PfamHmmer1Entry
 * Wise2_PfamHmmer1Entry_alloc
 * Wise2_replace_entryname_PfamHmmer1Entry
 * Wise2_access_entryname_PfamHmmer1Entry
 * Wise2_replace_is_random_PfamHmmer1Entry
 * Wise2_access_is_random_PfamHmmer1Entry
 * Wise2_replace_is_hmmls_PfamHmmer1Entry
 * Wise2_access_is_hmmls_PfamHmmer1Entry
 * Wise2_replace_bits_cutoff_PfamHmmer1Entry
 * Wise2_access_bits_cutoff_PfamHmmer1Entry
 * Wise2_free_PfamHmmer1Entry [destructor]
 *
 */

/* API for object PfamHmmer1DB */
/* Function:  Wise2_hard_link_PfamHmmer1DB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_PfamHmmer1DB *]
 *
 * Returns Undocumented return value [Wise2_PfamHmmer1DB *]
 *
 */
Wise2_PfamHmmer1DB * Wise2_hard_link_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* Function:  Wise2_PfamHmmer1DB_alloc_std(void)
 *
 * Descrip:    Equivalent to PfamHmmer1DB_alloc_len(PfamHmmer1DBLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_PfamHmmer1DB *]
 *
 */
Wise2_PfamHmmer1DB * Wise2_PfamHmmer1DB_alloc_std();

/* Function:  Wise2_access_en_PfamHmmer1DB(obj,i)
 *
 * Descrip:    Access members stored in the en list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_PfamHmmer1DB *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_PfamHmmer1Entry *]
 *
 */
Wise2_PfamHmmer1Entry * Wise2_access_en_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj,int i);

/* Function:  Wise2_length_en_PfamHmmer1DB(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_PfamHmmer1DB *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_en_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* Function:  Wise2_flush_PfamHmmer1DB(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_PfamHmmer1DB *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* Function:  Wise2_add_PfamHmmer1DB(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_PfamHmmer1DB *]
 * Arg:        add          Object to add to the list [Wise2_PfamHmmer1Entry *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj,Wise2_PfamHmmer1Entry * add);

/* Function:  Wise2_replace_dirname_PfamHmmer1DB(obj,dirname)
 *
 * Descrip:    Replace member variable dirname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1DB *]
 * Arg:        dirname      New value of the variable [char *]
 *
 * Returns member variable dirname [boolean]
 *
 */
boolean Wise2_replace_dirname_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj,char * dirname);

/* Function:  Wise2_access_dirname_PfamHmmer1DB(obj)
 *
 * Descrip:    Access member variable dirname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1DB *]
 *
 * Returns member variable dirname [char *]
 *
 */
char * Wise2_access_dirname_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* Function:  Wise2_replace_cur_PfamHmmer1DB(obj,cur)
 *
 * Descrip:    Replace member variable cur
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1DB *]
 * Arg:        cur          New value of the variable [int]
 *
 * Returns member variable cur [boolean]
 *
 */
boolean Wise2_replace_cur_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj,int cur);

/* Function:  Wise2_access_cur_PfamHmmer1DB(obj)
 *
 * Descrip:    Access member variable cur
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1DB *]
 *
 * Returns member variable cur [int]
 *
 */
int Wise2_access_cur_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* Function:  Wise2_replace_def_PfamHmmer1DB(obj,def)
 *
 * Descrip:    Replace member variable def
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1DB *]
 * Arg:        def          New value of the variable [Wise2_RandomModel *]
 *
 * Returns member variable def [boolean]
 *
 */
boolean Wise2_replace_def_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj,Wise2_RandomModel * def);

/* Function:  Wise2_access_def_PfamHmmer1DB(obj)
 *
 * Descrip:    Access member variable def
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1DB *]
 *
 * Returns member variable def [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_access_def_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_PfamHmmer1DB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_PfamHmmer1DB *]
 *
 * Returns Undocumented return value [Wise2_PfamHmmer1DB *]
 *
 */
Wise2_PfamHmmer1DB * Wise2_free_PfamHmmer1DB( Wise2_PfamHmmer1DB * obj);

/* API for object PfamHmmer1Entry */
/* Function:  Wise2_hard_link_PfamHmmer1Entry(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_PfamHmmer1Entry *]
 *
 * Returns Undocumented return value [Wise2_PfamHmmer1Entry *]
 *
 */
Wise2_PfamHmmer1Entry * Wise2_hard_link_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj);

/* Function:  Wise2_PfamHmmer1Entry_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_PfamHmmer1Entry *]
 *
 */
Wise2_PfamHmmer1Entry * Wise2_PfamHmmer1Entry_alloc();

/* Function:  Wise2_replace_entryname_PfamHmmer1Entry(obj,entryname)
 *
 * Descrip:    Replace member variable entryname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 * Arg:        entryname    New value of the variable [char *]
 *
 * Returns member variable entryname [boolean]
 *
 */
boolean Wise2_replace_entryname_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj,char * entryname);

/* Function:  Wise2_access_entryname_PfamHmmer1Entry(obj)
 *
 * Descrip:    Access member variable entryname
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 *
 * Returns member variable entryname [char *]
 *
 */
char * Wise2_access_entryname_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj);

/* Function:  Wise2_replace_is_random_PfamHmmer1Entry(obj,is_random)
 *
 * Descrip:    Replace member variable is_random
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 * Arg:        is_random    New value of the variable [boolean]
 *
 * Returns member variable is_random [boolean]
 *
 */
boolean Wise2_replace_is_random_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj,boolean is_random);

/* Function:  Wise2_access_is_random_PfamHmmer1Entry(obj)
 *
 * Descrip:    Access member variable is_random
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 *
 * Returns member variable is_random [boolean]
 *
 */
boolean Wise2_access_is_random_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj);

/* Function:  Wise2_replace_is_hmmls_PfamHmmer1Entry(obj,is_hmmls)
 *
 * Descrip:    Replace member variable is_hmmls
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 * Arg:        is_hmmls     New value of the variable [boolean]
 *
 * Returns member variable is_hmmls [boolean]
 *
 */
boolean Wise2_replace_is_hmmls_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj,boolean is_hmmls);

/* Function:  Wise2_access_is_hmmls_PfamHmmer1Entry(obj)
 *
 * Descrip:    Access member variable is_hmmls
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 *
 * Returns member variable is_hmmls [boolean]
 *
 */
boolean Wise2_access_is_hmmls_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj);

/* Function:  Wise2_replace_bits_cutoff_PfamHmmer1Entry(obj,bits_cutoff)
 *
 * Descrip:    Replace member variable bits_cutoff
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 * Arg:        bits_cutoff  New value of the variable [double]
 *
 * Returns member variable bits_cutoff [boolean]
 *
 */
boolean Wise2_replace_bits_cutoff_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj,double bits_cutoff);

/* Function:  Wise2_access_bits_cutoff_PfamHmmer1Entry(obj)
 *
 * Descrip:    Access member variable bits_cutoff
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_PfamHmmer1Entry *]
 *
 * Returns member variable bits_cutoff [double]
 *
 */
double Wise2_access_bits_cutoff_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_PfamHmmer1Entry(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_PfamHmmer1Entry *]
 *
 * Returns Undocumented return value [Wise2_PfamHmmer1Entry *]
 *
 */
Wise2_PfamHmmer1Entry * Wise2_free_PfamHmmer1Entry( Wise2_PfamHmmer1Entry * obj);



/* Helper functions in the module
 *
 * Wise2_write_pretty_str_align
 * Wise2_write_pretty_seq_align
 * Wise2_write_pretty_Protein_align
 *



/* These functions are not associated with an object */
/* Function:  Wise2_write_pretty_str_align(alb,qname,query,tname,target,name,main,ofp)
 *
 * Descrip:    This gives an interface into the alignment
 *             display using strings and files.
 *
 *
 * Arg:        alb          alignment structure [Wise2_AlnBlock *]
 * Arg:        qname        name of first sequence [char *]
 * Arg:        query        first sequence [char *]
 * Arg:        tname        name of second sequence [char *]
 * Arg:        target       second sequence [char *]
 * Arg:        name         length of the name block [int]
 * Arg:        main         length of the main block [int]
 * Arg:        ofp          output file [FILE *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_write_pretty_str_align( Wise2_AlnBlock * alb,char * qname,char * query,char * tname,char * target,int name,int main,FILE * ofp);

/* Function:  Wise2_write_pretty_seq_align(alb,q,t,name,main,ofp)
 *
 * Descrip:    This gives an interface into the alignment
 *             display using sequences and files. A more
 *             generic function is write_pretty_str_align
 *
 *
 * Arg:        alb          alignment structure [Wise2_AlnBlock *]
 * Arg:        q            first sequence [Wise2_Sequence *]
 * Arg:        t            second sequence  [Wise2_Sequence *]
 * Arg:        name         length of the name block [int]
 * Arg:        main         length of the main block [int]
 * Arg:        ofp          output file [FILE *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_write_pretty_seq_align( Wise2_AlnBlock * alb,Wise2_Sequence * q,Wise2_Sequence * t,int name,int main,FILE * ofp);

/* Function:  Wise2_write_pretty_Protein_align(alb,q,t,name,main,ofp)
 *
 * Descrip:    This gives an interface into the
 *             alignment display using Protein
 *             objects
 *
 *
 * Arg:        alb          alignment structure [Wise2_AlnBlock *]
 * Arg:        q            first sequence [Wise2_Protein *]
 * Arg:        t            second sequence  [Wise2_Protein *]
 * Arg:        name         length of the name block [int]
 * Arg:        main         length of the main block [int]
 * Arg:        ofp          output file [FILE *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_write_pretty_Protein_align( Wise2_AlnBlock * alb,Wise2_Protein * q,Wise2_Protein * t,int name,int main,FILE * ofp);



/* Functions that create, manipulate or act on DnaSequenceHitList
 *
 * Wise2_show_DnaSequenceHitList
 * Wise2_read_MSPcrunch_DnaSequenceHitList
 * Wise2_hard_link_DnaSequenceHitList
 * Wise2_DnaSequenceHitList_alloc
 * Wise2_replace_forward_DnaSequenceHitList
 * Wise2_access_forward_DnaSequenceHitList
 * Wise2_replace_backward_DnaSequenceHitList
 * Wise2_access_backward_DnaSequenceHitList
 * Wise2_free_DnaSequenceHitList [destructor]
 *
 */



/* Functions that create, manipulate or act on SegmentHitList
 *
 * Wise2_hard_link_SegmentHitList
 * Wise2_SegmentHitList_alloc_std
 * Wise2_access_seghit_SegmentHitList
 * Wise2_length_seghit_SegmentHitList
 * Wise2_flush_SegmentHitList
 * Wise2_add_SegmentHitList
 * Wise2_free_SegmentHitList [destructor]
 *
 */



/* Functions that create, manipulate or act on SegmentHit
 *
 * Wise2_hard_link_SegmentHit
 * Wise2_SegmentHit_alloc
 * Wise2_replace_name_SegmentHit
 * Wise2_access_name_SegmentHit
 * Wise2_replace_qstart_SegmentHit
 * Wise2_access_qstart_SegmentHit
 * Wise2_replace_qend_SegmentHit
 * Wise2_access_qend_SegmentHit
 * Wise2_replace_tstart_SegmentHit
 * Wise2_access_tstart_SegmentHit
 * Wise2_replace_tend_SegmentHit
 * Wise2_access_tend_SegmentHit
 * Wise2_replace_score_SegmentHit
 * Wise2_access_score_SegmentHit
 * Wise2_replace_next_hit_SegmentHit
 * Wise2_access_next_hit_SegmentHit
 * Wise2_free_SegmentHit [destructor]
 *
 */

/* API for object DnaSequenceHitList */
/* Function:  Wise2_show_DnaSequenceHitList(dsl,ofp)
 *
 * Descrip:    shows a DnaSequenceHitsList -
 *
 *             only really useful for debugging
 *
 *
 * Arg:        dsl          Undocumented argument [Wise2_DnaSequenceHitList *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_show_DnaSequenceHitList( Wise2_DnaSequenceHitList * dsl,FILE * ofp);

/* Function:  Wise2_read_MSPcrunch_DnaSequenceHitList(ifp)
 *
 * Descrip:    Reads a MSPcrunch -x output file 
 *
 *
 * Arg:        ifp          input file to read [FILE *]
 *
 * Returns newly allocated structure [Wise2_DnaSequenceHitList *]
 *
 */
Wise2_DnaSequenceHitList * Wise2_read_MSPcrunch_DnaSequenceHitList( FILE * ifp);

/* Function:  Wise2_hard_link_DnaSequenceHitList(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_DnaSequenceHitList *]
 *
 * Returns Undocumented return value [Wise2_DnaSequenceHitList *]
 *
 */
Wise2_DnaSequenceHitList * Wise2_hard_link_DnaSequenceHitList( Wise2_DnaSequenceHitList * obj);

/* Function:  Wise2_DnaSequenceHitList_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_DnaSequenceHitList *]
 *
 */
Wise2_DnaSequenceHitList * Wise2_DnaSequenceHitList_alloc();

/* Function:  Wise2_replace_forward_DnaSequenceHitList(obj,forward)
 *
 * Descrip:    Replace member variable forward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DnaSequenceHitList *]
 * Arg:        forward      New value of the variable [Wise2_SegmentHitList *]
 *
 * Returns member variable forward [boolean]
 *
 */
boolean Wise2_replace_forward_DnaSequenceHitList( Wise2_DnaSequenceHitList * obj,Wise2_SegmentHitList * forward);

/* Function:  Wise2_access_forward_DnaSequenceHitList(obj)
 *
 * Descrip:    Access member variable forward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DnaSequenceHitList *]
 *
 * Returns member variable forward [Wise2_SegmentHitList *]
 *
 */
Wise2_SegmentHitList * Wise2_access_forward_DnaSequenceHitList( Wise2_DnaSequenceHitList * obj);

/* Function:  Wise2_replace_backward_DnaSequenceHitList(obj,backward)
 *
 * Descrip:    Replace member variable backward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DnaSequenceHitList *]
 * Arg:        backward     New value of the variable [Wise2_SegmentHitList *]
 *
 * Returns member variable backward [boolean]
 *
 */
boolean Wise2_replace_backward_DnaSequenceHitList( Wise2_DnaSequenceHitList * obj,Wise2_SegmentHitList * backward);

/* Function:  Wise2_access_backward_DnaSequenceHitList(obj)
 *
 * Descrip:    Access member variable backward
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_DnaSequenceHitList *]
 *
 * Returns member variable backward [Wise2_SegmentHitList *]
 *
 */
Wise2_SegmentHitList * Wise2_access_backward_DnaSequenceHitList( Wise2_DnaSequenceHitList * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_DnaSequenceHitList(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_DnaSequenceHitList *]
 *
 * Returns Undocumented return value [Wise2_DnaSequenceHitList *]
 *
 */
Wise2_DnaSequenceHitList * Wise2_free_DnaSequenceHitList( Wise2_DnaSequenceHitList * obj);

/* API for object SegmentHitList */
/* Function:  Wise2_hard_link_SegmentHitList(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_SegmentHitList *]
 *
 * Returns Undocumented return value [Wise2_SegmentHitList *]
 *
 */
Wise2_SegmentHitList * Wise2_hard_link_SegmentHitList( Wise2_SegmentHitList * obj);

/* Function:  Wise2_SegmentHitList_alloc_std(void)
 *
 * Descrip:    Equivalent to SegmentHitList_alloc_len(SegmentHitListLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_SegmentHitList *]
 *
 */
Wise2_SegmentHitList * Wise2_SegmentHitList_alloc_std();

/* Function:  Wise2_access_seghit_SegmentHitList(obj,i)
 *
 * Descrip:    Access members stored in the seghit list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_SegmentHitList *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_SegmentHit *]
 *
 */
Wise2_SegmentHit * Wise2_access_seghit_SegmentHitList( Wise2_SegmentHitList * obj,int i);

/* Function:  Wise2_length_seghit_SegmentHitList(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_SegmentHitList *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_seghit_SegmentHitList( Wise2_SegmentHitList * obj);

/* Function:  Wise2_flush_SegmentHitList(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_SegmentHitList *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_SegmentHitList( Wise2_SegmentHitList * obj);

/* Function:  Wise2_add_SegmentHitList(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_SegmentHitList *]
 * Arg:        add          Object to add to the list [Wise2_SegmentHit *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_SegmentHitList( Wise2_SegmentHitList * obj,Wise2_SegmentHit * add);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_SegmentHitList(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_SegmentHitList *]
 *
 * Returns Undocumented return value [Wise2_SegmentHitList *]
 *
 */
Wise2_SegmentHitList * Wise2_free_SegmentHitList( Wise2_SegmentHitList * obj);

/* API for object SegmentHit */
/* Function:  Wise2_hard_link_SegmentHit(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_SegmentHit *]
 *
 * Returns Undocumented return value [Wise2_SegmentHit *]
 *
 */
Wise2_SegmentHit * Wise2_hard_link_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_SegmentHit_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_SegmentHit *]
 *
 */
Wise2_SegmentHit * Wise2_SegmentHit_alloc();

/* Function:  Wise2_replace_name_SegmentHit(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_SegmentHit( Wise2_SegmentHit * obj,char * name);

/* Function:  Wise2_access_name_SegmentHit(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_replace_qstart_SegmentHit(obj,qstart)
 *
 * Descrip:    Replace member variable qstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        qstart       New value of the variable [int]
 *
 * Returns member variable qstart [boolean]
 *
 */
boolean Wise2_replace_qstart_SegmentHit( Wise2_SegmentHit * obj,int qstart);

/* Function:  Wise2_access_qstart_SegmentHit(obj)
 *
 * Descrip:    Access member variable qstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable qstart [int]
 *
 */
int Wise2_access_qstart_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_replace_qend_SegmentHit(obj,qend)
 *
 * Descrip:    Replace member variable qend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        qend         New value of the variable [int]
 *
 * Returns member variable qend [boolean]
 *
 */
boolean Wise2_replace_qend_SegmentHit( Wise2_SegmentHit * obj,int qend);

/* Function:  Wise2_access_qend_SegmentHit(obj)
 *
 * Descrip:    Access member variable qend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable qend [int]
 *
 */
int Wise2_access_qend_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_replace_tstart_SegmentHit(obj,tstart)
 *
 * Descrip:    Replace member variable tstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        tstart       New value of the variable [int]
 *
 * Returns member variable tstart [boolean]
 *
 */
boolean Wise2_replace_tstart_SegmentHit( Wise2_SegmentHit * obj,int tstart);

/* Function:  Wise2_access_tstart_SegmentHit(obj)
 *
 * Descrip:    Access member variable tstart
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable tstart [int]
 *
 */
int Wise2_access_tstart_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_replace_tend_SegmentHit(obj,tend)
 *
 * Descrip:    Replace member variable tend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        tend         New value of the variable [int]
 *
 * Returns member variable tend [boolean]
 *
 */
boolean Wise2_replace_tend_SegmentHit( Wise2_SegmentHit * obj,int tend);

/* Function:  Wise2_access_tend_SegmentHit(obj)
 *
 * Descrip:    Access member variable tend
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable tend [int]
 *
 */
int Wise2_access_tend_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_replace_score_SegmentHit(obj,score)
 *
 * Descrip:    Replace member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        score        New value of the variable [double]
 *
 * Returns member variable score [boolean]
 *
 */
boolean Wise2_replace_score_SegmentHit( Wise2_SegmentHit * obj,double score);

/* Function:  Wise2_access_score_SegmentHit(obj)
 *
 * Descrip:    Access member variable score
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable score [double]
 *
 */
double Wise2_access_score_SegmentHit( Wise2_SegmentHit * obj);

/* Function:  Wise2_replace_next_hit_SegmentHit(obj,next_hit)
 *
 * Descrip:    Replace member variable next_hit
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 * Arg:        next_hit     New value of the variable [Wise2_SegmentHit *]
 *
 * Returns member variable next_hit [boolean]
 *
 */
boolean Wise2_replace_next_hit_SegmentHit( Wise2_SegmentHit * obj,Wise2_SegmentHit * next_hit);

/* Function:  Wise2_access_next_hit_SegmentHit(obj)
 *
 * Descrip:    Access member variable next_hit
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_SegmentHit *]
 *
 * Returns member variable next_hit [Wise2_SegmentHit *]
 *
 */
Wise2_SegmentHit * Wise2_access_next_hit_SegmentHit( Wise2_SegmentHit * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_SegmentHit(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_SegmentHit *]
 *
 * Returns Undocumented return value [Wise2_SegmentHit *]
 *
 */
Wise2_SegmentHit * Wise2_free_SegmentHit( Wise2_SegmentHit * obj);



/* Helper functions in the module
 *
 * Wise2_Align_strings_ProteinSmithWaterman
 * Wise2_Align_Sequences_ProteinSmithWaterman
 * Wise2_Align_Proteins_SmithWaterman
 * Wise2_Align_Proteins_ABC
 * Wise2_Align_Sequences_ProteinABC
 * Wise2_Hscore_from_ProteinSW
 * Wise2_Hscore_from_ProteinABC
 * Wise2_Hscore_from_ProteinBA
 *



/* These functions are not associated with an object */
/* Function:  Wise2_Align_strings_ProteinSmithWaterman(one,two,comp,gap,ext,dpenv,dpri)
 *
 * Descrip:    This is the most *stupidly* abstracted view of two sequences
 *             getting aligned, being two strings.
 *
 *             It would be much better if you used Sequence objects or Protein
 *             objects to carry the proteins.
 *
 *
 * Arg:        one          string of the first sequence [char *]
 * Arg:        two          string of the second sequence [char *]
 * Arg:        comp         Comparison Matrix [Wise2_CompMat *]
 * Arg:        gap          gap penalty [int]
 * Arg:        ext          extension penalty [int]
 * Arg:        dpenv        Undocumented argument [Wise2_DPEnvelope *]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_Align_strings_ProteinSmithWaterman( char * one,char * two,Wise2_CompMat * comp,int gap,int ext,Wise2_DPEnvelope * dpenv,Wise2_DPRunImpl * dpri);

/* Function:  Wise2_Align_Sequences_ProteinSmithWaterman(one,two,comp,gap,ext,dpenv,dpri)
 *
 * Descrip:    This function is a mid-level abstraction of
 *             comparing two sequences, which could be
 *             generic types (eg DNA!). This is tested
 *             for and warnings are given but the alignment
 *             is still calculated. To prevent this test
 *             warning either make sure the Sequence types
 *             are set to PROTEIN or, better still, use the
 *             high level abstraction Align_Proteins_SmithWaterman
 *
 *             Otherwise this performs a standard smith waterman
 *             protein alignment...
 *
 *             To display the alignment use  write_pretty_seq_align
 *
 *
 * Arg:        one          First sequence to compare [Wise2_Sequence *]
 * Arg:        two          Second sequecne to compare [Wise2_Sequence *]
 * Arg:        comp         Comparison matrix to use [Wise2_CompMat *]
 * Arg:        gap          gap penalty. Must be negative or 0 [int]
 * Arg:        ext          ext penalty. Must be negative or 0 [int]
 * Arg:        dpenv        Undocumented argument [Wise2_DPEnvelope *]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 *
 * Returns new AlnBlock structure representing the alignment [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_Align_Sequences_ProteinSmithWaterman( Wise2_Sequence * one,Wise2_Sequence * two,Wise2_CompMat * comp,int gap,int ext,Wise2_DPEnvelope * dpenv,Wise2_DPRunImpl * dpri);

/* Function:  Wise2_Align_Proteins_SmithWaterman(one,two,comp,gap,ext,dpenv,dpri)
 *
 * Descrip:    This is the most correct way of aligning two Proteins,
 *             using Protein objects, which can be assummed to be
 *             proteins with no objections
 *
 *             To display the alignment use write_pretty_Protein_align
 *
 *
 *
 * Arg:        one          Protein to align [Wise2_Protein *]
 * Arg:        two          Protein to align [Wise2_Protein *]
 * Arg:        comp         Comparison Matrix [Wise2_CompMat *]
 * Arg:        gap          gap penalty [int]
 * Arg:        ext          extension penalty [int]
 * Arg:        dpenv        Undocumented argument [Wise2_DPEnvelope *]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_Align_Proteins_SmithWaterman( Wise2_Protein * one,Wise2_Protein * two,Wise2_CompMat * comp,int gap,int ext,Wise2_DPEnvelope * dpenv,Wise2_DPRunImpl * dpri);

/* Function:  Wise2_Align_Proteins_ABC(one,two,comp,a,b,c,dpenv,dpri)
 *
 * Descrip:    Analogous to Align_Proteins_SmithWaterman for ABC model
 *
 *
 * Arg:        one          protein to align [Wise2_Protein *]
 * Arg:        two          protein to align [Wise2_Protein *]
 * Arg:        comp         comparison matrix [Wise2_CompMat *]
 * Arg:        a            generalized affine gap cost a [int]
 * Arg:        b            generalized affine gap cost b [int]
 * Arg:        c            generalized affine gap cost c [int]
 * Arg:        dpenv        Undocumented argument [Wise2_DPEnvelope *]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_Align_Proteins_ABC( Wise2_Protein * one,Wise2_Protein * two,Wise2_CompMat * comp,int a,int b,int c,Wise2_DPEnvelope * dpenv,Wise2_DPRunImpl * dpri);

/* Function:  Wise2_Align_Sequences_ProteinABC(one,two,comp,a,b,c,dpenv,dpri)
 *
 * Descrip:    Align_Sequences_ProteinABC
 *             this function is analogous to Align_Sequences_ProteinSmithWaterman
 *             but using the abc model
 *
 *
 * Arg:        one          Sequence to align [Wise2_Sequence *]
 * Arg:        two          Sequence to align [Wise2_Sequence *]
 * Arg:        comp         Comparison Matrix [Wise2_CompMat *]
 * Arg:        a            genearlized affine gap cost  [int]
 * Arg:        b            genearlized affine gap cost  [int]
 * Arg:        c            genearlized affine gap cost  [int]
 * Arg:        dpenv        Undocumented argument [Wise2_DPEnvelope *]
 * Arg:        dpri         Undocumented argument [Wise2_DPRunImpl *]
 *
 * Returns Undocumented return value [Wise2_AlnBlock *]
 *
 */
Wise2_AlnBlock * Wise2_Align_Sequences_ProteinABC( Wise2_Sequence * one,Wise2_Sequence * two,Wise2_CompMat * comp,int a,int b,int c,Wise2_DPEnvelope * dpenv,Wise2_DPRunImpl * dpri);

/* Function:  Wise2_Hscore_from_ProteinSW(querydb,targetdb,comp,gap,ext,bits_cutoff,report_level,die_on_error,dbsi)
 *
 * Descrip:    Runs a database psw search 
 *
 *
 * Arg:        querydb      query database  [Wise2_ProteinDB*]
 * Arg:        targetdb     target database [Wise2_ProteinDB*]
 * Arg:        comp         comparison matrix [Wise2_CompMat*]
 * Arg:        gap          gap penalty [int]
 * Arg:        ext          extension penalty [int]
 * Arg:        bits_cutoff   [double]
 * Arg:        report_level  [int]
 * Arg:        die_on_error  [boolean]
 * Arg:        dbsi          [Wise2_DBSearchImpl*]
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_Hscore_from_ProteinSW( Wise2_ProteinDB* querydb,Wise2_ProteinDB* targetdb,Wise2_CompMat* comp,int gap,int ext,double bits_cutoff,int report_level,boolean die_on_error,Wise2_DBSearchImpl* dbsi);

/* Function:  Wise2_Hscore_from_ProteinABC(querydb,targetdb,comp,a,b,c,bits_cutoff,report_level,die_on_error,dbsi)
 *
 * Descrip:    Runs a database abc search 
 *
 *
 * Arg:        querydb      query database  [Wise2_ProteinDB*]
 * Arg:        targetdb     target database [Wise2_ProteinDB*]
 * Arg:        comp         comparison matrix [Wise2_CompMat*]
 * Arg:        a            generalized affine gap cost a [int]
 * Arg:        b            generalized affine gap cost b [int]
 * Arg:        c            generalized affine gap cost c [int]
 * Arg:        bits_cutoff   [double]
 * Arg:        report_level  [int]
 * Arg:        die_on_error  [boolean]
 * Arg:        dbsi          [Wise2_DBSearchImpl*]
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_Hscore_from_ProteinABC( Wise2_ProteinDB* querydb,Wise2_ProteinDB* targetdb,Wise2_CompMat* comp,int a,int b,int c,double bits_cutoff,int report_level,boolean die_on_error,Wise2_DBSearchImpl* dbsi);

/* Function:  Wise2_Hscore_from_ProteinBA(querydb,targetdb,comp,bentry,bexit,bfor_trans,b_self_trans,b3exit,bits_cutoff,report_level,dbsi)
 *
 * Descrip:    Runs a database pba search
 *
 *
 * Arg:        querydb      query database [Wise2_ProteinDB*]
 * Arg:        targetdb     target database [Wise2_ProteinDB*]
 * Arg:        comp         comparison matrix [Wise2_CompMat*]
 * Arg:        bentry        [Score]
 * Arg:        bexit         [Score]
 * Arg:        bfor_trans    [Score]
 * Arg:        b_self_trans  [Score]
 * Arg:        b3exit        [Score]
 * Arg:        bits_cutoff   [double]
 * Arg:        report_level  [int]
 * Arg:        dbsi          [Wise2_DBSearchImpl*]
 *
 * Returns Undocumented return value [Wise2_Hscore *]
 *
 */
Wise2_Hscore * Wise2_Hscore_from_ProteinBA( Wise2_ProteinDB* querydb,Wise2_ProteinDB* targetdb,Wise2_CompMat* comp,Score bentry,Score bexit,Score bfor_trans,Score b_self_trans,Score b3exit,double bits_cutoff,int report_level,Wise2_DBSearchImpl* dbsi);



/* Functions that create, manipulate or act on ThreeStateDB
 *
 * Wise2_indexed_ThreeStateModel_ThreeStateDB
 * Wise2_new_proteindb_ThreeStateDB
 * Wise2_new_PfamHmmer1DB_ThreeStateDB
 * Wise2_new_single_ThreeStateDB
 * Wise2_hard_link_ThreeStateDB
 * Wise2_ThreeStateDB_alloc
 * Wise2_replace_dbtype_ThreeStateDB
 * Wise2_access_dbtype_ThreeStateDB
 * Wise2_replace_filename_ThreeStateDB
 * Wise2_access_filename_ThreeStateDB
 * Wise2_free_ThreeStateDB [destructor]
 *
 */

/* API for object ThreeStateDB */
/* Function:  Wise2_indexed_ThreeStateModel_ThreeStateDB(mdb,en)
 *
 * Descrip:    Retrieves a model from a database which has been opened
 *             for indexing by /open_for_indexing_ThreeStateDB
 *
 *             The index information comes from the dataentry which should 
 *             have been from a search of the ThreeStateDB.
 *
 *
 * Arg:        mdb          database where this is indexed [Wise2_ThreeStateDB *]
 * Arg:        en           dataentry to pull the model from [Wise2_DataEntry *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_indexed_ThreeStateModel_ThreeStateDB( Wise2_ThreeStateDB * mdb,Wise2_DataEntry * en);

/* Function:  Wise2_new_proteindb_ThreeStateDB(sdb,comp,gap,ext)
 *
 * Descrip:    makes a new ThreeStateDB from a
 *             sequencedb (better be protein!)
 *
 *
 *
 * Arg:        sdb          sequence database to use [Wise2_SequenceDB *]
 * Arg:        comp         comparison matrix to use [Wise2_CompMat *]
 * Arg:        gap          gap open penalty [int]
 * Arg:        ext          gap extensions penalty [int]
 *
 * Returns Undocumented return value [Wise2_ThreeStateDB *]
 *
 */
Wise2_ThreeStateDB * Wise2_new_proteindb_ThreeStateDB( Wise2_SequenceDB * sdb,Wise2_CompMat * comp,int gap,int ext);

/* Function:  Wise2_new_PfamHmmer1DB_ThreeStateDB(dirname)
 *
 * Descrip:    Makes a new PfamHmmer1DB from a filename
 *             indicating the directory
 *
 *
 * Arg:        dirname      Undocumented argument [char *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateDB *]
 *
 */
Wise2_ThreeStateDB * Wise2_new_PfamHmmer1DB_ThreeStateDB( char * dirname);

/* Function:  Wise2_new_single_ThreeStateDB(tsm,rm)
 *
 * Descrip:    Making a new ThreeStateDB from a single
 *             model
 *
 *
 *
 * Arg:        tsm          a single ThreeStateModel [Wise2_ThreeStateModel *]
 * Arg:        rm           random model to be used in comparisons.. [Wise2_RandomModel *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateDB *]
 *
 */
Wise2_ThreeStateDB * Wise2_new_single_ThreeStateDB( Wise2_ThreeStateModel * tsm,Wise2_RandomModel * rm);

/* Function:  Wise2_hard_link_ThreeStateDB(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_ThreeStateDB *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateDB *]
 *
 */
Wise2_ThreeStateDB * Wise2_hard_link_ThreeStateDB( Wise2_ThreeStateDB * obj);

/* Function:  Wise2_ThreeStateDB_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_ThreeStateDB *]
 *
 */
Wise2_ThreeStateDB * Wise2_ThreeStateDB_alloc();

/* Function:  Wise2_replace_dbtype_ThreeStateDB(obj,dbtype)
 *
 * Descrip:    Replace member variable dbtype
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateDB *]
 * Arg:        dbtype       New value of the variable [int]
 *
 * Returns member variable dbtype [boolean]
 *
 */
boolean Wise2_replace_dbtype_ThreeStateDB( Wise2_ThreeStateDB * obj,int dbtype);

/* Function:  Wise2_access_dbtype_ThreeStateDB(obj)
 *
 * Descrip:    Access member variable dbtype
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateDB *]
 *
 * Returns member variable dbtype [int]
 *
 */
int Wise2_access_dbtype_ThreeStateDB( Wise2_ThreeStateDB * obj);

/* Function:  Wise2_replace_filename_ThreeStateDB(obj,filename)
 *
 * Descrip:    Replace member variable filename
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateDB *]
 * Arg:        filename     New value of the variable [char *]
 *
 * Returns member variable filename [boolean]
 *
 */
boolean Wise2_replace_filename_ThreeStateDB( Wise2_ThreeStateDB * obj,char * filename);

/* Function:  Wise2_access_filename_ThreeStateDB(obj)
 *
 * Descrip:    Access member variable filename
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateDB *]
 *
 * Returns member variable filename [char *]
 *
 */
char * Wise2_access_filename_ThreeStateDB( Wise2_ThreeStateDB * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_ThreeStateDB(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_ThreeStateDB *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateDB *]
 *
 */
Wise2_ThreeStateDB * Wise2_free_ThreeStateDB( Wise2_ThreeStateDB * obj);



/* Functions that create, manipulate or act on ThreeStateModel
 *
 * Wise2_force_global_model
 * Wise2_force_weighted_local_model
 * Wise2_ThreeStateModel_from_half_bit_Sequence
 * Wise2_write_HMMer_1_7_ascii_ThreeStateModel
 * Wise2_hard_link_ThreeStateModel
 * Wise2_ThreeStateModel_alloc_std
 * Wise2_replace_name_ThreeStateModel
 * Wise2_access_name_ThreeStateModel
 * Wise2_access_unit_ThreeStateModel
 * Wise2_length_unit_ThreeStateModel
 * Wise2_flush_ThreeStateModel
 * Wise2_add_ThreeStateModel
 * Wise2_replace_alphabet_ThreeStateModel
 * Wise2_access_alphabet_ThreeStateModel
 * Wise2_replace_accession_ThreeStateModel
 * Wise2_access_accession_ThreeStateModel
 * Wise2_replace_threshold_ThreeStateModel
 * Wise2_access_threshold_ThreeStateModel
 * Wise2_replace_rm_ThreeStateModel
 * Wise2_access_rm_ThreeStateModel
 * Wise2_free_ThreeStateModel [destructor]
 *
 */



/* Functions that create, manipulate or act on ThreeStateUnit
 *
 * Wise2_hard_link_ThreeStateUnit
 * Wise2_ThreeStateUnit_alloc
 * Wise2_replace_display_char_ThreeStateUnit
 * Wise2_access_display_char_ThreeStateUnit
 * Wise2_free_ThreeStateUnit [destructor]
 *
 */



/* Helper functions in the module
 *
 * Wise2_read_HMMer_1_7_ascii_file
 * Wise2_read_HMMer_1_7_ascii
 *

/* API for object ThreeStateModel */
/* Function:  Wise2_force_global_model(tsm,prob_into_model)
 *
 * Descrip:    Makes start at position 0 and end at position end,
 *             no other positions being valid
 *
 *
 *
 * Arg:        tsm          ThreeStateModel to be 'forced' [Wise2_ThreeStateModel *]
 * Arg:        prob_into_model Probability to start the model: for true global will be 1.0 [double]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_force_global_model( Wise2_ThreeStateModel * tsm,double prob_into_model);

/* Function:  Wise2_force_weighted_local_model(tsm,prob_into_model,ratio_start,ratio_end)
 *
 * Descrip:    places the ratio of probability to start/end,
 *             and then distributes the rest over the start/end
 *
 *
 *
 * Arg:        tsm          ThreeStateModel to be 'forced' [Wise2_ThreeStateModel *]
 * Arg:        prob_into_model Probability to start the model: for true global will be 1.0 [double]
 * Arg:        ratio_start  ratio of prob to unit 0 to the rest (1.0 means all goes to start) [double]
 * Arg:        ratio_end    ratio of prob to unit (last) to the rest (1.0 means all goes to the end) [double]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_force_weighted_local_model( Wise2_ThreeStateModel * tsm,double prob_into_model,double ratio_start,double ratio_end);

/* Function:  Wise2_ThreeStateModel_from_half_bit_Sequence(pro,mat,rm,gap,ext)
 *
 * Descrip:    Makes a local three-state-model from a sequence.  this is scary
 *             hackery, assumming that the matrix is half-bits and normalising in a
 *             *very* wrong way to get "probabilities" out.
 *
 *             Works though
 *
 *
 * Arg:        pro          protein sequence [Wise2_Protein *]
 * Arg:        mat          comparison matrix to use [Wise2_CompMat *]
 * Arg:        rm           random model which you assumme the matrix was built with [Wise2_RandomModel *]
 * Arg:        gap          gap open penalty [int]
 * Arg:        ext          gap ext penalty [int]
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_ThreeStateModel_from_half_bit_Sequence( Wise2_Protein * pro,Wise2_CompMat * mat,Wise2_RandomModel * rm,int gap,int ext);

/* Function:  Wise2_write_HMMer_1_7_ascii_ThreeStateModel(tsm,ofp)
 *
 * Descrip:    writes a HMMer version 1.7 (also ok with 1.8) file
 *
 *
 * Arg:        tsm          Undocumented argument [Wise2_ThreeStateModel *]
 * Arg:        ofp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [void]
 *
 */
void Wise2_write_HMMer_1_7_ascii_ThreeStateModel( Wise2_ThreeStateModel * tsm,FILE * ofp);

/* Function:  Wise2_hard_link_ThreeStateModel(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_ThreeStateModel *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_hard_link_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_ThreeStateModel_alloc_std(void)
 *
 * Descrip:    Equivalent to ThreeStateModel_alloc_len(ThreeStateModelLISTLENGTH)
 *
 *
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_ThreeStateModel_alloc_std();

/* Function:  Wise2_replace_name_ThreeStateModel(obj,name)
 *
 * Descrip:    Replace member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 * Arg:        name         New value of the variable [char *]
 *
 * Returns member variable name [boolean]
 *
 */
boolean Wise2_replace_name_ThreeStateModel( Wise2_ThreeStateModel * obj,char * name);

/* Function:  Wise2_access_name_ThreeStateModel(obj)
 *
 * Descrip:    Access member variable name
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 *
 * Returns member variable name [char *]
 *
 */
char * Wise2_access_name_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_access_unit_ThreeStateModel(obj,i)
 *
 * Descrip:    Access members stored in the unit list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_ThreeStateModel *]
 * Arg:        i            Position in the list [int]
 *
 * Returns Element of the list [Wise2_ThreeStateUnit *]
 *
 */
Wise2_ThreeStateUnit * Wise2_access_unit_ThreeStateModel( Wise2_ThreeStateModel * obj,int i);

/* Function:  Wise2_length_unit_ThreeStateModel(obj)
 *
 * Descrip:    discover the length of the list
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the list [Wise2_ThreeStateModel *]
 *
 * Returns length of the list [int]
 *
 */
int Wise2_length_unit_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_flush_ThreeStateModel(obj)
 *
 * Descrip:    Frees the list elements, sets length to 0
 *             If you want to save some elements, use hard_link_xxx
 *             to protect them from being actually destroyed in the free
 *
 *
 * Arg:        obj          Object which contains the list  [Wise2_ThreeStateModel *]
 *
 * Returns Undocumented return value [int]
 *
 */
int Wise2_flush_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_add_ThreeStateModel(obj,add)
 *
 * Descrip:    Adds another object to the list. It will expand the list if necessary
 *
 *
 * Arg:        obj          Object which contains the list [Wise2_ThreeStateModel *]
 * Arg:        add          Object to add to the list [Wise2_ThreeStateUnit *]
 *
 * Returns Undocumented return value [boolean]
 *
 */
boolean Wise2_add_ThreeStateModel( Wise2_ThreeStateModel * obj,Wise2_ThreeStateUnit * add);

/* Function:  Wise2_replace_alphabet_ThreeStateModel(obj,alphabet)
 *
 * Descrip:    Replace member variable alphabet
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 * Arg:        alphabet     New value of the variable [char *]
 *
 * Returns member variable alphabet [boolean]
 *
 */
boolean Wise2_replace_alphabet_ThreeStateModel( Wise2_ThreeStateModel * obj,char * alphabet);

/* Function:  Wise2_access_alphabet_ThreeStateModel(obj)
 *
 * Descrip:    Access member variable alphabet
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 *
 * Returns member variable alphabet [char *]
 *
 */
char * Wise2_access_alphabet_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_replace_accession_ThreeStateModel(obj,accession)
 *
 * Descrip:    Replace member variable accession
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 * Arg:        accession    New value of the variable [char *]
 *
 * Returns member variable accession [boolean]
 *
 */
boolean Wise2_replace_accession_ThreeStateModel( Wise2_ThreeStateModel * obj,char * accession);

/* Function:  Wise2_access_accession_ThreeStateModel(obj)
 *
 * Descrip:    Access member variable accession
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 *
 * Returns member variable accession [char *]
 *
 */
char * Wise2_access_accession_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_replace_threshold_ThreeStateModel(obj,threshold)
 *
 * Descrip:    Replace member variable threshold
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 * Arg:        threshold    New value of the variable [double]
 *
 * Returns member variable threshold [boolean]
 *
 */
boolean Wise2_replace_threshold_ThreeStateModel( Wise2_ThreeStateModel * obj,double threshold);

/* Function:  Wise2_access_threshold_ThreeStateModel(obj)
 *
 * Descrip:    Access member variable threshold
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 *
 * Returns member variable threshold [double]
 *
 */
double Wise2_access_threshold_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* Function:  Wise2_replace_rm_ThreeStateModel(obj,rm)
 *
 * Descrip:    Replace member variable rm
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 * Arg:        rm           New value of the variable [Wise2_RandomModel *]
 *
 * Returns member variable rm [boolean]
 *
 */
boolean Wise2_replace_rm_ThreeStateModel( Wise2_ThreeStateModel * obj,Wise2_RandomModel * rm);

/* Function:  Wise2_access_rm_ThreeStateModel(obj)
 *
 * Descrip:    Access member variable rm
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateModel *]
 *
 * Returns member variable rm [Wise2_RandomModel *]
 *
 */
Wise2_RandomModel * Wise2_access_rm_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_ThreeStateModel(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_ThreeStateModel *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_free_ThreeStateModel( Wise2_ThreeStateModel * obj);

/* API for object ThreeStateUnit */
/* Function:  Wise2_hard_link_ThreeStateUnit(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj          Object to be hard linked [Wise2_ThreeStateUnit *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateUnit *]
 *
 */
Wise2_ThreeStateUnit * Wise2_hard_link_ThreeStateUnit( Wise2_ThreeStateUnit * obj);

/* Function:  Wise2_ThreeStateUnit_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Returns Undocumented return value [Wise2_ThreeStateUnit *]
 *
 */
Wise2_ThreeStateUnit * Wise2_ThreeStateUnit_alloc();

/* Function:  Wise2_replace_display_char_ThreeStateUnit(obj,display_char)
 *
 * Descrip:    Replace member variable display_char
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateUnit *]
 * Arg:        display_char New value of the variable [char]
 *
 * Returns member variable display_char [boolean]
 *
 */
boolean Wise2_replace_display_char_ThreeStateUnit( Wise2_ThreeStateUnit * obj,char display_char);

/* Function:  Wise2_access_display_char_ThreeStateUnit(obj)
 *
 * Descrip:    Access member variable display_char
 *             For use principly by API functions
 *
 *
 * Arg:        obj          Object holding the variable [Wise2_ThreeStateUnit *]
 *
 * Returns member variable display_char [char]
 *
 */
char Wise2_access_display_char_ThreeStateUnit( Wise2_ThreeStateUnit * obj);

/* This is the destructor function, ie, call this to free object*/
/* Function:  Wise2_free_ThreeStateUnit(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj          Object that is free'd [Wise2_ThreeStateUnit *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateUnit *]
 *
 */
Wise2_ThreeStateUnit * Wise2_free_ThreeStateUnit( Wise2_ThreeStateUnit * obj);



/* These functions are not associated with an object */
/* Function:  Wise2_read_HMMer_1_7_ascii_file(filename)
 *
 * Descrip:    reads a HMMer ascii version 1.7 (1.8) file from filename.
 *
 *
 *
 * Arg:        filename     the name fo the hmmer file [char *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_read_HMMer_1_7_ascii_file( char * filename);

/* Function:  Wise2_read_HMMer_1_7_ascii(ifp)
 *
 * Descrip:    Basic function to read HMMer version 1.7(1.8) files.
 *
 *
 * Arg:        ifp          Undocumented argument [FILE *]
 *
 * Returns Undocumented return value [Wise2_ThreeStateModel *]
 *
 */
Wise2_ThreeStateModel * Wise2_read_HMMer_1_7_ascii( FILE * ifp);

