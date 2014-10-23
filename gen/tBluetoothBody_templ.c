/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tBluetoothBody_template.c => src/tBluetoothBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * sendBufferSize   uint32_t         ATTR_sendBufferSize
 * receiveBufferSize uint32_t         ATTR_receiveBufferSize
 * uartBase         void*            ATTR_uartBase   
 * timerBase        void*            ATTR_timerBase  
 * keyCode          char*            ATTR_keyCode    
 * status           uint8_t          VAR_status      
 * handle           uint8_t          VAR_handle      
 * waitTimeOut      volatile bool_t  VAR_waitTimeOut 
 * sendBuffer1      char*            VAR_sendBuffer1 
 * sendBuffer2      char*            VAR_sendBuffer2 
 * sendBufferPointer char*            VAR_sendBufferPointer
 * sendBufferCount  uint32_t         VAR_sendBufferCount
 * receiveBuffer1   char*            VAR_receiveBuffer1
 * receiveBuffer2   char*            VAR_receiveBuffer2
 * receiveBufferPointer char*            VAR_receiveBufferPointer
 * receiveBufferCount uint32_t         VAR_receiveBufferCount
 *
 * 呼び口関数 #_TCPF_#
 * call port : cSemaphore  signature: sSemaphore context: task
 *   ER             cSemaphore_signal( );
 *   ER             cSemaphore_wait( );
 *   ER             cSemaphore_waitPolling( );
 *   ER             cSemaphore_waitTimeout( TMO timeout );
 *   ER             cSemaphore_initialize( );
 *   ER             cSemaphore_refer( T_RSEM* pk_semaphoreStatus );
 * call port : cAlarm  signature: sAlarm context: task
 *   ER             cAlarm_start( RELTIM alarmTime );
 *   ER             cAlarm_stop( );
 *   ER             cAlarm_refer( T_RALM* pk_alarmStatus );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tBluetoothBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBluetooth
 * entry port: eBluetooth
 * signature:  sBluetooth
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBluetooth_open
 * name:         eBluetooth_open
 * global_name:  tBluetoothBody_eBluetooth_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBluetooth_open()
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_getLocalAddress
 * name:         eBluetooth_getLocalAddress
 * global_name:  tBluetoothBody_eBluetooth_getLocalAddress
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eBluetooth_getLocalAddress(uint8_t* address)
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_getDeviceName
 * name:         eBluetooth_getDeviceName
 * global_name:  tBluetoothBody_eBluetooth_getDeviceName
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eBluetooth_getDeviceName(uint8_t* name)
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_setDeviceName
 * name:         eBluetooth_setDeviceName
 * global_name:  tBluetoothBody_eBluetooth_setDeviceName
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eBluetooth_setDeviceName(const uint8_t* name)
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_setFactorySetting
 * name:         eBluetooth_setFactorySetting
 * global_name:  tBluetoothBody_eBluetooth_setFactorySetting
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eBluetooth_setFactorySetting()
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_initializeMaster
 * name:         eBluetooth_initializeMaster
 * global_name:  tBluetoothBody_eBluetooth_initializeMaster
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint8_t
eBluetooth_initializeMaster(const uint8_t* address)
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_initializeSlave
 * name:         eBluetooth_initializeSlave
 * global_name:  tBluetoothBody_eBluetooth_initializeSlave
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint8_t
eBluetooth_initializeSlave()
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_terminateConnection
 * name:         eBluetooth_terminateConnection
 * global_name:  tBluetoothBody_eBluetooth_terminateConnection
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBluetooth_terminateConnection()
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_sendPacket
 * name:         eBluetooth_sendPacket
 * global_name:  tBluetoothBody_eBluetooth_sendPacket
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint32_t
eBluetooth_sendPacket(const uint8_t* buffer, uint32_t length)
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_readPacket
 * name:         eBluetooth_readPacket
 * global_name:  tBluetoothBody_eBluetooth_readPacket
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint32_t
eBluetooth_readPacket(uint8_t* buffer, uint32_t length)
{
}

/* #[<ENTRY_FUNC>]# eBluetooth_isConnected
 * name:         eBluetooth_isConnected
 * global_name:  tBluetoothBody_eBluetooth_isConnected
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eBluetooth_isConnected()
{
}

/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tBluetoothBody_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_main()
{
}

/* #[<ENTRY_PORT>]# eTerminate
 * entry port: eTerminate
 * signature:  sTerminateRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTerminate_main
 * name:         eTerminate_main
 * global_name:  tBluetoothBody_eTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTerminate_main()
{
}

/* #[<ENTRY_PORT>]# eiAlarmBody
 * entry port: eiAlarmBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiAlarmBody_main
 * name:         eiAlarmBody_main
 * global_name:  tBluetoothBody_eiAlarmBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiAlarmBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
