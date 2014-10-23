/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTerminateRoutine_TECSGEN_H
#define tTerminateRoutine_TECSGEN_H

/*
 * celltype    :  tTerminateRoutine
 * global name :  tTerminateRoutine
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sTerminateRoutineBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTerminateRoutine_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tTerminateRoutine_N_CELL        (7)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTerminateRoutine_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTerminateRoutine_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tTerminateRoutine_cTerminateRoutine_main( p_that ) \
	  (p_that)->cTerminateRoutine->VMT->main( \
	   (p_that)->cTerminateRoutine )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tTerminateRoutine_INIB {
    /* call port #_TCP_# */ 
    struct tag_sTerminateRoutineBody_VDES *cTerminateRoutine;
}  tTerminateRoutine_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tTerminateRoutine_CB_tab           tTerminateRoutine_INIB_tab
#define tTerminateRoutine_SINGLE_CELL_CB   tTerminateRoutine_SINGLE_CELL_INIB
#define tTerminateRoutine_CB               tTerminateRoutine_INIB
#define tag_tTerminateRoutine_CB           tag_tTerminateRoutine_INIB

extern tTerminateRoutine_CB  tTerminateRoutine_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tTerminateRoutine_INIB *tTerminateRoutine_IDX;

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tTerminateRoutine_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTerminateRoutine_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTerminateRoutine_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTerminateRoutine_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTerminateRoutine_main( ) \
                      tTerminateRoutine_cTerminateRoutine_main( p_cellcb ) 

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTerminateRoutine_N_CELL; (i)++ ){ \
       (p_cb) = &tTerminateRoutine_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTerminateRoutine_TECSGEN_H */
