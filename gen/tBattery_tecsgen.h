/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tBattery_TECSGEN_H
#define tBattery_TECSGEN_H

/*
 * celltype    :  tBattery
 * global name :  tBattery
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sBattery_tecsgen.h"
#include "sAvrBattery_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tBattery_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAVRBody_tecsgen.h"
#ifdef  tBattery_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tBattery_CB_TYPE_ONLY */

/* ����CB������ޥ��� #_GCB_# */
#define tBattery_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tBattery_cAvrBattery_batteryVoltage( ) \
	  tAVRBody_eAvrBattery_batteryVoltage( \
	    )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tBattery_CB {
    int  dummy;
} tBattery_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */


/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tBattery_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sBattery */
Inline uint16_t     tBattery_eBattery_getBatteryVoltage();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tBattery_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tBattery_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tBattery_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cAvrBattery_batteryVoltage( ) \
                      tBattery_cAvrBattery_batteryVoltage( ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eBattery_getBatteryVoltage tBattery_eBattery_getBatteryVoltage

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tBattery_inline.h"

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
#undef tBattery_cAvrBattery_batteryVoltage
#undef cAvrBattery_batteryVoltage
#undef eBattery_getBatteryVoltage
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tBattery_TECSGEN_H */
