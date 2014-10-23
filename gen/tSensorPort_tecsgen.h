/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSensorPort_TECSGEN_H
#define tSensorPort_TECSGEN_H

/*
 * celltype    :  tSensorPort
 * global name :  tSensorPort
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSensorPort_tecsgen.h"
#include "sAvrSensor_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSensorPort_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAVRBody_tecsgen.h"
#ifdef  tSensorPort_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSensorPort_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSensorPort_ID_BASE         (1)  /* ID �Υ١���  #_NIDB_# */
#define tSensorPort_N_CELL          (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tSensorPort_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tSensorPort_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tSensorPort_ATTR_portNumber( p_that )	((p_that)->portNumber)

#define tSensorPort_GET_portNumber(p_that)	((p_that)->portNumber)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tSensorPort_cAvrSensor_setInputPower( p_that, portNumber, powerType ) \
	  tAVRBody_eAvrSensor_setInputPower( \
	    (portNumber), (powerType) )
#define tSensorPort_cAvrSensor_getSensor( p_that, portNumber ) \
	  tAVRBody_eAvrSensor_getSensor( \
	    (portNumber) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSensorPort_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        portNumber;
}  tSensorPort_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tSensorPort_CB_tab           tSensorPort_INIB_tab
#define tSensorPort_SINGLE_CELL_CB   tSensorPort_SINGLE_CELL_INIB
#define tSensorPort_CB               tSensorPort_INIB
#define tag_tSensorPort_CB           tag_tSensorPort_INIB

extern tSensorPort_CB  tSensorPort_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tSensorPort_INIB *tSensorPort_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSensorPort */
void         tSensorPort_eSensorPort_clearSCL(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_clearSDA(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_setSCL(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_setSDA(tSensorPort_IDX idx);
void         tSensorPort_eSensorPort_inputPower(tSensorPort_IDX idx, uint8_t powerType);
uint16_t     tSensorPort_eSensorPort_getValue(tSensorPort_IDX idx);

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tSensorPort_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSensorPort_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSensorPort_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSensorPort_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_portNumber      tSensorPort_ATTR_portNumber( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cAvrSensor_setInputPower( portNumber, powerType ) \
                      tSensorPort_cAvrSensor_setInputPower( p_cellcb, portNumber, powerType ) 
#define cAvrSensor_getSensor( portNumber ) \
                      tSensorPort_cAvrSensor_getSensor( p_cellcb, portNumber ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSensorPort_clearSCL tSensorPort_eSensorPort_clearSCL
#define eSensorPort_clearSDA tSensorPort_eSensorPort_clearSDA
#define eSensorPort_setSCL tSensorPort_eSensorPort_setSCL
#define eSensorPort_setSDA tSensorPort_eSensorPort_setSDA
#define eSensorPort_inputPower tSensorPort_eSensorPort_inputPower
#define eSensorPort_getValue tSensorPort_eSensorPort_getValue

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSensorPort_N_CELL; (i)++ ){ \
       (p_cb) = &tSensorPort_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSensorPort_TECSGEN_H */
