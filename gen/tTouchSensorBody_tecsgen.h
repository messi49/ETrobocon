/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTouchSensorBody_TECSGEN_H
#define tTouchSensorBody_TECSGEN_H

/*
 * celltype    :  tTouchSensorBody
 * global name :  tTouchSensorBody
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
#include "siSensorDriver_tecsgen.h"
#include "sSensorPort_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTouchSensorBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSensorPort_tecsgen.h"
#ifdef  tTouchSensorBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTouchSensorBody_CB_TYPE_ONLY */
#define tTouchSensorBody_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tTouchSensorBody_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTouchSensorBody_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTouchSensorBody_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tTouchSensorBody_cSensorPort_clearSCL( p_that ) \
	  tSensorPort_eSensorPort_clearSCL( \
	   &tSensorPort_CB_tab[3] )
#define tTouchSensorBody_cSensorPort_clearSDA( p_that ) \
	  tSensorPort_eSensorPort_clearSDA( \
	   &tSensorPort_CB_tab[3] )
#define tTouchSensorBody_cSensorPort_setSCL( p_that ) \
	  tSensorPort_eSensorPort_setSCL( \
	   &tSensorPort_CB_tab[3] )
#define tTouchSensorBody_cSensorPort_setSDA( p_that ) \
	  tSensorPort_eSensorPort_setSDA( \
	   &tSensorPort_CB_tab[3] )
#define tTouchSensorBody_cSensorPort_inputPower( p_that, powerType ) \
	  tSensorPort_eSensorPort_inputPower( \
	   &tSensorPort_CB_tab[3], (powerType) )
#define tTouchSensorBody_cSensorPort_getValue( p_that ) \
	  tSensorPort_eSensorPort_getValue( \
	   &tSensorPort_CB_tab[3] )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tTouchSensorBody_CB {
    int  dummy;
} tTouchSensorBody_CB;
extern tTouchSensorBody_CB  tTouchSensorBody_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tTouchSensorBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSensor */
Inline void         tTouchSensorBody_eSensor_getValue(tTouchSensorBody_IDX idx, uint16_t* value);
/* siSensorDriver */
Inline void         tTouchSensorBody_eiSensorDriver_initialize(tTouchSensorBody_IDX idx);
Inline void         tTouchSensorBody_eiSensorDriver_i2cInterruptBody(tTouchSensorBody_IDX idx, uint32_t inputs);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tTouchSensorBody_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTouchSensorBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTouchSensorBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTouchSensorBody_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSensorPort_clearSCL( ) \
                      tTouchSensorBody_cSensorPort_clearSCL( p_cellcb ) 
#define cSensorPort_clearSDA( ) \
                      tTouchSensorBody_cSensorPort_clearSDA( p_cellcb ) 
#define cSensorPort_setSCL( ) \
                      tTouchSensorBody_cSensorPort_setSCL( p_cellcb ) 
#define cSensorPort_setSDA( ) \
                      tTouchSensorBody_cSensorPort_setSDA( p_cellcb ) 
#define cSensorPort_inputPower( powerType ) \
                      tTouchSensorBody_cSensorPort_inputPower( p_cellcb, powerType ) 
#define cSensorPort_getValue( ) \
                      tTouchSensorBody_cSensorPort_getValue( p_cellcb ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSensor_getValue tTouchSensorBody_eSensor_getValue
#define eiSensorDriver_initialize tTouchSensorBody_eiSensorDriver_initialize
#define eiSensorDriver_i2cInterruptBody tTouchSensorBody_eiSensorDriver_i2cInterruptBody

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
#include "tTouchSensorBody_inline.h"

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
#undef tTouchSensorBody_cSensorPort_clearSCL
#undef cSensorPort_clearSCL
#undef tTouchSensorBody_cSensorPort_clearSDA
#undef cSensorPort_clearSDA
#undef tTouchSensorBody_cSensorPort_setSCL
#undef cSensorPort_setSCL
#undef tTouchSensorBody_cSensorPort_setSDA
#undef cSensorPort_setSDA
#undef tTouchSensorBody_cSensorPort_inputPower
#undef cSensorPort_inputPower
#undef tTouchSensorBody_cSensorPort_getValue
#undef cSensorPort_getValue
#undef eSensor_getValue
#undef eiSensorDriver_initialize
#undef eiSensorDriver_i2cInterruptBody
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tTouchSensorBody_TECSGEN_H */
