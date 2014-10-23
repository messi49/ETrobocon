/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tConnectBluetooth_template.c => src/tConnectBluetooth.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * deviceNameSize   uint8_t          ATTR_deviceNameSize
 * deviceName       const char*      ATTR_deviceName 
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
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tConnectBluetooth_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eConnectBluetooth
 * entry port: eConnectBluetooth
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eConnectBluetooth_main
 * name:         eConnectBluetooth_main
 * global_name:  tConnectBluetooth_eConnectBluetooth_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eConnectBluetooth_main()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
