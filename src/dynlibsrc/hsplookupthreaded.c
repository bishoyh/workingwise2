#ifdef _cplusplus
extern "C" {
#endif
#include "hsplookupthreaded.h"


/* Function:  new_threaded_HSPScanInterface(sli,mat,drop_off,score_cutoff,threadno)
 *
 * Descrip:    Makes the wrapper structure for
 *             threaded searches
 *
 *
 * Arg:                 sli [UNKN ] Undocumented argument [SeqLookupInterface *]
 * Arg:                 mat [UNKN ] Undocumented argument [CompMat *]
 * Arg:            drop_off [UNKN ] Undocumented argument [int]
 * Arg:        score_cutoff [UNKN ] Undocumented argument [int]
 * Arg:            threadno [UNKN ] Undocumented argument [int]
 *
 * Return [UNKN ]  Undocumented return value [HSPScanInterface *]
 *
 */
# line 43 "hsplookupthreaded.dy"
HSPScanInterface * new_threaded_HSPScanInterface(SeqLookupInterface * sli,CompMat * mat,int drop_off,int score_cutoff,int threadno)
{
  HSPScanInterface * out;
  HSPScanPara * p;

  assert(sli);
  assert(mat);
  
  out = HSPScanInterface_alloc();

  p = HSPScanPara_alloc();
  p->sli = hard_link_SeqLookupInterface(sli);
  p->mat = hard_link_CompMat(mat);
  p->drop_off = drop_off;
  p->score_cutoff = score_cutoff;
  p->threadno = threadno;

  out->data = (void*)p;
  out->free_data = simple_HSPScan_free;

  if( sli->lookup_array_head == NULL ) {
    fatal("Can't build threaded non array head structure");
  } else {
    out->scan_query = one_off_threaded_HSPscan_scan_query_direct;;
  }

  return out;

}


/* Function:  new_ordered_HSPScanInterface(sli,mat,drop_off,score_cutoff)
 *
 * Descrip:    Makes the wrapper structure for ordered searches
 *
 *
 * Arg:                 sli [UNKN ] Undocumented argument [SeqLookupInterface *]
 * Arg:                 mat [UNKN ] Undocumented argument [CompMat *]
 * Arg:            drop_off [UNKN ] Undocumented argument [int]
 * Arg:        score_cutoff [UNKN ] Undocumented argument [int]
 *
 * Return [UNKN ]  Undocumented return value [HSPScanInterface *]
 *
 */
# line 77 "hsplookupthreaded.dy"
HSPScanInterface * new_ordered_HSPScanInterface(SeqLookupInterface * sli,CompMat * mat,int drop_off,int score_cutoff)
{
  HSPScanInterface * out;
  HSPScanPara * p;

  assert(sli);
  assert(mat);
  
  out = HSPScanInterface_alloc();

  p = HSPScanPara_alloc();
  p->sli = hard_link_SeqLookupInterface(sli);
  p->mat = hard_link_CompMat(mat);
  p->drop_off = drop_off;
  p->score_cutoff = score_cutoff;


  out->data = (void*)p;
  out->free_data = simple_HSPScan_free;

  if( sli->lookup_array_head == NULL ) {
    fatal("Can't build threaded non array head structure");
  } else {
    out->scan_query = one_off_ordered_HSPscan_scan_query_direct;
  }

  return out;

}



/* Function:  one_off_ordered_HSPscan_scan_query_direct(data,seq,para)
 *
 * Descrip:    function which orders memory access pattern
 *             more sensibly
 *
 *
 * Arg:        data [UNKN ] Undocumented argument [void *]
 * Arg:         seq [UNKN ] Undocumented argument [Sequence *]
 * Arg:        para [UNKN ] Undocumented argument [HSPScanInterfacePara *]
 *
 * Return [UNKN ]  Undocumented return value [LinearHSPmanager *]
 *
 */
# line 113 "hsplookupthreaded.dy"
LinearHSPmanager * one_off_ordered_HSPscan_scan_query_direct(void * data,Sequence * seq,HSPScanInterfacePara * para)
{
  LinearHSPmanager * out;
  LineariseHSPPara * hsp_para;

  HSPmanager * hspm;
  HSPScanPara * p = (HSPScanPara *)data;

  int * position;
  int * seqnumber;
  ArraySeqHead ** arrayseq;
  long int max_size = 0;
  long int current = 0;

  OrderedPosHolder * oph;
  long int current_oph = 0;
  long int max_oph = 0;
  OrderedPosHolder ** pos;

  int base[5];
  int start_base;
  char * std_aa = "ACDEFGHIKLMNPQRSTVWY";

  int score;
  int seqno[5];
  int no;
  int aa;

  int used,skipped;

  int i,j,k;

  ArraySeqLookup * asl;

#ifdef LINUX_TIMER
  struct timeval t1;
  struct timeval t2;
  struct timeval t3;
  struct timeval t4;
  struct timeval t5;
  struct timeval t6;
  struct timeval t7;
#endif


  assert(p != NULL);
  assert(seq != NULL);
  assert(para->max_results > 0);

#ifdef LINUX_TIMER
  gettimeofday(&t1,NULL);
#endif

  /* we know how many positions we are going to fill */
  /* each position will make 100 numbers */
  max_size = seq->len * 100;

  position  = calloc(max_size,sizeof(int));
  seqnumber = calloc(max_size,sizeof(int));
  arrayseq  = calloc(max_size,sizeof(ArraySeqHead*));

  current = 0;

  for(i=0,start_base=1;i<5;i++) {
    base[i] = start_base;
    start_base = start_base * 26;
  }

  for(i=0;i<seq->len-5;i++) {
    position[current] = i;
    seqnumber[current] = seq_number_aa_5mer_client(seq->seq+i);
    current++;

    for(score=0,j=0;j<5;j++) {
      seqno[j] = base[j]*(toupper(seq->seq[i+j]-'A'));
    }
    
    for(j=0;j<5;j++) {
      for(aa=0;aa<20;aa++) {
	if( seq->seq[i+j] == std_aa[aa] ) {
	  continue;
	}
	
	seqno[j] = base[j]*(std_aa[aa]-'A');
	
	no= seqno[0]+seqno[1]+seqno[2]+seqno[3]+seqno[4];
	position[current]  = i;
	seqnumber[current] = no;
	current++;
      }
    }
  }

#ifdef LINUX_TIMER
  gettimeofday(&t2,NULL);
#endif

  /* start with max_size / 4 sequence positions */

  max_oph = max_size /4;
  oph = calloc(max_oph,sizeof(OrderedPosHolder));
  pos = calloc(max_oph,sizeof(OrderedPosHolder*));
  current_oph = 0;

  qsort_seqnumber_array(position,seqnumber,0,current-1);

#ifdef LINUX_TIMER
  gettimeofday(&t3,NULL);
#endif

  /* now foreach position, fetch the right datastructure */

  asl = (ArraySeqLookup*)p->sli->data;

 
  for(i=0;i<current;i++) {
    arrayseq[i] = asl->array[seqnumber[i]];
    if( arrayseq[i] != NULL ) {
      for(k=0;k<arrayseq[i]->current_pos;k++) {

	if( current_oph+1 >= max_oph ) {
	  max_oph *= 2;
	  oph = realloc(oph,max_oph*sizeof(OrderedPosHolder));
	  pos = realloc(pos,max_oph*sizeof(OrderedPosHolder*));
	}


	pos[current_oph] = &(oph[current_oph]);

      	oph[current_oph].seq = arrayseq[i]->units[k].seq;
	oph[current_oph].query_pos = position[i];
	oph[current_oph].target_pos = arrayseq[i]->units[k].pos;
	oph[current_oph].diagonal = position[i] - arrayseq[i]->units[k].pos;
	current_oph++;
      }
    }
  }
  
  

#ifdef LINUX_TIMER
  gettimeofday(&t4,NULL);
#endif

  /*  qsort_oph(oph,0,current_oph-1); */

  fprintf(stderr,"About to sort oph pointers");

  qsort_oph_pointer(pos,0,current_oph-1);

  fprintf(stderr,"retrieved array with %d elements\n",current_oph);

#ifdef LINUX_TIMER
  gettimeofday(&t5,NULL);
#endif

  hspm = new_HSPmanager(seq,p->mat,p->drop_off);


  /* we always add the first one */

  used = 0;
  skipped = 0;
  add_pair_HSPmanager(hspm,oph[0].seq,oph[0].query_pos,oph[0].target_pos);

  for(i=1;i<current_oph-1;i++) {
    /*    fprintf(stderr,"looking at %d, diagonal %d and distance %d\n",oph[i].seq,oph[i].diagonal,abs(oph[i-1].query_pos - oph[i].query_pos)); */

    auto int good_region;

    /* good region provides a two-hit process */

    good_region = 0;
    if( (pos[i-1]->seq == pos[i]->seq || pos[i]->seq == pos[i+1]->seq) &&  (abs(pos[i-1]->diagonal - pos[i]->diagonal) < 5 || abs(pos[i]->diagonal - pos[i+1]->diagonal) < 5) ) {
      good_region = 1;
    }

    if( good_region == 0 || (pos[i-1]->seq == pos[i]->seq && pos[i-1]->diagonal == pos[i]->diagonal && abs(pos[i-1]->query_pos - pos[i]->query_pos) < 10) ) {
      skipped++;
      continue;
    } else {
      add_pair_HSPmanager(hspm,pos[i]->seq,pos[i]->query_pos,pos[i]->target_pos);
      used++;
    }
  }

#ifdef LINUX_TIMER
  gettimeofday(&t6,NULL);
#endif
			  
  fprintf(stderr,"added %d HSPs skipped %d %f\n",used,skipped,(double)used/(double)(used+skipped));

  /* make into a linear manager */

  if( para->use_protein_heuristic == TRUE ) {
    out = new_LinearHSPmanager_heuristic_max(hspm,para->max_results);
  } else {
    out = new_LinearHSPmanager_flat(hspm);
  }



  free_HSPmanager(hspm);


  
  return out;
}


/* Function:  qsort_oph_pointer(pos,left,right)
 *
 * Descrip:    internal quicksort function on oph pointer arrays
 *
 *
 * Arg:          pos [UNKN ] Undocumented argument [OrderedPosHolder **]
 * Arg:         left [UNKN ] Undocumented argument [long int]
 * Arg:        right [UNKN ] Undocumented argument [long int]
 *
 */
# line 326 "hsplookupthreaded.dy"
void qsort_oph_pointer(OrderedPosHolder ** pos,long int left,long int right)
{
  OrderedPosHolder * temp;
  long int i,last;

  if( left >= right )
    return;

  /*
  fprintf(stderr,"Entering sort at %d,%d\n",left,right);
  */

  temp = pos[left];
  pos[left] = pos[(left+right)/2];
  pos[(left+right)/2] = temp;

  last = left;


  for(i=left+1;i <= right;i++) {
    if( COMP_OPH_POINTER(((pos[i])),((pos[left]))) < 0 ) {
      last++;
      temp = pos[last];
      pos[last] = pos[i];
      pos[i] = temp;
    }

  }

  temp = pos[last];
  pos[last] = pos[left];
  pos[left] = temp;

  qsort_oph_pointer(pos,left,last-1);
  qsort_oph_pointer(pos,last+1,right);
}


/* Function:  qsort_oph(oph,left,right)
 *
 * Descrip:    internal quicksort function for ordered access
 *
 *
 * Arg:          oph [UNKN ] Undocumented argument [OrderedPosHolder *]
 * Arg:         left [UNKN ] Undocumented argument [int]
 * Arg:        right [UNKN ] Undocumented argument [int]
 *
 */
# line 367 "hsplookupthreaded.dy"
void qsort_oph(OrderedPosHolder * oph,int left,int right)
{
  OrderedPosHolder temp;
  int i,last;


  if( left >= right ) 
    return;

  temp = oph[left];
  oph[left] = oph[(left+right)/2];
  oph[(left+right)/2] = temp;

  last = left;
  for(i=left+1;i <= right;i++) {
    if( COMP_OPH(oph[i],oph[left]) < 0 ) {
      last++;
      temp = oph[last];
      oph[last] = oph[i];
      oph[i]= temp;
    }
  }
    
  temp = oph[last];
  oph[last] = oph[left];
  oph[left] = temp;

  qsort_oph(oph,left,last-1);
  qsort_oph(oph,last+1,right);

}

/* Function:  qsort_seqnumber_array(position,seqnumber,left,right)
 *
 * Descrip:    internal quicksort function for ordered access
 *
 *
 * Arg:         position [UNKN ] Undocumented argument [int *]
 * Arg:        seqnumber [UNKN ] Undocumented argument [int *]
 * Arg:             left [UNKN ] Undocumented argument [int]
 * Arg:            right [UNKN ] Undocumented argument [int]
 *
 */
# line 402 "hsplookupthreaded.dy"
void qsort_seqnumber_array(int * position,int * seqnumber,int left,int right)
{
  int i,last;
  int temp_pos;
  int temp_seqnumber;
  int t;
  
  if( left >= right ) 
    return;

  temp_pos = position[left];
  temp_seqnumber = seqnumber[left];

  t = (left+right)/2;
  position[left]  = position[t];
  seqnumber[left] = seqnumber[t];
  position[t] = temp_pos;
  seqnumber[t]  = temp_seqnumber;

  last = left;
  for( i = left+1;i <= right;i++) {
    if( seqnumber[i] < seqnumber[left] ) {
      last++;
      

      temp_pos = position[last];
      temp_seqnumber = seqnumber[last];
      
      position[last]  = position[i];
      seqnumber[last] = seqnumber[i];
      position[i] = temp_pos;
      seqnumber[i]  = temp_seqnumber;
    }
  }
  
  /* swap final ones */

  temp_pos = position[last];
  temp_seqnumber = seqnumber[last];

  position[last]  = position[left];
  seqnumber[last] = seqnumber[left];
  position[left]  = temp_pos;
  seqnumber[left] = temp_seqnumber;

  qsort_seqnumber_array(position,seqnumber,left,last-1);
  qsort_seqnumber_array(position,seqnumber,last+1,right);

}

/* Function:  one_off_threaded_HSPscan_scan_query_direct(data,seq,para)
 *
 * Descrip:    Main threaded function
 *
 *
 * Arg:        data [UNKN ] Undocumented argument [void *]
 * Arg:         seq [UNKN ] Undocumented argument [Sequence *]
 * Arg:        para [UNKN ] Undocumented argument [HSPScanInterfacePara *]
 *
 * Return [UNKN ]  Undocumented return value [LinearHSPmanager *]
 *
 */
# line 455 "hsplookupthreaded.dy"
LinearHSPmanager * one_off_threaded_HSPscan_scan_query_direct(void * data,Sequence * seq,HSPScanInterfacePara * para)
{
  LinearHSPmanager * out;
  LineariseHSPPara * hsp_para;

  HSPScanPara * p = (HSPScanPara *)data;
  
  int i;
  int block_size;
  int st;
  int err;
  HSPLookupThreadHolder thread_array[MAX_HSP_THREADS];
  pthread_attr_t pat;
  pthread_t thread_pool[MAX_HSP_THREADS];

  /* pre conditions */

  assert(p != NULL);
  assert(seq != NULL);
  assert(para->max_results > 0);
  assert(p->threadno > 0);

  hsp_para = LineariseHSPPara_alloc();
  hsp_para->verbosity   = para->verbosity;
  hsp_para->max_size    = para->max_results;
  hsp_para->min_score   = para->min_hsp_score;
  hsp_para->width       = para->hsp_link_width;
  hsp_para->tail        = para->hsp_link_length;


  if( VERBOSITY_CHECK(1,para->verbosity) ) {
    info("processing sequence %s with threaded implementation",seq->name);
  }


  /* allocate common structures */

  block_size = (int) seq->len / p->threadno;

  /* place into threads */

  st = 0;
  for(i=0;i<p->threadno;i++) {
    thread_array[i].para = para;
    thread_array[i].p    = p;
    thread_array[i].hspm = new_HSPmanager(seq,p->mat,p->drop_off);
    thread_array[i].start= st;
    st += block_size;
    thread_array[i].end  = st;
    thread_array[i].seq  = seq;
  }

  /* last thread ends at end */

  thread_array[p->threadno-1].end = seq->len-5;

  /* launch threads with structure */

  pthread_attr_init(&pat);     

#ifndef __sgi /* SGI can't set system scope ... */   
#ifdef  HAS_PTHREAD_SETSCOPE 
  pthread_attr_setscope(&pat, PTHREAD_SCOPE_SYSTEM);   
#endif /* set scope */   
#endif /* sgi */ 
  /* Give thread libraries a hint that there are num of threads to run */ 
#ifdef HAS_PTHREAD_SETCONCURRENCY    
  pthread_setconcurrency(p->threadno+1);    
#endif /* set concurrency */ 

  
  for(i=0;i<p->threadno;i++) {
    if( (err = pthread_create(&(thread_pool[i]),&pat,hsp_thread_worker,(void *)(&(thread_array[i])))) )
      fatal("Unable to make thread %d %d",i,err);
  }

  for(i=0;i<p->threadno;i++) {
    if( pthread_join(thread_pool[i],NULL) != 0 ) 
      fatal("Unable to join a thread");
  }



  /* now merge hsp's into one case */

  for(i=1;i<p->threadno;i++) {
    merge_HSPmanager(thread_array[0].hspm,thread_array[i].hspm);
    free_HSPmanager(thread_array[i].hspm);
  }


  /* make into a linear manager */

  if( para->use_protein_heuristic == TRUE ) {
    out = new_LinearHSPmanager_simple_heuristic(thread_array[0].hspm,hsp_para);
  } else {
    out = new_LinearHSPmanager_flat(thread_array[0].hspm);
  }

  free_HSPmanager(thread_array[0].hspm);
  
  return out;

}

/* Function:  merge_HSPmanager(from,to)
 *
 * Descrip:    function to merge one HSPmanager into another
 *             one
 *
 *
 * Arg:        from [UNKN ] Undocumented argument [HSPmanager *]
 * Arg:          to [UNKN ] Undocumented argument [HSPmanager *]
 *
 * Return [UNKN ]  Undocumented return value [boolean]
 *
 */
# line 564 "hsplookupthreaded.dy"
boolean merge_HSPmanager(HSPmanager * from,HSPmanager * to)
{
  g_hash_table_foreach(from->target_hash,merge_HSPmanager_foreach,to);
}

/* Function:  merge_HSPmanager_foreach(key,value,user_data)
 *
 * Descrip:    internal function to merge HSPmanagers
 *
 *
 * Arg:              key [UNKN ] Undocumented argument [gpointer]
 * Arg:            value [UNKN ] Undocumented argument [gpointer]
 * Arg:        user_data [UNKN ] Undocumented argument [gpointer]
 *
 */
# line 572 "hsplookupthreaded.dy"
void merge_HSPmanager_foreach(gpointer key,gpointer value,gpointer user_data)
{
  HSPmanager * hspm = (HSPmanager *) user_data;
  HSPset * s = (HSPset *) value;
  HSPset * master;
  int i,j;
  int seen;


  /* if there is no sequence, we can just add the set for this target */

  if( (master = g_hash_table_lookup(hspm->target_hash,(gpointer)s->hsp[0]->target)) == NULL ) {

    g_hash_table_insert(hspm->target_hash,(gpointer)s->hsp[0]->target,hard_link_HSPset(s));
    return;
  }

  /* this target is already in, must check each case */

  for(i=0;i<s->len;i++) {
    seen = 0;

    for(j=0;j < master->len;j++) {
      if( s->hsp[i]->query_start == master->hsp[j]->query_start &&
	  s->hsp[i]->target_start == master->hsp[j]->target_start ) {
	seen = 1;
	break;
      }
    }

    if( seen == 0 ) {
      /* this HSP is new */
      add_HSPset(master,hard_link_HSP(s->hsp[i]));
    } else {
      /* do nothing */
    }
    
  }

  return;
}


/* Function:  hsp_thread_worker(ptr)
 *
 * Descrip:    thread worker
 *
 *
 * Arg:        ptr [UNKN ] Undocumented argument [void *]
 *
 * Return [UNKN ]  Undocumented return value [void *]
 *
 */
# line 618 "hsplookupthreaded.dy"
void * hsp_thread_worker(void * ptr)
{
  int i,j,k;
  int score;
  int aa;
  int jj;
  int aa2;
  int seqno[5];
  int no;
  char newseq[5];
  int base[5];
  int start_base;

  int self_score[5];
  int total_score;
  int current_score;


  HSPLookupThreadHolder * h = (HSPLookupThreadHolder*)ptr;
  char * std_aa = "ACDEFGHIKLMNPQRSTVWY";
  HSPScanPara * p;
  HSPScanInterfacePara * para;
  Sequence * seq;
  ArraySeqHead * head;

  p   = h->p;
  seq = h->seq;
  para = h->para;


  assert(p != NULL);
  assert(seq != NULL);
  assert(para != NULL);

  for(i=0,start_base=1;i<5;i++) {
    base[i] = start_base;
    start_base = start_base * 26;
  }

  for(i=h->start;i<h->end;i++) {

    auto ArraySeqLookup * asl;

    asl = (ArraySeqLookup *)p->sli->data;

    if( VERBOSITY_CHECK(2,para->verbosity) && i%50 == 0 ) {
      info("Scanning (threaded) %s at position %d with %d hits",seq->name,i,h->hspm->hsp_count);
    }


    head = arrayhead_direct_lookup(p->sli->data,seq_number_aa_5mer_client(seq->seq+i));



    if( VERBOSITY_CHECK(9,para->verbosity) ) {
      info("retrieved (threaded) %s at position %d with %d hits",seq->name,i,h->hspm->hsp_count);
    }

    if( para->numb_level < head->current_pos  || (ARRAYHEAD_IS_LOWCOMPLEXITY(head) && para->low_numb > 0 && para->low_numb <= head->current_pos) ) {
      for(k=0;k<head->current_pos;k++) {
	if( add_pair_HSPmanager(h->hspm,head->units[k].seq,i,head->units[k].pos) == TRUE ) {
	  ;
	}
      }
    }

    total_score = 0;
    for(score=0,j=0;j<5;j++) {

      seqno[j] = base[j]*(toupper(seq->seq[i+j])-'A');
      self_score[j] = p->mat->comp[toupper(seq->seq[i+j])-'A'][toupper(seq->seq[i+j])-'A'];
      total_score += self_score[j];
    }


    for(j=0;j<5;j++) {
      for(jj=1;jj<5;jj+=2) {
	for(aa=0;aa<20;aa++) {
	  for(aa2=0;aa2<20;aa2++) {

	    if( seq->seq[i+j] == std_aa[aa] ) {
	      continue;
	    }

	    current_score = total_score;

	    current_score -= (self_score[j] - p->mat->comp[toupper(seq->seq[i+j])-'A'][std_aa[aa]-'A']);
	    current_score -= (self_score[jj] - p->mat->comp[toupper(seq->seq[i+jj])-'A'][std_aa[aa2]-'A']);
	    
	    if( current_score < para->min_word_score ) {
	      continue;
	    } else {
	      /* fprintf(stderr,"Handling %d,%d amino acid %d,%d score %d\n",j,jj,aa,aa2,current_score); */
	    }
	    
	    seqno[j]  = base[j]*(std_aa[aa]-'A');
	    seqno[jj] = base[jj]*(std_aa[aa2]-'A');
	    
	    no= seqno[0]+seqno[1]+seqno[2]+seqno[3]+seqno[4];

	    head = (*p->sli->lookup_array_head)(p->sli->data,no);




	    if( head != NULL ) {
	      if( para->numb_level < head->current_pos  || (ARRAYHEAD_IS_LOWCOMPLEXITY(head) && para->low_numb > 0 && para->low_numb <= head->current_pos) ) {
		if( VERBOSITY_CHECK(7,para->verbosity) ) {
		  info("position %d hit direct over filled position, %d vs hard %d, low %d",i,head->current_pos,para->numb_level,para->low_numb);
		}
		
		continue;
	      }
	      
	      for(k=0;k<head->current_pos;k++) {

		if( VERBOSITY_CHECK(9,para->verbosity) ) {
		  info("one off... (threaded) %s at position %d with %d hits",seq->name,i,h->hspm->hsp_count);
		}

		add_pair_HSPmanager(h->hspm,head->units[k].seq,i,head->units[k].pos) ;
	      }
	    }
	    
	    seqno[j]   = base[j]*(toupper(seq->seq[i+j]-'A'));
	    seqno[jj]  = base[jj]*(toupper(seq->seq[i+jj]-'A'));
	    
	    newseq[j] = seq->seq[i+j];
	    newseq[jj] = seq->seq[i+jj];
	
	  } /* each second aa */
	} /* each first aa */
      } /* each j position */
    }  /* each jj position */
  } /* each i position */


  return NULL;
}


# line 799 "hsplookupthreaded.c"
/* Function:  hard_link_HSPLookupThreadHolder(obj)
 *
 * Descrip:    Bumps up the reference count of the object
 *             Meaning that multiple pointers can 'own' it
 *
 *
 * Arg:        obj [UNKN ] Object to be hard linked [HSPLookupThreadHolder *]
 *
 * Return [UNKN ]  Undocumented return value [HSPLookupThreadHolder *]
 *
 */
HSPLookupThreadHolder * hard_link_HSPLookupThreadHolder(HSPLookupThreadHolder * obj) 
{
    if( obj == NULL )    {  
      warn("Trying to hard link to a HSPLookupThreadHolder object: passed a NULL object");   
      return NULL;   
      }  
    obj->dynamite_hard_link++;   
    return obj;  
}    


/* Function:  HSPLookupThreadHolder_alloc(void)
 *
 * Descrip:    Allocates structure: assigns defaults if given 
 *
 *
 *
 * Return [UNKN ]  Undocumented return value [HSPLookupThreadHolder *]
 *
 */
HSPLookupThreadHolder * HSPLookupThreadHolder_alloc(void) 
{
    HSPLookupThreadHolder * out;/* out is exported at end of function */ 


    /* call ckalloc and see if NULL */ 
    if((out=(HSPLookupThreadHolder *) ckalloc (sizeof(HSPLookupThreadHolder))) == NULL)  {  
      warn("HSPLookupThreadHolder_alloc failed ");   
      return NULL;  /* calling function should respond! */ 
      }  
    out->dynamite_hard_link = 1; 
#ifdef PTHREAD   
    pthread_mutex_init(&(out->dynamite_mutex),NULL);     
#endif   
    out->start = 0;  
    out->end = 0;    


    return out;  
}    


/* Function:  free_HSPLookupThreadHolder(obj)
 *
 * Descrip:    Free Function: removes the memory held by obj
 *             Will chain up to owned members and clear all lists
 *
 *
 * Arg:        obj [UNKN ] Object that is free'd [HSPLookupThreadHolder *]
 *
 * Return [UNKN ]  Undocumented return value [HSPLookupThreadHolder *]
 *
 */
HSPLookupThreadHolder * free_HSPLookupThreadHolder(HSPLookupThreadHolder * obj) 
{
    int return_early = 0;    


    if( obj == NULL) {  
      warn("Attempting to free a NULL pointer to a HSPLookupThreadHolder obj. Should be trappable"); 
      return NULL;   
      }  


#ifdef PTHREAD   
    assert(pthread_mutex_lock(&(obj->dynamite_mutex)) == 0); 
#endif   
    if( obj->dynamite_hard_link > 1)     {  
      return_early = 1;  
      obj->dynamite_hard_link--; 
      }  
#ifdef PTHREAD   
    assert(pthread_mutex_unlock(&(obj->dynamite_mutex)) == 0);   
#endif   
    if( return_early == 1)   
      return NULL;   
    /* obj->p is linked in */ 
    /* obj->hspm is linked in */ 
    /* obj->seq is linked in */ 
    /* obj->para is linked in */ 


    ckfree(obj); 
    return NULL; 
}    



#ifdef _cplusplus
}
#endif
