/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSIOPortMindstormsNXT_template.c => src/tSIOPortMindstormsNXT.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * uartBase         void*            ATTR_uartBase   
 * sendBufferSize   uint32_t         ATTR_sendBufferSize
 * sendBufferPointerInitialize char*            ATTR_sendBufferPointerInitialize
 * sendBufferCountInitialize uint32_t         ATTR_sendBufferCountInitialize
 * receiveBufferSize uint32_t         ATTR_receiveBufferSize
 * openFlag         bool_t           VAR_openFlag    
 * sendBuffer1      char*            VAR_sendBuffer1 
 * sendBuffer2      char*            VAR_sendBuffer2 
 * sendBufferPointer char*            VAR_sendBufferPointer
 * sendBufferCount  uint_t           VAR_sendBufferCount
 * UsedTargetbuffer bool_t           VAR_UsedTargetbuffer
 * UsedKernelbuffer bool_t           VAR_UsedKernelbuffer
 * receiveBuffer1   char*            VAR_receiveBuffer1
 * receiveBuffer2   char*            VAR_receiveBuffer2
 * receiveBufferPointer char*            VAR_receiveBufferPointer
 * receiveBufferCount uint32_t         VAR_receiveBufferCount
 *
 * 呼び口関数 #_TCPF_#
 * require port : signature: sKernel context: task
 *   ER             sleep( );
 *   ER             sleepTimeout( TMO timeout );
 *   ER             delay( RELTIM delayTime );
 *   ER             exitTask( );
 *   ER             getTaskId( ID* p_taskId );
 *   ER             rotateReadyQueue( PRI taskPriority );
 *   ER             getTime( SYSTIM* p_systemTime );
 *   ER             getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             lockCpu( );
 *   ER             unlockCpu( );
 *   ER             disableDispatch( );
 *   ER             enableDispatch( );
 *   ER             disableTaskException( );
 *   ER             enableTaskException( );
 *   ER             changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             exitKernel( );
 *   bool_t         senseContext( );
 *   bool_t         senseLock( );
 *   bool_t         senseDispatch( );
 *   bool_t         senseDispatchPendingState( );
 *   bool_t         senseKernel( );
 * call port : ciSIOCBR  signature: siSIOCBR context: task
 *   void           ciSIOCBR_readySend( );
 *   void           ciSIOCBR_readyReceive( );
 * call port : cBluetooth  signature: sBluetooth context: task
 *   void           cBluetooth_open( );
 *   bool_t         cBluetooth_getLocalAddress( uint8_t* address );
 *   bool_t         cBluetooth_getDeviceName( uint8_t* name );
 *   bool_t         cBluetooth_setDeviceName( const uint8_t* name );
 *   bool_t         cBluetooth_setFactorySetting( );
 *   uint8_t        cBluetooth_initializeMaster( const uint8_t* address );
 *   uint8_t        cBluetooth_initializeSlave( );
 *   void           cBluetooth_terminateConnection( );
 *   uint32_t       cBluetooth_sendPacket( const uint8_t* buffer, uint32_t length );
 *   uint32_t       cBluetooth_readPacket( uint8_t* buffer, uint32_t length );
 *   bool_t         cBluetooth_isConnected( );
 * call port : cSemaphore  signature: sSemaphore context: task
 *   ER             cSemaphore_signal( );
 *   ER             cSemaphore_wait( );
 *   ER             cSemaphore_waitPolling( );
 *   ER             cSemaphore_waitTimeout( TMO timeout );
 *   ER             cSemaphore_initialize( );
 *   ER             cSemaphore_refer( T_RSEM* pk_semaphoreStatus );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSIOPortMindstormsNXT_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSIOPort
 * entry port: eSIOPort
 * signature:  sSIOPort
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSIOPort_waitReady
 * name:         eSIOPort_waitReady
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_waitReady
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_waitReady(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_isOpened
 * name:         eSIOPort_isOpened
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_isOpened
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eSIOPort_isOpened(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_open
 * name:         eSIOPort_open
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_open(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_close
 * name:         eSIOPort_close
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_close
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_close(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_putChar
 * name:         eSIOPort_putChar
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_putChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eSIOPort_putChar(CELLIDX idx, char c)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_getChar
 * name:         eSIOPort_getChar
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_getChar
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int_t
eSIOPort_getChar(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_enableCBR
 * name:         eSIOPort_enableCBR
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_enableCBR
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_enableCBR(CELLIDX idx, uint_t cbrtn)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eSIOPort_disableCBR
 * name:         eSIOPort_disableCBR
 * global_name:  tSIOPortMindstormsNXT_eSIOPort_disableCBR
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSIOPort_disableCBR(CELLIDX idx, uint_t cbrtn)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tSIOPortMindstormsNXT_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eTerminate
 * entry port: eTerminate
 * signature:  sTerminateRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTerminate_main
 * name:         eTerminate_main
 * global_name:  tSIOPortMindstormsNXT_eTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTerminate_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eiISR
 * entry port: eiISR
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiISR_main
 * name:         eiISR_main
 * global_name:  tSIOPortMindstormsNXT_eiISR_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiISR_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
