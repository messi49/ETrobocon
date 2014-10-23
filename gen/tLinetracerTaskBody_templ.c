/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tLinetracerTaskBody_template.c => src/tLinetracerTaskBody.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * maxTurn          int16_t          ATTR_maxTurn    
 * minTurn          int16_t          ATTR_minTurn    
 * lightThreshold   uint16_t         VAR_lightThreshold
 * edge             int8_t           VAR_edge        
 * black            uint16_t         VAR_black       
 * white            uint16_t         VAR_white       
 * count            int32_t          VAR_count       
 * xx               float32_t        VAR_xx          
 * yy               float32_t        VAR_yy          
 * sita             float32_t        VAR_sita        
 * preLeft          int32_t          VAR_preLeft     
 * preRight         int32_t          VAR_preRight    
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
 * call port : cLightSensor  signature: sSensor context: task
 *   void           cLightSensor_getValue( uint16_t* value );
 * call port : cLightSensorControl  signature: sSensorControl context: task
 *   void           cLightSensorControl_on( );
 *   void           cLightSensorControl_off( );
 * call port : cBalancerControl  signature: sBalancerControl context: task
 *   void           cBalancerControl_setSpeed( int16_t speed );
 *   void           cBalancerControl_getSpeed( int16_t* speed );
 *   void           cBalancerControl_setTurn( int16_t turn );
 *   void           cBalancerControl_getTurn( int16_t* turn );
 *   void           cBalancerControl_calibrate( );
 * call port : cPIDControl  signature: sPIDControl context: task
 *   void           cPIDControl_getPIDValue( uint16_t light, uint16_t VAR_lightThreshold, float32_t* turn_f );
 *   void           cPIDControl_getKValue( float32_t* kp, float32_t* ki, float32_t* kd );
 *   void           cPIDControl_setKValue( uint8_t kind, float32_t value );
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
 * call port : cRightMotor  signature: sMotor context: task
 *   void           cRightMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cRightMotor_setRevolution( int32_t revolution );
 *   void           cRightMotor_getRevolution( int32_t* revolution );
 * call port : cLeftMotor  signature: sMotor context: task
 *   void           cLeftMotor_setPWM( int8_t pwm, bool_t brakeMode );
 *   void           cLeftMotor_setRevolution( int32_t revolution );
 *   void           cLeftMotor_getRevolution( int32_t* revolution );
 * call port : cBalancerTask  signature: sCyclic context: task
 *   ER             cBalancerTask_start( );
 *   ER             cBalancerTask_stop( );
 *   ER             cBalancerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port : cLinetracerTask  signature: sCyclic context: task
 *   ER             cLinetracerTask_start( );
 *   ER             cLinetracerTask_stop( );
 *   ER             cLinetracerTask_refer( T_RCYC* pk_cyclicHandlerStatus );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tLinetracerTaskBody_tecsgen.h"

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
 * global_name:  tLinetracerTaskBody_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main()
{
}

/* #[<ENTRY_PORT>]# eLinetracerControl
 * entry port: eLinetracerControl
 * signature:  sLinetracerControl
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLinetracerControl_setLightThreshold
 * name:         eLinetracerControl_setLightThreshold
 * global_name:  tLinetracerTaskBody_eLinetracerControl_setLightThreshold
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_setLightThreshold(uint8_t color, uint16_t light)
{
}

/* #[<ENTRY_FUNC>]# eLinetracerControl_getLightThreshold
 * name:         eLinetracerControl_getLightThreshold
 * global_name:  tLinetracerTaskBody_eLinetracerControl_getLightThreshold
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_getLightThreshold(uint8_t color, uint16_t* light)
{
}

/* #[<ENTRY_FUNC>]# eLinetracerControl_setEdge
 * name:         eLinetracerControl_setEdge
 * global_name:  tLinetracerTaskBody_eLinetracerControl_setEdge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_setEdge(int8_t edge)
{
}

/* #[<ENTRY_FUNC>]# eLinetracerControl_getEdge
 * name:         eLinetracerControl_getEdge
 * global_name:  tLinetracerTaskBody_eLinetracerControl_getEdge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLinetracerControl_getEdge(int8_t* edge)
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
