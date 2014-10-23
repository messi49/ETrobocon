/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tAVRBody_TECSGEN_H
#define tAVRBody_TECSGEN_H

/*
 * celltype    :  tAVRBody
 * global name :  tAVRBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sAvrMotor_tecsgen.h"
#include "sAvrSensor_tecsgen.h"
#include "sAvrButton_tecsgen.h"
#include "sAvrBattery_tecsgen.h"
#include "sAvrPower_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "sTWI_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tAVRBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTWIBody_tecsgen.h"
#ifdef  tAVRBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tAVRBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tAVRBody_GET_CELLCB(idx) ((void *)0)



/* var ���������ޥ��� #_VAM_# */
#define tAVRBody_VAR_initializedFlag	(tAVRBody_SINGLE_CELL_CB.initializedFlag)
#define tAVRBody_VAR_ioToAvr	(tAVRBody_SINGLE_CELL_CB.ioToAvr)
#define tAVRBody_VAR_ioFromAvr	(tAVRBody_SINGLE_CELL_CB.ioFromAvr)
#define tAVRBody_VAR_dataFromAvr	(tAVRBody_SINGLE_CELL_INIB.dataFromAvr)
#define tAVRBody_VAR_dataToAvr	(tAVRBody_SINGLE_CELL_INIB.dataToAvr)
#define tAVRBody_VAR_isSend 	(tAVRBody_SINGLE_CELL_CB.isSend)
#define tAVRBody_VAR_linkInitWait	(tAVRBody_SINGLE_CELL_CB.linkInitWait)
#define tAVRBody_VAR_resetFlag	(tAVRBody_SINGLE_CELL_CB.resetFlag)

#define tAVRBody_GET_initializedFlag()	(tAVRBody_SINGLE_CELL_CB.initializedFlag)
#define tAVRBody_SET_initializedFlag(val)	(tAVRBody_SINGLE_CELL_CB.initializedFlag=(val))
#define tAVRBody_GET_ioToAvr()	(tAVRBody_SINGLE_CELL_CB.ioToAvr)
#define tAVRBody_SET_ioToAvr(val)	(tAVRBody_SINGLE_CELL_CB.ioToAvr=(val))
#define tAVRBody_GET_ioFromAvr()	(tAVRBody_SINGLE_CELL_CB.ioFromAvr)
#define tAVRBody_SET_ioFromAvr(val)	(tAVRBody_SINGLE_CELL_CB.ioFromAvr=(val))
#define tAVRBody_GET_dataFromAvr()	(tAVRBody_SINGLE_CELL_CB.dataFromAvr)
#define tAVRBody_SET_dataFromAvr(val)	(tAVRBody_SINGLE_CELL_CB.dataFromAvr=(val))
#define tAVRBody_GET_dataToAvr()	(tAVRBody_SINGLE_CELL_CB.dataToAvr)
#define tAVRBody_SET_dataToAvr(val)	(tAVRBody_SINGLE_CELL_CB.dataToAvr=(val))
#define tAVRBody_GET_isSend()	(tAVRBody_SINGLE_CELL_CB.isSend)
#define tAVRBody_SET_isSend(val)	(tAVRBody_SINGLE_CELL_CB.isSend=(val))
#define tAVRBody_GET_linkInitWait()	(tAVRBody_SINGLE_CELL_CB.linkInitWait)
#define tAVRBody_SET_linkInitWait(val)	(tAVRBody_SINGLE_CELL_CB.linkInitWait=(val))
#define tAVRBody_GET_resetFlag()	(tAVRBody_SINGLE_CELL_CB.resetFlag)
#define tAVRBody_SET_resetFlag(val)	(tAVRBody_SINGLE_CELL_CB.resetFlag=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tAVRBody_cTWI_initialize( ) \
	  tTWIBody_eTWI_initialize( \
	    )
#define tAVRBody_cTWI_startWrite( dev_addr, int_addr_bytes, int_addr, data, nBytes ) \
	  tTWIBody_eTWI_startWrite( \
	    (dev_addr), (int_addr_bytes), (int_addr), (data), (nBytes) )
#define tAVRBody_cTWI_startRead( dev_addr, int_addr_bytes, int_addr, data, nBytes ) \
	  tTWIBody_eTWI_startRead( \
	    (dev_addr), (int_addr_bytes), (int_addr), (data), (nBytes) )
#define tAVRBody_cTWI_pollingUpdate( ) \
	  tTWIBody_eTWI_pollingUpdate( \
	    )
