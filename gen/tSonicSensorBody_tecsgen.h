/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSonicSensorBody_TECSGEN_H
#define tSonicSensorBody_TECSGEN_H

/*
 * celltype    :  tSonicSensorBody
 * global name :  tSonicSensorBody
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  false
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSensor_tecsgen.h"
#include "siSensorDriver_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "sSensorPort_tecsgen.h"
#include "sI2C_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSonicSensorBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSensorPort_tecsgen.h"
#include "tI2C_tecsgen.h"
#ifdef  tSonicSensorBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSonicSensorBody_CB_TYPE_ONLY */
#define tSonicSensorBody_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tSonicSensorBody_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tSonicSensorBody_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tSonicSensorBody_GET_CELLCB(idx) (idx)



/* var ���������ޥ��� #_VAM_# */
#define tSonicSensorBody_VAR_distance(p_that)	((p_that)->distance)

#define tSonicSensorBody_GET_distance(p_that)	((p_that)->distance)
#define tSonicSensorBody_SET_distance(p_that,val)	((p_that)->distance=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tSonicSensorBody_cSensorPort_clearSCL( p_that ) \
	  tSensorPort_eSensorPort_clearSCL( \
	   &tSensorPort_CB_tab[1] )
#define tSonicSensorBody_cSensorPort_clearSDA( p_that ) \
	  tSensorPort_eSensorPort_clearSDA( \
	   &tSensorPort_CB_tab[1] )
#define tSonicSensorBody_cSensorPort_setSCL( p_that ) \
	  tSensorPort_eSensorPort_setSCL( \
	   &tSensorPort_CB_tab[1] )
#define tSonicSensorBody_cSensorPort_setSDA( p_that ) \
	  tSensorPort_eSensorPort_setSDA( \
	   &tSensorPort_CB_tab[1] )
#define tSonicSensorBody_cSensorPort_inputPower( p_that, powerType ) \
	  tSensorPort_eSensorPort_inputPower( \
	   &tSensorPort_CB_tab[1], (powerType) )
#define tSonicSensorBody_cSensorPort_getValue( p_that ) \
	  tSensorPort_eSensorPort_getValue( \
	   &tSensorPort_CB_tab[1] )
#define tSonicSensorBody_cI2C_enable( p_that ) \
	  tI2C_eI2C_enable( \
	   &tI2C_CB_tab[0] )
#define tSonicSensorBody_cI2C_disable( p_that ) \
	  tI2C_eI2C_disable( \
	   &tI2C_CB_tab[0] )
#define tSonicSensorBody_cI2C_isBusy( p_that ) \
	  tI2C_eI2C_isBusy( \
	   &tI2C_CB_tab[0] )
#define tSonicSensorBody_cI2C_startTransaction( p_that, address, internalAddress, internalAddressBytes, data, dataSize, direction ) \
	  tI2C_eI2C_startTransaction( \
	   &tI2C_CB_tab[0], (address), (internalAddress), (internalAddressBytes), (data), (dataSize), (direction) )
#define tSonicSensorBody_cI2C_initialize( p_that ) \
	  tI2C_eI2C_initialize( \
	   &tI2C_CB_tab[0] )
