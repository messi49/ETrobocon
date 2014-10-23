/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tButtonBody_TECSGEN_H
#define tButtonBody_TECSGEN_H

/*
 * celltype    :  tButtonBody
 * global name :  tButtonBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sButton_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "sAvrButton_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tButtonBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAVRBody_tecsgen.h"
#ifdef  tButtonBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tButtonBody_CB_TYPE_ONLY */

/* ����CB������ޥ��� #_GCB_# */
#define tButtonBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tButtonBody_ATTR_threshold	(tButtonBody_SINGLE_CELL_INIB.threshold)

#define tButtonBody_GET_threshold()	(tButtonBody_SINGLE_CELL_INIB.threshold)


/* var ���������ޥ��� #_VAM_# */
#define tButtonBody_VAR_button	(tButtonBody_SINGLE_CELL_CB.button)
#define tButtonBody_VAR_count	(tButtonBody_SINGLE_CELL_CB.count)
#define tButtonBody_VAR_preState	(tButtonBody_SINGLE_CELL_CB.preState)

#define tButtonBody_GET_button()	(tButtonBody_SINGLE_CELL_CB.button)
#define tButtonBody_SET_button(val)	(tButtonBody_SINGLE_CELL_CB.button=(val))
#define tButtonBody_GET_count()	(tButtonBody_SINGLE_CELL_CB.count)
#define tButtonBody_SET_count(val)	(tButtonBody_SINGLE_CELL_CB.count=(val))
#define tButtonBody_GET_preState()	(tButtonBody_SINGLE_CELL_CB.preState)
#define tButtonBody_SET_preState(val)	(tButtonBody_SINGLE_CELL_CB.preState=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tButtonBody_cAvrButton_getButton( ) \
	  tAVRBody_eAvrButton_getButton( \
	    )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tButtonBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        threshold;
}  tButtonBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tButtonBody_CB {
    tButtonBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint8_t        button;
    int32_t        count;
    uint8_t        preState;
}  tButtonBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tButtonBody_CB  tButtonBody_SINGLE_CELL_CB;
extern  tButtonBody_INIB  tButtonBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tButtonBody_CB *tButtonBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sButton */
Inline bool_t       tButtonBody_eButton_isENTERButton();
Inline bool_t       tButtonBody_eButton_isRUNButton();
Inline bool_t       tButtonBody_eButton_isSTOPButton();
Inline bool_t       tButtonBody_eButton_isEXITButton();
Inline bool_t       tButtonBody_eButton_isENTERButtonOnly();
Inline bool_t       tButtonBody_eButton_isRUNButtonOnly();
Inline bool_t       tButtonBody_eButton_isSTOPButtonOnly();
Inline bool_t       tButtonBody_eButton_isEXITButtonOnly();
/* siHandlerBody */
void         tButtonBody_eiBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tButtonBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tButtonBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tButtonBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_threshold       tButtonBody_ATTR_threshold


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_button           tButtonBody_VAR_button
#define VAR_count            tButtonBody_VAR_count
#define VAR_preState         tButtonBody_VAR_preState

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cAvrButton_getButton( ) \
                      tButtonBody_cAvrButton_getButton( ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eButton_isENTERButton tButtonBody_eButton_isENTERButton
#define eButton_isRUNButton tButtonBody_eButton_isRUNButton
#define eButton_isSTOPButton tButtonBody_eButton_isSTOPButton
#define eButton_isEXITButton tButtonBody_eButton_isEXITButton
#define eButton_isENTERButtonOnly tButtonBody_eButton_isENTERButtonOnly
#define eButton_isRUNButtonOnly tButtonBody_eButton_isRUNButtonOnly
#define eButton_isSTOPButtonOnly tButtonBody_eButton_isSTOPButtonOnly
#define eButton_isEXITButtonOnly tButtonBody_eButton_isEXITButtonOnly
#define eiBody_main      tButtonBody_eiBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tButtonBody_SINGLE_CELL_CB._inib = &tButtonBody_SINGLE_CELL_INIB;

#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tButtonBody_inline.h"

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
#undef ATTR_threshold
#undef tButtonBody_ATTR_threshold
#undef tButtonBody_GET_threshold
#undef VAR_button
#undef VAR_button
#undef tButtonBody_VAR_button
#undef tButtonBody_GET_button
#undef tButtonBody_SET_button
#undef VAR_count
#undef VAR_count
#undef tButtonBody_VAR_count
#undef tButtonBody_GET_count
#undef tButtonBody_SET_count
#undef VAR_preState
#undef VAR_preState
#undef tButtonBody_VAR_preState
#undef tButtonBody_GET_preState
#undef tButtonBody_SET_preState
#undef tButtonBody_cAvrButton_getButton
#undef cAvrButton_getButton
#undef eButton_isENTERButton
#undef eButton_isRUNButton
#undef eButton_isSTOPButton
#undef eButton_isEXITButton
#undef eButton_isENTERButtonOnly
#undef eButton_isRUNButtonOnly
#undef eButton_isSTOPButtonOnly
#undef eButton_isEXITButtonOnly
#undef eiBody_main
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tButtonBody_TECSGEN_H */
