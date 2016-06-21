
#ifdef __cplusplus
extern "C" {
#endif
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#ifdef __cplusplus
}
#endif

#include "wise2.h"


static int
not_here(s)
char *s;
{
    croak("%s not implemented on this architecture", s);
    return -1;
}

static double
constant(name, arg)
char *name;
int arg;
{
    errno = 0;
    switch (*name) {
    }
    errno = EINVAL;
    return 0;

not_there:
    errno = ENOENT;
    return 0;
}


MODULE = Wise2 PACKAGE = Wise2


double
constant(name,arg)
	char *		name
	int		arg


PROTOTYPES: ENABLE

void
error_on(type)
	int type;
	CODE:
	Wise2_error_on(type);


void
error_off(type)
	int type;
	CODE:
	Wise2_error_off(type);


MODULE = Wise2 PACKAGE = Wise2::AlnBlock

void
dump_ascii_AlnBlock(alb,ofp)
	Wise2_AlnBlock * alb
	FILE * ofp
	CODE:
	Wise2_dump_ascii_AlnBlock(alb,ofp);



Wise2_AlnBlock *
hard_link_AlnBlock(obj)
	Wise2_AlnBlock * obj
	CODE:
	RETVAL = Wise2_hard_link_AlnBlock(obj);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
AlnBlock_alloc_std()
	CODE:
	RETVAL = Wise2_AlnBlock_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_AlnBlock * obj
	Wise2_AlnColumn * start
	CODE:
	RETVAL = Wise2_replace_start_AlnBlock(obj,Wise2_hard_link_AlnColumn(start));
	OUTPUT:
	RETVAL



Wise2_AlnColumn *
start(obj)
	Wise2_AlnBlock * obj
	INIT:
