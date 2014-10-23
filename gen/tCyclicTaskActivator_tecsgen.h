/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tCyclicTaskActivator_TECSGEN_H
#define tCyclicTaskActivator_TECSGEN_H

/*
 * celltype    :  tCyclicTaskActivator
 * global name :  tCyclicTaskActivator
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "siHandlerBody_tecsgen.h"
#include "siTask_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCyclicTaskActivator_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTask_tecsgen.h"
#ifdef  tCyclicTaskActivator_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCyclicTaskActivator_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCyclicTaskActivator_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tCyclicTaskActivator_N_CELL        (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tCyclicTaskActivator_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tCyclicTaskActivator_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tCyclicTaskActivator_ciTask_activate( p_that ) \
	  tTask_eiTask_activate( \
	   (p_that)->ciTask )
#define tCyclicTaskActivator_ciTask_wakeup( p_that ) \
	  tTask_eiTask_wakeup( \
	   (p_that)->ciTask )
#define tCyclicTaskActivator_ciTask_releaseWait( p_that ) \
	  tTask_eiTask_releaseWait( \
	   (p_that)->ciTask )
#define tCyclicTaskActivator_ciTask_raiseException( p_that, pattern ) \
	  tTask_eiTask_raiseException( \
	   (p_that)->ciTask, (pattern) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tCyclicTaskActivator_INIB {
    /* call port #_TCP_# */ 
    const struct tag_tTask_INIB * ciTask;
    /* call port #_NEP_# */ 
}  tCyclicTaskActivator_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tCyclicTaskActivator_CB_tab           tCyclicTaskActivator_INIB_tab
#define tCyclicTaskActivator_SINGLE_CELL_CB   tCyclicTaskActivator_SINGLE_CELL_INIB
#define tCyclicTaskActivator_CB               tCyclicTaskActivator_INIB
#define tag_tCyclicTaskActivator_CB           tag_tCyclicTaskActivator_INIB

extern tCyclicTaskActivator_CB  tCyclicTaskActivator_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tCyclicTaskActivator_INIB *tCyclicTaskActivator_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* siHandlerBody */
void         tCyclicTaskActivator_eiBody_main(tCyclicTaskActivator_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tCyclicTaskActivator_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tCyclicTaskActivator_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tCyclicTaskActivator_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tCyclicTaskActivator_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define ciTask_activate( ) \
                      tCyclicTaskActivator_ciTask_activate( p_cellcb ) 
#define ciTask_wakeup( ) \
                      tCyclicTaskActivator_ciTask_wakeup( p_cellcb ) 
#define ciTask_releaseWait( ) \
                      tCyclicTaskActivator_ciTask_releaseWait( p_cellcb ) 
#define ciTask_raiseException( pattern ) \
                      tCyclicTaskActivator_ciTask_raiseException( p_cellcb, pattern ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eiBody_main      tCyclicTaskActivator_eiBody_main

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCyclicTaskActivator_N_CELL; (i)++ ){ \
       (p_cb) = &tCyclicTaskActivator_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCyclicTaskActivator_TECSGEN_H */
