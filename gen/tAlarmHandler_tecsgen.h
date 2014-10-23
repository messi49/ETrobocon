/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tAlarmHandler_TECSGEN_H
#define tAlarmHandler_TECSGEN_H

/*
 * celltype    :  tAlarmHandler
 * global name :  tAlarmHandler
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sAlarm_tecsgen.h"
#include "siAlarm_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tAlarmHandler_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tBluetoothBody_tecsgen.h"
#ifdef  tAlarmHandler_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tAlarmHandler_CB_TYPE_ONLY */
#define tAlarmHandler_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tAlarmHandler_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tAlarmHandler_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tAlarmHandler_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tAlarmHandler_ATTR_id( p_that )	((p_that)->id)

#define tAlarmHandler_GET_id(p_that)	((p_that)->id)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tAlarmHandler_ciBody_main( p_that ) \
	  tBluetoothBody_eiAlarmBody_main( \
	    )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tAlarmHandler_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tAlarmHandler_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tAlarmHandler_CB_tab           tAlarmHandler_INIB_tab
#define tAlarmHandler_SINGLE_CELL_CB   tAlarmHandler_SINGLE_CELL_INIB
#define tAlarmHandler_CB               tAlarmHandler_INIB
#define tag_tAlarmHandler_CB           tag_tAlarmHandler_INIB

extern tAlarmHandler_CB  tAlarmHandler_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tAlarmHandler_INIB *tAlarmHandler_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sAlarm */
Inline ER           tAlarmHandler_eAlarm_start(tAlarmHandler_IDX idx, RELTIM alarmTime);
Inline ER           tAlarmHandler_eAlarm_stop(tAlarmHandler_IDX idx);
Inline ER           tAlarmHandler_eAlarm_refer(tAlarmHandler_IDX idx, T_RALM* pk_alarmStatus);
/* siAlarm */
Inline ER           tAlarmHandler_eiAlarm_start(tAlarmHandler_IDX idx, RELTIM alarmTime);
Inline ER           tAlarmHandler_eiAlarm_stop(tAlarmHandler_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tAlarmHandler_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tAlarmHandler_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tAlarmHandler_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tAlarmHandler_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_id              tAlarmHandler_ATTR_id( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define ciBody_main( ) \
                      tAlarmHandler_ciBody_main( p_cellcb ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eAlarm_start     tAlarmHandler_eAlarm_start
#define eAlarm_stop      tAlarmHandler_eAlarm_stop
#define eAlarm_refer     tAlarmHandler_eAlarm_refer
#define eiAlarm_start    tAlarmHandler_eiAlarm_start
#define eiAlarm_stop     tAlarmHandler_eiAlarm_stop

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAlarmHandler_N_CELL; (i)++ ){ \
       (p_cb) = &tAlarmHandler_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tAlarmHandler_inline.h"

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
#undef ATTR_id
#undef tAlarmHandler_ATTR_id
#undef tAlarmHandler_GET_id
#undef ATTR_attribute
#undef tAlarmHandler_ATTR_attribute
#undef tAlarmHandler_GET_attribute
#undef tAlarmHandler_ciBody_main
#undef ciBody_main
#undef eAlarm_start
#undef eAlarm_stop
#undef eAlarm_refer
#undef eiAlarm_start
#undef eiAlarm_stop
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tAlarmHandler_TECSGEN_H */
