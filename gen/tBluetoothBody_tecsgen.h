/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tBluetoothBody_TECSGEN_H
#define tBluetoothBody_TECSGEN_H

/*
 * celltype    :  tBluetoothBody
 * global name :  tBluetoothBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sBluetooth_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "sAlarm_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tBluetoothBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSemaphore_tecsgen.h"
#include "tAlarmHandler_tecsgen.h"
#ifdef  tBluetoothBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tBluetoothBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tBluetoothBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tBluetoothBody_ATTR_sendBufferSize	(tBluetoothBody_SINGLE_CELL_INIB.sendBufferSize)
#define tBluetoothBody_ATTR_receiveBufferSize	(tBluetoothBody_SINGLE_CELL_INIB.receiveBufferSize)
#define tBluetoothBody_ATTR_uartBase	(tBluetoothBody_SINGLE_CELL_INIB.uartBase)
#define tBluetoothBody_ATTR_timerBase	(tBluetoothBody_SINGLE_CELL_INIB.timerBase)
#define tBluetoothBody_ATTR_keyCode	(tBluetoothBody_SINGLE_CELL_INIB.keyCode)

#define tBluetoothBody_GET_sendBufferSize()	(tBluetoothBody_SINGLE_CELL_INIB.sendBufferSize)
#define tBluetoothBody_GET_receiveBufferSize()	(tBluetoothBody_SINGLE_CELL_INIB.receiveBufferSize)
#define tBluetoothBody_GET_uartBase()	(tBluetoothBody_SINGLE_CELL_INIB.uartBase)
#define tBluetoothBody_GET_timerBase()	(tBluetoothBody_SINGLE_CELL_INIB.timerBase)
#define tBluetoothBody_GET_keyCode()	(tBluetoothBody_SINGLE_CELL_INIB.keyCode)


/* var ���������ޥ��� #_VAM_# */
#define tBluetoothBody_VAR_status	(tBluetoothBody_SINGLE_CELL_CB.status)
#define tBluetoothBody_VAR_handle	(tBluetoothBody_SINGLE_CELL_CB.handle)
#define tBluetoothBody_VAR_waitTimeOut	(tBluetoothBody_SINGLE_CELL_CB.waitTimeOut)
#define tBluetoothBody_VAR_sendBuffer1	(tBluetoothBody_SINGLE_CELL_INIB.sendBuffer1)
#define tBluetoothBody_VAR_sendBuffer2	(tBluetoothBody_SINGLE_CELL_INIB.sendBuffer2)
#define tBluetoothBody_VAR_sendBufferPointer	(tBluetoothBody_SINGLE_CELL_CB.sendBufferPointer)
#define tBluetoothBody_VAR_sendBufferCount	(tBluetoothBody_SINGLE_CELL_CB.sendBufferCount)
#define tBluetoothBody_VAR_receiveBuffer1	(tBluetoothBody_SINGLE_CELL_INIB.receiveBuffer1)
#define tBluetoothBody_VAR_receiveBuffer2	(tBluetoothBody_SINGLE_CELL_INIB.receiveBuffer2)
#define tBluetoothBody_VAR_receiveBufferPointer	(tBluetoothBody_SINGLE_CELL_CB.receiveBufferPointer)
#define tBluetoothBody_VAR_receiveBufferCount	(tBluetoothBody_SINGLE_CELL_CB.receiveBufferCount)

