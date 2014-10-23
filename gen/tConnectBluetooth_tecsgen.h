/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tConnectBluetooth_TECSGEN_H
#define tConnectBluetooth_TECSGEN_H

/*
 * celltype    :  tConnectBluetooth
 * global name :  tConnectBluetooth
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sBluetooth_tecsgen.h"

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tConnectBluetooth_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tBluetoothBody_tecsgen.h"
#ifdef  tConnectBluetooth_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tConnectBluetooth_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tConnectBluetooth_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tConnectBluetooth_ATTR_deviceNameSize	(tConnectBluetooth_SINGLE_CELL_INIB.deviceNameSize)
#define tConnectBluetooth_ATTR_deviceName	(tConnectBluetooth_SINGLE_CELL_INIB.deviceName)

#define tConnectBluetooth_GET_deviceNameSize()	(tConnectBluetooth_SINGLE_CELL_INIB.deviceNameSize)
#define tConnectBluetooth_GET_deviceName()	(tConnectBluetooth_SINGLE_CELL_INIB.deviceName)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tConnectBluetooth__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tConnectBluetooth__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tConnectBluetooth_cBluetooth_open( ) \
	  tBluetoothBody_eBluetooth_open( \
	    )
#define tConnectBluetooth_cBluetooth_getLocalAddress( address ) \
	  tBluetoothBody_eBluetooth_getLocalAddress( \
	    (address) )
#define tConnectBluetooth_cBluetooth_getDeviceName( name ) \
	  tBluetoothBody_eBluetooth_getDeviceName( \
	    (name) )
#define tConnectBluetooth_cBluetooth_setDeviceName( name ) \
	  tBluetoothBody_eBluetooth_setDeviceName( \
	    (name) )
#define tConnectBluetooth_cBluetooth_setFactorySetting( ) \
	  tBluetoothBody_eBluetooth_setFactorySetting( \
	    )
#define tConnectBluetooth_cBluetooth_initializeMaster( address ) \
	  tBluetoothBody_eBluetooth_initializeMaster( \
	    (address) )
#define tConnectBluetooth_cBluetooth_initializeSlave( ) \
	  tBluetoothBody_eBluetooth_initializeSlave( \
	    )
#define tConnectBluetooth_cBluetooth_terminateConnection( ) \
	  tBluetoothBody_eBluetooth_terminateConnection( \
	    )
#define tConnectBluetooth_cBluetooth_sendPacket( buffer, length ) \
	  tBluetoothBody_eBluetooth_sendPacket( \
	    (buffer), (length) )
#define tConnectBluetooth_cBluetooth_readPacket( buffer, length ) \
	  tBluetoothBody_eBluetooth_readPacket( \
	    (buffer), (length) )
#define tConnectBluetooth_cBluetooth_isConnected( ) \
	  tBluetoothBody_eBluetooth_isConnected( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tConnectBluetooth_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        deviceNameSize;
    const char*          deviceName;
}  tConnectBluetooth_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tConnectBluetooth_CB_tab           tConnectBluetooth_INIB_tab
#define tConnectBluetooth_SINGLE_CELL_CB   tConnectBluetooth_SINGLE_CELL_INIB
#define tConnectBluetooth_CB               tConnectBluetooth_INIB
#define tag_tConnectBluetooth_CB           tag_tConnectBluetooth_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tConnectBluetooth_INIB  tConnectBluetooth_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tConnectBluetooth_INIB *tConnectBluetooth_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         tConnectBluetooth_eConnectBluetooth_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tConnectBluetooth_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tConnectBluetooth_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tConnectBluetooth_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_deviceNameSize  tConnectBluetooth_ATTR_deviceNameSize
#define ATTR_deviceName      tConnectBluetooth_ATTR_deviceName


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define sleep( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tConnectBluetooth__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cBluetooth_open( ) \
                      tConnectBluetooth_cBluetooth_open( ) 
#define cBluetooth_getLocalAddress( address ) \
                      tConnectBluetooth_cBluetooth_getLocalAddress( address ) 
#define cBluetooth_getDeviceName( name ) \
                      tConnectBluetooth_cBluetooth_getDeviceName( name ) 
#define cBluetooth_setDeviceName( name ) \
                      tConnectBluetooth_cBluetooth_setDeviceName( name ) 
#define cBluetooth_setFactorySetting( ) \
                      tConnectBluetooth_cBluetooth_setFactorySetting( ) 
#define cBluetooth_initializeMaster( address ) \
                      tConnectBluetooth_cBluetooth_initializeMaster( address ) 
#define cBluetooth_initializeSlave( ) \
                      tConnectBluetooth_cBluetooth_initializeSlave( ) 
#define cBluetooth_terminateConnection( ) \
                      tConnectBluetooth_cBluetooth_terminateConnection( ) 
#define cBluetooth_sendPacket( buffer, length ) \
                      tConnectBluetooth_cBluetooth_sendPacket( buffer, length ) 
#define cBluetooth_readPacket( buffer, length ) \
                      tConnectBluetooth_cBluetooth_readPacket( buffer, length ) 
#define cBluetooth_isConnected( ) \
                      tConnectBluetooth_cBluetooth_isConnected( ) 


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eConnectBluetooth_main tConnectBluetooth_eConnectBluetooth_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tConnectBluetooth_TECSGEN_H */
