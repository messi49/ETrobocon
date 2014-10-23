/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSIOPortMindstormsNXT_TECSGEN_H
#define tSIOPortMindstormsNXT_TECSGEN_H

/*
 * celltype    :  tSIOPortMindstormsNXT
 * global name :  tSIOPortMindstormsNXT
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sSIOPort_tecsgen.h"
#include "siSIOCBR_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"
#include "sBluetooth_tecsgen.h"
#include "sSemaphore_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSIOPortMindstormsNXT_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tSerialPortMain_tecsgen.h"
#include "tBluetoothBody_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#ifdef  tSIOPortMindstormsNXT_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSIOPortMindstormsNXT_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSIOPortMindstormsNXT_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSIOPortMindstormsNXT_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSIOPortMindstormsNXT_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSIOPortMindstormsNXT_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSIOPortMindstormsNXT_ATTR_uartBase( p_that )	((p_that)->_inib->uartBase)
#define tSIOPortMindstormsNXT_ATTR_sendBufferSize( p_that )	((p_that)->_inib->sendBufferSize)
#define tSIOPortMindstormsNXT_ATTR_sendBufferPointerInitialize( p_that )	((p_that)->_inib->sendBufferPointerInitialize)
#define tSIOPortMindstormsNXT_ATTR_sendBufferCountInitialize( p_that )	((p_that)->_inib->sendBufferCountInitialize)
#define tSIOPortMindstormsNXT_ATTR_receiveBufferSize( p_that )	((p_that)->_inib->receiveBufferSize)

#define tSIOPortMindstormsNXT_GET_uartBase(p_that)	((p_that)->_inib->uartBase)
#define tSIOPortMindstormsNXT_GET_sendBufferSize(p_that)	((p_that)->_inib->sendBufferSize)
#define tSIOPortMindstormsNXT_GET_sendBufferPointerInitialize(p_that)	((p_that)->_inib->sendBufferPointerInitialize)
#define tSIOPortMindstormsNXT_GET_sendBufferCountInitialize(p_that)	((p_that)->_inib->sendBufferCountInitialize)
#define tSIOPortMindstormsNXT_GET_receiveBufferSize(p_that)	((p_that)->_inib->receiveBufferSize)


/* var アクセスマクロ #_VAM_# */
#define tSIOPortMindstormsNXT_VAR_openFlag(p_that)	((p_that)->openFlag)
#define tSIOPortMindstormsNXT_VAR_sendBuffer1(p_that)	((p_that)->_inib->sendBuffer1)
#define tSIOPortMindstormsNXT_VAR_sendBuffer2(p_that)	((p_that)->_inib->sendBuffer2)
#define tSIOPortMindstormsNXT_VAR_sendBufferPointer(p_that)	((p_that)->sendBufferPointer)
#define tSIOPortMindstormsNXT_VAR_sendBufferCount(p_that)	((p_that)->sendBufferCount)
#define tSIOPortMindstormsNXT_VAR_UsedTargetbuffer(p_that)	((p_that)->UsedTargetbuffer)
#define tSIOPortMindstormsNXT_VAR_UsedKernelbuffer(p_that)	((p_that)->UsedKernelbuffer)
#define tSIOPortMindstormsNXT_VAR_receiveBuffer1(p_that)	((p_that)->_inib->receiveBuffer1)
#define tSIOPortMindstormsNXT_VAR_receiveBuffer2(p_that)	((p_that)->_inib->receiveBuffer2)
#define tSIOPortMindstormsNXT_VAR_receiveBufferPointer(p_that)	((p_that)->receiveBufferPointer)
#define tSIOPortMindstormsNXT_VAR_receiveBufferCount(p_that)	((p_that)->receiveBufferCount)

