/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tInitializeRoutine_TECSGEN_H
#define tInitializeRoutine_TECSGEN_H

/*
 * celltype    :  tInitializeRoutine
 * global name :  tInitializeRoutine
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sInitializeRoutineBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

#define tInitializeRoutine_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tInitializeRoutine_N_CELL        (8)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tInitializeRoutine_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tInitializeRoutine_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tInitializeRoutine_cInitializeRoutine_main( p_that ) \
	  (p_that)->cInitializeRoutine->VMT->main( \
	   (p_that)->cInitializeRoutine )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tInitializeRoutine_INIB {
    /* call port #_TCP_# */ 
    struct tag_sInitializeRoutineBody_VDES *cInitializeRoutine;
}  tInitializeRoutine_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tInitializeRoutine_CB_tab           tInitializeRoutine_INIB_tab
#define tInitializeRoutine_SINGLE_CELL_CB   tInitializeRoutine_SINGLE_CELL_INIB
#define tInitializeRoutine_CB               tInitializeRoutine_INIB
#define tag_tInitializeRoutine_CB           tag_tInitializeRoutine_INIB

extern tInitializeRoutine_CB  tInitializeRoutine_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tInitializeRoutine_INIB *tInitializeRoutine_IDX;

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tInitializeRoutine_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tInitializeRoutine_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tInitializeRoutine_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tInitializeRoutine_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cInitializeRoutine_main( ) \
                      tInitializeRoutine_cInitializeRoutine_main( p_cellcb ) 

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tInitializeRoutine_N_CELL; (i)++ ){ \
       (p_cb) = &tInitializeRoutine_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tInitializeRoutine_TECSGEN_H */
