/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tConfigInterrupt_TECSGEN_H
#define tConfigInterrupt_TECSGEN_H

/*
 * celltype    :  tConfigInterrupt
 * global name :  tConfigInterrupt
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sConfigInterrupt_tecsgen.h"

#define tConfigInterrupt_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tConfigInterrupt_N_CELL        (6)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tConfigInterrupt_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tConfigInterrupt_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tConfigInterrupt_ATTR_interruptNumber( p_that )	((p_that)->interruptNumber)

#define tConfigInterrupt_GET_interruptNumber(p_that)	((p_that)->interruptNumber)



#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tConfigInterrupt_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    INTNO          interruptNumber;
}  tConfigInterrupt_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tConfigInterrupt_CB_tab           tConfigInterrupt_INIB_tab
#define tConfigInterrupt_SINGLE_CELL_CB   tConfigInterrupt_SINGLE_CELL_INIB
#define tConfigInterrupt_CB               tConfigInterrupt_INIB
#define tag_tConfigInterrupt_CB           tag_tConfigInterrupt_INIB

extern tConfigInterrupt_CB  tConfigInterrupt_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tConfigInterrupt_INIB *tConfigInterrupt_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sConfigInterrupt */
Inline ER           tConfigInterrupt_eConfigInterrupt_disable(tConfigInterrupt_IDX idx);
Inline ER           tConfigInterrupt_eConfigInterrupt_enable(tConfigInterrupt_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tConfigInterrupt_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tConfigInterrupt_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tConfigInterrupt_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tConfigInterrupt_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_interruptNumber tConfigInterrupt_ATTR_interruptNumber( p_cellcb )



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eConfigInterrupt_disable tConfigInterrupt_eConfigInterrupt_disable
#define eConfigInterrupt_enable tConfigInterrupt_eConfigInterrupt_enable

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tConfigInterrupt_N_CELL; (i)++ ){ \
       (p_cb) = &tConfigInterrupt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tConfigInterrupt_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_interruptNumber
#undef tConfigInterrupt_ATTR_interruptNumber
#undef tConfigInterrupt_GET_interruptNumber
#undef ATTR_attribute
#undef tConfigInterrupt_ATTR_attribute
#undef tConfigInterrupt_GET_attribute
#undef ATTR_interruptPriority
#undef tConfigInterrupt_ATTR_interruptPriority
#undef tConfigInterrupt_GET_interruptPriority
#undef eConfigInterrupt_disable
#undef eConfigInterrupt_enable
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tConfigInterrupt_TECSGEN_H */