#define tBluetoothBody_GET_status()	(tBluetoothBody_SINGLE_CELL_CB.status)
#define tBluetoothBody_SET_status(val)	(tBluetoothBody_SINGLE_CELL_CB.status=(val))
#define tBluetoothBody_GET_handle()	(tBluetoothBody_SINGLE_CELL_CB.handle)
#define tBluetoothBody_SET_handle(val)	(tBluetoothBody_SINGLE_CELL_CB.handle=(val))
#define tBluetoothBody_GET_waitTimeOut()	(tBluetoothBody_SINGLE_CELL_CB.waitTimeOut)
#define tBluetoothBody_SET_waitTimeOut(val)	(tBluetoothBody_SINGLE_CELL_CB.waitTimeOut=(val))
#define tBluetoothBody_GET_sendBuffer1()	(tBluetoothBody_SINGLE_CELL_CB.sendBuffer1)
#define tBluetoothBody_SET_sendBuffer1(val)	(tBluetoothBody_SINGLE_CELL_CB.sendBuffer1=(val))
#define tBluetoothBody_GET_sendBuffer2()	(tBluetoothBody_SINGLE_CELL_CB.sendBuffer2)
#define tBluetoothBody_SET_sendBuffer2(val)	(tBluetoothBody_SINGLE_CELL_CB.sendBuffer2=(val))
#define tBluetoothBody_GET_sendBufferPointer()	(tBluetoothBody_SINGLE_CELL_CB.sendBufferPointer)
#define tBluetoothBody_SET_sendBufferPointer(val)	(tBluetoothBody_SINGLE_CELL_CB.sendBufferPointer=(val))
#define tBluetoothBody_GET_sendBufferCount()	(tBluetoothBody_SINGLE_CELL_CB.sendBufferCount)
#define tBluetoothBody_SET_sendBufferCount(val)	(tBluetoothBody_SINGLE_CELL_CB.sendBufferCount=(val))
#define tBluetoothBody_GET_receiveBuffer1()	(tBluetoothBody_SINGLE_CELL_CB.receiveBuffer1)
#define tBluetoothBody_SET_receiveBuffer1(val)	(tBluetoothBody_SINGLE_CELL_CB.receiveBuffer1=(val))
#define tBluetoothBody_GET_receiveBuffer2()	(tBluetoothBody_SINGLE_CELL_CB.receiveBuffer2)
#define tBluetoothBody_SET_receiveBuffer2(val)	(tBluetoothBody_SINGLE_CELL_CB.receiveBuffer2=(val))
#define tBluetoothBody_GET_receiveBufferPointer()	(tBluetoothBody_SINGLE_CELL_CB.receiveBufferPointer)
#define tBluetoothBody_SET_receiveBufferPointer(val)	(tBluetoothBody_SINGLE_CELL_CB.receiveBufferPointer=(val))
#define tBluetoothBody_GET_receiveBufferCount()	(tBluetoothBody_SINGLE_CELL_CB.receiveBufferCount)
#define tBluetoothBody_SET_receiveBufferCount(val)	(tBluetoothBody_SINGLE_CELL_CB.receiveBufferCount=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tBluetoothBody_cSemaphore_signal( ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[0] )
#define tBluetoothBody_cSemaphore_wait( ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[0] )
#define tBluetoothBody_cSemaphore_waitPolling( ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[0] )
#define tBluetoothBody_cSemaphore_waitTimeout( timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[0], (timeout) )
#define tBluetoothBody_cSemaphore_initialize( ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[0] )
#define tBluetoothBody_cSemaphore_refer( pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[0], (pk_semaphoreStatus) )
#define tBluetoothBody_cAlarm_start( alarmTime ) \
	  tAlarmHandler_eAlarm_start( \
	   &tAlarmHandler_CB_tab[0], (alarmTime) )
#define tBluetoothBody_cAlarm_stop( ) \
	  tAlarmHandler_eAlarm_stop( \
	   &tAlarmHandler_CB_tab[0] )
