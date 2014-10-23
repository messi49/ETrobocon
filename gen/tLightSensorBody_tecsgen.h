/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tLightSensorBody_TECSGEN_H
#define tLightSensorBody_TECSGEN_H

/*
 * celltype    :  tLightSensorBody
 * global name :  tLightSensorBody
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSensor_tecsgen.h"
#include "sSensorControl_tecsgen.h"
#include "siSensorDriver_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "sSensorPort_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLightSensorBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSensorPort_tecsgen.h"
#ifdef  tLightSensorBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLightSensorBody_CB_TYPE_ONLY */
#define tLightSensorBody_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tLightSensorBody_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tLightSensorBody_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tLightSensorBody_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tLightSensorBody_cSensorPort_clearSCL( p_that ) \
	  tSensorPort_eSensorPort_clearSCL( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_clearSDA( p_that ) \
	  tSensorPort_eSensorPort_clearSDA( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_setSCL( p_that ) \
	  tSensorPort_eSensorPort_setSCL( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_setSDA( p_that ) \
	  tSensorPort_eSensorPort_setSDA( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_inputPower( p_that, powerType ) \
	  tSensorPort_eSensorPort_inputPower( \
	   &tSensorPort_CB_tab[2], (powerType) )
#define tLightSensorBody_cSensorPort_getValue( p_that ) \
	  tSensorPort_eSensorPort_getValue( \
	   &tSensorPort_CB_tab[2] )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tLightSensorBody_CB {
    int  dummy;
} tLightSensorBody_CB;
extern tLightSensorBody_CB  tLightSensorBody_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tLightSensorBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSensor */
Inline void         tLightSensorBody_eSensor_getValue(tLightSensorBody_IDX idx, uint16_t* value);
/* sSensorControl */
Inline void         tLightSensorBody_eSensorControl_on(tLightSensorBody_IDX idx);
Inline void         tLightSensorBody_eSensorControl_off(tLightSensorBody_IDX idx);
/* siSensorDriver */
Inline void         tLightSensorBody_eiSensorDriver_initialize(tLightSensorBody_IDX idx);
Inline void         tLightSensorBody_eiSensorDriver_i2cInterruptBody(tLightSensorBody_IDX idx, uint32_t inputs);
/* sTerminateRoutineBody */
Inline void         tLightSensorBody_eTerminate_main(tLightSensorBody_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tLightSensorBody_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tLightSensorBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tLightSensorBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tLightSensorBody_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSensorPort_clearSCL( ) \
                      tLightSensorBody_cSensorPort_clearSCL( p_cellcb ) 
#define cSensorPort_clearSDA( ) \
                      tLightSensorBody_cSensorPort_clearSDA( p_cellcb ) 
#define cSensorPort_setSCL( ) \
                      tLightSensorBody_cSensorPort_setSCL( p_cellcb ) 
#define cSensorPort_setSDA( ) \
                      tLightSensorBody_cSensorPort_setSDA( p_cellcb ) 
#define cSensorPort_inputPower( powerType ) \
                      tLightSensorBody_cSensorPort_inputPower( p_cellcb, powerType ) 
#define cSensorPort_getValue( ) \
                      tLightSensorBody_cSensorPort_getValue( p_cellcb ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSensor_getValue tLightSensorBody_eSensor_getValue
#define eSensorControl_on tLightSensorBody_eSensorControl_on
#define eSensorControl_off tLightSensorBody_eSensorControl_off
#define eiSensorDriver_initialize tLightSensorBody_eiSensorDriver_initialize
#define eiSensorDriver_i2cInterruptBody tLightSensorBody_eiSensorDriver_i2cInterruptBody
#define eTerminate_main  tLightSensorBody_eTerminate_main

/* ���ƥ졼�������� (FOREACH_CELL)������(CB,INIB ��¸�ߤ��ʤ�) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tLightSensorBody_inline.h"

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
#undef tLightSensorBody_cSensorPort_clearSCL
#undef cSensorPort_clearSCL
#undef tLightSensorBody_cSensorPort_clearSDA
#undef cSensorPort_clearSDA
#undef tLightSensorBody_cSensorPort_setSCL
#undef cSensorPort_setSCL
#undef tLightSensorBody_cSensorPort_setSDA
#undef cSensorPort_setSDA
#undef tLightSensorBody_cSensorPort_inputPower
#undef cSensorPort_inputPower
#undef tLightSensorBody_cSensorPort_getValue
#undef cSensorPort_getValue
#undef eSensor_getValue
#undef eSensorControl_on
#undef eSensorControl_off
#undef eiSensorDriver_initialize
#undef eiSensorDriver_i2cInterruptBody
#undef eTerminate_main
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tLightSensorBody_TECSGEN_H */