#define tSIOPortMindstormsNXT_GET_openFlag(p_that)	((p_that)->openFlag)
#define tSIOPortMindstormsNXT_SET_openFlag(p_that,val)	((p_that)->openFlag=(val))
#define tSIOPortMindstormsNXT_GET_sendBuffer1(p_that)	((p_that)->sendBuffer1)
#define tSIOPortMindstormsNXT_SET_sendBuffer1(p_that,val)	((p_that)->sendBuffer1=(val))
#define tSIOPortMindstormsNXT_GET_sendBuffer2(p_that)	((p_that)->sendBuffer2)
#define tSIOPortMindstormsNXT_SET_sendBuffer2(p_that,val)	((p_that)->sendBuffer2=(val))
#define tSIOPortMindstormsNXT_GET_sendBufferPointer(p_that)	((p_that)->sendBufferPointer)
#define tSIOPortMindstormsNXT_SET_sendBufferPointer(p_that,val)	((p_that)->sendBufferPointer=(val))
#define tSIOPortMindstormsNXT_GET_sendBufferCount(p_that)	((p_that)->sendBufferCount)
#define tSIOPortMindstormsNXT_SET_sendBufferCount(p_that,val)	((p_that)->sendBufferCount=(val))
#define tSIOPortMindstormsNXT_GET_UsedTargetbuffer(p_that)	((p_that)->UsedTargetbuffer)
#define tSIOPortMindstormsNXT_SET_UsedTargetbuffer(p_that,val)	((p_that)->UsedTargetbuffer=(val))
#define tSIOPortMindstormsNXT_GET_UsedKernelbuffer(p_that)	((p_that)->UsedKernelbuffer)
#define tSIOPortMindstormsNXT_SET_UsedKernelbuffer(p_that,val)	((p_that)->UsedKernelbuffer=(val))
#define tSIOPortMindstormsNXT_GET_receiveBuffer1(p_that)	((p_that)->receiveBuffer1)
#define tSIOPortMindstormsNXT_SET_receiveBuffer1(p_that,val)	((p_that)->receiveBuffer1=(val))
#define tSIOPortMindstormsNXT_GET_receiveBuffer2(p_that)	((p_that)->receiveBuffer2)
#define tSIOPortMindstormsNXT_SET_receiveBuffer2(p_that,val)	((p_that)->receiveBuffer2=(val))
#define tSIOPortMindstormsNXT_GET_receiveBufferPointer(p_that)	((p_that)->receiveBufferPointer)
#define tSIOPortMindstormsNXT_SET_receiveBufferPointer(p_that,val)	((p_that)->receiveBufferPointer=(val))
#define tSIOPortMindstormsNXT_GET_receiveBufferCount(p_that)	((p_that)->receiveBufferCount)
#define tSIOPortMindstormsNXT_SET_receiveBufferCount(p_that,val)	((p_that)->receiveBufferCount=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_sleep( p_that ) \
	  tKernel_eKernel_sleep( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_sleepTimeout( p_that, timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_delay( p_that, delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getTaskId( p_that, p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getTime( p_that, p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_lockCpu( p_that ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_unlockCpu( p_that ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_disableDispatch( p_that ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_enableDispatch( p_that ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_disableTaskException( p_that ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_enableTaskException( p_that ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseContext( p_that ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseLock( p_that ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseDispatch( p_that ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseDispatchPendingState( p_that ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseKernel( p_that ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tSIOPortMindstormsNXT_ciSIOCBR_readySend( p_that ) \
	  tSerialPortMain_eiSIOCBR_readySend( \
	   &tSerialPortMain_CB_tab[0] )
#define tSIOPortMindstormsNXT_ciSIOCBR_readyReceive( p_that ) \
	  tSerialPortMain_eiSIOCBR_readyReceive( \
	   &tSerialPortMain_CB_tab[0] )
#define tSIOPortMindstormsNXT_cBluetooth_open( p_that ) \
	  tBluetoothBody_eBluetooth_open( \
	    )
#define tSIOPortMindstormsNXT_cBluetooth_getLocalAddress( p_that, address ) \
	  tBluetoothBody_eBluetooth_getLocalAddress( \
	    (address) )
#define tSIOPortMindstormsNXT_cBluetooth_getDeviceName( p_that, name ) \
	  tBluetoothBody_eBluetooth_getDeviceName( \
	    (name) )
#define tSIOPortMindstormsNXT_cBluetooth_setDeviceName( p_that, name ) \
	  tBluetoothBody_eBluetooth_setDeviceName( \
	    (name) )
#define tSIOPortMindstormsNXT_cBluetooth_setFactorySetting( p_that ) \
	  tBluetoothBody_eBluetooth_setFactorySetting( \
	    )
#define tSIOPortMindstormsNXT_cBluetooth_initializeMaster( p_that, address ) \
	  tBluetoothBody_eBluetooth_initializeMaster( \
	    (address) )
#define tSIOPortMindstormsNXT_cBluetooth_initializeSlave( p_that ) \
	  tBluetoothBody_eBluetooth_initializeSlave( \
	    )
#define tSIOPortMindstormsNXT_cBluetooth_terminateConnection( p_that ) \
	  tBluetoothBody_eBluetooth_terminateConnection( \
	    )
#define tSIOPortMindstormsNXT_cBluetooth_sendPacket( p_that, buffer, length ) \
	  tBluetoothBody_eBluetooth_sendPacket( \
	    (buffer), (length) )
#define tSIOPortMindstormsNXT_cBluetooth_readPacket( p_that, buffer, length ) \
	  tBluetoothBody_eBluetooth_readPacket( \
	    (buffer), (length) )
#define tSIOPortMindstormsNXT_cBluetooth_isConnected( p_that ) \
	  tBluetoothBody_eBluetooth_isConnected( \
	    )
#define tSIOPortMindstormsNXT_cSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[0] )
#define tSIOPortMindstormsNXT_cSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[0] )
#define tSIOPortMindstormsNXT_cSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[0] )
#define tSIOPortMindstormsNXT_cSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[0], (timeout) )
#define tSIOPortMindstormsNXT_cSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[0] )
#define tSIOPortMindstormsNXT_cSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[0], (pk_semaphoreStatus) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSIOPortMindstormsNXT_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    void*          uartBase;
    uint32_t       sendBufferSize;
    char*          sendBufferPointerInitialize;
    uint32_t       sendBufferCountInitialize;
    uint32_t       receiveBufferSize;
    char*          sendBuffer1;
    char*          sendBuffer2;
    char*          receiveBuffer1;
    char*          receiveBuffer2;
}  tSIOPortMindstormsNXT_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSIOPortMindstormsNXT_CB {
    tSIOPortMindstormsNXT_INIB  *_inib;
    /* var #_VA_# */ 
    bool_t         openFlag;
    char*          sendBufferPointer;
    uint_t         sendBufferCount;
    bool_t         UsedTargetbuffer;
    bool_t         UsedKernelbuffer;
    char*          receiveBufferPointer;
    uint32_t       receiveBufferCount;
}  tSIOPortMindstormsNXT_CB;
extern tSIOPortMindstormsNXT_CB  tSIOPortMindstormsNXT_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSIOPortMindstormsNXT_CB *tSIOPortMindstormsNXT_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSIOPort */
void         tSIOPortMindstormsNXT_eSIOPort_waitReady(tSIOPortMindstormsNXT_IDX idx);
bool_t       tSIOPortMindstormsNXT_eSIOPort_isOpened(tSIOPortMindstormsNXT_IDX idx);
void         tSIOPortMindstormsNXT_eSIOPort_open(tSIOPortMindstormsNXT_IDX idx);
void         tSIOPortMindstormsNXT_eSIOPort_close(tSIOPortMindstormsNXT_IDX idx);
bool_t       tSIOPortMindstormsNXT_eSIOPort_putChar(tSIOPortMindstormsNXT_IDX idx, char c);
int_t        tSIOPortMindstormsNXT_eSIOPort_getChar(tSIOPortMindstormsNXT_IDX idx);
void         tSIOPortMindstormsNXT_eSIOPort_enableCBR(tSIOPortMindstormsNXT_IDX idx, uint_t cbrtn);
void         tSIOPortMindstormsNXT_eSIOPort_disableCBR(tSIOPortMindstormsNXT_IDX idx, uint_t cbrtn);
/* sInitializeRoutineBody */
void         tSIOPortMindstormsNXT_eInitialize_main(tSIOPortMindstormsNXT_IDX idx);
/* sTerminateRoutineBody */
void         tSIOPortMindstormsNXT_eTerminate_main(tSIOPortMindstormsNXT_IDX idx);
/* siHandlerBody */
void         tSIOPortMindstormsNXT_eiISR_main(tSIOPortMindstormsNXT_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSIOPortMindstormsNXT_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSIOPortMindstormsNXT_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSIOPortMindstormsNXT_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSIOPortMindstormsNXT_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_uartBase        tSIOPortMindstormsNXT_ATTR_uartBase( p_cellcb )
#define ATTR_sendBufferSize  tSIOPortMindstormsNXT_ATTR_sendBufferSize( p_cellcb )
#define ATTR_sendBufferPointerInitialize tSIOPortMindstormsNXT_ATTR_sendBufferPointerInitialize( p_cellcb )
#define ATTR_sendBufferCountInitialize tSIOPortMindstormsNXT_ATTR_sendBufferCountInitialize( p_cellcb )
#define ATTR_receiveBufferSize tSIOPortMindstormsNXT_ATTR_receiveBufferSize( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_openFlag         tSIOPortMindstormsNXT_VAR_openFlag( p_cellcb )
#define VAR_sendBuffer1      tSIOPortMindstormsNXT_VAR_sendBuffer1( p_cellcb )
#define VAR_sendBuffer2      tSIOPortMindstormsNXT_VAR_sendBuffer2( p_cellcb )
#define VAR_sendBufferPointer tSIOPortMindstormsNXT_VAR_sendBufferPointer( p_cellcb )
#define VAR_sendBufferCount  tSIOPortMindstormsNXT_VAR_sendBufferCount( p_cellcb )
#define VAR_UsedTargetbuffer tSIOPortMindstormsNXT_VAR_UsedTargetbuffer( p_cellcb )
#define VAR_UsedKernelbuffer tSIOPortMindstormsNXT_VAR_UsedKernelbuffer( p_cellcb )
#define VAR_receiveBuffer1   tSIOPortMindstormsNXT_VAR_receiveBuffer1( p_cellcb )
#define VAR_receiveBuffer2   tSIOPortMindstormsNXT_VAR_receiveBuffer2( p_cellcb )
#define VAR_receiveBufferPointer tSIOPortMindstormsNXT_VAR_receiveBufferPointer( p_cellcb )
#define VAR_receiveBufferCount tSIOPortMindstormsNXT_VAR_receiveBufferCount( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_sleep( p_cellcb ) 
#define sleepTimeout( timeout ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_sleepTimeout( p_cellcb, timeout ) 
#define delay( delayTime ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_delay( p_cellcb, delayTime ) 
#define exitTask( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_exitTask( p_cellcb ) 
#define getTaskId( p_taskId ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getTaskId( p_cellcb, p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_rotateReadyQueue( p_cellcb, taskPriority ) 
#define getTime( p_systemTime ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_systemMicroTime ) 
#define lockCpu( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_lockCpu( p_cellcb ) 
#define unlockCpu( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_unlockCpu( p_cellcb ) 
#define disableDispatch( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_disableDispatch( p_cellcb ) 
#define enableDispatch( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_enableDispatch( p_cellcb ) 
#define disableTaskException( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_disableTaskException( p_cellcb ) 
#define enableTaskException( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_enableTaskException( p_cellcb ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( p_cellcb, interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_cellcb, p_interruptPriority ) 
#define exitKernel( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ) 
#define senseContext( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseContext( p_cellcb ) 
#define senseLock( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseLock( p_cellcb ) 
#define senseDispatch( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseDispatch( p_cellcb ) 
#define senseDispatchPendingState( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseDispatchPendingState( p_cellcb ) 
#define senseKernel( ) \
                      tSIOPortMindstormsNXT__require_call_port_tKernel_eKernel_senseKernel( p_cellcb ) 
#define ciSIOCBR_readySend( ) \
                      tSIOPortMindstormsNXT_ciSIOCBR_readySend( p_cellcb ) 
#define ciSIOCBR_readyReceive( ) \
                      tSIOPortMindstormsNXT_ciSIOCBR_readyReceive( p_cellcb ) 
#define cBluetooth_open( ) \
                      tSIOPortMindstormsNXT_cBluetooth_open( p_cellcb ) 
#define cBluetooth_getLocalAddress( address ) \
                      tSIOPortMindstormsNXT_cBluetooth_getLocalAddress( p_cellcb, address ) 
#define cBluetooth_getDeviceName( name ) \
                      tSIOPortMindstormsNXT_cBluetooth_getDeviceName( p_cellcb, name ) 
#define cBluetooth_setDeviceName( name ) \
                      tSIOPortMindstormsNXT_cBluetooth_setDeviceName( p_cellcb, name ) 
#define cBluetooth_setFactorySetting( ) \
                      tSIOPortMindstormsNXT_cBluetooth_setFactorySetting( p_cellcb ) 
#define cBluetooth_initializeMaster( address ) \
                      tSIOPortMindstormsNXT_cBluetooth_initializeMaster( p_cellcb, address ) 
#define cBluetooth_initializeSlave( ) \
                      tSIOPortMindstormsNXT_cBluetooth_initializeSlave( p_cellcb ) 
#define cBluetooth_terminateConnection( ) \
                      tSIOPortMindstormsNXT_cBluetooth_terminateConnection( p_cellcb ) 
#define cBluetooth_sendPacket( buffer, length ) \
                      tSIOPortMindstormsNXT_cBluetooth_sendPacket( p_cellcb, buffer, length ) 
#define cBluetooth_readPacket( buffer, length ) \
                      tSIOPortMindstormsNXT_cBluetooth_readPacket( p_cellcb, buffer, length ) 
#define cBluetooth_isConnected( ) \
                      tSIOPortMindstormsNXT_cBluetooth_isConnected( p_cellcb ) 
#define cSemaphore_signal( ) \
                      tSIOPortMindstormsNXT_cSemaphore_signal( p_cellcb ) 
#define cSemaphore_wait( ) \
                      tSIOPortMindstormsNXT_cSemaphore_wait( p_cellcb ) 
#define cSemaphore_waitPolling( ) \
                      tSIOPortMindstormsNXT_cSemaphore_waitPolling( p_cellcb ) 
#define cSemaphore_waitTimeout( timeout ) \
                      tSIOPortMindstormsNXT_cSemaphore_waitTimeout( p_cellcb, timeout ) 
#define cSemaphore_initialize( ) \
                      tSIOPortMindstormsNXT_cSemaphore_initialize( p_cellcb ) 
#define cSemaphore_refer( pk_semaphoreStatus ) \
                      tSIOPortMindstormsNXT_cSemaphore_refer( p_cellcb, pk_semaphoreStatus ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSIOPort_waitReady tSIOPortMindstormsNXT_eSIOPort_waitReady
#define eSIOPort_isOpened tSIOPortMindstormsNXT_eSIOPort_isOpened
#define eSIOPort_open    tSIOPortMindstormsNXT_eSIOPort_open
#define eSIOPort_close   tSIOPortMindstormsNXT_eSIOPort_close
#define eSIOPort_putChar tSIOPortMindstormsNXT_eSIOPort_putChar
#define eSIOPort_getChar tSIOPortMindstormsNXT_eSIOPort_getChar
#define eSIOPort_enableCBR tSIOPortMindstormsNXT_eSIOPort_enableCBR
#define eSIOPort_disableCBR tSIOPortMindstormsNXT_eSIOPort_disableCBR
#define eInitialize_main tSIOPortMindstormsNXT_eInitialize_main
#define eTerminate_main  tSIOPortMindstormsNXT_eTerminate_main
#define eiISR_main       tSIOPortMindstormsNXT_eiISR_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSIOPortMindstormsNXT_N_CELL; (i)++ ){ \
       (p_cb) = &tSIOPortMindstormsNXT_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->openFlag = false;\
	(p_that)->sendBufferPointer = tSIOPortMindstormsNXT_ATTR_sendBufferPointerInitialize(p_that);\
	(p_that)->sendBufferCount = tSIOPortMindstormsNXT_ATTR_sendBufferCountInitialize(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tSIOPortMindstormsNXT_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#include "target_at91sam7s.h"
#include "tBluetooth.h"
#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSIOPortMindstormsNXT_TECSGEN_H */