Wise2_AlnColumn * temp;
	CODE:
	temp = Wise2_hard_link_AlnColumn(Wise2_access_start_AlnBlock(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_AlnSequence *
seq(obj,i)
	Wise2_AlnBlock * obj
	int i
	INIT:
Wise2_AlnSequence * temp;
	CODE:
	temp = Wise2_hard_link_AlnSequence(Wise2_access_seq_AlnBlock(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_seq(obj)
	Wise2_AlnBlock * obj
	CODE:
	RETVAL = Wise2_length_seq_AlnBlock(obj);
	OUTPUT:
	RETVAL



int
flush_seq(obj)
	Wise2_AlnBlock * obj
	CODE:
	RETVAL = Wise2_flush_AlnBlock(obj);
	OUTPUT:
	RETVAL



boolean
add_seq(obj,add)
	Wise2_AlnBlock * obj
	Wise2_AlnSequence * add
	CODE:
	RETVAL = Wise2_add_AlnBlock(obj,Wise2_hard_link_AlnSequence(add));
	OUTPUT:
	RETVAL



boolean
set_length(obj,length)
	Wise2_AlnBlock * obj
	int length
	CODE:
	RETVAL = Wise2_replace_length_AlnBlock(obj,length);
	OUTPUT:
	RETVAL



int
length(obj)
	Wise2_AlnBlock * obj
	CODE:
	RETVAL = Wise2_access_length_AlnBlock(obj);
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_AlnBlock * obj
	int score
	CODE:
	RETVAL = Wise2_replace_score_AlnBlock(obj,score);
	OUTPUT:
	RETVAL



int
score(obj)
	Wise2_AlnBlock * obj
	CODE:
	RETVAL = Wise2_access_score_AlnBlock(obj);
	OUTPUT:
	RETVAL




Wise2_AlnBlock *
new(class)
	char * class
	PPCODE:
	Wise2_AlnBlock * out;
	out = Wise2_AlnBlock_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_AlnBlock * obj
	CODE:
	Wise2_free_AlnBlock(obj);

void
each_seq(obj)
	Wise2_AlnBlock * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_seq_AlnBlock(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::AlnSequence", (void*) (Wise2_hard_link_AlnSequence(Wise2_access_seq_AlnBlock(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::AlnColumn

boolean
at_end(alc)
	Wise2_AlnColumn * alc
	CODE:
	RETVAL = Wise2_at_end_AlnColumn(alc);
	OUTPUT:
	RETVAL



Wise2_AlnColumn *
hard_link_AlnColumn(obj)
	Wise2_AlnColumn * obj
	CODE:
	RETVAL = Wise2_hard_link_AlnColumn(obj);
	OUTPUT:
	RETVAL



Wise2_AlnColumn *
AlnColumn_alloc_std()
	CODE:
	RETVAL = Wise2_AlnColumn_alloc_std();
	OUTPUT:
	RETVAL



Wise2_AlnUnit *
alu(obj,i)
	Wise2_AlnColumn * obj
	int i
	INIT:
Wise2_AlnUnit * temp;
	CODE:
	temp = Wise2_hard_link_AlnUnit(Wise2_access_alu_AlnColumn(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_alu(obj)
	Wise2_AlnColumn * obj
	CODE:
	RETVAL = Wise2_length_alu_AlnColumn(obj);
	OUTPUT:
	RETVAL



int
flush_alu(obj)
	Wise2_AlnColumn * obj
	CODE:
	RETVAL = Wise2_flush_AlnColumn(obj);
	OUTPUT:
	RETVAL



boolean
add_alu(obj,add)
	Wise2_AlnColumn * obj
	Wise2_AlnUnit * add
	CODE:
	RETVAL = Wise2_add_AlnColumn(obj,Wise2_hard_link_AlnUnit(add));
	OUTPUT:
	RETVAL



boolean
set_next(obj,next)
	Wise2_AlnColumn * obj
	Wise2_AlnColumn * next
	CODE:
	RETVAL = Wise2_replace_next_AlnColumn(obj,Wise2_hard_link_AlnColumn(next));
	OUTPUT:
	RETVAL



Wise2_AlnColumn *
next(obj)
	Wise2_AlnColumn * obj
	INIT:
Wise2_AlnColumn * temp;
	CODE:
	temp = Wise2_hard_link_AlnColumn(Wise2_access_next_AlnColumn(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_AlnColumn *
new(class)
	char * class
	PPCODE:
	Wise2_AlnColumn * out;
	out = Wise2_AlnColumn_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_AlnColumn * obj
	CODE:
	Wise2_free_AlnColumn(obj);

void
each_alu(obj)
	Wise2_AlnColumn * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_alu_AlnColumn(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::AlnUnit", (void*) (Wise2_hard_link_AlnUnit(Wise2_access_alu_AlnColumn(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::AlnUnit

int
bio_start(alu)
	Wise2_AlnUnit * alu
	CODE:
	RETVAL = Wise2_bio_start_AlnUnit(alu);
	OUTPUT:
	RETVAL



int
bio_end(alu)
	Wise2_AlnUnit * alu
	CODE:
	RETVAL = Wise2_bio_end_AlnUnit(alu);
	OUTPUT:
	RETVAL



Wise2_AlnUnit *
hard_link_AlnUnit(obj)
	Wise2_AlnUnit * obj
	CODE:
	RETVAL = Wise2_hard_link_AlnUnit(obj);
	OUTPUT:
	RETVAL



Wise2_AlnUnit *
alloc()
	CODE:
	RETVAL = Wise2_AlnUnit_alloc();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_AlnUnit * obj
	int start
	CODE:
	RETVAL = Wise2_replace_start_AlnUnit(obj,start);
	OUTPUT:
	RETVAL



int
start(obj)
	Wise2_AlnUnit * obj
	CODE:
	RETVAL = Wise2_access_start_AlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_end(obj,end)
	Wise2_AlnUnit * obj
	int end
	CODE:
	RETVAL = Wise2_replace_end_AlnUnit(obj,end);
	OUTPUT:
	RETVAL



int
end(obj)
	Wise2_AlnUnit * obj
	CODE:
	RETVAL = Wise2_access_end_AlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_label(obj,label)
	Wise2_AlnUnit * obj
	int label
	CODE:
	RETVAL = Wise2_replace_label_AlnUnit(obj,label);
	OUTPUT:
	RETVAL



int
label(obj)
	Wise2_AlnUnit * obj
	CODE:
	RETVAL = Wise2_access_label_AlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_text_label(obj,text_label)
	Wise2_AlnUnit * obj
	char * text_label
	CODE:
	RETVAL = Wise2_replace_text_label_AlnUnit(obj,Wise2_stringalloc(text_label));
	OUTPUT:
	RETVAL



char *
text_label(obj)
	Wise2_AlnUnit * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_text_label_AlnUnit(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_next(obj,next)
	Wise2_AlnUnit * obj
	Wise2_AlnUnit * next
	CODE:
	RETVAL = Wise2_replace_next_AlnUnit(obj,Wise2_hard_link_AlnUnit(next));
	OUTPUT:
	RETVAL



Wise2_AlnUnit *
next(obj)
	Wise2_AlnUnit * obj
	INIT:
Wise2_AlnUnit * temp;
	CODE:
	temp = Wise2_hard_link_AlnUnit(Wise2_access_next_AlnUnit(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_in_column(obj,in_column)
	Wise2_AlnUnit * obj
	boolean in_column
	CODE:
	RETVAL = Wise2_replace_in_column_AlnUnit(obj,in_column);
	OUTPUT:
	RETVAL



boolean
in_column(obj)
	Wise2_AlnUnit * obj
	CODE:
	RETVAL = Wise2_access_in_column_AlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_seq(obj,seq)
	Wise2_AlnUnit * obj
	Wise2_AlnSequence * seq
	CODE:
	RETVAL = Wise2_replace_seq_AlnUnit(obj,Wise2_hard_link_AlnSequence(seq));
	OUTPUT:
	RETVAL



Wise2_AlnSequence *
seq(obj)
	Wise2_AlnUnit * obj
	INIT:
Wise2_AlnSequence * temp;
	CODE:
	temp = Wise2_hard_link_AlnSequence(Wise2_access_seq_AlnUnit(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_AlnUnit *
new(class)
	char * class
	PPCODE:
	Wise2_AlnUnit * out;
	out = Wise2_AlnUnit_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_AlnUnit * obj
	CODE:
	Wise2_free_AlnUnit(obj);



MODULE = Wise2 PACKAGE = Wise2::AlnSequence

Wise2_AlnSequence *
hard_link_AlnSequence(obj)
	Wise2_AlnSequence * obj
	CODE:
	RETVAL = Wise2_hard_link_AlnSequence(obj);
	OUTPUT:
	RETVAL



Wise2_AlnSequence *
alloc()
	CODE:
	RETVAL = Wise2_AlnSequence_alloc();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_AlnSequence * obj
	Wise2_AlnUnit * start
	CODE:
	RETVAL = Wise2_replace_start_AlnSequence(obj,Wise2_hard_link_AlnUnit(start));
	OUTPUT:
	RETVAL



Wise2_AlnUnit *
start(obj)
	Wise2_AlnSequence * obj
	INIT:
Wise2_AlnUnit * temp;
	CODE:
	temp = Wise2_hard_link_AlnUnit(Wise2_access_start_AlnSequence(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_data_type(obj,data_type)
	Wise2_AlnSequence * obj
	int data_type
	CODE:
	RETVAL = Wise2_replace_data_type_AlnSequence(obj,data_type);
	OUTPUT:
	RETVAL



int
data_type(obj)
	Wise2_AlnSequence * obj
	CODE:
	RETVAL = Wise2_access_data_type_AlnSequence(obj);
	OUTPUT:
	RETVAL



boolean
set_data(obj,data)
	Wise2_AlnSequence * obj
	void * data
	CODE:
	RETVAL = Wise2_replace_data_AlnSequence(obj,data);
	OUTPUT:
	RETVAL



void *
data(obj)
	Wise2_AlnSequence * obj
	CODE:
	RETVAL = Wise2_access_data_AlnSequence(obj);
	OUTPUT:
	RETVAL



boolean
set_bio_start(obj,bio_start)
	Wise2_AlnSequence * obj
	int bio_start
	CODE:
	RETVAL = Wise2_replace_bio_start_AlnSequence(obj,bio_start);
	OUTPUT:
	RETVAL



int
bio_start(obj)
	Wise2_AlnSequence * obj
	CODE:
	RETVAL = Wise2_access_bio_start_AlnSequence(obj);
	OUTPUT:
	RETVAL



boolean
set_bio_end(obj,bio_end)
	Wise2_AlnSequence * obj
	int bio_end
	CODE:
	RETVAL = Wise2_replace_bio_end_AlnSequence(obj,bio_end);
	OUTPUT:
	RETVAL



int
bio_end(obj)
	Wise2_AlnSequence * obj
	CODE:
	RETVAL = Wise2_access_bio_end_AlnSequence(obj);
	OUTPUT:
	RETVAL




Wise2_AlnSequence *
new(class)
	char * class
	PPCODE:
	Wise2_AlnSequence * out;
	out = Wise2_AlnSequence_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_AlnSequence * obj
	CODE:
	Wise2_free_AlnSequence(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::AlnRange

Wise2_AlnRange *
hard_link_AlnRange(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_hard_link_AlnRange(obj);
	OUTPUT:
	RETVAL



Wise2_AlnRange *
alloc()
	CODE:
	RETVAL = Wise2_AlnRange_alloc();
	OUTPUT:
	RETVAL



boolean
set_starti(obj,starti)
	Wise2_AlnRange * obj
	int starti
	CODE:
	RETVAL = Wise2_replace_starti_AlnRange(obj,starti);
	OUTPUT:
	RETVAL



int
starti(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_starti_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_startj(obj,startj)
	Wise2_AlnRange * obj
	int startj
	CODE:
	RETVAL = Wise2_replace_startj_AlnRange(obj,startj);
	OUTPUT:
	RETVAL



int
startj(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_startj_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_startstate(obj,startstate)
	Wise2_AlnRange * obj
	int startstate
	CODE:
	RETVAL = Wise2_replace_startstate_AlnRange(obj,startstate);
	OUTPUT:
	RETVAL



int
startstate(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_startstate_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_stopi(obj,stopi)
	Wise2_AlnRange * obj
	int stopi
	CODE:
	RETVAL = Wise2_replace_stopi_AlnRange(obj,stopi);
	OUTPUT:
	RETVAL



int
stopi(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_stopi_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_stopj(obj,stopj)
	Wise2_AlnRange * obj
	int stopj
	CODE:
	RETVAL = Wise2_replace_stopj_AlnRange(obj,stopj);
	OUTPUT:
	RETVAL



int
stopj(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_stopj_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_stopstate(obj,stopstate)
	Wise2_AlnRange * obj
	int stopstate
	CODE:
	RETVAL = Wise2_replace_stopstate_AlnRange(obj,stopstate);
	OUTPUT:
	RETVAL



int
stopstate(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_stopstate_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_startscore(obj,startscore)
	Wise2_AlnRange * obj
	int startscore
	CODE:
	RETVAL = Wise2_replace_startscore_AlnRange(obj,startscore);
	OUTPUT:
	RETVAL



int
startscore(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_startscore_AlnRange(obj);
	OUTPUT:
	RETVAL



boolean
set_stopscore(obj,stopscore)
	Wise2_AlnRange * obj
	int stopscore
	CODE:
	RETVAL = Wise2_replace_stopscore_AlnRange(obj,stopscore);
	OUTPUT:
	RETVAL



int
stopscore(obj)
	Wise2_AlnRange * obj
	CODE:
	RETVAL = Wise2_access_stopscore_AlnRange(obj);
	OUTPUT:
	RETVAL




Wise2_AlnRange *
new(class)
	char * class
	PPCODE:
	Wise2_AlnRange * out;
	out = Wise2_AlnRange_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_AlnRange * obj
	CODE:
	Wise2_free_AlnRange(obj);



MODULE = Wise2 PACKAGE = Wise2::AlnRangeSet

Wise2_AlnRangeSet *
hard_link_AlnRangeSet(obj)
	Wise2_AlnRangeSet * obj
	CODE:
	RETVAL = Wise2_hard_link_AlnRangeSet(obj);
	OUTPUT:
	RETVAL



Wise2_AlnRangeSet *
AlnRangeSet_alloc_std()
	CODE:
	RETVAL = Wise2_AlnRangeSet_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_AlnRangeSet * obj
	int score
	CODE:
	RETVAL = Wise2_replace_score_AlnRangeSet(obj,score);
	OUTPUT:
	RETVAL



int
score(obj)
	Wise2_AlnRangeSet * obj
	CODE:
	RETVAL = Wise2_access_score_AlnRangeSet(obj);
	OUTPUT:
	RETVAL



Wise2_AlnRange *
alr(obj,i)
	Wise2_AlnRangeSet * obj
	int i
	INIT:
Wise2_AlnRange * temp;
	CODE:
	temp = Wise2_hard_link_AlnRange(Wise2_access_alr_AlnRangeSet(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_alr(obj)
	Wise2_AlnRangeSet * obj
	CODE:
	RETVAL = Wise2_length_alr_AlnRangeSet(obj);
	OUTPUT:
	RETVAL



int
flush_alr(obj)
	Wise2_AlnRangeSet * obj
	CODE:
	RETVAL = Wise2_flush_AlnRangeSet(obj);
	OUTPUT:
	RETVAL



boolean
add_alr(obj,add)
	Wise2_AlnRangeSet * obj
	Wise2_AlnRange * add
	CODE:
	RETVAL = Wise2_add_AlnRangeSet(obj,Wise2_hard_link_AlnRange(add));
	OUTPUT:
	RETVAL




Wise2_AlnRangeSet *
new(class)
	char * class
	PPCODE:
	Wise2_AlnRangeSet * out;
	out = Wise2_AlnRangeSet_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_AlnRangeSet * obj
	CODE:
	Wise2_free_AlnRangeSet(obj);

void
each_alr(obj)
	Wise2_AlnRangeSet * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_alr_AlnRangeSet(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::AlnRange", (void*) (Wise2_hard_link_AlnRange(Wise2_access_alr_AlnRangeSet(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2

void
change_max_BaseMatrix_kbytes(new_kilo_number)
	int new_kilo_number
	CODE:
	Wise2_change_max_BaseMatrix_kbytes(new_kilo_number);



int
get_max_BaseMatrix_kbytes()
	CODE:
	RETVAL = Wise2_get_max_BaseMatrix_kbytes();
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::cDNA

Wise2_cDNA *
truncate_cDNA(cdna,start,stop)
	Wise2_cDNA * cdna
	int start
	int stop
	CODE:
	RETVAL = Wise2_truncate_cDNA(cdna,start,stop);
	OUTPUT:
	RETVAL



Wise2_cDNA *
read_fasta_file_cDNA(filename)
	char * filename
	CODE:
	RETVAL = Wise2_read_fasta_file_cDNA(filename);
	OUTPUT:
	RETVAL



char *
cDNA_name(cdna)
	Wise2_cDNA * cdna
	CODE:
	RETVAL = Wise2_cDNA_name(cdna);
	OUTPUT:
	RETVAL



int
cDNA_length(cdna)
	Wise2_cDNA * cdna
	CODE:
	RETVAL = Wise2_cDNA_length(cdna);
	OUTPUT:
	RETVAL



char
cDNA_seqchar(cdna,pos)
	Wise2_cDNA * cdna
	int pos
	CODE:
	RETVAL = Wise2_cDNA_seqchar(cdna,pos);
	OUTPUT:
	RETVAL



Wise2_cDNA *
cDNA_from_Sequence(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_cDNA_from_Sequence(Wise2_hard_link_Sequence(seq));
	OUTPUT:
	RETVAL



Wise2_cDNA *
hard_link_cDNA(obj)
	Wise2_cDNA * obj
	CODE:
	RETVAL = Wise2_hard_link_cDNA(obj);
	OUTPUT:
	RETVAL



Wise2_cDNA *
alloc()
	CODE:
	RETVAL = Wise2_cDNA_alloc();
	OUTPUT:
	RETVAL



boolean
set_baseseq(obj,baseseq)
	Wise2_cDNA * obj
	Wise2_Sequence * baseseq
	CODE:
	RETVAL = Wise2_replace_baseseq_cDNA(obj,Wise2_hard_link_Sequence(baseseq));
	OUTPUT:
	RETVAL



Wise2_Sequence *
baseseq(obj)
	Wise2_cDNA * obj
	INIT:
Wise2_Sequence * temp;
	CODE:
	temp = Wise2_hard_link_Sequence(Wise2_access_baseseq_cDNA(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_cDNA *
new(class)
	char * class
	PPCODE:
	Wise2_cDNA * out;
	out = Wise2_cDNA_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_cDNA * obj
	CODE:
	Wise2_free_cDNA(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::cDNADB

Wise2_cDNA *
get_entry(cdnadb,de)
	Wise2_cDNADB * cdnadb
	Wise2_DataEntry * de
	CODE:
	RETVAL = Wise2_get_cDNA_from_cDNADB(cdnadb,de);
	OUTPUT:
	RETVAL



Wise2_cDNADB *
hard_link_cDNADB(obj)
	Wise2_cDNADB * obj
	CODE:
	RETVAL = Wise2_hard_link_cDNADB(obj);
	OUTPUT:
	RETVAL



Wise2_cDNADB *
alloc()
	CODE:
	RETVAL = Wise2_cDNADB_alloc();
	OUTPUT:
	RETVAL



boolean
set_is_single_seq(obj,is_single_seq)
	Wise2_cDNADB * obj
	boolean is_single_seq
	CODE:
	RETVAL = Wise2_replace_is_single_seq_cDNADB(obj,is_single_seq);
	OUTPUT:
	RETVAL



boolean
is_single_seq(obj)
	Wise2_cDNADB * obj
	CODE:
	RETVAL = Wise2_access_is_single_seq_cDNADB(obj);
	OUTPUT:
	RETVAL



boolean
set_done_forward(obj,done_forward)
	Wise2_cDNADB * obj
	boolean done_forward
	CODE:
	RETVAL = Wise2_replace_done_forward_cDNADB(obj,done_forward);
	OUTPUT:
	RETVAL



boolean
done_forward(obj)
	Wise2_cDNADB * obj
	CODE:
	RETVAL = Wise2_access_done_forward_cDNADB(obj);
	OUTPUT:
	RETVAL



boolean
set_forward_only(obj,forward_only)
	Wise2_cDNADB * obj
	boolean forward_only
	CODE:
	RETVAL = Wise2_replace_forward_only_cDNADB(obj,forward_only);
	OUTPUT:
	RETVAL



boolean
forward_only(obj)
	Wise2_cDNADB * obj
	CODE:
	RETVAL = Wise2_access_forward_only_cDNADB(obj);
	OUTPUT:
	RETVAL



boolean
set_forw(obj,forw)
	Wise2_cDNADB * obj
	Wise2_ComplexSequence * forw
	CODE:
	RETVAL = Wise2_replace_forw_cDNADB(obj,Wise2_hard_link_ComplexSequence(forw));
	OUTPUT:
	RETVAL



Wise2_ComplexSequence *
forw(obj)
	Wise2_cDNADB * obj
	INIT:
Wise2_ComplexSequence * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequence(Wise2_access_forw_cDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_rev(obj,rev)
	Wise2_cDNADB * obj
	Wise2_ComplexSequence * rev
	CODE:
	RETVAL = Wise2_replace_rev_cDNADB(obj,Wise2_hard_link_ComplexSequence(rev));
	OUTPUT:
	RETVAL



Wise2_ComplexSequence *
rev(obj)
	Wise2_cDNADB * obj
	INIT:
Wise2_ComplexSequence * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequence(Wise2_access_rev_cDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_sdb(obj,sdb)
	Wise2_cDNADB * obj
	Wise2_SequenceDB * sdb
	CODE:
	RETVAL = Wise2_replace_sdb_cDNADB(obj,Wise2_hard_link_SequenceDB(sdb));
	OUTPUT:
	RETVAL



Wise2_SequenceDB *
sdb(obj)
	Wise2_cDNADB * obj
	INIT:
Wise2_SequenceDB * temp;
	CODE:
	temp = Wise2_hard_link_SequenceDB(Wise2_access_sdb_cDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_current(obj,current)
	Wise2_cDNADB * obj
	Wise2_Sequence * current
	CODE:
	RETVAL = Wise2_replace_current_cDNADB(obj,Wise2_hard_link_Sequence(current));
	OUTPUT:
	RETVAL



Wise2_Sequence *
current(obj)
	Wise2_cDNADB * obj
	INIT:
Wise2_Sequence * temp;
	CODE:
	temp = Wise2_hard_link_Sequence(Wise2_access_current_cDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_cses(obj,cses)
	Wise2_cDNADB * obj
	Wise2_ComplexSequenceEvalSet * cses
	CODE:
	RETVAL = Wise2_replace_cses_cDNADB(obj,Wise2_hard_link_ComplexSequenceEvalSet(cses));
	OUTPUT:
	RETVAL



Wise2_ComplexSequenceEvalSet *
cses(obj)
	Wise2_cDNADB * obj
	INIT:
Wise2_ComplexSequenceEvalSet * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequenceEvalSet(Wise2_access_cses_cDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_cDNADB *
new(class)
	char * class
	PPCODE:
	Wise2_cDNADB * out;
	out = Wise2_cDNADB_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_cDNADB * obj
	CODE:
	Wise2_free_cDNADB(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_cDNADB *
new_cDNADB_from_single_seq(seq)
	Wise2_cDNA * seq
	CODE:
	RETVAL = Wise2_new_cDNADB_from_single_seq(seq);
	OUTPUT:
	RETVAL



Wise2_cDNADB *
new_cDNADB(seqdb)
	Wise2_SequenceDB * seqdb
	CODE:
	RETVAL = Wise2_new_cDNADB(seqdb);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::CodonTable

Wise2_CodonTable *
read_CodonTable_file(file)
	char * file
	CODE:
	RETVAL = Wise2_read_CodonTable_file(file);
	OUTPUT:
	RETVAL



Wise2_CodonTable *
read_CodonTable(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_CodonTable(ifp);
	OUTPUT:
	RETVAL



aa
aminoacid_from_seq(ct,seq)
	Wise2_CodonTable * ct
	char * seq
	CODE:
	RETVAL = Wise2_aminoacid_from_seq(ct,seq);
	OUTPUT:
	RETVAL



aa
aminoacid_from_codon(ct,c)
	Wise2_CodonTable * ct
	codon c
	CODE:
	RETVAL = Wise2_aminoacid_from_codon(ct,c);
	OUTPUT:
	RETVAL



boolean
is_stop_codon(c,ct)
	codon c
	Wise2_CodonTable * ct
	CODE:
	RETVAL = Wise2_is_stop_codon(c,ct);
	OUTPUT:
	RETVAL



boolean
is_valid_aminoacid(ct,c)
	Wise2_CodonTable * ct
	char c
	CODE:
	RETVAL = Wise2_is_valid_aminoacid(ct,c);
	OUTPUT:
	RETVAL



Wise2_CodonTable *
hard_link_CodonTable(obj)
	Wise2_CodonTable * obj
	CODE:
	RETVAL = Wise2_hard_link_CodonTable(obj);
	OUTPUT:
	RETVAL



Wise2_CodonTable *
alloc()
	CODE:
	RETVAL = Wise2_CodonTable_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_CodonTable * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_CodonTable(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_CodonTable * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_CodonTable(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_CodonTable *
new(class)
	char * class
	PPCODE:
	Wise2_CodonTable * out;
	out = Wise2_CodonTable_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_CodonTable * obj
	CODE:
	Wise2_free_CodonTable(obj);



MODULE = Wise2 PACKAGE = Wise2

boolean
is_non_ambiguous_codon_seq(seq)
	char * seq
	CODE:
	RETVAL = Wise2_is_non_ambiguous_codon_seq(seq);
	OUTPUT:
	RETVAL



codon
codon_from_base4_codon(c)
	int c
	CODE:
	RETVAL = Wise2_codon_from_base4_codon(c);
	OUTPUT:
	RETVAL



int
base4_codon_from_codon(c)
	codon c
	CODE:
	RETVAL = Wise2_base4_codon_from_codon(c);
	OUTPUT:
	RETVAL



boolean
has_random_bases(c)
	codon c
	CODE:
	RETVAL = Wise2_has_random_bases(c);
	OUTPUT:
	RETVAL



codon
permute_possible_random_bases(c,one,two,three)
	codon c
	base one
	base two
	base three
	CODE:
	RETVAL = Wise2_permute_possible_random_bases(c,one,two,three);
	OUTPUT:
	RETVAL



base
base_from_codon(c,pos)
	codon c
	int pos
	CODE:
	RETVAL = Wise2_base_from_codon(c,pos);
	OUTPUT:
	RETVAL



codon
codon_from_seq(seq)
	char * seq
	CODE:
	RETVAL = Wise2_codon_from_seq(seq);
	OUTPUT:
	RETVAL



int
base4_codon_from_seq(seq)
	char * seq
	CODE:
	RETVAL = Wise2_base4_codon_from_seq(seq);
	OUTPUT:
	RETVAL



char
char_from_base(b)
	base b
	CODE:
	RETVAL = Wise2_char_from_base(b);
	OUTPUT:
	RETVAL



base
base_from_char(c)
	char c
	CODE:
	RETVAL = Wise2_base_from_char(c);
	OUTPUT:
	RETVAL



char
char_complement_base(c)
	char c
	CODE:
	RETVAL = Wise2_char_complement_base(c);
	OUTPUT:
	RETVAL



base
complement_base(b)
	base b
	CODE:
	RETVAL = Wise2_complement_base(b);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::CodonMapper

void
sprinkle_errors_over_CodonMapper(cm,error)
	Wise2_CodonMapper * cm
	double error
	CODE:
	Wise2_sprinkle_errors_over_CodonMapper(cm,error);



Wise2_CodonMapper *
hard_link_CodonMapper(obj)
	Wise2_CodonMapper * obj
	CODE:
	RETVAL = Wise2_hard_link_CodonMapper(obj);
	OUTPUT:
	RETVAL



Wise2_CodonMapper *
alloc()
	CODE:
	RETVAL = Wise2_CodonMapper_alloc();
	OUTPUT:
	RETVAL



boolean
set_ct(obj,ct)
	Wise2_CodonMapper * obj
	Wise2_CodonTable * ct
	CODE:
	RETVAL = Wise2_replace_ct_CodonMapper(obj,Wise2_hard_link_CodonTable(ct));
	OUTPUT:
	RETVAL



Wise2_CodonTable *
ct(obj)
	Wise2_CodonMapper * obj
	INIT:
Wise2_CodonTable * temp;
	CODE:
	temp = Wise2_hard_link_CodonTable(Wise2_access_ct_CodonMapper(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_CodonMapper *
new(class)
	char * class
	PPCODE:
	Wise2_CodonMapper * out;
	out = Wise2_CodonMapper_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_CodonMapper * obj
	CODE:
	Wise2_free_CodonMapper(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_CodonMapper *
flat_CodonMapper(ct)
	Wise2_CodonTable * ct
	CODE:
	RETVAL = Wise2_flat_CodonMapper(ct);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::ComplexSequence

Wise2_ComplexSequence *
hard_link_ComplexSequence(obj)
	Wise2_ComplexSequence * obj
	CODE:
	RETVAL = Wise2_hard_link_ComplexSequence(obj);
	OUTPUT:
	RETVAL



Wise2_ComplexSequence *
alloc()
	CODE:
	RETVAL = Wise2_ComplexSequence_alloc();
	OUTPUT:
	RETVAL



boolean
set_type(obj,type)
	Wise2_ComplexSequence * obj
	int type
	CODE:
	RETVAL = Wise2_replace_type_ComplexSequence(obj,type);
	OUTPUT:
	RETVAL



int
type(obj)
	Wise2_ComplexSequence * obj
	CODE:
	RETVAL = Wise2_access_type_ComplexSequence(obj);
	OUTPUT:
	RETVAL



boolean
set_seq(obj,seq)
	Wise2_ComplexSequence * obj
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_replace_seq_ComplexSequence(obj,Wise2_hard_link_Sequence(seq));
	OUTPUT:
	RETVAL



Wise2_Sequence *
seq(obj)
	Wise2_ComplexSequence * obj
	INIT:
Wise2_Sequence * temp;
	CODE:
	temp = Wise2_hard_link_Sequence(Wise2_access_seq_ComplexSequence(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_ComplexSequence *
new(class)
	char * class
	PPCODE:
	Wise2_ComplexSequence * out;
	out = Wise2_ComplexSequence_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_ComplexSequence * obj
	CODE:
	Wise2_free_ComplexSequence(obj);



MODULE = Wise2 PACKAGE = Wise2::ComplexSequenceEvalSet

Wise2_ComplexSequenceEvalSet *
hard_link_ComplexSequenceEvalSet(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	RETVAL = Wise2_hard_link_ComplexSequenceEvalSet(obj);
	OUTPUT:
	RETVAL



Wise2_ComplexSequenceEvalSet *
ComplexSequenceEvalSet_alloc_std()
	CODE:
	RETVAL = Wise2_ComplexSequenceEvalSet_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_type(obj,type)
	Wise2_ComplexSequenceEvalSet * obj
	int type
	CODE:
	RETVAL = Wise2_replace_type_ComplexSequenceEvalSet(obj,type);
	OUTPUT:
	RETVAL



int
type(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	RETVAL = Wise2_access_type_ComplexSequenceEvalSet(obj);
	OUTPUT:
	RETVAL



boolean
set_has_been_prepared(obj,has_been_prepared)
	Wise2_ComplexSequenceEvalSet * obj
	boolean has_been_prepared
	CODE:
	RETVAL = Wise2_replace_has_been_prepared_ComplexSequenceEvalSet(obj,has_been_prepared);
	OUTPUT:
	RETVAL



boolean
has_been_prepared(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	RETVAL = Wise2_access_has_been_prepared_ComplexSequenceEvalSet(obj);
	OUTPUT:
	RETVAL



boolean
set_left_window(obj,left_window)
	Wise2_ComplexSequenceEvalSet * obj
	int left_window
	CODE:
	RETVAL = Wise2_replace_left_window_ComplexSequenceEvalSet(obj,left_window);
	OUTPUT:
	RETVAL



int
left_window(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	RETVAL = Wise2_access_left_window_ComplexSequenceEvalSet(obj);
	OUTPUT:
	RETVAL



boolean
set_right_window(obj,right_window)
	Wise2_ComplexSequenceEvalSet * obj
	int right_window
	CODE:
	RETVAL = Wise2_replace_right_window_ComplexSequenceEvalSet(obj,right_window);
	OUTPUT:
	RETVAL



int
right_window(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	RETVAL = Wise2_access_right_window_ComplexSequenceEvalSet(obj);
	OUTPUT:
	RETVAL



boolean
set_left_lookback(obj,left_lookback)
	Wise2_ComplexSequenceEvalSet * obj
	int left_lookback
	CODE:
	RETVAL = Wise2_replace_left_lookback_ComplexSequenceEvalSet(obj,left_lookback);
	OUTPUT:
	RETVAL



int
left_lookback(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	RETVAL = Wise2_access_left_lookback_ComplexSequenceEvalSet(obj);
	OUTPUT:
	RETVAL




Wise2_ComplexSequenceEvalSet *
new(class)
	char * class
	PPCODE:
	Wise2_ComplexSequenceEvalSet * out;
	out = Wise2_ComplexSequenceEvalSet_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_ComplexSequenceEvalSet * obj
	CODE:
	Wise2_free_ComplexSequenceEvalSet(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::CompMat

Score
fail_safe_CompMat_access(cm,aa1,aa2)
	Wise2_CompMat * cm
	int aa1
	int aa2
	CODE:
	RETVAL = Wise2_fail_safe_CompMat_access(cm,aa1,aa2);
	OUTPUT:
	RETVAL



boolean
write_Blast_CompMat(cm,ofp)
	Wise2_CompMat * cm
	FILE * ofp
	CODE:
	RETVAL = Wise2_write_Blast_CompMat(cm,ofp);
	OUTPUT:
	RETVAL



Wise2_CompMat *
read_Blast_file_CompMat(filename)
	char * filename
	CODE:
	RETVAL = Wise2_read_Blast_file_CompMat(filename);
	OUTPUT:
	RETVAL



Wise2_CompMat *
read_Blast_CompMat(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_Blast_CompMat(ifp);
	OUTPUT:
	RETVAL



Wise2_CompMat *
hard_link_CompMat(obj)
	Wise2_CompMat * obj
	CODE:
	RETVAL = Wise2_hard_link_CompMat(obj);
	OUTPUT:
	RETVAL



Wise2_CompMat *
alloc()
	CODE:
	RETVAL = Wise2_CompMat_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_CompMat * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_CompMat(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_CompMat * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_CompMat(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_CompMat *
new(class)
	char * class
	PPCODE:
	Wise2_CompMat * out;
	out = Wise2_CompMat_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_CompMat * obj
	CODE:
	Wise2_free_CompMat(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::DBSearchImpl

char *
string(dbsi)
	Wise2_DBSearchImpl * dbsi
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_impl_string_DBSearchImpl(dbsi));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_DBSearchImpl *
hard_link_DBSearchImpl(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	RETVAL = Wise2_hard_link_DBSearchImpl(obj);
	OUTPUT:
	RETVAL



Wise2_DBSearchImpl *
alloc()
	CODE:
	RETVAL = Wise2_DBSearchImpl_alloc();
	OUTPUT:
	RETVAL



boolean
set_type(obj,type)
	Wise2_DBSearchImpl * obj
	int type
	CODE:
	RETVAL = Wise2_replace_type_DBSearchImpl(obj,type);
	OUTPUT:
	RETVAL



int
type(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	RETVAL = Wise2_access_type_DBSearchImpl(obj);
	OUTPUT:
	RETVAL



boolean
set_trace_level(obj,trace_level)
	Wise2_DBSearchImpl * obj
	int trace_level
	CODE:
	RETVAL = Wise2_replace_trace_level_DBSearchImpl(obj,trace_level);
	OUTPUT:
	RETVAL



int
trace_level(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	RETVAL = Wise2_access_trace_level_DBSearchImpl(obj);
	OUTPUT:
	RETVAL



boolean
set_trace_file(obj,trace_file)
	Wise2_DBSearchImpl * obj
	FILE * trace_file
	CODE:
	RETVAL = Wise2_replace_trace_file_DBSearchImpl(obj,trace_file);
	OUTPUT:
	RETVAL



FILE *
trace_file(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	RETVAL = Wise2_access_trace_file_DBSearchImpl(obj);
	OUTPUT:
	RETVAL



boolean
set_suggest_thread_no(obj,suggest_thread_no)
	Wise2_DBSearchImpl * obj
	int suggest_thread_no
	CODE:
	RETVAL = Wise2_replace_suggest_thread_no_DBSearchImpl(obj,suggest_thread_no);
	OUTPUT:
	RETVAL



int
suggest_thread_no(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	RETVAL = Wise2_access_suggest_thread_no_DBSearchImpl(obj);
	OUTPUT:
	RETVAL



boolean
set_search_routine(obj,search_routine)
	Wise2_DBSearchImpl * obj
	int search_routine
	CODE:
	RETVAL = Wise2_replace_search_routine_DBSearchImpl(obj,search_routine);
	OUTPUT:
	RETVAL



int
search_routine(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	RETVAL = Wise2_access_search_routine_DBSearchImpl(obj);
	OUTPUT:
	RETVAL




Wise2_DBSearchImpl *
new(class)
	char * class
	PPCODE:
	Wise2_DBSearchImpl * out;
	out = Wise2_DBSearchImpl_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DBSearchImpl * obj
	CODE:
	Wise2_free_DBSearchImpl(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_DBSearchImpl *
new_pthread_DBSearchImpl()
	CODE:
	RETVAL = Wise2_new_pthread_DBSearchImpl();
	OUTPUT:
	RETVAL



Wise2_DBSearchImpl *
new_serial_DBSearchImpl()
	CODE:
	RETVAL = Wise2_new_serial_DBSearchImpl();
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::DnaMatrix

Wise2_DnaMatrix *
hard_link_DnaMatrix(obj)
	Wise2_DnaMatrix * obj
	CODE:
	RETVAL = Wise2_hard_link_DnaMatrix(obj);
	OUTPUT:
	RETVAL



Wise2_DnaMatrix *
alloc()
	CODE:
	RETVAL = Wise2_DnaMatrix_alloc();
	OUTPUT:
	RETVAL




Wise2_DnaMatrix *
new(class)
	char * class
	PPCODE:
	Wise2_DnaMatrix * out;
	out = Wise2_DnaMatrix_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DnaMatrix * obj
	CODE:
	Wise2_free_DnaMatrix(obj);



MODULE = Wise2 PACKAGE = Wise2::DnaProbMatrix

void
flat_null_DnaProbMatrix(dpm)
	Wise2_DnaProbMatrix * dpm
	CODE:
	Wise2_flat_null_DnaProbMatrix(dpm);



Wise2_DnaProbMatrix *
hard_link_DnaProbMatrix(obj)
	Wise2_DnaProbMatrix * obj
	CODE:
	RETVAL = Wise2_hard_link_DnaProbMatrix(obj);
	OUTPUT:
	RETVAL



Wise2_DnaProbMatrix *
alloc()
	CODE:
	RETVAL = Wise2_DnaProbMatrix_alloc();
	OUTPUT:
	RETVAL




Wise2_DnaProbMatrix *
new(class)
	char * class
	PPCODE:
	Wise2_DnaProbMatrix * out;
	out = Wise2_DnaProbMatrix_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DnaProbMatrix * obj
	CODE:
	Wise2_free_DnaProbMatrix(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_DnaMatrix *
identity_DnaMatrix(id_score,mismatch)
	Score id_score
	Score mismatch
	CODE:
	RETVAL = Wise2_identity_DnaMatrix(id_score,mismatch);
	OUTPUT:
	RETVAL



Wise2_DnaProbMatrix *
DnaProbMatrix_from_match(match,nmask_type)
	Probability match
	int nmask_type
	CODE:
	RETVAL = Wise2_DnaProbMatrix_from_match(match,nmask_type);
	OUTPUT:
	RETVAL



Wise2_DnaMatrix *
DnaMatrix_from_DnaProbMatrix(dpm)
	Wise2_DnaProbMatrix * dpm
	CODE:
	RETVAL = Wise2_DnaMatrix_from_DnaProbMatrix(dpm);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::Gene

Wise2_Genomic *
get_Genomic_from_Gene(gene)
	Wise2_Gene * gene
	INIT:
Wise2_Genomic * temp;
	CODE:
	temp = Wise2_hard_link_Genomic(Wise2_get_Genomic_from_Gene(gene));
	RETVAL = temp;
	OUTPUT:
	RETVAL



void
show_pretty_Gene(ge,show_supporting,ofp)
	Wise2_Gene * ge
	boolean show_supporting
	FILE * ofp
	CODE:
	Wise2_show_pretty_Gene(ge,show_supporting,ofp);



Wise2_Gene *
hard_link_Gene(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_hard_link_Gene(obj);
	OUTPUT:
	RETVAL



Wise2_Gene *
Gene_alloc_std()
	CODE:
	RETVAL = Wise2_Gene_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_Gene * obj
	int start
	CODE:
	RETVAL = Wise2_replace_start_Gene(obj,start);
	OUTPUT:
	RETVAL



int
start(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_access_start_Gene(obj);
	OUTPUT:
	RETVAL



boolean
set_end(obj,end)
	Wise2_Gene * obj
	int end
	CODE:
	RETVAL = Wise2_replace_end_Gene(obj,end);
	OUTPUT:
	RETVAL



int
end(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_access_end_Gene(obj);
	OUTPUT:
	RETVAL



boolean
set_parent(obj,parent)
	Wise2_Gene * obj
	Wise2_GenomicRegion * parent
	CODE:
	RETVAL = Wise2_replace_parent_Gene(obj,Wise2_hard_link_GenomicRegion(parent));
	OUTPUT:
	RETVAL



Wise2_GenomicRegion *
parent(obj)
	Wise2_Gene * obj
	INIT:
Wise2_GenomicRegion * temp;
	CODE:
	temp = Wise2_hard_link_GenomicRegion(Wise2_access_parent_Gene(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_genomic(obj,genomic)
	Wise2_Gene * obj
	Wise2_Genomic * genomic
	CODE:
	RETVAL = Wise2_replace_genomic_Gene(obj,Wise2_hard_link_Genomic(genomic));
	OUTPUT:
	RETVAL



Wise2_Genomic *
genomic(obj)
	Wise2_Gene * obj
	INIT:
Wise2_Genomic * temp;
	CODE:
	temp = Wise2_hard_link_Genomic(Wise2_access_genomic_Gene(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_Transcript *
transcript(obj,i)
	Wise2_Gene * obj
	int i
	INIT:
Wise2_Transcript * temp;
	CODE:
	temp = Wise2_hard_link_Transcript(Wise2_access_transcript_Gene(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_transcript(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_length_transcript_Gene(obj);
	OUTPUT:
	RETVAL



int
flush_transcript(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_flush_Gene(obj);
	OUTPUT:
	RETVAL



boolean
add_transcript(obj,add)
	Wise2_Gene * obj
	Wise2_Transcript * add
	CODE:
	RETVAL = Wise2_add_Gene(obj,Wise2_hard_link_Transcript(add));
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_Gene * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_Gene(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_Gene * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_Gene(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_bits(obj,bits)
	Wise2_Gene * obj
	double bits
	CODE:
	RETVAL = Wise2_replace_bits_Gene(obj,bits);
	OUTPUT:
	RETVAL



double
bits(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_access_bits_Gene(obj);
	OUTPUT:
	RETVAL



boolean
set_seqname(obj,seqname)
	Wise2_Gene * obj
	char * seqname
	CODE:
	RETVAL = Wise2_replace_seqname_Gene(obj,Wise2_stringalloc(seqname));
	OUTPUT:
	RETVAL



char *
seqname(obj)
	Wise2_Gene * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_seqname_Gene(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_ispseudo(obj,ispseudo)
	Wise2_Gene * obj
	boolean ispseudo
	CODE:
	RETVAL = Wise2_replace_ispseudo_Gene(obj,ispseudo);
	OUTPUT:
	RETVAL



boolean
ispseudo(obj)
	Wise2_Gene * obj
	CODE:
	RETVAL = Wise2_access_ispseudo_Gene(obj);
	OUTPUT:
	RETVAL




Wise2_Gene *
new(class)
	char * class
	PPCODE:
	Wise2_Gene * out;
	out = Wise2_Gene_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Gene * obj
	CODE:
	Wise2_free_Gene(obj);

void
each_transcript(obj)
	Wise2_Gene * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_transcript_Gene(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::Transcript", (void*) (Wise2_hard_link_Transcript(Wise2_access_transcript_Gene(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::Genomic

Wise2_Genomic *
truncate_Genomic(gen,start,stop)
	Wise2_Genomic * gen
	int start
	int stop
	CODE:
	RETVAL = Wise2_truncate_Genomic(gen,start,stop);
	OUTPUT:
	RETVAL



char *
Genomic_name(gen)
	Wise2_Genomic * gen
	CODE:
	RETVAL = Wise2_Genomic_name(gen);
	OUTPUT:
	RETVAL



int
Genomic_length(gen)
	Wise2_Genomic * gen
	CODE:
	RETVAL = Wise2_Genomic_length(gen);
	OUTPUT:
	RETVAL



char
Genomic_seqchar(gen,pos)
	Wise2_Genomic * gen
	int pos
	CODE:
	RETVAL = Wise2_Genomic_seqchar(gen,pos);
	OUTPUT:
	RETVAL



void
show(gen,ofp)
	Wise2_Genomic * gen
	FILE * ofp
	CODE:
	Wise2_show_Genomic(gen,ofp);



Wise2_Genomic *
hard_link_Genomic(obj)
	Wise2_Genomic * obj
	CODE:
	RETVAL = Wise2_hard_link_Genomic(obj);
	OUTPUT:
	RETVAL



Wise2_Genomic *
Genomic_alloc_std()
	CODE:
	RETVAL = Wise2_Genomic_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_baseseq(obj,baseseq)
	Wise2_Genomic * obj
	Wise2_Sequence * baseseq
	CODE:
	RETVAL = Wise2_replace_baseseq_Genomic(obj,Wise2_hard_link_Sequence(baseseq));
	OUTPUT:
	RETVAL



Wise2_Sequence *
baseseq(obj)
	Wise2_Genomic * obj
	INIT:
Wise2_Sequence * temp;
	CODE:
	temp = Wise2_hard_link_Sequence(Wise2_access_baseseq_Genomic(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_GenomicRepeat *
repeat(obj,i)
	Wise2_Genomic * obj
	int i
	INIT:
Wise2_GenomicRepeat * temp;
	CODE:
	temp = Wise2_hard_link_GenomicRepeat(Wise2_access_repeat_Genomic(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_repeat(obj)
	Wise2_Genomic * obj
	CODE:
	RETVAL = Wise2_length_repeat_Genomic(obj);
	OUTPUT:
	RETVAL



int
flush_repeat(obj)
	Wise2_Genomic * obj
	CODE:
	RETVAL = Wise2_flush_Genomic(obj);
	OUTPUT:
	RETVAL



boolean
add_repeat(obj,add)
	Wise2_Genomic * obj
	Wise2_GenomicRepeat * add
	CODE:
	RETVAL = Wise2_add_Genomic(obj,Wise2_hard_link_GenomicRepeat(add));
	OUTPUT:
	RETVAL




Wise2_Genomic *
new(class)
	char * class
	PPCODE:
	Wise2_Genomic * out;
	out = Wise2_Genomic_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Genomic * obj
	CODE:
	Wise2_free_Genomic(obj);

void
each_repeat(obj)
	Wise2_Genomic * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_repeat_Genomic(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::GenomicRepeat", (void*) (Wise2_hard_link_GenomicRepeat(Wise2_access_repeat_Genomic(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::GenomicRepeat

Wise2_GenomicRepeat *
hard_link_GenomicRepeat(obj)
	Wise2_GenomicRepeat * obj
	CODE:
	RETVAL = Wise2_hard_link_GenomicRepeat(obj);
	OUTPUT:
	RETVAL



Wise2_GenomicRepeat *
alloc()
	CODE:
	RETVAL = Wise2_GenomicRepeat_alloc();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_GenomicRepeat * obj
	int start
	CODE:
	RETVAL = Wise2_replace_start_GenomicRepeat(obj,start);
	OUTPUT:
	RETVAL



int
start(obj)
	Wise2_GenomicRepeat * obj
	CODE:
	RETVAL = Wise2_access_start_GenomicRepeat(obj);
	OUTPUT:
	RETVAL



boolean
set_end(obj,end)
	Wise2_GenomicRepeat * obj
	int end
	CODE:
	RETVAL = Wise2_replace_end_GenomicRepeat(obj,end);
	OUTPUT:
	RETVAL



int
end(obj)
	Wise2_GenomicRepeat * obj
	CODE:
	RETVAL = Wise2_access_end_GenomicRepeat(obj);
	OUTPUT:
	RETVAL



boolean
set_type(obj,type)
	Wise2_GenomicRepeat * obj
	char * type
	CODE:
	RETVAL = Wise2_replace_type_GenomicRepeat(obj,Wise2_stringalloc(type));
	OUTPUT:
	RETVAL



char *
type(obj)
	Wise2_GenomicRepeat * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_type_GenomicRepeat(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_GenomicRepeat *
new(class)
	char * class
	PPCODE:
	Wise2_GenomicRepeat * out;
	out = Wise2_GenomicRepeat_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GenomicRepeat * obj
	CODE:
	Wise2_free_GenomicRepeat(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_Genomic *
read_fasta_file_Genomic(filename,length_of_N)
	char * filename
	int length_of_N
	CODE:
	RETVAL = Wise2_read_fasta_file_Genomic(filename,length_of_N);
	OUTPUT:
	RETVAL



Wise2_Genomic *
read_fasta_Genomic(ifp,length_of_N)
	FILE * ifp
	int length_of_N
	CODE:
	RETVAL = Wise2_read_fasta_Genomic(ifp,length_of_N);
	OUTPUT:
	RETVAL



Wise2_Genomic *
Genomic_from_Sequence_Nheuristic(seq,length_of_N)
	Wise2_Sequence * seq
	int length_of_N
	CODE:
	RETVAL = Wise2_Genomic_from_Sequence_Nheuristic(seq,length_of_N);
	OUTPUT:
	RETVAL



Wise2_Genomic *
Genomic_from_Sequence(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_Genomic_from_Sequence(Wise2_hard_link_Sequence(seq));
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::GenomicDB

Wise2_Genomic *
get_Genomic_from_GenomicDB(gendb,de)
	Wise2_GenomicDB * gendb
	Wise2_DataEntry * de
	CODE:
	RETVAL = Wise2_get_Genomic_from_GenomicDB(gendb,de);
	OUTPUT:
	RETVAL



Wise2_GenomicDB *
hard_link_GenomicDB(obj)
	Wise2_GenomicDB * obj
	CODE:
	RETVAL = Wise2_hard_link_GenomicDB(obj);
	OUTPUT:
	RETVAL



Wise2_GenomicDB *
alloc()
	CODE:
	RETVAL = Wise2_GenomicDB_alloc();
	OUTPUT:
	RETVAL



boolean
set_is_single_seq(obj,is_single_seq)
	Wise2_GenomicDB * obj
	boolean is_single_seq
	CODE:
	RETVAL = Wise2_replace_is_single_seq_GenomicDB(obj,is_single_seq);
	OUTPUT:
	RETVAL



boolean
is_single_seq(obj)
	Wise2_GenomicDB * obj
	CODE:
	RETVAL = Wise2_access_is_single_seq_GenomicDB(obj);
	OUTPUT:
	RETVAL



boolean
set_done_forward(obj,done_forward)
	Wise2_GenomicDB * obj
	boolean done_forward
	CODE:
	RETVAL = Wise2_replace_done_forward_GenomicDB(obj,done_forward);
	OUTPUT:
	RETVAL



boolean
done_forward(obj)
	Wise2_GenomicDB * obj
	CODE:
	RETVAL = Wise2_access_done_forward_GenomicDB(obj);
	OUTPUT:
	RETVAL



boolean
set_forw(obj,forw)
	Wise2_GenomicDB * obj
	Wise2_ComplexSequence * forw
	CODE:
	RETVAL = Wise2_replace_forw_GenomicDB(obj,Wise2_hard_link_ComplexSequence(forw));
	OUTPUT:
	RETVAL



Wise2_ComplexSequence *
forw(obj)
	Wise2_GenomicDB * obj
	INIT:
Wise2_ComplexSequence * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequence(Wise2_access_forw_GenomicDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_rev(obj,rev)
	Wise2_GenomicDB * obj
	Wise2_ComplexSequence * rev
	CODE:
	RETVAL = Wise2_replace_rev_GenomicDB(obj,Wise2_hard_link_ComplexSequence(rev));
	OUTPUT:
	RETVAL



Wise2_ComplexSequence *
rev(obj)
	Wise2_GenomicDB * obj
	INIT:
Wise2_ComplexSequence * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequence(Wise2_access_rev_GenomicDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_sdb(obj,sdb)
	Wise2_GenomicDB * obj
	Wise2_SequenceDB * sdb
	CODE:
	RETVAL = Wise2_replace_sdb_GenomicDB(obj,Wise2_hard_link_SequenceDB(sdb));
	OUTPUT:
	RETVAL



Wise2_SequenceDB *
sdb(obj)
	Wise2_GenomicDB * obj
	INIT:
Wise2_SequenceDB * temp;
	CODE:
	temp = Wise2_hard_link_SequenceDB(Wise2_access_sdb_GenomicDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_current(obj,current)
	Wise2_GenomicDB * obj
	Wise2_Genomic * current
	CODE:
	RETVAL = Wise2_replace_current_GenomicDB(obj,Wise2_hard_link_Genomic(current));
	OUTPUT:
	RETVAL



Wise2_Genomic *
current(obj)
	Wise2_GenomicDB * obj
	INIT:
Wise2_Genomic * temp;
	CODE:
	temp = Wise2_hard_link_Genomic(Wise2_access_current_GenomicDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_cses(obj,cses)
	Wise2_GenomicDB * obj
	Wise2_ComplexSequenceEvalSet * cses
	CODE:
	RETVAL = Wise2_replace_cses_GenomicDB(obj,Wise2_hard_link_ComplexSequenceEvalSet(cses));
	OUTPUT:
	RETVAL



Wise2_ComplexSequenceEvalSet *
cses(obj)
	Wise2_GenomicDB * obj
	INIT:
Wise2_ComplexSequenceEvalSet * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequenceEvalSet(Wise2_access_cses_GenomicDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_GenomicDB *
new(class)
	char * class
	PPCODE:
	Wise2_GenomicDB * out;
	out = Wise2_GenomicDB_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GenomicDB * obj
	CODE:
	Wise2_free_GenomicDB(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_GenomicDB *
new_GenomicDB_from_single_seq(gen,cses,score_in_repeat_coding)
	Wise2_Genomic * gen
	Wise2_ComplexSequenceEvalSet * cses
	int score_in_repeat_coding
	CODE:
	RETVAL = Wise2_new_GenomicDB_from_single_seq(gen,cses,score_in_repeat_coding);
	OUTPUT:
	RETVAL



Wise2_GenomicDB *
new_GenomicDB(seqdb,cses,length_of_N,repeat_in_cds_score)
	Wise2_SequenceDB * seqdb
	Wise2_ComplexSequenceEvalSet * cses
	int length_of_N
	int repeat_in_cds_score
	CODE:
	RETVAL = Wise2_new_GenomicDB(seqdb,cses,length_of_N,repeat_in_cds_score);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::GenomicRegion

Wise2_GenomicRegion *
new_GenomicRegion(gen)
	Wise2_Genomic * gen
	CODE:
	RETVAL = Wise2_new_GenomicRegion(gen);
	OUTPUT:
	RETVAL



Wise2_GenomicRegion *
read_EMBL_GenomicRegion_file(filename)
	char * filename
	CODE:
	RETVAL = Wise2_read_EMBL_GenomicRegion_file(filename);
	OUTPUT:
	RETVAL



Wise2_GenomicRegion *
read_EMBL_GenomicRegion(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_EMBL_GenomicRegion(ifp);
	OUTPUT:
	RETVAL



boolean
add_Gene_to_GenomicRegion(gr,gene)
	Wise2_GenomicRegion * gr
	Wise2_Gene * gene
	CODE:
	RETVAL = Wise2_add_Gene_to_GenomicRegion(gr,gene);
	OUTPUT:
	RETVAL



void
show_ace_GenomicRegion(gr,seq_name,ofp)
	Wise2_GenomicRegion * gr
	char * seq_name
	FILE * ofp
	CODE:
	Wise2_show_ace_GenomicRegion(gr,seq_name,ofp);



void
show_pretty_GenomicRegion(gr,show_supporting,ofp)
	Wise2_GenomicRegion * gr
	boolean show_supporting
	FILE * ofp
	CODE:
	Wise2_show_pretty_GenomicRegion(gr,show_supporting,ofp);



void
write_Diana_FT_GenomicRegion(gr,ofp)
	Wise2_GenomicRegion * gr
	FILE * ofp
	CODE:
	Wise2_write_Diana_FT_GenomicRegion(gr,ofp);



void
write_Embl_FT_GenomicRegion(gr,ofp)
	Wise2_GenomicRegion * gr
	FILE * ofp
	CODE:
	Wise2_write_Embl_FT_GenomicRegion(gr,ofp);



Wise2_GenomicRegion *
hard_link_GenomicRegion(obj)
	Wise2_GenomicRegion * obj
	CODE:
	RETVAL = Wise2_hard_link_GenomicRegion(obj);
	OUTPUT:
	RETVAL



Wise2_GenomicRegion *
GenomicRegion_alloc_std()
	CODE:
	RETVAL = Wise2_GenomicRegion_alloc_std();
	OUTPUT:
	RETVAL



Wise2_Gene *
gene(obj,i)
	Wise2_GenomicRegion * obj
	int i
	INIT:
Wise2_Gene * temp;
	CODE:
	temp = Wise2_hard_link_Gene(Wise2_access_gene_GenomicRegion(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_gene(obj)
	Wise2_GenomicRegion * obj
	CODE:
	RETVAL = Wise2_length_gene_GenomicRegion(obj);
	OUTPUT:
	RETVAL



int
flush_gene(obj)
	Wise2_GenomicRegion * obj
	CODE:
	RETVAL = Wise2_flush_GenomicRegion(obj);
	OUTPUT:
	RETVAL



boolean
add_gene(obj,add)
	Wise2_GenomicRegion * obj
	Wise2_Gene * add
	CODE:
	RETVAL = Wise2_add_GenomicRegion(obj,Wise2_hard_link_Gene(add));
	OUTPUT:
	RETVAL



boolean
set_genomic(obj,genomic)
	Wise2_GenomicRegion * obj
	Wise2_Genomic * genomic
	CODE:
	RETVAL = Wise2_replace_genomic_GenomicRegion(obj,Wise2_hard_link_Genomic(genomic));
	OUTPUT:
	RETVAL



Wise2_Genomic *
genomic(obj)
	Wise2_GenomicRegion * obj
	INIT:
Wise2_Genomic * temp;
	CODE:
	temp = Wise2_hard_link_Genomic(Wise2_access_genomic_GenomicRegion(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_GenomicRegion *
new(class)
	char * class
	PPCODE:
	Wise2_GenomicRegion * out;
	out = Wise2_GenomicRegion_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GenomicRegion * obj
	CODE:
	Wise2_free_GenomicRegion(obj);

void
each_gene(obj)
	Wise2_GenomicRegion * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_gene_GenomicRegion(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::Gene", (void*) (Wise2_hard_link_Gene(Wise2_access_gene_GenomicRegion(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::Histogram

void
UnfitHistogram(h)
	Wise2_Histogram * h
	CODE:
	Wise2_UnfitHistogram(h);



void
add(h,sc)
	Wise2_Histogram * h
	float sc
	CODE:
	Wise2_AddToHistogram(h,sc);



void
show(h,fp)
	Wise2_Histogram * h
	FILE * fp
	CODE:
	Wise2_PrintASCIIHistogram(h,fp);



void
EVDBasicFit(h)
	Wise2_Histogram * h
	CODE:
	Wise2_EVDBasicFit(h);



int
fit_EVD(h,censor,high_hint)
	Wise2_Histogram * h
	int censor
	float high_hint
	CODE:
	RETVAL = Wise2_ExtremeValueFitHistogram(h,censor,high_hint);
	OUTPUT:
	RETVAL



void
set_EVD(h,mu,lambda,lowbound,highbound,wonka,ndegrees)
	Wise2_Histogram * h
	float mu
	float lambda
	float lowbound
	float highbound
	float wonka
	int ndegrees
	CODE:
	Wise2_ExtremeValueSetHistogram(h,mu,lambda,lowbound,highbound,wonka,ndegrees);



int
fit_Gaussian(h,high_hint)
	Wise2_Histogram * h
	float high_hint
	CODE:
	RETVAL = Wise2_GaussianFitHistogram(h,high_hint);
	OUTPUT:
	RETVAL



void
set_Gaussian(h,mean,sd)
	Wise2_Histogram * h
	float mean
	float sd
	CODE:
	Wise2_GaussianSetHistogram(h,mean,sd);



double
evalue(his,score)
	Wise2_Histogram * his
	double score
	CODE:
	RETVAL = Wise2_Evalue_from_Histogram(his,score);
	OUTPUT:
	RETVAL



Wise2_Histogram *
hard_link_Histogram(obj)
	Wise2_Histogram * obj
	CODE:
	RETVAL = Wise2_hard_link_Histogram(obj);
	OUTPUT:
	RETVAL



Wise2_Histogram *
alloc()
	CODE:
	RETVAL = Wise2_Histogram_alloc();
	OUTPUT:
	RETVAL




Wise2_Histogram *
new(class)
	char * class
	PPCODE:
	Wise2_Histogram * out;
	out = Wise2_Histogram_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Histogram * obj
	CODE:
	Wise2_free_Histogram(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_Histogram *
new_Histogram(min,max,lumpsize)
	int min
	int max
	int lumpsize
	CODE:
	RETVAL = Wise2_new_Histogram(min,max,lumpsize);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::Hscore

int
minimum_score_Hscore(hs)
	Wise2_Hscore * hs
	CODE:
	RETVAL = Wise2_minimum_score_Hscore(hs);
	OUTPUT:
	RETVAL



int
maximum_score_Hscore(hs)
	Wise2_Hscore * hs
	CODE:
	RETVAL = Wise2_maximum_score_Hscore(hs);
	OUTPUT:
	RETVAL



void
sort_Hscore_by_score(hs)
	Wise2_Hscore * hs
	CODE:
	Wise2_sort_Hscore_by_score(hs);



int
length(obj)
	Wise2_Hscore * obj
	CODE:
	RETVAL = Wise2_length_datascore_Hscore(obj);
	OUTPUT:
	RETVAL



Wise2_DataScore *
datascore(hs,i)
	Wise2_Hscore * hs
	int i
	CODE:
	RETVAL = Wise2_get_datascore_Hscore(hs,i);
	OUTPUT:
	RETVAL



int
score(hs,i)
	Wise2_Hscore * hs
	int i
	CODE:
	RETVAL = Wise2_get_score_Hscore(hs,i);
	OUTPUT:
	RETVAL



double
evalue(hs,i)
	Wise2_Hscore * hs
	int i
	CODE:
	RETVAL = Wise2_get_evalue_Hscore(hs,i);
	OUTPUT:
	RETVAL



void
show(hs,ofp)
	Wise2_Hscore * hs
	FILE * ofp
	CODE:
	Wise2_basic_show_Hscore(hs,ofp);



Wise2_Hscore *
hard_link_Hscore(obj)
	Wise2_Hscore * obj
	CODE:
	RETVAL = Wise2_hard_link_Hscore(obj);
	OUTPUT:
	RETVAL



Wise2_Hscore *
Hscore_alloc_std()
	CODE:
	RETVAL = Wise2_Hscore_alloc_std();
	OUTPUT:
	RETVAL




Wise2_Hscore *
new(class)
	char * class
	PPCODE:
	Wise2_Hscore * out;
	out = Wise2_Hscore_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Hscore * obj
	CODE:
	Wise2_free_Hscore(obj);



MODULE = Wise2 PACKAGE = Wise2::DataScore

Wise2_DataScore *
hard_link_DataScore(obj)
	Wise2_DataScore * obj
	CODE:
	RETVAL = Wise2_hard_link_DataScore(obj);
	OUTPUT:
	RETVAL



Wise2_DataScore *
alloc()
	CODE:
	RETVAL = Wise2_DataScore_alloc();
	OUTPUT:
	RETVAL



boolean
set_query(obj,query)
	Wise2_DataScore * obj
	Wise2_DataEntry * query
	CODE:
	RETVAL = Wise2_replace_query_DataScore(obj,Wise2_hard_link_DataEntry(query));
	OUTPUT:
	RETVAL



Wise2_DataEntry *
query(obj)
	Wise2_DataScore * obj
	INIT:
Wise2_DataEntry * temp;
	CODE:
	temp = Wise2_hard_link_DataEntry(Wise2_access_query_DataScore(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_target(obj,target)
	Wise2_DataScore * obj
	Wise2_DataEntry * target
	CODE:
	RETVAL = Wise2_replace_target_DataScore(obj,Wise2_hard_link_DataEntry(target));
	OUTPUT:
	RETVAL



Wise2_DataEntry *
target(obj)
	Wise2_DataScore * obj
	INIT:
Wise2_DataEntry * temp;
	CODE:
	temp = Wise2_hard_link_DataEntry(Wise2_access_target_DataScore(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_DataScore * obj
	int score
	CODE:
	RETVAL = Wise2_replace_score_DataScore(obj,score);
	OUTPUT:
	RETVAL



int
score(obj)
	Wise2_DataScore * obj
	CODE:
	RETVAL = Wise2_access_score_DataScore(obj);
	OUTPUT:
	RETVAL



boolean
set_evalue(obj,evalue)
	Wise2_DataScore * obj
	double evalue
	CODE:
	RETVAL = Wise2_replace_evalue_DataScore(obj,evalue);
	OUTPUT:
	RETVAL



double
evalue(obj)
	Wise2_DataScore * obj
	CODE:
	RETVAL = Wise2_access_evalue_DataScore(obj);
	OUTPUT:
	RETVAL




Wise2_DataScore *
new(class)
	char * class
	PPCODE:
	Wise2_DataScore * out;
	out = Wise2_DataScore_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DataScore * obj
	CODE:
	Wise2_free_DataScore(obj);



MODULE = Wise2 PACKAGE = Wise2::DataEntry

Wise2_DataEntry *
hard_link_DataEntry(obj)
	Wise2_DataEntry * obj
	CODE:
	RETVAL = Wise2_hard_link_DataEntry(obj);
	OUTPUT:
	RETVAL



Wise2_DataEntry *
alloc()
	CODE:
	RETVAL = Wise2_DataEntry_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_DataEntry * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_DataEntry(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_DataEntry * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_DataEntry(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_is_reversed(obj,is_reversed)
	Wise2_DataEntry * obj
	boolean is_reversed
	CODE:
	RETVAL = Wise2_replace_is_reversed_DataEntry(obj,is_reversed);
	OUTPUT:
	RETVAL



boolean
is_reversed(obj)
	Wise2_DataEntry * obj
	CODE:
	RETVAL = Wise2_access_is_reversed_DataEntry(obj);
	OUTPUT:
	RETVAL




Wise2_DataEntry *
new(class)
	char * class
	PPCODE:
	Wise2_DataEntry * out;
	out = Wise2_DataEntry_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DataEntry * obj
	CODE:
	Wise2_free_DataEntry(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_Hscore *
std_score_Hscore(cut_off,report_stagger)
	int cut_off
	int report_stagger
	CODE:
	RETVAL = Wise2_std_score_Hscore(cut_off,report_stagger);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::PackAln

void
show_simple_PackAln(pal,ofp)
	Wise2_PackAln * pal
	FILE * ofp
	CODE:
	Wise2_show_simple_PackAln(pal,ofp);



void
show_bits_and_cumlative_PackAln(pal,ofp)
	Wise2_PackAln * pal
	FILE * ofp
	CODE:
	Wise2_show_bits_and_cumlative_PackAln(pal,ofp);



Wise2_PackAln *
hard_link_PackAln(obj)
	Wise2_PackAln * obj
	CODE:
	RETVAL = Wise2_hard_link_PackAln(obj);
	OUTPUT:
	RETVAL



Wise2_PackAln *
PackAln_alloc_std()
	CODE:
	RETVAL = Wise2_PackAln_alloc_std();
	OUTPUT:
	RETVAL



Wise2_PackAlnUnit *
pau(obj,i)
	Wise2_PackAln * obj
	int i
	INIT:
Wise2_PackAlnUnit * temp;
	CODE:
	temp = Wise2_hard_link_PackAlnUnit(Wise2_access_pau_PackAln(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_pau(obj)
	Wise2_PackAln * obj
	CODE:
	RETVAL = Wise2_length_pau_PackAln(obj);
	OUTPUT:
	RETVAL



int
flush_pau(obj)
	Wise2_PackAln * obj
	CODE:
	RETVAL = Wise2_flush_PackAln(obj);
	OUTPUT:
	RETVAL



boolean
add_pau(obj,add)
	Wise2_PackAln * obj
	Wise2_PackAlnUnit * add
	CODE:
	RETVAL = Wise2_add_PackAln(obj,Wise2_hard_link_PackAlnUnit(add));
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_PackAln * obj
	int score
	CODE:
	RETVAL = Wise2_replace_score_PackAln(obj,score);
	OUTPUT:
	RETVAL



int
score(obj)
	Wise2_PackAln * obj
	CODE:
	RETVAL = Wise2_access_score_PackAln(obj);
	OUTPUT:
	RETVAL




Wise2_PackAln *
new(class)
	char * class
	PPCODE:
	Wise2_PackAln * out;
	out = Wise2_PackAln_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_PackAln * obj
	CODE:
	Wise2_free_PackAln(obj);

void
each_pau(obj)
	Wise2_PackAln * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_pau_PackAln(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::PackAlnUnit", (void*) (Wise2_hard_link_PackAlnUnit(Wise2_access_pau_PackAln(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::PackAlnUnit

Wise2_PackAlnUnit *
hard_link_PackAlnUnit(obj)
	Wise2_PackAlnUnit * obj
	CODE:
	RETVAL = Wise2_hard_link_PackAlnUnit(obj);
	OUTPUT:
	RETVAL



Wise2_PackAlnUnit *
alloc()
	CODE:
	RETVAL = Wise2_PackAlnUnit_alloc();
	OUTPUT:
	RETVAL



boolean
set_i(obj,i)
	Wise2_PackAlnUnit * obj
	int i
	CODE:
	RETVAL = Wise2_replace_i_PackAlnUnit(obj,i);
	OUTPUT:
	RETVAL



int
i(obj)
	Wise2_PackAlnUnit * obj
	CODE:
	RETVAL = Wise2_access_i_PackAlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_j(obj,j)
	Wise2_PackAlnUnit * obj
	int j
	CODE:
	RETVAL = Wise2_replace_j_PackAlnUnit(obj,j);
	OUTPUT:
	RETVAL



int
j(obj)
	Wise2_PackAlnUnit * obj
	CODE:
	RETVAL = Wise2_access_j_PackAlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_state(obj,state)
	Wise2_PackAlnUnit * obj
	int state
	CODE:
	RETVAL = Wise2_replace_state_PackAlnUnit(obj,state);
	OUTPUT:
	RETVAL



int
state(obj)
	Wise2_PackAlnUnit * obj
	CODE:
	RETVAL = Wise2_access_state_PackAlnUnit(obj);
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_PackAlnUnit * obj
	int score
	CODE:
	RETVAL = Wise2_replace_score_PackAlnUnit(obj,score);
	OUTPUT:
	RETVAL



int
score(obj)
	Wise2_PackAlnUnit * obj
	CODE:
	RETVAL = Wise2_access_score_PackAlnUnit(obj);
	OUTPUT:
	RETVAL




Wise2_PackAlnUnit *
new(class)
	char * class
	PPCODE:
	Wise2_PackAlnUnit * out;
	out = Wise2_PackAlnUnit_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_PackAlnUnit * obj
	CODE:
	Wise2_free_PackAlnUnit(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2

Probability
Probability_from_average_state_occupancy(length)
	double length
	CODE:
	RETVAL = Wise2_Probability_from_average_state_occupancy(length);
	OUTPUT:
	RETVAL



double
state_occupancy_from_Probability(p)
	double p
	CODE:
	RETVAL = Wise2_state_occupancy_from_Probability(p);
	OUTPUT:
	RETVAL



Score
Probability2Score(p)
	Probability p
	CODE:
	RETVAL = Wise2_Probability2Score(p);
	OUTPUT:
	RETVAL



Probability
Score2Probability(s)
	Score s
	CODE:
	RETVAL = Wise2_Score2Probability(s);
	OUTPUT:
	RETVAL



Bits
Score2Bits(s)
	Score s
	CODE:
	RETVAL = Wise2_Score2Bits(s);
	OUTPUT:
	RETVAL



Probability
halfbit2Probability(half_bit)
	double half_bit
	CODE:
	RETVAL = Wise2_halfbit2Probability(half_bit);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::Protein

Wise2_Protein *
Protein_from_Sequence(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_Protein_from_Sequence(Wise2_hard_link_Sequence(seq));
	OUTPUT:
	RETVAL



Wise2_Protein *
hard_link_Protein(obj)
	Wise2_Protein * obj
	CODE:
	RETVAL = Wise2_hard_link_Protein(obj);
	OUTPUT:
	RETVAL



Wise2_Protein *
alloc()
	CODE:
	RETVAL = Wise2_Protein_alloc();
	OUTPUT:
	RETVAL



boolean
set_baseseq(obj,baseseq)
	Wise2_Protein * obj
	Wise2_Sequence * baseseq
	CODE:
	RETVAL = Wise2_replace_baseseq_Protein(obj,Wise2_hard_link_Sequence(baseseq));
	OUTPUT:
	RETVAL



Wise2_Sequence *
baseseq(obj)
	Wise2_Protein * obj
	INIT:
Wise2_Sequence * temp;
	CODE:
	temp = Wise2_hard_link_Sequence(Wise2_access_baseseq_Protein(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_Protein *
new(class)
	char * class
	PPCODE:
	Wise2_Protein * out;
	out = Wise2_Protein_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Protein * obj
	CODE:
	Wise2_free_Protein(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::ProteinDB

Wise2_ProteinDB *
hard_link_ProteinDB(obj)
	Wise2_ProteinDB * obj
	CODE:
	RETVAL = Wise2_hard_link_ProteinDB(obj);
	OUTPUT:
	RETVAL



Wise2_ProteinDB *
alloc()
	CODE:
	RETVAL = Wise2_ProteinDB_alloc();
	OUTPUT:
	RETVAL



boolean
set_is_single_seq(obj,is_single_seq)
	Wise2_ProteinDB * obj
	boolean is_single_seq
	CODE:
	RETVAL = Wise2_replace_is_single_seq_ProteinDB(obj,is_single_seq);
	OUTPUT:
	RETVAL



boolean
is_single_seq(obj)
	Wise2_ProteinDB * obj
	CODE:
	RETVAL = Wise2_access_is_single_seq_ProteinDB(obj);
	OUTPUT:
	RETVAL



boolean
set_is_random_db(obj,is_random_db)
	Wise2_ProteinDB * obj
	boolean is_random_db
	CODE:
	RETVAL = Wise2_replace_is_random_db_ProteinDB(obj,is_random_db);
	OUTPUT:
	RETVAL



boolean
is_random_db(obj)
	Wise2_ProteinDB * obj
	CODE:
	RETVAL = Wise2_access_is_random_db_ProteinDB(obj);
	OUTPUT:
	RETVAL



boolean
set_single(obj,single)
	Wise2_ProteinDB * obj
	Wise2_ComplexSequence * single
	CODE:
	RETVAL = Wise2_replace_single_ProteinDB(obj,Wise2_hard_link_ComplexSequence(single));
	OUTPUT:
	RETVAL



Wise2_ComplexSequence *
single(obj)
	Wise2_ProteinDB * obj
	INIT:
Wise2_ComplexSequence * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequence(Wise2_access_single_ProteinDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_sdb(obj,sdb)
	Wise2_ProteinDB * obj
	Wise2_SequenceDB * sdb
	CODE:
	RETVAL = Wise2_replace_sdb_ProteinDB(obj,Wise2_hard_link_SequenceDB(sdb));
	OUTPUT:
	RETVAL



Wise2_SequenceDB *
sdb(obj)
	Wise2_ProteinDB * obj
	INIT:
Wise2_SequenceDB * temp;
	CODE:
	temp = Wise2_hard_link_SequenceDB(Wise2_access_sdb_ProteinDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_cses(obj,cses)
	Wise2_ProteinDB * obj
	Wise2_ComplexSequenceEvalSet * cses
	CODE:
	RETVAL = Wise2_replace_cses_ProteinDB(obj,Wise2_hard_link_ComplexSequenceEvalSet(cses));
	OUTPUT:
	RETVAL



Wise2_ComplexSequenceEvalSet *
cses(obj)
	Wise2_ProteinDB * obj
	INIT:
Wise2_ComplexSequenceEvalSet * temp;
	CODE:
	temp = Wise2_hard_link_ComplexSequenceEvalSet(Wise2_access_cses_ProteinDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_rnd(obj,rnd)
	Wise2_ProteinDB * obj
	Wise2_RandomProteinDB * rnd
	CODE:
	RETVAL = Wise2_replace_rnd_ProteinDB(obj,Wise2_hard_link_RandomProteinDB(rnd));
	OUTPUT:
	RETVAL



Wise2_RandomProteinDB *
rnd(obj)
	Wise2_ProteinDB * obj
	INIT:
Wise2_RandomProteinDB * temp;
	CODE:
	temp = Wise2_hard_link_RandomProteinDB(Wise2_access_rnd_ProteinDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_test_dna(obj,test_dna)
	Wise2_ProteinDB * obj
	boolean test_dna
	CODE:
	RETVAL = Wise2_replace_test_dna_ProteinDB(obj,test_dna);
	OUTPUT:
	RETVAL



boolean
test_dna(obj)
	Wise2_ProteinDB * obj
	CODE:
	RETVAL = Wise2_access_test_dna_ProteinDB(obj);
	OUTPUT:
	RETVAL




Wise2_ProteinDB *
new(class)
	char * class
	PPCODE:
	Wise2_ProteinDB * out;
	out = Wise2_ProteinDB_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_ProteinDB * obj
	CODE:
	Wise2_free_ProteinDB(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_ProteinDB *
new_ProteinDB_from_single_seq(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_new_ProteinDB_from_single_seq(seq);
	OUTPUT:
	RETVAL



Wise2_ProteinDB *
single_fasta_ProteinDB(filename)
	char * filename
	CODE:
	RETVAL = Wise2_single_fasta_ProteinDB(filename);
	OUTPUT:
	RETVAL



Wise2_ProteinDB *
new_ProteinDB(seqdb,cses)
	Wise2_SequenceDB * seqdb
	Wise2_ComplexSequenceEvalSet * cses
	CODE:
	RETVAL = Wise2_new_ProteinDB(seqdb,cses);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::RandomProteinDB

Wise2_RandomProteinDB *
hard_link_RandomProteinDB(obj)
	Wise2_RandomProteinDB * obj
	CODE:
	RETVAL = Wise2_hard_link_RandomProteinDB(obj);
	OUTPUT:
	RETVAL



Wise2_RandomProteinDB *
alloc()
	CODE:
	RETVAL = Wise2_RandomProteinDB_alloc();
	OUTPUT:
	RETVAL



boolean
set_use_flat_length(obj,use_flat_length)
	Wise2_RandomProteinDB * obj
	boolean use_flat_length
	CODE:
	RETVAL = Wise2_replace_use_flat_length_RandomProteinDB(obj,use_flat_length);
	OUTPUT:
	RETVAL



boolean
use_flat_length(obj)
	Wise2_RandomProteinDB * obj
	CODE:
	RETVAL = Wise2_access_use_flat_length_RandomProteinDB(obj);
	OUTPUT:
	RETVAL



boolean
set_length(obj,length)
	Wise2_RandomProteinDB * obj
	int length
	CODE:
	RETVAL = Wise2_replace_length_RandomProteinDB(obj,length);
	OUTPUT:
	RETVAL



int
length(obj)
	Wise2_RandomProteinDB * obj
	CODE:
	RETVAL = Wise2_access_length_RandomProteinDB(obj);
	OUTPUT:
	RETVAL



boolean
set_length_dist(obj,length_dist)
	Wise2_RandomProteinDB * obj
	Wise2_Histogram * length_dist
	CODE:
	RETVAL = Wise2_replace_length_dist_RandomProteinDB(obj,Wise2_hard_link_Histogram(length_dist));
	OUTPUT:
	RETVAL



Wise2_Histogram *
length_dist(obj)
	Wise2_RandomProteinDB * obj
	INIT:
Wise2_Histogram * temp;
	CODE:
	temp = Wise2_hard_link_Histogram(Wise2_access_length_dist_RandomProteinDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_emission(obj,emission)
	Wise2_RandomProteinDB * obj
	Wise2_RandomModel * emission
	CODE:
	RETVAL = Wise2_replace_emission_RandomProteinDB(obj,Wise2_hard_link_RandomModel(emission));
	OUTPUT:
	RETVAL



Wise2_RandomModel *
emission(obj)
	Wise2_RandomProteinDB * obj
	INIT:
Wise2_RandomModel * temp;
	CODE:
	temp = Wise2_hard_link_RandomModel(Wise2_access_emission_RandomProteinDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_num(obj,num)
	Wise2_RandomProteinDB * obj
	int num
	CODE:
	RETVAL = Wise2_replace_num_RandomProteinDB(obj,num);
	OUTPUT:
	RETVAL



int
num(obj)
	Wise2_RandomProteinDB * obj
	CODE:
	RETVAL = Wise2_access_num_RandomProteinDB(obj);
	OUTPUT:
	RETVAL




Wise2_RandomProteinDB *
new(class)
	char * class
	PPCODE:
	Wise2_RandomProteinDB * out;
	out = Wise2_RandomProteinDB_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_RandomProteinDB * obj
	CODE:
	Wise2_free_RandomProteinDB(obj);



MODULE = Wise2 PACKAGE = Wise2::RandomDNADB

Wise2_RandomDNADB *
hard_link_RandomDNADB(obj)
	Wise2_RandomDNADB * obj
	CODE:
	RETVAL = Wise2_hard_link_RandomDNADB(obj);
	OUTPUT:
	RETVAL



Wise2_RandomDNADB *
alloc()
	CODE:
	RETVAL = Wise2_RandomDNADB_alloc();
	OUTPUT:
	RETVAL



boolean
set_use_flat_length(obj,use_flat_length)
	Wise2_RandomDNADB * obj
	boolean use_flat_length
	CODE:
	RETVAL = Wise2_replace_use_flat_length_RandomDNADB(obj,use_flat_length);
	OUTPUT:
	RETVAL



boolean
use_flat_length(obj)
	Wise2_RandomDNADB * obj
	CODE:
	RETVAL = Wise2_access_use_flat_length_RandomDNADB(obj);
	OUTPUT:
	RETVAL



boolean
set_length(obj,length)
	Wise2_RandomDNADB * obj
	int length
	CODE:
	RETVAL = Wise2_replace_length_RandomDNADB(obj,length);
	OUTPUT:
	RETVAL



int
length(obj)
	Wise2_RandomDNADB * obj
	CODE:
	RETVAL = Wise2_access_length_RandomDNADB(obj);
	OUTPUT:
	RETVAL



boolean
set_length_dist(obj,length_dist)
	Wise2_RandomDNADB * obj
	Wise2_Histogram * length_dist
	CODE:
	RETVAL = Wise2_replace_length_dist_RandomDNADB(obj,Wise2_hard_link_Histogram(length_dist));
	OUTPUT:
	RETVAL



Wise2_Histogram *
length_dist(obj)
	Wise2_RandomDNADB * obj
	INIT:
Wise2_Histogram * temp;
	CODE:
	temp = Wise2_hard_link_Histogram(Wise2_access_length_dist_RandomDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_emission(obj,emission)
	Wise2_RandomDNADB * obj
	Wise2_RandomModelDNA * emission
	CODE:
	RETVAL = Wise2_replace_emission_RandomDNADB(obj,Wise2_hard_link_RandomModelDNA(emission));
	OUTPUT:
	RETVAL



Wise2_RandomModelDNA *
emission(obj)
	Wise2_RandomDNADB * obj
	INIT:
Wise2_RandomModelDNA * temp;
	CODE:
	temp = Wise2_hard_link_RandomModelDNA(Wise2_access_emission_RandomDNADB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_num(obj,num)
	Wise2_RandomDNADB * obj
	int num
	CODE:
	RETVAL = Wise2_replace_num_RandomDNADB(obj,num);
	OUTPUT:
	RETVAL



int
num(obj)
	Wise2_RandomDNADB * obj
	CODE:
	RETVAL = Wise2_access_num_RandomDNADB(obj);
	OUTPUT:
	RETVAL




Wise2_RandomDNADB *
new(class)
	char * class
	PPCODE:
	Wise2_RandomDNADB * out;
	out = Wise2_RandomDNADB_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_RandomDNADB * obj
	CODE:
	Wise2_free_RandomDNADB(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::RandomModelDNA

Wise2_RandomModelDNA *
hard_link_RandomModelDNA(obj)
	Wise2_RandomModelDNA * obj
	CODE:
	RETVAL = Wise2_hard_link_RandomModelDNA(obj);
	OUTPUT:
	RETVAL



Wise2_RandomModelDNA *
alloc()
	CODE:
	RETVAL = Wise2_RandomModelDNA_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_RandomModelDNA * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_RandomModelDNA(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_RandomModelDNA * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_RandomModelDNA(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_RandomModelDNA *
new(class)
	char * class
	PPCODE:
	Wise2_RandomModelDNA * out;
	out = Wise2_RandomModelDNA_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_RandomModelDNA * obj
	CODE:
	Wise2_free_RandomModelDNA(obj);



MODULE = Wise2 PACKAGE = Wise2::RandomModel

Wise2_RandomModel *
hard_link_RandomModel(obj)
	Wise2_RandomModel * obj
	CODE:
	RETVAL = Wise2_hard_link_RandomModel(obj);
	OUTPUT:
	RETVAL



Wise2_RandomModel *
alloc()
	CODE:
	RETVAL = Wise2_RandomModel_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_RandomModel * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_RandomModel(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_RandomModel * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_RandomModel(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_RandomModel *
new(class)
	char * class
	PPCODE:
	Wise2_RandomModel * out;
	out = Wise2_RandomModel_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_RandomModel * obj
	CODE:
	Wise2_free_RandomModel(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_RandomModelDNA *
RandomModelDNA_std()
	CODE:
	RETVAL = Wise2_RandomModelDNA_std();
	OUTPUT:
	RETVAL



Wise2_RandomModel *
default_RandomModel()
	CODE:
	RETVAL = Wise2_default_RandomModel();
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::Sequence

void
uppercase(seq)
	Wise2_Sequence * seq
	CODE:
	Wise2_uppercase_Sequence(seq);



boolean
force_to_dna(seq,fraction)
	Wise2_Sequence * seq
	double fraction
	CODE:
	RETVAL = Wise2_force_to_dna_Sequence(seq,fraction,NULL);
	OUTPUT:
	RETVAL



boolean
is_reversed(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_is_reversed_Sequence(seq);
	OUTPUT:
	RETVAL



Wise2_Sequence *
translate(dna,ct)
	Wise2_Sequence * dna
	Wise2_CodonTable * ct
	CODE:
	RETVAL = Wise2_translate_Sequence(dna,ct);
	OUTPUT:
	RETVAL



Wise2_Sequence *
revcomp(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_reverse_complement_Sequence(seq);
	OUTPUT:
	RETVAL



Wise2_Sequence *
magic_trunc(seq,start,end)
	Wise2_Sequence * seq
	int start
	int end
	CODE:
	RETVAL = Wise2_magic_trunc_Sequence(seq,start,end);
	OUTPUT:
	RETVAL



Wise2_Sequence *
trunc(seq,start,end)
	Wise2_Sequence * seq
	int start
	int end
	CODE:
	RETVAL = Wise2_trunc_Sequence(seq,start,end);
	OUTPUT:
	RETVAL



Wise2_Sequence *
read_fasta_file_Sequence(filename)
	char * filename
	CODE:
	RETVAL = Wise2_read_fasta_file_Sequence(filename);
	OUTPUT:
	RETVAL



Wise2_Sequence *
read_Sequence_EMBL_seq(buffer,maxlen,ifp)
	char * buffer
	int maxlen
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_Sequence_EMBL_seq(buffer,maxlen,ifp);
	OUTPUT:
	RETVAL



Wise2_Sequence *
read_fasta_Sequence(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_fasta_Sequence(ifp);
	OUTPUT:
	RETVAL



void
show_debug(seq,start,end,ofp)
	Wise2_Sequence * seq
	int start
	int end
	FILE * ofp
	CODE:
	Wise2_show_Sequence_residue_list(seq,start,end,ofp);



void
write_fasta(seq,ofp)
	Wise2_Sequence * seq
	FILE * ofp
	CODE:
	Wise2_write_fasta_Sequence(seq,ofp);



void
validate(seq)
	Wise2_Sequence * seq
	CODE:
	Wise2_make_len_type_Sequence(seq);



Wise2_Sequence *
hard_link_Sequence(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_hard_link_Sequence(obj);
	OUTPUT:
	RETVAL



Wise2_Sequence *
alloc()
	CODE:
	RETVAL = Wise2_Sequence_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_Sequence * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_Sequence(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_Sequence * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_Sequence(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_seq(obj,seq)
	Wise2_Sequence * obj
	char * seq
	CODE:
	RETVAL = Wise2_replace_seq_Sequence(obj,Wise2_stringalloc(seq));
	OUTPUT:
	RETVAL



char *
seq(obj)
	Wise2_Sequence * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_seq_Sequence(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_len(obj,len)
	Wise2_Sequence * obj
	int len
	CODE:
	RETVAL = Wise2_replace_len_Sequence(obj,len);
	OUTPUT:
	RETVAL



int
len(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_len_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_maxlen(obj,maxlen)
	Wise2_Sequence * obj
	int maxlen
	CODE:
	RETVAL = Wise2_replace_maxlen_Sequence(obj,maxlen);
	OUTPUT:
	RETVAL



int
maxlen(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_maxlen_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_offset(obj,offset)
	Wise2_Sequence * obj
	int offset
	CODE:
	RETVAL = Wise2_replace_offset_Sequence(obj,offset);
	OUTPUT:
	RETVAL



int
offset(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_offset_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_end(obj,end)
	Wise2_Sequence * obj
	int end
	CODE:
	RETVAL = Wise2_replace_end_Sequence(obj,end);
	OUTPUT:
	RETVAL



int
end(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_end_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_type(obj,type)
	Wise2_Sequence * obj
	char type
	CODE:
	RETVAL = Wise2_replace_type_Sequence(obj,type);
	OUTPUT:
	RETVAL



char
type(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_type_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_tax_id(obj,tax_id)
	Wise2_Sequence * obj
	int tax_id
	CODE:
	RETVAL = Wise2_replace_tax_id_Sequence(obj,tax_id);
	OUTPUT:
	RETVAL



int
tax_id(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_tax_id_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_weight(obj,weight)
	Wise2_Sequence * obj
	double weight
	CODE:
	RETVAL = Wise2_replace_weight_Sequence(obj,weight);
	OUTPUT:
	RETVAL



double
weight(obj)
	Wise2_Sequence * obj
	CODE:
	RETVAL = Wise2_access_weight_Sequence(obj);
	OUTPUT:
	RETVAL



boolean
set_desc(obj,desc)
	Wise2_Sequence * obj
	char * desc
	CODE:
	RETVAL = Wise2_replace_desc_Sequence(obj,Wise2_stringalloc(desc));
	OUTPUT:
	RETVAL



char *
desc(obj)
	Wise2_Sequence * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_desc_Sequence(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_Sequence *
new(class)
	char * class
	PPCODE:
	Wise2_Sequence * out;
	out = Wise2_Sequence_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Sequence * obj
	CODE:
	Wise2_free_Sequence(obj);



MODULE = Wise2 PACKAGE = Wise2::SequenceSet

Wise2_SequenceSet *
hard_link_SequenceSet(obj)
	Wise2_SequenceSet * obj
	CODE:
	RETVAL = Wise2_hard_link_SequenceSet(obj);
	OUTPUT:
	RETVAL



Wise2_SequenceSet *
SequenceSet_alloc_std()
	CODE:
	RETVAL = Wise2_SequenceSet_alloc_std();
	OUTPUT:
	RETVAL



Wise2_Sequence *
set(obj,i)
	Wise2_SequenceSet * obj
	int i
	INIT:
Wise2_Sequence * temp;
	CODE:
	temp = Wise2_hard_link_Sequence(Wise2_access_set_SequenceSet(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_set(obj)
	Wise2_SequenceSet * obj
	CODE:
	RETVAL = Wise2_length_set_SequenceSet(obj);
	OUTPUT:
	RETVAL



int
flush_set(obj)
	Wise2_SequenceSet * obj
	CODE:
	RETVAL = Wise2_flush_SequenceSet(obj);
	OUTPUT:
	RETVAL



boolean
add_set(obj,add)
	Wise2_SequenceSet * obj
	Wise2_Sequence * add
	CODE:
	RETVAL = Wise2_add_SequenceSet(obj,Wise2_hard_link_Sequence(add));
	OUTPUT:
	RETVAL




Wise2_SequenceSet *
new(class)
	char * class
	PPCODE:
	Wise2_SequenceSet * out;
	out = Wise2_SequenceSet_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_SequenceSet * obj
	CODE:
	Wise2_free_SequenceSet(obj);

void
each_set(obj)
	Wise2_SequenceSet * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_set_SequenceSet(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::Sequence", (void*) (Wise2_hard_link_Sequence(Wise2_access_set_SequenceSet(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2

char *
Sequence_type_to_string(type)
	int type
	CODE:
	RETVAL = Wise2_Sequence_type_to_string(type);
	OUTPUT:
	RETVAL



Wise2_Sequence *
new_Sequence_from_strings(name,seq)
	char * name
	char * seq
	CODE:
	RETVAL = Wise2_new_Sequence_from_strings(name,seq);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2

Wise2_Sequence *
reverse_complement_Sequence(seq)
	Wise2_Sequence * seq
	CODE:
	RETVAL = Wise2_reverse_complement_Sequence(seq);
	OUTPUT:
	RETVAL



Wise2_Sequence *
magic_trunc_Sequence(seq,start,end)
	Wise2_Sequence * seq
	int start
	int end
	CODE:
	RETVAL = Wise2_magic_trunc_Sequence(seq,start,end);
	OUTPUT:
	RETVAL



Wise2_Sequence *
translate(dna,ct)
	Wise2_Sequence * dna
	Wise2_CodonTable * ct
	CODE:
	RETVAL = Wise2_translate_Sequence(dna,ct);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::SequenceDB

boolean
close_SequenceDB(last,sdb)
	Wise2_Sequence * last
	Wise2_SequenceDB * sdb
	CODE:
	RETVAL = Wise2_close_SequenceDB(last,sdb);
	OUTPUT:
	RETVAL



Wise2_SequenceDB *
hard_link_SequenceDB(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_hard_link_SequenceDB(obj);
	OUTPUT:
	RETVAL



Wise2_SequenceDB *
SequenceDB_alloc_std()
	CODE:
	RETVAL = Wise2_SequenceDB_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_SequenceDB * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_SequenceDB(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_SequenceDB * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_SequenceDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_FileSource *
fs(obj,i)
	Wise2_SequenceDB * obj
	int i
	INIT:
Wise2_FileSource * temp;
	CODE:
	temp = Wise2_hard_link_FileSource(Wise2_access_fs_SequenceDB(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_fs(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_length_fs_SequenceDB(obj);
	OUTPUT:
	RETVAL



int
flush_fs(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_flush_SequenceDB(obj);
	OUTPUT:
	RETVAL



boolean
add_fs(obj,add)
	Wise2_SequenceDB * obj
	Wise2_FileSource * add
	CODE:
	RETVAL = Wise2_add_SequenceDB(obj,Wise2_hard_link_FileSource(add));
	OUTPUT:
	RETVAL



boolean
set_current_source(obj,current_source)
	Wise2_SequenceDB * obj
	int current_source
	CODE:
	RETVAL = Wise2_replace_current_source_SequenceDB(obj,current_source);
	OUTPUT:
	RETVAL



int
current_source(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_access_current_source_SequenceDB(obj);
	OUTPUT:
	RETVAL



boolean
set_current_file(obj,current_file)
	Wise2_SequenceDB * obj
	FILE * current_file
	CODE:
	RETVAL = Wise2_replace_current_file_SequenceDB(obj,current_file);
	OUTPUT:
	RETVAL



FILE *
current_file(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_access_current_file_SequenceDB(obj);
	OUTPUT:
	RETVAL



boolean
set_sequence_no(obj,sequence_no)
	Wise2_SequenceDB * obj
	int sequence_no
	CODE:
	RETVAL = Wise2_replace_sequence_no_SequenceDB(obj,sequence_no);
	OUTPUT:
	RETVAL



int
sequence_no(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_access_sequence_no_SequenceDB(obj);
	OUTPUT:
	RETVAL



boolean
set_byte_position(obj,byte_position)
	Wise2_SequenceDB * obj
	int byte_position
	CODE:
	RETVAL = Wise2_replace_byte_position_SequenceDB(obj,byte_position);
	OUTPUT:
	RETVAL



int
byte_position(obj)
	Wise2_SequenceDB * obj
	CODE:
	RETVAL = Wise2_access_byte_position_SequenceDB(obj);
	OUTPUT:
	RETVAL




Wise2_SequenceDB *
new(class)
	char * class
	PPCODE:
	Wise2_SequenceDB * out;
	out = Wise2_SequenceDB_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_SequenceDB * obj
	CODE:
	Wise2_free_SequenceDB(obj);

void
each_fs(obj)
	Wise2_SequenceDB * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_fs_SequenceDB(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::FileSource", (void*) (Wise2_hard_link_FileSource(Wise2_access_fs_SequenceDB(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::FileSource

Wise2_FileSource *
hard_link_FileSource(obj)
	Wise2_FileSource * obj
	CODE:
	RETVAL = Wise2_hard_link_FileSource(obj);
	OUTPUT:
	RETVAL



Wise2_FileSource *
alloc()
	CODE:
	RETVAL = Wise2_FileSource_alloc();
	OUTPUT:
	RETVAL



boolean
set_filename(obj,filename)
	Wise2_FileSource * obj
	char * filename
	CODE:
	RETVAL = Wise2_replace_filename_FileSource(obj,Wise2_stringalloc(filename));
	OUTPUT:
	RETVAL



char *
filename(obj)
	Wise2_FileSource * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_filename_FileSource(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_input(obj,input)
	Wise2_FileSource * obj
	FILE * input
	CODE:
	RETVAL = Wise2_replace_input_FileSource(obj,input);
	OUTPUT:
	RETVAL



FILE *
input(obj)
	Wise2_FileSource * obj
	CODE:
	RETVAL = Wise2_access_input_FileSource(obj);
	OUTPUT:
	RETVAL



boolean
set_format(obj,format)
	Wise2_FileSource * obj
	int format
	CODE:
	RETVAL = Wise2_replace_format_FileSource(obj,format);
	OUTPUT:
	RETVAL



int
format(obj)
	Wise2_FileSource * obj
	CODE:
	RETVAL = Wise2_access_format_FileSource(obj);
	OUTPUT:
	RETVAL



boolean
set_type(obj,type)
	Wise2_FileSource * obj
	int type
	CODE:
	RETVAL = Wise2_replace_type_FileSource(obj,type);
	OUTPUT:
	RETVAL



int
type(obj)
	Wise2_FileSource * obj
	CODE:
	RETVAL = Wise2_access_type_FileSource(obj);
	OUTPUT:
	RETVAL




Wise2_FileSource *
new(class)
	char * class
	PPCODE:
	Wise2_FileSource * out;
	out = Wise2_FileSource_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_FileSource * obj
	CODE:
	Wise2_free_FileSource(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_SequenceDB *
single_fasta_SequenceDB(filename)
	char * filename
	CODE:
	RETVAL = Wise2_single_fasta_SequenceDB(filename);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::Exon

Wise2_Exon *
hard_link_Exon(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_hard_link_Exon(obj);
	OUTPUT:
	RETVAL



Wise2_Exon *
Exon_alloc_std()
	CODE:
	RETVAL = Wise2_Exon_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_Exon * obj
	int start
	CODE:
	RETVAL = Wise2_replace_start_Exon(obj,start);
	OUTPUT:
	RETVAL



int
start(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_access_start_Exon(obj);
	OUTPUT:
	RETVAL



boolean
set_end(obj,end)
	Wise2_Exon * obj
	int end
	CODE:
	RETVAL = Wise2_replace_end_Exon(obj,end);
	OUTPUT:
	RETVAL



int
end(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_access_end_Exon(obj);
	OUTPUT:
	RETVAL



boolean
set_used(obj,used)
	Wise2_Exon * obj
	boolean used
	CODE:
	RETVAL = Wise2_replace_used_Exon(obj,used);
	OUTPUT:
	RETVAL



boolean
used(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_access_used_Exon(obj);
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_Exon * obj
	double score
	CODE:
	RETVAL = Wise2_replace_score_Exon(obj,score);
	OUTPUT:
	RETVAL



double
score(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_access_score_Exon(obj);
	OUTPUT:
	RETVAL



Wise2_SupportingFeature *
sf(obj,i)
	Wise2_Exon * obj
	int i
	INIT:
Wise2_SupportingFeature * temp;
	CODE:
	temp = Wise2_hard_link_SupportingFeature(Wise2_access_sf_Exon(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_sf(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_length_sf_Exon(obj);
	OUTPUT:
	RETVAL



int
flush_sf(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_flush_Exon(obj);
	OUTPUT:
	RETVAL



boolean
add_sf(obj,add)
	Wise2_Exon * obj
	Wise2_SupportingFeature * add
	CODE:
	RETVAL = Wise2_add_Exon(obj,Wise2_hard_link_SupportingFeature(add));
	OUTPUT:
	RETVAL



boolean
set_phase(obj,phase)
	Wise2_Exon * obj
	int phase
	CODE:
	RETVAL = Wise2_replace_phase_Exon(obj,phase);
	OUTPUT:
	RETVAL



int
phase(obj)
	Wise2_Exon * obj
	CODE:
	RETVAL = Wise2_access_phase_Exon(obj);
	OUTPUT:
	RETVAL




Wise2_Exon *
new(class)
	char * class
	PPCODE:
	Wise2_Exon * out;
	out = Wise2_Exon_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Exon * obj
	CODE:
	Wise2_free_Exon(obj);

void
each_sf(obj)
	Wise2_Exon * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_sf_Exon(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::SupportingFeature", (void*) (Wise2_hard_link_SupportingFeature(Wise2_access_sf_Exon(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::Transcript

Wise2_cDNA *
get_cDNA_from_Transcript(trs)
	Wise2_Transcript * trs
	INIT:
Wise2_cDNA * temp;
	CODE:
	temp = Wise2_hard_link_cDNA(Wise2_get_cDNA_from_Transcript(trs));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_Transcript *
hard_link_Transcript(obj)
	Wise2_Transcript * obj
	CODE:
	RETVAL = Wise2_hard_link_Transcript(obj);
	OUTPUT:
	RETVAL



Wise2_Transcript *
Transcript_alloc_std()
	CODE:
	RETVAL = Wise2_Transcript_alloc_std();
	OUTPUT:
	RETVAL



Wise2_Exon *
exon(obj,i)
	Wise2_Transcript * obj
	int i
	INIT:
Wise2_Exon * temp;
	CODE:
	temp = Wise2_hard_link_Exon(Wise2_access_exon_Transcript(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_exon(obj)
	Wise2_Transcript * obj
	CODE:
	RETVAL = Wise2_length_exon_Transcript(obj);
	OUTPUT:
	RETVAL



int
flush_exon(obj)
	Wise2_Transcript * obj
	CODE:
	RETVAL = Wise2_flush_ex_Transcript(obj);
	OUTPUT:
	RETVAL



boolean
add_exon(obj,add)
	Wise2_Transcript * obj
	Wise2_Exon * add
	CODE:
	RETVAL = Wise2_add_ex_Transcript(obj,Wise2_hard_link_Exon(add));
	OUTPUT:
	RETVAL



boolean
set_parent(obj,parent)
	Wise2_Transcript * obj
	Wise2_Gene * parent
	CODE:
	RETVAL = Wise2_replace_parent_Transcript(obj,Wise2_hard_link_Gene(parent));
	OUTPUT:
	RETVAL



Wise2_Gene *
parent(obj)
	Wise2_Transcript * obj
	INIT:
Wise2_Gene * temp;
	CODE:
	temp = Wise2_hard_link_Gene(Wise2_access_parent_Transcript(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_Translation *
translation(obj,i)
	Wise2_Transcript * obj
	int i
	INIT:
Wise2_Translation * temp;
	CODE:
	temp = Wise2_hard_link_Translation(Wise2_access_translation_Transcript(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_translation(obj)
	Wise2_Transcript * obj
	CODE:
	RETVAL = Wise2_length_translation_Transcript(obj);
	OUTPUT:
	RETVAL



int
flush_translation(obj)
	Wise2_Transcript * obj
	CODE:
	RETVAL = Wise2_flush_Transcript(obj);
	OUTPUT:
	RETVAL



boolean
add_translation(obj,add)
	Wise2_Transcript * obj
	Wise2_Translation * add
	CODE:
	RETVAL = Wise2_add_Transcript(obj,Wise2_hard_link_Translation(add));
	OUTPUT:
	RETVAL



boolean
set_cDNA(obj,cDNA)
	Wise2_Transcript * obj
	Wise2_cDNA * cDNA
	CODE:
	RETVAL = Wise2_replace_cDNA_Transcript(obj,Wise2_hard_link_cDNA(cDNA));
	OUTPUT:
	RETVAL



Wise2_cDNA *
cDNA(obj)
	Wise2_Transcript * obj
	INIT:
Wise2_cDNA * temp;
	CODE:
	temp = Wise2_hard_link_cDNA(Wise2_access_cDNA_Transcript(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_Transcript *
new(class)
	char * class
	PPCODE:
	Wise2_Transcript * out;
	out = Wise2_Transcript_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Transcript * obj
	CODE:
	Wise2_free_Transcript(obj);

void
each_exon(obj)
	Wise2_Transcript * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_exon_Transcript(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::Exon", (void*) (Wise2_hard_link_Exon(Wise2_access_exon_Transcript(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);

void
each_translation(obj)
	Wise2_Transcript * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_translation_Transcript(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::Translation", (void*) (Wise2_hard_link_Translation(Wise2_access_translation_Transcript(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::Translation

Wise2_Protein *
get_Protein_from_Translation(ts,ct)
	Wise2_Translation * ts
	Wise2_CodonTable * ct
	INIT:
Wise2_Protein * temp;
	CODE:
	temp = Wise2_hard_link_Protein(Wise2_get_Protein_from_Translation(ts,ct));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_Translation *
hard_link_Translation(obj)
	Wise2_Translation * obj
	CODE:
	RETVAL = Wise2_hard_link_Translation(obj);
	OUTPUT:
	RETVAL



Wise2_Translation *
alloc()
	CODE:
	RETVAL = Wise2_Translation_alloc();
	OUTPUT:
	RETVAL



boolean
set_start(obj,start)
	Wise2_Translation * obj
	int start
	CODE:
	RETVAL = Wise2_replace_start_Translation(obj,start);
	OUTPUT:
	RETVAL



int
start(obj)
	Wise2_Translation * obj
	CODE:
	RETVAL = Wise2_access_start_Translation(obj);
	OUTPUT:
	RETVAL



boolean
set_end(obj,end)
	Wise2_Translation * obj
	int end
	CODE:
	RETVAL = Wise2_replace_end_Translation(obj,end);
	OUTPUT:
	RETVAL



int
end(obj)
	Wise2_Translation * obj
	CODE:
	RETVAL = Wise2_access_end_Translation(obj);
	OUTPUT:
	RETVAL



boolean
set_parent(obj,parent)
	Wise2_Translation * obj
	Wise2_Transcript * parent
	CODE:
	RETVAL = Wise2_replace_parent_Translation(obj,Wise2_hard_link_Transcript(parent));
	OUTPUT:
	RETVAL



Wise2_Transcript *
parent(obj)
	Wise2_Translation * obj
	INIT:
Wise2_Transcript * temp;
	CODE:
	temp = Wise2_hard_link_Transcript(Wise2_access_parent_Translation(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_protein(obj,protein)
	Wise2_Translation * obj
	Wise2_Protein * protein
	CODE:
	RETVAL = Wise2_replace_protein_Translation(obj,Wise2_hard_link_Protein(protein));
	OUTPUT:
	RETVAL



Wise2_Protein *
protein(obj)
	Wise2_Translation * obj
	INIT:
Wise2_Protein * temp;
	CODE:
	temp = Wise2_hard_link_Protein(Wise2_access_protein_Translation(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_Translation *
new(class)
	char * class
	PPCODE:
	Wise2_Translation * out;
	out = Wise2_Translation_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_Translation * obj
	CODE:
	Wise2_free_Translation(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::cDNAParser

Wise2_cDNAParser *
hard_link_cDNAParser(obj)
	Wise2_cDNAParser * obj
	CODE:
	RETVAL = Wise2_hard_link_cDNAParser(obj);
	OUTPUT:
	RETVAL



Wise2_cDNAParser *
alloc()
	CODE:
	RETVAL = Wise2_cDNAParser_alloc();
	OUTPUT:
	RETVAL




Wise2_cDNAParser *
new(class)
	char * class
	PPCODE:
	Wise2_cDNAParser * out;
	out = Wise2_cDNAParser_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_cDNAParser * obj
	CODE:
	Wise2_free_cDNAParser(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_cDNAParser *
flat_cDNAParser(p)
	Probability p
	CODE:
	RETVAL = Wise2_flat_cDNAParser(p);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::DnaStartEnd

Wise2_DnaStartEnd *
hard_link_DnaStartEnd(obj)
	Wise2_DnaStartEnd * obj
	CODE:
	RETVAL = Wise2_hard_link_DnaStartEnd(obj);
	OUTPUT:
	RETVAL



Wise2_DnaStartEnd *
alloc()
	CODE:
	RETVAL = Wise2_DnaStartEnd_alloc();
	OUTPUT:
	RETVAL




Wise2_DnaStartEnd *
new(class)
	char * class
	PPCODE:
	Wise2_DnaStartEnd * out;
	out = Wise2_DnaStartEnd_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DnaStartEnd * obj
	CODE:
	Wise2_free_DnaStartEnd(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_AlnBlock *
make_align_dnaalign(one,two,mat,se,qgap,qext,tgap,text,dpri)
	Wise2_Sequence * one
	Wise2_Sequence * two
	Wise2_DnaMatrix * mat
	Wise2_DnaStartEnd * se
	int qgap
	int qext
	int tgap
	int text
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_make_align_dnaalign(one,two,mat,se,qgap,qext,tgap,text,dpri);
	OUTPUT:
	RETVAL



Wise2_DnaStartEnd *
DnaStartEnd_from_policy(policy)
	char * policy
	CODE:
	RETVAL = Wise2_DnaStartEnd_from_policy(policy);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2

Wise2_Hscore *
Hscore_from_TSM_estwise(tdb,cdb,cp,cm,rmd,use_syn,alg,bits_cutoff,allN,flat_insert,report_level,die_on_error,dbsi)
	Wise2_ThreeStateDB * tdb
	Wise2_cDNADB * cdb
	Wise2_cDNAParser * cp
	Wise2_CodonMapper * cm
	Wise2_RandomModelDNA * rmd
	boolean use_syn
	int alg
	double bits_cutoff
	Probability allN
	boolean flat_insert
	int report_level
	boolean die_on_error
	Wise2_DBSearchImpl * dbsi
	CODE:
	RETVAL = Wise2_Hscore_from_TSM_estwise(tdb,cdb,cp,cm,rmd,use_syn,alg,bits_cutoff,allN,flat_insert,report_level,die_on_error,dbsi);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
AlnBlock_from_Protein_estwise_wrap(pro,cdna,cp,cm,ct,comp,gap,ext,is_global,rmd,alg,rm,use_syn,allN,dpri)
	Wise2_Protein * pro
	Wise2_cDNA * cdna
	Wise2_cDNAParser * cp
	Wise2_CodonMapper * cm
	Wise2_CodonTable * ct
	Wise2_CompMat * comp
	int gap
	int ext
	boolean is_global
	Wise2_RandomModelDNA * rmd
	int alg
	Wise2_RandomModel * rm
	boolean use_syn
	Probability allN
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_AlnBlock_from_Protein_estwise_wrap(pro,cdna,cp,cm,ct,comp,gap,ext,is_global,rmd,alg,rm,use_syn,allN,dpri,NULL);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
AlnBlock_from_TSM_estwise_wrap(tsm,cdna,cp,cm,ct,rmd,alg,use_syn,force_flat_insert,allN,dpri)
	Wise2_ThreeStateModel * tsm
	Wise2_cDNA * cdna
	Wise2_cDNAParser * cp
	Wise2_CodonMapper * cm
	Wise2_CodonTable * ct
	Wise2_RandomModelDNA * rmd
	int alg
	boolean use_syn
	boolean force_flat_insert
	Probability allN
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_AlnBlock_from_TSM_estwise_wrap(tsm,cdna,cp,cm,ct,rmd,alg,use_syn,force_flat_insert,allN,dpri,NULL);
	OUTPUT:
	RETVAL



int
alg_estwrap_from_string(str)
	char * str
	CODE:
	RETVAL = Wise2_alg_estwrap_from_string(str);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2

boolean
protein2genomic_ascii_display(alb,p,gen,ct,name,main,ofp)
	Wise2_AlnBlock * alb
	Wise2_Protein * p
	Wise2_Genomic * gen
	Wise2_CodonTable * ct
	int name
	int main
	FILE * ofp
	CODE:
	RETVAL = Wise2_protein2genomic_ascii_display(alb,p,gen,ct,name,main,ofp);
	OUTPUT:
	RETVAL



boolean
protcdna_ascii_display(alb,protsequence,protname,protoff,cdna,ct,name,main,mult,ofp)
	Wise2_AlnBlock * alb
	char * protsequence
	char * protname
	int protoff
	Wise2_cDNA * cdna
	Wise2_CodonTable * ct
	int name
	int main
	boolean mult
	FILE * ofp
	CODE:
	RETVAL = Wise2_protcdna_ascii_display(alb,protsequence,protname,protoff,cdna,ct,name,main,mult,ofp);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::GeneFrequency21

Wise2_GeneFrequency21 *
hard_link_GeneFrequency21(obj)
	Wise2_GeneFrequency21 * obj
	CODE:
	RETVAL = Wise2_hard_link_GeneFrequency21(obj);
	OUTPUT:
	RETVAL



Wise2_GeneFrequency21 *
alloc()
	CODE:
	RETVAL = Wise2_GeneFrequency21_alloc();
	OUTPUT:
	RETVAL



boolean
set_ss5(obj,ss5)
	Wise2_GeneFrequency21 * obj
	Wise2_GeneConsensus * ss5
	CODE:
	RETVAL = Wise2_replace_ss5_GeneFrequency21(obj,Wise2_hard_link_GeneConsensus(ss5));
	OUTPUT:
	RETVAL



Wise2_GeneConsensus *
ss5(obj)
	Wise2_GeneFrequency21 * obj
	INIT:
Wise2_GeneConsensus * temp;
	CODE:
	temp = Wise2_hard_link_GeneConsensus(Wise2_access_ss5_GeneFrequency21(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_ss3(obj,ss3)
	Wise2_GeneFrequency21 * obj
	Wise2_GeneConsensus * ss3
	CODE:
	RETVAL = Wise2_replace_ss3_GeneFrequency21(obj,Wise2_hard_link_GeneConsensus(ss3));
	OUTPUT:
	RETVAL



Wise2_GeneConsensus *
ss3(obj)
	Wise2_GeneFrequency21 * obj
	INIT:
Wise2_GeneConsensus * temp;
	CODE:
	temp = Wise2_hard_link_GeneConsensus(Wise2_access_ss3_GeneFrequency21(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_GeneFrequency21 *
new(class)
	char * class
	PPCODE:
	Wise2_GeneFrequency21 * out;
	out = Wise2_GeneFrequency21_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GeneFrequency21 * obj
	CODE:
	Wise2_free_GeneFrequency21(obj);



MODULE = Wise2 PACKAGE = Wise2::GeneConsensus

Wise2_GeneConsensus *
hard_link_GeneConsensus(obj)
	Wise2_GeneConsensus * obj
	CODE:
	RETVAL = Wise2_hard_link_GeneConsensus(obj);
	OUTPUT:
	RETVAL



Wise2_GeneConsensus *
GeneConsensus_alloc_std()
	CODE:
	RETVAL = Wise2_GeneConsensus_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_center(obj,center)
	Wise2_GeneConsensus * obj
	int center
	CODE:
	RETVAL = Wise2_replace_center_GeneConsensus(obj,center);
	OUTPUT:
	RETVAL



int
center(obj)
	Wise2_GeneConsensus * obj
	CODE:
	RETVAL = Wise2_access_center_GeneConsensus(obj);
	OUTPUT:
	RETVAL



Wise2_GeneSingleCons *
gsc(obj,i)
	Wise2_GeneConsensus * obj
	int i
	INIT:
Wise2_GeneSingleCons * temp;
	CODE:
	temp = Wise2_hard_link_GeneSingleCons(Wise2_access_gsc_GeneConsensus(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_gsc(obj)
	Wise2_GeneConsensus * obj
	CODE:
	RETVAL = Wise2_length_gsc_GeneConsensus(obj);
	OUTPUT:
	RETVAL



int
flush_gsc(obj)
	Wise2_GeneConsensus * obj
	CODE:
	RETVAL = Wise2_flush_GeneConsensus(obj);
	OUTPUT:
	RETVAL



boolean
add_gsc(obj,add)
	Wise2_GeneConsensus * obj
	Wise2_GeneSingleCons * add
	CODE:
	RETVAL = Wise2_add_GeneConsensus(obj,Wise2_hard_link_GeneSingleCons(add));
	OUTPUT:
	RETVAL




Wise2_GeneConsensus *
new(class)
	char * class
	PPCODE:
	Wise2_GeneConsensus * out;
	out = Wise2_GeneConsensus_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GeneConsensus * obj
	CODE:
	Wise2_free_GeneConsensus(obj);

void
each_gsc(obj)
	Wise2_GeneConsensus * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_gsc_GeneConsensus(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::GeneSingleCons", (void*) (Wise2_hard_link_GeneSingleCons(Wise2_access_gsc_GeneConsensus(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::GeneSingleCons

Wise2_GeneSingleCons *
hard_link_GeneSingleCons(obj)
	Wise2_GeneSingleCons * obj
	CODE:
	RETVAL = Wise2_hard_link_GeneSingleCons(obj);
	OUTPUT:
	RETVAL



Wise2_GeneSingleCons *
alloc()
	CODE:
	RETVAL = Wise2_GeneSingleCons_alloc();
	OUTPUT:
	RETVAL



boolean
set_string(obj,string)
	Wise2_GeneSingleCons * obj
	char * string
	CODE:
	RETVAL = Wise2_replace_string_GeneSingleCons(obj,Wise2_stringalloc(string));
	OUTPUT:
	RETVAL



char *
string(obj)
	Wise2_GeneSingleCons * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_string_GeneSingleCons(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_number(obj,number)
	Wise2_GeneSingleCons * obj
	double number
	CODE:
	RETVAL = Wise2_replace_number_GeneSingleCons(obj,number);
	OUTPUT:
	RETVAL



double
number(obj)
	Wise2_GeneSingleCons * obj
	CODE:
	RETVAL = Wise2_access_number_GeneSingleCons(obj);
	OUTPUT:
	RETVAL




Wise2_GeneSingleCons *
new(class)
	char * class
	PPCODE:
	Wise2_GeneSingleCons * out;
	out = Wise2_GeneSingleCons_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GeneSingleCons * obj
	CODE:
	Wise2_free_GeneSingleCons(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_GeneFrequency21 *
read_GeneFrequency21_file(filename)
	char * filename
	CODE:
	RETVAL = Wise2_read_GeneFrequency21_file(filename);
	OUTPUT:
	RETVAL



Wise2_GeneFrequency21 *
read_GeneFrequency21(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_GeneFrequency21(ifp);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::GeneParameter21

Wise2_GeneParameter21 *
hard_link_GeneParameter21(obj)
	Wise2_GeneParameter21 * obj
	CODE:
	RETVAL = Wise2_hard_link_GeneParameter21(obj);
	OUTPUT:
	RETVAL



Wise2_GeneParameter21 *
GeneParameter21_alloc_std()
	CODE:
	RETVAL = Wise2_GeneParameter21_alloc_std();
	OUTPUT:
	RETVAL




Wise2_GeneParameter21 *
new(class)
	char * class
	PPCODE:
	Wise2_GeneParameter21 * out;
	out = Wise2_GeneParameter21_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_GeneParameter21 * obj
	CODE:
	Wise2_free_GeneParameter21(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::MatchSummarySet

Wise2_MatchSummarySet *
MatchSummarySet_from_AlnBlock_estwise(alb,qname,offset,target)
	Wise2_AlnBlock * alb
	char * qname
	int offset
	Wise2_Sequence * target
	CODE:
	RETVAL = Wise2_MatchSummarySet_from_AlnBlock_estwise(alb,qname,offset,target);
	OUTPUT:
	RETVAL



Wise2_MatchSummarySet *
MatchSummarySet_from_AlnBlock_genewise(alb,qname,protoff,target)
	Wise2_AlnBlock * alb
	char * qname
	int protoff
	Wise2_Sequence * target
	CODE:
	RETVAL = Wise2_MatchSummarySet_from_AlnBlock_genewise(alb,qname,protoff,target);
	OUTPUT:
	RETVAL



Wise2_MatchSummarySet *
hard_link_MatchSummarySet(obj)
	Wise2_MatchSummarySet * obj
	CODE:
	RETVAL = Wise2_hard_link_MatchSummarySet(obj);
	OUTPUT:
	RETVAL



Wise2_MatchSummarySet *
MatchSummarySet_alloc_std()
	CODE:
	RETVAL = Wise2_MatchSummarySet_alloc_std();
	OUTPUT:
	RETVAL



Wise2_MatchSummary *
ms(obj,i)
	Wise2_MatchSummarySet * obj
	int i
	INIT:
Wise2_MatchSummary * temp;
	CODE:
	temp = Wise2_hard_link_MatchSummary(Wise2_access_ms_MatchSummarySet(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_ms(obj)
	Wise2_MatchSummarySet * obj
	CODE:
	RETVAL = Wise2_length_ms_MatchSummarySet(obj);
	OUTPUT:
	RETVAL



int
flush_ms(obj)
	Wise2_MatchSummarySet * obj
	CODE:
	RETVAL = Wise2_flush_MatchSummarySet(obj);
	OUTPUT:
	RETVAL



boolean
add_ms(obj,add)
	Wise2_MatchSummarySet * obj
	Wise2_MatchSummary * add
	CODE:
	RETVAL = Wise2_add_MatchSummarySet(obj,Wise2_hard_link_MatchSummary(add));
	OUTPUT:
	RETVAL




Wise2_MatchSummarySet *
new(class)
	char * class
	PPCODE:
	Wise2_MatchSummarySet * out;
	out = Wise2_MatchSummarySet_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_MatchSummarySet * obj
	CODE:
	Wise2_free_MatchSummarySet(obj);

void
each_ms(obj)
	Wise2_MatchSummarySet * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_ms_MatchSummarySet(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::MatchSummary", (void*) (Wise2_hard_link_MatchSummary(Wise2_access_ms_MatchSummarySet(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::MatchSummary

Wise2_MatchSummary *
hard_link_MatchSummary(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_hard_link_MatchSummary(obj);
	OUTPUT:
	RETVAL



Wise2_MatchSummary *
alloc()
	CODE:
	RETVAL = Wise2_MatchSummary_alloc();
	OUTPUT:
	RETVAL



boolean
set_bits(obj,bits)
	Wise2_MatchSummary * obj
	double bits
	CODE:
	RETVAL = Wise2_replace_bits_MatchSummary(obj,bits);
	OUTPUT:
	RETVAL



double
bits(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_bits_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_qname(obj,qname)
	Wise2_MatchSummary * obj
	char * qname
	CODE:
	RETVAL = Wise2_replace_qname_MatchSummary(obj,Wise2_stringalloc(qname));
	OUTPUT:
	RETVAL



char *
qname(obj)
	Wise2_MatchSummary * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_qname_MatchSummary(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_tname(obj,tname)
	Wise2_MatchSummary * obj
	char * tname
	CODE:
	RETVAL = Wise2_replace_tname_MatchSummary(obj,Wise2_stringalloc(tname));
	OUTPUT:
	RETVAL



char *
tname(obj)
	Wise2_MatchSummary * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_tname_MatchSummary(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_qstart(obj,qstart)
	Wise2_MatchSummary * obj
	int qstart
	CODE:
	RETVAL = Wise2_replace_qstart_MatchSummary(obj,qstart);
	OUTPUT:
	RETVAL



int
qstart(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_qstart_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_qend(obj,qend)
	Wise2_MatchSummary * obj
	int qend
	CODE:
	RETVAL = Wise2_replace_qend_MatchSummary(obj,qend);
	OUTPUT:
	RETVAL



int
qend(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_qend_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_tstart(obj,tstart)
	Wise2_MatchSummary * obj
	int tstart
	CODE:
	RETVAL = Wise2_replace_tstart_MatchSummary(obj,tstart);
	OUTPUT:
	RETVAL



int
tstart(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_tstart_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_tend(obj,tend)
	Wise2_MatchSummary * obj
	int tend
	CODE:
	RETVAL = Wise2_replace_tend_MatchSummary(obj,tend);
	OUTPUT:
	RETVAL



int
tend(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_tend_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_qintron(obj,qintron)
	Wise2_MatchSummary * obj
	int qintron
	CODE:
	RETVAL = Wise2_replace_qintron_MatchSummary(obj,qintron);
	OUTPUT:
	RETVAL



int
qintron(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_qintron_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_qframeshift(obj,qframeshift)
	Wise2_MatchSummary * obj
	int qframeshift
	CODE:
	RETVAL = Wise2_replace_qframeshift_MatchSummary(obj,qframeshift);
	OUTPUT:
	RETVAL



int
qframeshift(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_qframeshift_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_tintron(obj,tintron)
	Wise2_MatchSummary * obj
	int tintron
	CODE:
	RETVAL = Wise2_replace_tintron_MatchSummary(obj,tintron);
	OUTPUT:
	RETVAL



int
tintron(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_tintron_MatchSummary(obj);
	OUTPUT:
	RETVAL



boolean
set_tframeshift(obj,tframeshift)
	Wise2_MatchSummary * obj
	int tframeshift
	CODE:
	RETVAL = Wise2_replace_tframeshift_MatchSummary(obj,tframeshift);
	OUTPUT:
	RETVAL



int
tframeshift(obj)
	Wise2_MatchSummary * obj
	CODE:
	RETVAL = Wise2_access_tframeshift_MatchSummary(obj);
	OUTPUT:
	RETVAL




Wise2_MatchSummary *
new(class)
	char * class
	PPCODE:
	Wise2_MatchSummary * out;
	out = Wise2_MatchSummary_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_MatchSummary * obj
	CODE:
	Wise2_free_MatchSummary(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::PfamHmmer1DB

Wise2_PfamHmmer1DB *
hard_link_PfamHmmer1DB(obj)
	Wise2_PfamHmmer1DB * obj
	CODE:
	RETVAL = Wise2_hard_link_PfamHmmer1DB(obj);
	OUTPUT:
	RETVAL



Wise2_PfamHmmer1DB *
PfamHmmer1DB_alloc_std()
	CODE:
	RETVAL = Wise2_PfamHmmer1DB_alloc_std();
	OUTPUT:
	RETVAL



Wise2_PfamHmmer1Entry *
en(obj,i)
	Wise2_PfamHmmer1DB * obj
	int i
	INIT:
Wise2_PfamHmmer1Entry * temp;
	CODE:
	temp = Wise2_hard_link_PfamHmmer1Entry(Wise2_access_en_PfamHmmer1DB(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_en(obj)
	Wise2_PfamHmmer1DB * obj
	CODE:
	RETVAL = Wise2_length_en_PfamHmmer1DB(obj);
	OUTPUT:
	RETVAL



int
flush_en(obj)
	Wise2_PfamHmmer1DB * obj
	CODE:
	RETVAL = Wise2_flush_PfamHmmer1DB(obj);
	OUTPUT:
	RETVAL



boolean
add_en(obj,add)
	Wise2_PfamHmmer1DB * obj
	Wise2_PfamHmmer1Entry * add
	CODE:
	RETVAL = Wise2_add_PfamHmmer1DB(obj,Wise2_hard_link_PfamHmmer1Entry(add));
	OUTPUT:
	RETVAL



boolean
set_dirname(obj,dirname)
	Wise2_PfamHmmer1DB * obj
	char * dirname
	CODE:
	RETVAL = Wise2_replace_dirname_PfamHmmer1DB(obj,Wise2_stringalloc(dirname));
	OUTPUT:
	RETVAL



char *
dirname(obj)
	Wise2_PfamHmmer1DB * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_dirname_PfamHmmer1DB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_cur(obj,cur)
	Wise2_PfamHmmer1DB * obj
	int cur
	CODE:
	RETVAL = Wise2_replace_cur_PfamHmmer1DB(obj,cur);
	OUTPUT:
	RETVAL



int
cur(obj)
	Wise2_PfamHmmer1DB * obj
	CODE:
	RETVAL = Wise2_access_cur_PfamHmmer1DB(obj);
	OUTPUT:
	RETVAL



boolean
set_def(obj,def)
	Wise2_PfamHmmer1DB * obj
	Wise2_RandomModel * def
	CODE:
	RETVAL = Wise2_replace_def_PfamHmmer1DB(obj,Wise2_hard_link_RandomModel(def));
	OUTPUT:
	RETVAL



Wise2_RandomModel *
def(obj)
	Wise2_PfamHmmer1DB * obj
	INIT:
Wise2_RandomModel * temp;
	CODE:
	temp = Wise2_hard_link_RandomModel(Wise2_access_def_PfamHmmer1DB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_PfamHmmer1DB *
new(class)
	char * class
	PPCODE:
	Wise2_PfamHmmer1DB * out;
	out = Wise2_PfamHmmer1DB_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_PfamHmmer1DB * obj
	CODE:
	Wise2_free_PfamHmmer1DB(obj);

void
each_en(obj)
	Wise2_PfamHmmer1DB * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_en_PfamHmmer1DB(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::PfamHmmer1Entry", (void*) (Wise2_hard_link_PfamHmmer1Entry(Wise2_access_en_PfamHmmer1DB(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::PfamHmmer1Entry

Wise2_PfamHmmer1Entry *
hard_link_PfamHmmer1Entry(obj)
	Wise2_PfamHmmer1Entry * obj
	CODE:
	RETVAL = Wise2_hard_link_PfamHmmer1Entry(obj);
	OUTPUT:
	RETVAL



Wise2_PfamHmmer1Entry *
alloc()
	CODE:
	RETVAL = Wise2_PfamHmmer1Entry_alloc();
	OUTPUT:
	RETVAL



boolean
set_entryname(obj,entryname)
	Wise2_PfamHmmer1Entry * obj
	char * entryname
	CODE:
	RETVAL = Wise2_replace_entryname_PfamHmmer1Entry(obj,Wise2_stringalloc(entryname));
	OUTPUT:
	RETVAL



char *
entryname(obj)
	Wise2_PfamHmmer1Entry * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_entryname_PfamHmmer1Entry(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_is_random(obj,is_random)
	Wise2_PfamHmmer1Entry * obj
	boolean is_random
	CODE:
	RETVAL = Wise2_replace_is_random_PfamHmmer1Entry(obj,is_random);
	OUTPUT:
	RETVAL



boolean
is_random(obj)
	Wise2_PfamHmmer1Entry * obj
	CODE:
	RETVAL = Wise2_access_is_random_PfamHmmer1Entry(obj);
	OUTPUT:
	RETVAL



boolean
set_is_hmmls(obj,is_hmmls)
	Wise2_PfamHmmer1Entry * obj
	boolean is_hmmls
	CODE:
	RETVAL = Wise2_replace_is_hmmls_PfamHmmer1Entry(obj,is_hmmls);
	OUTPUT:
	RETVAL



boolean
is_hmmls(obj)
	Wise2_PfamHmmer1Entry * obj
	CODE:
	RETVAL = Wise2_access_is_hmmls_PfamHmmer1Entry(obj);
	OUTPUT:
	RETVAL



boolean
set_bits_cutoff(obj,bits_cutoff)
	Wise2_PfamHmmer1Entry * obj
	double bits_cutoff
	CODE:
	RETVAL = Wise2_replace_bits_cutoff_PfamHmmer1Entry(obj,bits_cutoff);
	OUTPUT:
	RETVAL



double
bits_cutoff(obj)
	Wise2_PfamHmmer1Entry * obj
	CODE:
	RETVAL = Wise2_access_bits_cutoff_PfamHmmer1Entry(obj);
	OUTPUT:
	RETVAL




Wise2_PfamHmmer1Entry *
new(class)
	char * class
	PPCODE:
	Wise2_PfamHmmer1Entry * out;
	out = Wise2_PfamHmmer1Entry_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_PfamHmmer1Entry * obj
	CODE:
	Wise2_free_PfamHmmer1Entry(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2

boolean
write_pretty_str_align(alb,qname,query,tname,target,name,main,ofp)
	Wise2_AlnBlock * alb
	char * qname
	char * query
	char * tname
	char * target
	int name
	int main
	FILE * ofp
	CODE:
	RETVAL = Wise2_write_pretty_str_align(alb,qname,query,tname,target,name,main,ofp);
	OUTPUT:
	RETVAL



boolean
write_pretty_seq_align(alb,q,t,name,main,ofp)
	Wise2_AlnBlock * alb
	Wise2_Sequence * q
	Wise2_Sequence * t
	int name
	int main
	FILE * ofp
	CODE:
	RETVAL = Wise2_write_pretty_seq_align(alb,q,t,name,main,ofp);
	OUTPUT:
	RETVAL



boolean
write_pretty_Protein_align(alb,q,t,name,main,ofp)
	Wise2_AlnBlock * alb
	Wise2_Protein * q
	Wise2_Protein * t
	int name
	int main
	FILE * ofp
	CODE:
	RETVAL = Wise2_write_pretty_Protein_align(alb,q,t,name,main,ofp);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::DnaSequenceHitList

void
show_DnaSequenceHitList(dsl,ofp)
	Wise2_DnaSequenceHitList * dsl
	FILE * ofp
	CODE:
	Wise2_show_DnaSequenceHitList(dsl,ofp);



Wise2_DnaSequenceHitList *
read_MSPcrunch_DnaSequenceHitList(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_MSPcrunch_DnaSequenceHitList(ifp);
	OUTPUT:
	RETVAL



Wise2_DnaSequenceHitList *
hard_link_DnaSequenceHitList(obj)
	Wise2_DnaSequenceHitList * obj
	CODE:
	RETVAL = Wise2_hard_link_DnaSequenceHitList(obj);
	OUTPUT:
	RETVAL



Wise2_DnaSequenceHitList *
alloc()
	CODE:
	RETVAL = Wise2_DnaSequenceHitList_alloc();
	OUTPUT:
	RETVAL



boolean
set_forward(obj,forward)
	Wise2_DnaSequenceHitList * obj
	Wise2_SegmentHitList * forward
	CODE:
	RETVAL = Wise2_replace_forward_DnaSequenceHitList(obj,Wise2_hard_link_SegmentHitList(forward));
	OUTPUT:
	RETVAL



Wise2_SegmentHitList *
forward(obj)
	Wise2_DnaSequenceHitList * obj
	INIT:
Wise2_SegmentHitList * temp;
	CODE:
	temp = Wise2_hard_link_SegmentHitList(Wise2_access_forward_DnaSequenceHitList(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_backward(obj,backward)
	Wise2_DnaSequenceHitList * obj
	Wise2_SegmentHitList * backward
	CODE:
	RETVAL = Wise2_replace_backward_DnaSequenceHitList(obj,Wise2_hard_link_SegmentHitList(backward));
	OUTPUT:
	RETVAL



Wise2_SegmentHitList *
backward(obj)
	Wise2_DnaSequenceHitList * obj
	INIT:
Wise2_SegmentHitList * temp;
	CODE:
	temp = Wise2_hard_link_SegmentHitList(Wise2_access_backward_DnaSequenceHitList(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_DnaSequenceHitList *
new(class)
	char * class
	PPCODE:
	Wise2_DnaSequenceHitList * out;
	out = Wise2_DnaSequenceHitList_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_DnaSequenceHitList * obj
	CODE:
	Wise2_free_DnaSequenceHitList(obj);



MODULE = Wise2 PACKAGE = Wise2::SegmentHitList

Wise2_SegmentHitList *
hard_link_SegmentHitList(obj)
	Wise2_SegmentHitList * obj
	CODE:
	RETVAL = Wise2_hard_link_SegmentHitList(obj);
	OUTPUT:
	RETVAL



Wise2_SegmentHitList *
SegmentHitList_alloc_std()
	CODE:
	RETVAL = Wise2_SegmentHitList_alloc_std();
	OUTPUT:
	RETVAL



Wise2_SegmentHit *
seghit(obj,i)
	Wise2_SegmentHitList * obj
	int i
	INIT:
Wise2_SegmentHit * temp;
	CODE:
	temp = Wise2_hard_link_SegmentHit(Wise2_access_seghit_SegmentHitList(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_seghit(obj)
	Wise2_SegmentHitList * obj
	CODE:
	RETVAL = Wise2_length_seghit_SegmentHitList(obj);
	OUTPUT:
	RETVAL



int
flush_seghit(obj)
	Wise2_SegmentHitList * obj
	CODE:
	RETVAL = Wise2_flush_SegmentHitList(obj);
	OUTPUT:
	RETVAL



boolean
add_seghit(obj,add)
	Wise2_SegmentHitList * obj
	Wise2_SegmentHit * add
	CODE:
	RETVAL = Wise2_add_SegmentHitList(obj,Wise2_hard_link_SegmentHit(add));
	OUTPUT:
	RETVAL




Wise2_SegmentHitList *
new(class)
	char * class
	PPCODE:
	Wise2_SegmentHitList * out;
	out = Wise2_SegmentHitList_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_SegmentHitList * obj
	CODE:
	Wise2_free_SegmentHitList(obj);

void
each_seghit(obj)
	Wise2_SegmentHitList * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_seghit_SegmentHitList(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::SegmentHit", (void*) (Wise2_hard_link_SegmentHit(Wise2_access_seghit_SegmentHitList(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::SegmentHit

Wise2_SegmentHit *
hard_link_SegmentHit(obj)
	Wise2_SegmentHit * obj
	CODE:
	RETVAL = Wise2_hard_link_SegmentHit(obj);
	OUTPUT:
	RETVAL



Wise2_SegmentHit *
alloc()
	CODE:
	RETVAL = Wise2_SegmentHit_alloc();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_SegmentHit * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_SegmentHit(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_SegmentHit * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_SegmentHit(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_qstart(obj,qstart)
	Wise2_SegmentHit * obj
	int qstart
	CODE:
	RETVAL = Wise2_replace_qstart_SegmentHit(obj,qstart);
	OUTPUT:
	RETVAL



int
qstart(obj)
	Wise2_SegmentHit * obj
	CODE:
	RETVAL = Wise2_access_qstart_SegmentHit(obj);
	OUTPUT:
	RETVAL



boolean
set_qend(obj,qend)
	Wise2_SegmentHit * obj
	int qend
	CODE:
	RETVAL = Wise2_replace_qend_SegmentHit(obj,qend);
	OUTPUT:
	RETVAL



int
qend(obj)
	Wise2_SegmentHit * obj
	CODE:
	RETVAL = Wise2_access_qend_SegmentHit(obj);
	OUTPUT:
	RETVAL



boolean
set_tstart(obj,tstart)
	Wise2_SegmentHit * obj
	int tstart
	CODE:
	RETVAL = Wise2_replace_tstart_SegmentHit(obj,tstart);
	OUTPUT:
	RETVAL



int
tstart(obj)
	Wise2_SegmentHit * obj
	CODE:
	RETVAL = Wise2_access_tstart_SegmentHit(obj);
	OUTPUT:
	RETVAL



boolean
set_tend(obj,tend)
	Wise2_SegmentHit * obj
	int tend
	CODE:
	RETVAL = Wise2_replace_tend_SegmentHit(obj,tend);
	OUTPUT:
	RETVAL



int
tend(obj)
	Wise2_SegmentHit * obj
	CODE:
	RETVAL = Wise2_access_tend_SegmentHit(obj);
	OUTPUT:
	RETVAL



boolean
set_score(obj,score)
	Wise2_SegmentHit * obj
	double score
	CODE:
	RETVAL = Wise2_replace_score_SegmentHit(obj,score);
	OUTPUT:
	RETVAL



double
score(obj)
	Wise2_SegmentHit * obj
	CODE:
	RETVAL = Wise2_access_score_SegmentHit(obj);
	OUTPUT:
	RETVAL



boolean
set_next_hit(obj,next_hit)
	Wise2_SegmentHit * obj
	Wise2_SegmentHit * next_hit
	CODE:
	RETVAL = Wise2_replace_next_hit_SegmentHit(obj,Wise2_hard_link_SegmentHit(next_hit));
	OUTPUT:
	RETVAL



Wise2_SegmentHit *
next_hit(obj)
	Wise2_SegmentHit * obj
	INIT:
Wise2_SegmentHit * temp;
	CODE:
	temp = Wise2_hard_link_SegmentHit(Wise2_access_next_hit_SegmentHit(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_SegmentHit *
new(class)
	char * class
	PPCODE:
	Wise2_SegmentHit * out;
	out = Wise2_SegmentHit_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_SegmentHit * obj
	CODE:
	Wise2_free_SegmentHit(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2

Wise2_AlnBlock *
Align_strings_ProteinSmithWaterman(one,two,comp,gap,ext,dpenv,dpri)
	char * one
	char * two
	Wise2_CompMat * comp
	int gap
	int ext
	Wise2_DPEnvelope * dpenv
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_Align_strings_ProteinSmithWaterman(one,two,comp,gap,ext,dpenv,dpri);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
Align_Sequences_ProteinSmithWaterman(one,two,comp,gap,ext,dpenv,dpri)
	Wise2_Sequence * one
	Wise2_Sequence * two
	Wise2_CompMat * comp
	int gap
	int ext
	Wise2_DPEnvelope * dpenv
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_Align_Sequences_ProteinSmithWaterman(one,two,comp,gap,ext,dpenv,dpri);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
Align_Proteins_SmithWaterman(one,two,comp,gap,ext,dpenv,dpri)
	Wise2_Protein * one
	Wise2_Protein * two
	Wise2_CompMat * comp
	int gap
	int ext
	Wise2_DPEnvelope * dpenv
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_Align_Proteins_SmithWaterman(one,two,comp,gap,ext,dpenv,dpri);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
Align_Proteins_ABC(one,two,comp,a,b,c,dpenv,dpri)
	Wise2_Protein * one
	Wise2_Protein * two
	Wise2_CompMat * comp
	int a
	int b
	int c
	Wise2_DPEnvelope * dpenv
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_Align_Proteins_ABC(one,two,comp,a,b,c,dpenv,dpri);
	OUTPUT:
	RETVAL



Wise2_AlnBlock *
Align_Sequences_ProteinABC(one,two,comp,a,b,c,dpenv,dpri)
	Wise2_Sequence * one
	Wise2_Sequence * two
	Wise2_CompMat * comp
	int a
	int b
	int c
	Wise2_DPEnvelope * dpenv
	Wise2_DPRunImpl * dpri
	CODE:
	RETVAL = Wise2_Align_Sequences_ProteinABC(one,two,comp,a,b,c,dpenv,dpri);
	OUTPUT:
	RETVAL



Wise2_Hscore *
Hscore_from_ProteinSW(querydb,targetdb,comp,gap,ext,bits_cutoff,report_level,die_on_error,dbsi)
	Wise2_ProteinDB* querydb
	Wise2_ProteinDB* targetdb
	Wise2_CompMat* comp
	int gap
	int ext
	double bits_cutoff
	int report_level
	boolean die_on_error
	Wise2_DBSearchImpl* dbsi
	CODE:
	RETVAL = Wise2_Hscore_from_ProteinSW(querydb,targetdb,comp,gap,ext,bits_cutoff,report_level,die_on_error,dbsi);
	OUTPUT:
	RETVAL



Wise2_Hscore *
Hscore_from_ProteinABC(querydb,targetdb,comp,a,b,c,bits_cutoff,report_level,die_on_error,dbsi)
	Wise2_ProteinDB* querydb
	Wise2_ProteinDB* targetdb
	Wise2_CompMat* comp
	int a
	int b
	int c
	double bits_cutoff
	int report_level
	boolean die_on_error
	Wise2_DBSearchImpl* dbsi
	CODE:
	RETVAL = Wise2_Hscore_from_ProteinABC(querydb,targetdb,comp,a,b,c,bits_cutoff,report_level,die_on_error,dbsi);
	OUTPUT:
	RETVAL



Wise2_Hscore *
Hscore_from_ProteinBA(querydb,targetdb,comp,bentry,bexit,bfor_trans,b_self_trans,b3exit,bits_cutoff,report_level,dbsi)
	Wise2_ProteinDB* querydb
	Wise2_ProteinDB* targetdb
	Wise2_CompMat* comp
	Score bentry
	Score bexit
	Score bfor_trans
	Score b_self_trans
	Score b3exit
	double bits_cutoff
	int report_level
	Wise2_DBSearchImpl* dbsi
	CODE:
	RETVAL = Wise2_Hscore_from_ProteinBA(querydb,targetdb,comp,bentry,bexit,bfor_trans,b_self_trans,b3exit,bits_cutoff,report_level,dbsi);
	OUTPUT:
	RETVAL





MODULE = Wise2 PACKAGE = Wise2::ThreeStateDB

Wise2_ThreeStateModel *
indexed_model(mdb,en)
	Wise2_ThreeStateDB * mdb
	Wise2_DataEntry * en
	CODE:
	RETVAL = Wise2_indexed_ThreeStateModel_ThreeStateDB(mdb,en);
	OUTPUT:
	RETVAL



Wise2_ThreeStateDB *
new_proteindb_ThreeStateDB(sdb,comp,gap,ext)
	Wise2_SequenceDB * sdb
	Wise2_CompMat * comp
	int gap
	int ext
	CODE:
	RETVAL = Wise2_new_proteindb_ThreeStateDB(sdb,comp,gap,ext);
	OUTPUT:
	RETVAL



Wise2_ThreeStateDB *
new_PfamHmmer1DB_ThreeStateDB(dirname)
	char * dirname
	CODE:
	RETVAL = Wise2_new_PfamHmmer1DB_ThreeStateDB(dirname);
	OUTPUT:
	RETVAL



Wise2_ThreeStateDB *
new_single_ThreeStateDB(tsm,rm)
	Wise2_ThreeStateModel * tsm
	Wise2_RandomModel * rm
	CODE:
	RETVAL = Wise2_new_single_ThreeStateDB(tsm,rm);
	OUTPUT:
	RETVAL



Wise2_ThreeStateDB *
hard_link_ThreeStateDB(obj)
	Wise2_ThreeStateDB * obj
	CODE:
	RETVAL = Wise2_hard_link_ThreeStateDB(obj);
	OUTPUT:
	RETVAL



Wise2_ThreeStateDB *
alloc()
	CODE:
	RETVAL = Wise2_ThreeStateDB_alloc();
	OUTPUT:
	RETVAL



boolean
set_dbtype(obj,dbtype)
	Wise2_ThreeStateDB * obj
	int dbtype
	CODE:
	RETVAL = Wise2_replace_dbtype_ThreeStateDB(obj,dbtype);
	OUTPUT:
	RETVAL



int
dbtype(obj)
	Wise2_ThreeStateDB * obj
	CODE:
	RETVAL = Wise2_access_dbtype_ThreeStateDB(obj);
	OUTPUT:
	RETVAL



boolean
set_filename(obj,filename)
	Wise2_ThreeStateDB * obj
	char * filename
	CODE:
	RETVAL = Wise2_replace_filename_ThreeStateDB(obj,Wise2_stringalloc(filename));
	OUTPUT:
	RETVAL



char *
filename(obj)
	Wise2_ThreeStateDB * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_filename_ThreeStateDB(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_ThreeStateDB *
new(class)
	char * class
	PPCODE:
	Wise2_ThreeStateDB * out;
	out = Wise2_ThreeStateDB_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_ThreeStateDB * obj
	CODE:
	Wise2_free_ThreeStateDB(obj);



MODULE = Wise2 PACKAGE = Wise2



MODULE = Wise2 PACKAGE = Wise2::ThreeStateModel

void
force_global_model(tsm,prob_into_model)
	Wise2_ThreeStateModel * tsm
	double prob_into_model
	CODE:
	Wise2_force_global_model(tsm,prob_into_model);



void
force_weighted_local_model(tsm,prob_into_model,ratio_start,ratio_end)
	Wise2_ThreeStateModel * tsm
	double prob_into_model
	double ratio_start
	double ratio_end
	CODE:
	Wise2_force_weighted_local_model(tsm,prob_into_model,ratio_start,ratio_end);



Wise2_ThreeStateModel *
ThreeStateModel_from_half_bit_Sequence(pro,mat,rm,gap,ext)
	Wise2_Protein * pro
	Wise2_CompMat * mat
	Wise2_RandomModel * rm
	int gap
	int ext
	CODE:
	RETVAL = Wise2_ThreeStateModel_from_half_bit_Sequence(pro,mat,rm,gap,ext);
	OUTPUT:
	RETVAL



void
write_HMMer_1_7_ascii_ThreeStateModel(tsm,ofp)
	Wise2_ThreeStateModel * tsm
	FILE * ofp
	CODE:
	Wise2_write_HMMer_1_7_ascii_ThreeStateModel(tsm,ofp);



Wise2_ThreeStateModel *
hard_link_ThreeStateModel(obj)
	Wise2_ThreeStateModel * obj
	CODE:
	RETVAL = Wise2_hard_link_ThreeStateModel(obj);
	OUTPUT:
	RETVAL



Wise2_ThreeStateModel *
ThreeStateModel_alloc_std()
	CODE:
	RETVAL = Wise2_ThreeStateModel_alloc_std();
	OUTPUT:
	RETVAL



boolean
set_name(obj,name)
	Wise2_ThreeStateModel * obj
	char * name
	CODE:
	RETVAL = Wise2_replace_name_ThreeStateModel(obj,Wise2_stringalloc(name));
	OUTPUT:
	RETVAL



char *
name(obj)
	Wise2_ThreeStateModel * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_name_ThreeStateModel(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



Wise2_ThreeStateUnit *
unit(obj,i)
	Wise2_ThreeStateModel * obj
	int i
	INIT:
Wise2_ThreeStateUnit * temp;
	CODE:
	temp = Wise2_hard_link_ThreeStateUnit(Wise2_access_unit_ThreeStateModel(obj,i));
	RETVAL = temp;
	OUTPUT:
	RETVAL



int
length_unit(obj)
	Wise2_ThreeStateModel * obj
	CODE:
	RETVAL = Wise2_length_unit_ThreeStateModel(obj);
	OUTPUT:
	RETVAL



int
flush_unit(obj)
	Wise2_ThreeStateModel * obj
	CODE:
	RETVAL = Wise2_flush_ThreeStateModel(obj);
	OUTPUT:
	RETVAL



boolean
add_unit(obj,add)
	Wise2_ThreeStateModel * obj
	Wise2_ThreeStateUnit * add
	CODE:
	RETVAL = Wise2_add_ThreeStateModel(obj,Wise2_hard_link_ThreeStateUnit(add));
	OUTPUT:
	RETVAL



boolean
set_alphabet(obj,alphabet)
	Wise2_ThreeStateModel * obj
	char * alphabet
	CODE:
	RETVAL = Wise2_replace_alphabet_ThreeStateModel(obj,Wise2_stringalloc(alphabet));
	OUTPUT:
	RETVAL



char *
alphabet(obj)
	Wise2_ThreeStateModel * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_alphabet_ThreeStateModel(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_accession(obj,accession)
	Wise2_ThreeStateModel * obj
	char * accession
	CODE:
	RETVAL = Wise2_replace_accession_ThreeStateModel(obj,Wise2_stringalloc(accession));
	OUTPUT:
	RETVAL



char *
accession(obj)
	Wise2_ThreeStateModel * obj
	INIT:
	char * temp;
	CODE:
	temp = Wise2_stringalloc(Wise2_access_accession_ThreeStateModel(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL



boolean
set_threshold(obj,threshold)
	Wise2_ThreeStateModel * obj
	double threshold
	CODE:
	RETVAL = Wise2_replace_threshold_ThreeStateModel(obj,threshold);
	OUTPUT:
	RETVAL



double
threshold(obj)
	Wise2_ThreeStateModel * obj
	CODE:
	RETVAL = Wise2_access_threshold_ThreeStateModel(obj);
	OUTPUT:
	RETVAL



boolean
set_rm(obj,rm)
	Wise2_ThreeStateModel * obj
	Wise2_RandomModel * rm
	CODE:
	RETVAL = Wise2_replace_rm_ThreeStateModel(obj,Wise2_hard_link_RandomModel(rm));
	OUTPUT:
	RETVAL



Wise2_RandomModel *
rm(obj)
	Wise2_ThreeStateModel * obj
	INIT:
Wise2_RandomModel * temp;
	CODE:
	temp = Wise2_hard_link_RandomModel(Wise2_access_rm_ThreeStateModel(obj));
	RETVAL = temp;
	OUTPUT:
	RETVAL




Wise2_ThreeStateModel *
new(class)
	char * class
	PPCODE:
	Wise2_ThreeStateModel * out;
	out = Wise2_ThreeStateModel_alloc_std();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_ThreeStateModel * obj
	CODE:
	Wise2_free_ThreeStateModel(obj);

void
each_unit(obj)
	Wise2_ThreeStateModel * obj
	PPCODE:
	int i=0;
	int len;
	SV* temp;
	len = Wise2_length_unit_ThreeStateModel(obj);
	for(i=0;i<len;i++){
	  temp = sv_newmortal();
	  sv_setref_pv(temp, "Wise2::ThreeStateUnit", (void*) (Wise2_hard_link_ThreeStateUnit(Wise2_access_unit_ThreeStateModel(obj,i))));
	  XPUSHs(temp);
	  }
	XSRETURN(len);



MODULE = Wise2 PACKAGE = Wise2::ThreeStateUnit

Wise2_ThreeStateUnit *
hard_link_ThreeStateUnit(obj)
	Wise2_ThreeStateUnit * obj
	CODE:
	RETVAL = Wise2_hard_link_ThreeStateUnit(obj);
	OUTPUT:
	RETVAL



Wise2_ThreeStateUnit *
alloc()
	CODE:
	RETVAL = Wise2_ThreeStateUnit_alloc();
	OUTPUT:
	RETVAL



boolean
set_display_char(obj,display_char)
	Wise2_ThreeStateUnit * obj
	char display_char
	CODE:
	RETVAL = Wise2_replace_display_char_ThreeStateUnit(obj,display_char);
	OUTPUT:
	RETVAL



char
display_char(obj)
	Wise2_ThreeStateUnit * obj
	CODE:
	RETVAL = Wise2_access_display_char_ThreeStateUnit(obj);
	OUTPUT:
	RETVAL




Wise2_ThreeStateUnit *
new(class)
	char * class
	PPCODE:
	Wise2_ThreeStateUnit * out;
	out = Wise2_ThreeStateUnit_alloc();
	ST(0) = sv_newmortal();
	sv_setref_pv(ST(0),class,(void*)out);
	XSRETURN(1);

void
DESTROY(obj)
	Wise2_ThreeStateUnit * obj
	CODE:
	Wise2_free_ThreeStateUnit(obj);



MODULE = Wise2 PACKAGE = Wise2

Wise2_ThreeStateModel *
read_HMMer_1_7_ascii_file(filename)
	char * filename
	CODE:
	RETVAL = Wise2_read_HMMer_1_7_ascii_file(filename);
	OUTPUT:
	RETVAL



Wise2_ThreeStateModel *
read_HMMer_1_7_ascii(ifp)
	FILE * ifp
	CODE:
	RETVAL = Wise2_read_HMMer_1_7_ascii(ifp);
	OUTPUT:
	RETVAL



