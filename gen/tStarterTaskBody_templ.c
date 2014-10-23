/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tStarterTaskBody_template.c => src/tStarterTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
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
 * call port : cTailControllerTask  signature: sCyclic context: task
 *   ER             cTailControllerTask_start( );
 *   ER             cTailControllerTask_stop( );
 *   ER             cTailControllerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cBalancerTask  signature: sCyclic context: task
 *   ER             cBalancerTask_start( );
 *   ER             cBalancerTask_stop( );
 *   ER             cBalancerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cLinetracerTask  signature: sCyclic context: task
 *   ER             cLinetracerTask_start( );
 *   ER             cLinetracerTask_stop( );
 *   ER             cLinetracerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cGetLogTask  signature: sCyclic context: task
 *   ER             cGetLogTask_start( );
 *   ER             cGetLogTask_stop( );
 *   ER             cGetLogTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cTailController  signature: sTailController context: task
 *   void           cTailController_setAngle( int32_t angle );
 *   void           cTailController_getAngle( int32_t* angle );
 *   void           cTailController_signalStop( );
 *   void           cTailController_signalStart( );
 *   void           cTailController_calibrate( );
 * call port : cSemaphore  signature: sSemaphore context: task
 *   ER             cSemaphore_signal( );
 *   ER             cSemaphore_wait( );
 *   ER             cSemaphore_waitPolling( );
 *   ER             cSemaphore_waitTimeout( TMO timeout );
 *   ER             cSemaphore_initialize( );
 *   ER             cSemaphore_refer( T_RSEM* pk_semaphoreStatus );
 * call port : cPrintDisplayControl  signature: sPrintDisplayControl context: task
 *   void           cPrintDisplayControl_print_str( );
 *   void           cPrintDisplayControl_print_k( const char* string1, int16_t value1 );
 *   void           cPrintDisplayControl_print1( int16_t value1 );
 *   void           cPrintDisplayControl_print2( int16_t value1, int16_t value2 );
 *   void           cPrintDisplayControl_print3( int16_t value1, int16_t value2, int16_t value3 );
 *   void           cPrintDisplayControl_print4( int16_t value1, int16_t value2, int16_t value3, int16_t value4 );
 *   void           cPrintDisplayControl_print5( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5 );
 *   void           cPrintDisplayControl_print6( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6 );
 *   void           cPrintDisplayControl_print7( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6, int16_t value7 );
 *   void           cPrintDisplayControl_printS1( const char* string1, int16_t value1 );
 *   void           cPrintDisplayControl_printS2( const char* string1, int16_t value1, const char* string2, int16_t value2 );
 *   void           cPrintDisplayControl_printS3( const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3 );
 * call port : cButtonSetValue  signature: sButtonSetValue context: task
 *   void           cButtonSetValue_kvalue( );
 *   void           cButtonSetValue_threshold( );
 *   void           cButtonSetValue_speed( );
 *   void           cButtonSetValue_tailAngle( );
 * call port : cBattery  signature: sBattery context: task
 *   uint16_t       cBattery_getBatteryVoltage( );
 * call port : cLightSensor  signature: sSensor context: task
 *   void           cLightSensor_getValue( uint16_t* value );
 * call port : cTouchSensor  signature: sSensor context: task
 *   void           cTouchSensor_getValue( uint16_t* value );
 * call port : cBalancerControl  signature: sBalancerControl context: task
 *   void           cBalancerControl_setSpeed( int16_t speed );
 *   void           cBalancerControl_getSpeed( int16_t* speed );
 *   void           cBalancerControl_setTurn( int16_t turn );
 *   void           cBalancerControl_getTurn( int16_t* turn );
 *   void           cBalancerControl_calibrate( );
 * call port : cLinetracerControl  signature: sLinetracerControl context: task
 *   void           cLinetracerControl_setLightThreshold( uint8_t color, uint16_t light );
 *   void           cLinetracerControl_getLightThreshold( uint8_t color, uint16_t* light );
 *   void           cLinetracerControl_setEdge( int8_t edge );
 *   void           cLinetracerControl_getEdge( int8_t* edge );
 * call port : cGetLogControl  signature: sGetLogControl context: task
 *   void           cGetLogControl_portOpen( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tStarterTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tStarterTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