#define tAVRBody_cTWI_isBusy( ) \
	  tTWIBody_eTWI_isBusy( \
	    )
#define tAVRBody_cTWI_isOk( ) \
	  tTWIBody_eTWI_isOk( \
	    )
#define tAVRBody_cTWI_reset( ) \
	  tTWIBody_eTWI_reset( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tAVRBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    uint8_t*       dataFromAvr;
    uint8_t*       dataToAvr;
}  tAVRBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tAVRBody_CB {
    tAVRBody_INIB  *_inib;
    /* var #_VA_# */ 
    bool_t         initializedFlag;
    TOAVR          ioToAvr;
    FROMAVR        ioFromAvr;
    bool_t         isSend;
    uint8_t        linkInitWait;
    bool_t         resetFlag;
}  tAVRBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tAVRBody_CB  tAVRBody_SINGLE_CELL_CB;
extern  tAVRBody_INIB  tAVRBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tAVRBody_CB *tAVRBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sAvrMotor */
void         tAVRBody_eAvrMotor_setMotor( uint8_t portNumber, int8_t powerPercent, bool_t brake);
/* sAvrSensor */
void         tAVRBody_eAvrSensor_setInputPower( uint8_t portNumber, uint8_t powerType);
uint16_t     tAVRBody_eAvrSensor_getSensor( uint8_t portNumber);
/* sAvrButton */
uint8_t      tAVRBody_eAvrButton_getButton();
/* sAvrBattery */
uint16_t     tAVRBody_eAvrBattery_batteryVoltage();
/* sAvrPower */
void         tAVRBody_eAvrPower_powerDown();
void         tAVRBody_eAvrPower_update();
/* sInitializeRoutineBody */
void         tAVRBody_eInitialize_main();
/* sTerminateRoutineBody */
void         tAVRBody_eTerminate_main();
/* siHandlerBody */
void         tAVRBody_eiCyclicBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tAVRBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tAVRBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tAVRBody_IDX



/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_initializedFlag  tAVRBody_VAR_initializedFlag
#define VAR_ioToAvr          tAVRBody_VAR_ioToAvr
#define VAR_ioFromAvr        tAVRBody_VAR_ioFromAvr
#define VAR_dataFromAvr      tAVRBody_VAR_dataFromAvr
#define VAR_dataToAvr        tAVRBody_VAR_dataToAvr
#define VAR_isSend           tAVRBody_VAR_isSend
#define VAR_linkInitWait     tAVRBody_VAR_linkInitWait
#define VAR_resetFlag        tAVRBody_VAR_resetFlag

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTWI_initialize( ) \
                      tAVRBody_cTWI_initialize( ) 
#define cTWI_startWrite( dev_addr, int_addr_bytes, int_addr, data, nBytes ) \
                      tAVRBody_cTWI_startWrite( dev_addr, int_addr_bytes, int_addr, data, nBytes ) 
#define cTWI_startRead( dev_addr, int_addr_bytes, int_addr, data, nBytes ) \
                      tAVRBody_cTWI_startRead( dev_addr, int_addr_bytes, int_addr, data, nBytes ) 
#define cTWI_pollingUpdate( ) \
                      tAVRBody_cTWI_pollingUpdate( ) 
#define cTWI_isBusy( ) \
                      tAVRBody_cTWI_isBusy( ) 
#define cTWI_isOk( ) \
                      tAVRBody_cTWI_isOk( ) 
#define cTWI_reset( ) \
                      tAVRBody_cTWI_reset( ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eAvrMotor_setMotor tAVRBody_eAvrMotor_setMotor
#define eAvrSensor_setInputPower tAVRBody_eAvrSensor_setInputPower
#define eAvrSensor_getSensor tAVRBody_eAvrSensor_getSensor
#define eAvrButton_getButton tAVRBody_eAvrButton_getButton
#define eAvrBattery_batteryVoltage tAVRBody_eAvrBattery_batteryVoltage
#define eAvrPower_powerDown tAVRBody_eAvrPower_powerDown
#define eAvrPower_update tAVRBody_eAvrPower_update
#define eInitialize_main tAVRBody_eInitialize_main
#define eTerminate_main  tAVRBody_eTerminate_main
#define eiCyclicBody_main tAVRBody_eiCyclicBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()\
	tAVRBody_SINGLE_CELL_CB.resetFlag = false;
#define SET_CB_INIB_POINTER(i,p_that)\
	tAVRBody_SINGLE_CELL_CB._inib = &tAVRBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAVRBody_TECSGEN_H */
