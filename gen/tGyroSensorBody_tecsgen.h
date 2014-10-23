/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tGyroSensorBody_TECSGEN_H
#define tGyroSensorBody_TECSGEN_H

/*
 * celltype    :  tGyroSensorBody
 * global name :  tGyroSensorBody
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
#define  tGyroSensorBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSensorPort_tecsgen.h"
#ifdef  tGyroSensorBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tGyroSensorBody_CB_TYPE_ONLY */
#define tGyroSensorBody_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tGyroSensorBody_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tGyroSensorBody_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tGyroSensorBody_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tGyroSensorBody_cSensorPort_clearSCL( p_that ) \
	  tSensorPort_eSensorPort_clearSCL( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_clearSDA( p_that ) \
	  tSensorPort_eSensorPort_clearSDA( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_setSCL( p_that ) \
	  tSensorPort_eSensorPort_setSCL( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_setSDA( p_that ) \
	  tSensorPort_eSensorPort_setSDA( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_inputPower( p_that, powerType ) \
	  tSensorPort_eSensorPort_inputPower( \
	   &tSensorPort_CB_tab[0], (powerType) )
#define tGyroSensorBody_cSensorPort_getValue( p_that ) \
	  tSensorPort_eSensorPort_getValue( \
	   &tSensorPort_CB_tab[0] )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB (���ߡ�)����� #_CCDP_# */
typedef struct tag_tGyroSensorBody_CB {
    int  dummy;
} tGyroSensorBody_CB;
extern tGyroSensorBody_CB  tGyroSensorBody_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef int   tGyroSensorBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSensor */
Inline void         tGyroSensorBody_eSensor_getValue(tGyroSensorBody_IDX idx, uint16_t* value);
/* siSensorDriver */
Inline void         tGyroSensorBody_eiSensorDriver_initialize(tGyroSensorBody_IDX idx);
Inline void         tGyroSensorBody_eiSensorDriver_i2cInterruptBody(tGyroSensorBody_IDX idx, uint32_t inputs);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tGyroSensorBody_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tGyroSensorBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tGyroSensorBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tGyroSensorBody_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSensorPort_clearSCL( ) \
                      tGyroSensorBody_cSensorPort_clearSCL( p_cellcb ) 
#define cSensorPort_clearSDA( ) \
                      tGyroSensorBody_cSensorPort_clearSDA( p_cellcb ) 
#define cSensorPort_setSCL( ) \
                      tGyroSensorBody_cSensorPort_setSCL( p_cellcb ) 
#define cSensorPort_setSDA( ) \
                      tGyroSensorBody_cSensorPort_setSDA( p_cellcb ) 
#define cSensorPort_inputPower( powerType ) \
                      tGyroSensorBody_cSensorPort_inputPower( p_cellcb, powerType ) 
#define cSensorPort_getValue( ) \
                      tGyroSensorBody_cSensorPort_getValue( p_cellcb ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSensor_getValue tGyroSensorBody_eSensor_getValue
#define eiSensorDriver_initialize tGyroSensorBody_eiSensorDriver_initialize
#define eiSensorDriver_i2cInterruptBody tGyroSensorBody_eiSensorDriver_i2cInterruptBody

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
#include "tGyroSensorBody_inline.h"

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
#undef tGyroSensorBody_cSensorPort_clearSCL
#undef cSensorPort_clearSCL
#undef tGyroSensorBody_cSensorPort_clearSDA
#undef cSensorPort_clearSDA
#undef tGyroSensorBody_cSensorPort_setSCL
#undef cSensorPort_setSCL
#undef tGyroSensorBody_cSensorPort_setSDA
#undef cSensorPort_setSDA
#undef tGyroSensorBody_cSensorPort_inputPower
#undef cSensorPort_inputPower
#undef tGyroSensorBody_cSensorPort_getValue
#undef cSensorPort_getValue
#undef eSensor_getValue
#undef eiSensorDriver_initialize
#undef eiSensorDriver_i2cInterruptBody
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tGyroSensorBody_TECSGEN_H */