#define tSonicSensorBody_cI2C_interruptBody( p_that, inputs ) \
	  tI2C_eI2C_interruptBody( \
	   &tI2C_CB_tab[0], (inputs) )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tSonicSensorBody_CB {
    /* var #_VA_# */ 
    uint8_t        distance;
}  tSonicSensorBody_CB;
extern tSonicSensorBody_CB  tSonicSensorBody_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tSonicSensorBody_CB *tSonicSensorBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSensor */
Inline void         tSonicSensorBody_eSensor_getValue(tSonicSensorBody_IDX idx, uint16_t* value);
/* siSensorDriver */
Inline void         tSonicSensorBody_eiSensorDriver_initialize(tSonicSensorBody_IDX idx);
Inline void         tSonicSensorBody_eiSensorDriver_i2cInterruptBody(tSonicSensorBody_IDX idx, uint32_t inputs);
/* sTerminateRoutineBody */
Inline void         tSonicSensorBody_eTerminate_main(tSonicSensorBody_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tSonicSensorBody_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSonicSensorBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSonicSensorBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSonicSensorBody_IDX



/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_distance         tSonicSensorBody_VAR_distance( p_cellcb )

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSensorPort_clearSCL( ) \
                      tSonicSensorBody_cSensorPort_clearSCL( p_cellcb ) 
#define cSensorPort_clearSDA( ) \
                      tSonicSensorBody_cSensorPort_clearSDA( p_cellcb ) 
#define cSensorPort_setSCL( ) \
                      tSonicSensorBody_cSensorPort_setSCL( p_cellcb ) 
#define cSensorPort_setSDA( ) \
                      tSonicSensorBody_cSensorPort_setSDA( p_cellcb ) 
#define cSensorPort_inputPower( powerType ) \
                      tSonicSensorBody_cSensorPort_inputPower( p_cellcb, powerType ) 
#define cSensorPort_getValue( ) \
                      tSonicSensorBody_cSensorPort_getValue( p_cellcb ) 
#define cI2C_enable( ) \
                      tSonicSensorBody_cI2C_enable( p_cellcb ) 
#define cI2C_disable( ) \
                      tSonicSensorBody_cI2C_disable( p_cellcb ) 
#define cI2C_isBusy( ) \
                      tSonicSensorBody_cI2C_isBusy( p_cellcb ) 
#define cI2C_startTransaction( address, internalAddress, internalAddressBytes, data, dataSize, direction ) \
                      tSonicSensorBody_cI2C_startTransaction( p_cellcb, address, internalAddress, internalAddressBytes, data, dataSize, direction ) 
#define cI2C_initialize( ) \
                      tSonicSensorBody_cI2C_initialize( p_cellcb ) 
#define cI2C_interruptBody( inputs ) \
                      tSonicSensorBody_cI2C_interruptBody( p_cellcb, inputs ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSensor_getValue tSonicSensorBody_eSensor_getValue
#define eiSensorDriver_initialize tSonicSensorBody_eiSensorDriver_initialize
#define eiSensorDriver_i2cInterruptBody tSonicSensorBody_eiSensorDriver_i2cInterruptBody
#define eTerminate_main  tSonicSensorBody_eTerminate_main

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSonicSensorBody_N_CELL; (i)++ ){ \
       (p_cb) = &tSonicSensorBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tSonicSensorBody_inline.h"

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
#undef VAR_distance
#undef VAR_distance
#undef tSonicSensorBody_VAR_distance
#undef tSonicSensorBody_GET_distance
#undef tSonicSensorBody_SET_distance
#undef tSonicSensorBody_cSensorPort_clearSCL
#undef cSensorPort_clearSCL
#undef tSonicSensorBody_cSensorPort_clearSDA
#undef cSensorPort_clearSDA
#undef tSonicSensorBody_cSensorPort_setSCL
#undef cSensorPort_setSCL
#undef tSonicSensorBody_cSensorPort_setSDA
#undef cSensorPort_setSDA
#undef tSonicSensorBody_cSensorPort_inputPower
#undef cSensorPort_inputPower
#undef tSonicSensorBody_cSensorPort_getValue
#undef cSensorPort_getValue
#undef tSonicSensorBody_cI2C_enable
#undef cI2C_enable
#undef tSonicSensorBody_cI2C_disable
#undef cI2C_disable
#undef tSonicSensorBody_cI2C_isBusy
#undef cI2C_isBusy
#undef tSonicSensorBody_cI2C_startTransaction
#undef cI2C_startTransaction
#undef tSonicSensorBody_cI2C_initialize
#undef cI2C_initialize
#undef tSonicSensorBody_cI2C_interruptBody
#undef cI2C_interruptBody
#undef eSensor_getValue
#undef eiSensorDriver_initialize
#undef eiSensorDriver_i2cInterruptBody
#undef eTerminate_main
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tSonicSensorBody_TECSGEN_H */