#define tBluetoothBody_cAlarm_refer( pk_alarmStatus ) \
	  tAlarmHandler_eAlarm_refer( \
	   &tAlarmHandler_CB_tab[0], (pk_alarmStatus) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tBluetoothBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint32_t       sendBufferSize;
    uint32_t       receiveBufferSize;
    void*          uartBase;
    void*          timerBase;
    char*          keyCode;
    char*          sendBuffer1;
    char*          sendBuffer2;
    char*          receiveBuffer1;
    char*          receiveBuffer2;
}  tBluetoothBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tBluetoothBody_CB {
    tBluetoothBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint8_t        status;
    uint8_t        handle;
    volatile bool_t waitTimeOut;
    char*          sendBufferPointer;
    uint32_t       sendBufferCount;
    char*          receiveBufferPointer;
    uint32_t       receiveBufferCount;
}  tBluetoothBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tBluetoothBody_CB  tBluetoothBody_SINGLE_CELL_CB;
extern  tBluetoothBody_INIB  tBluetoothBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tBluetoothBody_CB *tBluetoothBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sBluetooth */
void         tBluetoothBody_eBluetooth_open();
bool_t       tBluetoothBody_eBluetooth_getLocalAddress( uint8_t* address);
bool_t       tBluetoothBody_eBluetooth_getDeviceName( uint8_t* name);
bool_t       tBluetoothBody_eBluetooth_setDeviceName( const uint8_t* name);
bool_t       tBluetoothBody_eBluetooth_setFactorySetting();
uint8_t      tBluetoothBody_eBluetooth_initializeMaster( const uint8_t* address);
uint8_t      tBluetoothBody_eBluetooth_initializeSlave();
void         tBluetoothBody_eBluetooth_terminateConnection();
uint32_t     tBluetoothBody_eBluetooth_sendPacket( const uint8_t* buffer, uint32_t length);
uint32_t     tBluetoothBody_eBluetooth_readPacket( uint8_t* buffer, uint32_t length);
bool_t       tBluetoothBody_eBluetooth_isConnected();
/* sInitializeRoutineBody */
void         tBluetoothBody_eInitialize_main();
/* sTerminateRoutineBody */
void         tBluetoothBody_eTerminate_main();
/* siHandlerBody */
void         tBluetoothBody_eiAlarmBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tBluetoothBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tBluetoothBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tBluetoothBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_sendBufferSize  tBluetoothBody_ATTR_sendBufferSize
#define ATTR_receiveBufferSize tBluetoothBody_ATTR_receiveBufferSize
#define ATTR_uartBase        tBluetoothBody_ATTR_uartBase
#define ATTR_timerBase       tBluetoothBody_ATTR_timerBase
#define ATTR_keyCode         tBluetoothBody_ATTR_keyCode


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_status           tBluetoothBody_VAR_status
#define VAR_handle           tBluetoothBody_VAR_handle
#define VAR_waitTimeOut      tBluetoothBody_VAR_waitTimeOut
#define VAR_sendBuffer1      tBluetoothBody_VAR_sendBuffer1
#define VAR_sendBuffer2      tBluetoothBody_VAR_sendBuffer2
#define VAR_sendBufferPointer tBluetoothBody_VAR_sendBufferPointer
#define VAR_sendBufferCount  tBluetoothBody_VAR_sendBufferCount
#define VAR_receiveBuffer1   tBluetoothBody_VAR_receiveBuffer1
#define VAR_receiveBuffer2   tBluetoothBody_VAR_receiveBuffer2
#define VAR_receiveBufferPointer tBluetoothBody_VAR_receiveBufferPointer
#define VAR_receiveBufferCount tBluetoothBody_VAR_receiveBufferCount

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSemaphore_signal( ) \
                      tBluetoothBody_cSemaphore_signal( ) 
#define cSemaphore_wait( ) \
                      tBluetoothBody_cSemaphore_wait( ) 
#define cSemaphore_waitPolling( ) \
                      tBluetoothBody_cSemaphore_waitPolling( ) 
#define cSemaphore_waitTimeout( timeout ) \
                      tBluetoothBody_cSemaphore_waitTimeout( timeout ) 
#define cSemaphore_initialize( ) \
                      tBluetoothBody_cSemaphore_initialize( ) 
#define cSemaphore_refer( pk_semaphoreStatus ) \
                      tBluetoothBody_cSemaphore_refer( pk_semaphoreStatus ) 
#define cAlarm_start( alarmTime ) \
                      tBluetoothBody_cAlarm_start( alarmTime ) 
#define cAlarm_stop( ) \
                      tBluetoothBody_cAlarm_stop( ) 
#define cAlarm_refer( pk_alarmStatus ) \
                      tBluetoothBody_cAlarm_refer( pk_alarmStatus ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eBluetooth_open  tBluetoothBody_eBluetooth_open
#define eBluetooth_getLocalAddress tBluetoothBody_eBluetooth_getLocalAddress
#define eBluetooth_getDeviceName tBluetoothBody_eBluetooth_getDeviceName
#define eBluetooth_setDeviceName tBluetoothBody_eBluetooth_setDeviceName
#define eBluetooth_setFactorySetting tBluetoothBody_eBluetooth_setFactorySetting
#define eBluetooth_initializeMaster tBluetoothBody_eBluetooth_initializeMaster
#define eBluetooth_initializeSlave tBluetoothBody_eBluetooth_initializeSlave
#define eBluetooth_terminateConnection tBluetoothBody_eBluetooth_terminateConnection
#define eBluetooth_sendPacket tBluetoothBody_eBluetooth_sendPacket
#define eBluetooth_readPacket tBluetoothBody_eBluetooth_readPacket
#define eBluetooth_isConnected tBluetoothBody_eBluetooth_isConnected
#define eInitialize_main tBluetoothBody_eInitialize_main
#define eTerminate_main  tBluetoothBody_eTerminate_main
#define eiAlarmBody_main tBluetoothBody_eiAlarmBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()\
	tBluetoothBody_SINGLE_CELL_CB.waitTimeOut = true;
#define SET_CB_INIB_POINTER(i,p_that)\
	tBluetoothBody_SINGLE_CELL_CB._inib = &tBluetoothBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tBluetoothBody_TECSGEN_H */
