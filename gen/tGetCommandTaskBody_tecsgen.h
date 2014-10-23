/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tGetCommandTaskBody_TECSGEN_H
#define tGetCommandTaskBody_TECSGEN_H

/*
 * celltype    :  tGetCommandTaskBody
 * global name :  tGetCommandTaskBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  false
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sSerialPort_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sLinetracerControl_tecsgen.h"
#include "sBalancerControl_tecsgen.h"
#include "sTailController_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "sSensor_tecsgen.h"
#include "sPrintDisplayControl_tecsgen.h"
#include "sCyclic_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tGetCommandTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tSerialPortMain_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tLinetracerTaskBody_tecsgen.h"
#include "tBalancerTaskBody_tecsgen.h"
#include "tTailControllerTaskBody_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#include "tTouchSensorBody_tecsgen.h"
#include "tPrintDisplayTaskBody_tecsgen.h"
#include "tCyclicHandler_tecsgen.h"
#ifdef  tGetCommandTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tGetCommandTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tGetCommandTaskBody_GET_CELLCB(idx) ((void *)0)



/* var アクセスマクロ #_VAM_# */
#define tGetCommandTaskBody_VAR_parameter	(tGetCommandTaskBody_SINGLE_CELL_CB.parameter)
#define tGetCommandTaskBody_VAR_sign	(tGetCommandTaskBody_SINGLE_CELL_CB.sign)

#define tGetCommandTaskBody_GET_parameter()	(tGetCommandTaskBody_SINGLE_CELL_CB.parameter)
#define tGetCommandTaskBody_SET_parameter(val)	(tGetCommandTaskBody_SINGLE_CELL_CB.parameter=(val))
#define tGetCommandTaskBody_GET_sign()	(tGetCommandTaskBody_SINGLE_CELL_CB.sign)
#define tGetCommandTaskBody_SET_sign(val)	(tGetCommandTaskBody_SINGLE_CELL_CB.sign=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tGetCommandTaskBody_cSerialPort_open( ) \
	  tSerialPortMain_eSerialPort_open( \
	   &tSerialPortMain_CB_tab[0] )
#define tGetCommandTaskBody_cSerialPort_close( ) \
	  tSerialPortMain_eSerialPort_close( \
	   &tSerialPortMain_CB_tab[0] )
#define tGetCommandTaskBody_cSerialPort_read( buffer, length ) \
	  tSerialPortMain_eSerialPort_read( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tGetCommandTaskBody_cSerialPort_write( buffer, length ) \
	  tSerialPortMain_eSerialPort_write( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tGetCommandTaskBody_cSerialPort_control( ioControl ) \
	  tSerialPortMain_eSerialPort_control( \
	   &tSerialPortMain_CB_tab[0], (ioControl) )
#define tGetCommandTaskBody_cSerialPort_refer( pk_rpor ) \
	  tSerialPortMain_eSerialPort_refer( \
	   &tSerialPortMain_CB_tab[0], (pk_rpor) )
#define tGetCommandTaskBody_cSysLog_write( priority, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (priority), (p_syslog) )
#define tGetCommandTaskBody_cSysLog_read( p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tGetCommandTaskBody_cSysLog_mask( logMask, lowMask ) \
	  tSysLog_eSysLog_mask( \
	    (logMask), (lowMask) )
#define tGetCommandTaskBody_cSysLog_refer( pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tGetCommandTaskBody_cLinetracerControl_setLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_setLightThreshold( \
	    (color), (light) )
#define tGetCommandTaskBody_cLinetracerControl_getLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_getLightThreshold( \
	    (color), (light) )
#define tGetCommandTaskBody_cLinetracerControl_setEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_setEdge( \
	    (edge) )
#define tGetCommandTaskBody_cLinetracerControl_getEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_getEdge( \
	    (edge) )
#define tGetCommandTaskBody_cBalancerControl_setSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_setSpeed( \
	    (speed) )
#define tGetCommandTaskBody_cBalancerControl_getSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_getSpeed( \
	    (speed) )
#define tGetCommandTaskBody_cBalancerControl_setTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_setTurn( \
	    (turn) )
#define tGetCommandTaskBody_cBalancerControl_getTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_getTurn( \
	    (turn) )
#define tGetCommandTaskBody_cBalancerControl_calibrate( ) \
	  tBalancerTaskBody_eBalancerControl_calibrate( \
	    )
#define tGetCommandTaskBody_cTailController_setAngle( angle ) \
	  tTailControllerTaskBody_eTailController_setAngle( \
	    (angle) )
#define tGetCommandTaskBody_cTailController_getAngle( angle ) \
	  tTailControllerTaskBody_eTailController_getAngle( \
	    (angle) )
#define tGetCommandTaskBody_cTailController_signalStop( ) \
	  tTailControllerTaskBody_eTailController_signalStop( \
	    )
#define tGetCommandTaskBody_cTailController_signalStart( ) \
	  tTailControllerTaskBody_eTailController_signalStart( \
	    )
#define tGetCommandTaskBody_cTailController_calibrate( ) \
	  tTailControllerTaskBody_eTailController_calibrate( \
	    )
#define tGetCommandTaskBody_cSemaphore_signal( ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[1] )
#define tGetCommandTaskBody_cSemaphore_wait( ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[1] )
#define tGetCommandTaskBody_cSemaphore_waitPolling( ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[1] )
#define tGetCommandTaskBody_cSemaphore_waitTimeout( timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[1], (timeout) )
#define tGetCommandTaskBody_cSemaphore_initialize( ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[1] )
#define tGetCommandTaskBody_cSemaphore_refer( pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[1], (pk_semaphoreStatus) )
#define tGetCommandTaskBody_cTouchSensor_getValue( value ) \
	  tTouchSensorBody_eSensor_getValue( \
	   (tTouchSensorBody_IDX)0, (value) )
#define tGetCommandTaskBody_cPrintDisplayControl_print_str( ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_str( \
	    )
#define tGetCommandTaskBody_cPrintDisplayControl_print_k( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_k( \
	    (string1), (value1) )
#define tGetCommandTaskBody_cPrintDisplayControl_print1( value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print1( \
	    (value1) )
#define tGetCommandTaskBody_cPrintDisplayControl_print2( value1, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print2( \
	    (value1), (value2) )
#define tGetCommandTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print3( \
	    (value1), (value2), (value3) )
#define tGetCommandTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print4( \
	    (value1), (value2), (value3), (value4) )
#define tGetCommandTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print5( \
	    (value1), (value2), (value3), (value4), (value5) )
#define tGetCommandTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print6( \
	    (value1), (value2), (value3), (value4), (value5), (value6) )
#define tGetCommandTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print7( \
	    (value1), (value2), (value3), (value4), (value5), (value6), (value7) )
#define tGetCommandTaskBody_cPrintDisplayControl_printS1( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS1( \
	    (string1), (value1) )
#define tGetCommandTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS2( \
	    (string1), (value1), (string2), (value2) )
#define tGetCommandTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS3( \
	    (string1), (value1), (string2), (value2), (string3), (value3) )
#define tGetCommandTaskBody_cBalancerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[5] )
#define tGetCommandTaskBody_cBalancerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[5] )
#define tGetCommandTaskBody_cBalancerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[5], (pk_cyclicHandlerStatus) )
#define tGetCommandTaskBody_cLinetracerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[6] )
#define tGetCommandTaskBody_cLinetracerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[6] )
#define tGetCommandTaskBody_cLinetracerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[6], (pk_cyclicHandlerStatus) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tGetCommandTaskBody_CB {
    /* var #_VA_# */ 
    int32_t        parameter;
    int8_t         sign;
}  tGetCommandTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tGetCommandTaskBody_CB  tGetCommandTaskBody_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tGetCommandTaskBody_CB *tGetCommandTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tGetCommandTaskBody_eBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tGetCommandTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tGetCommandTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tGetCommandTaskBody_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_parameter        tGetCommandTaskBody_VAR_parameter
#define VAR_sign             tGetCommandTaskBody_VAR_sign

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tGetCommandTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cSerialPort_open( ) \
                      tGetCommandTaskBody_cSerialPort_open( ) 
#define cSerialPort_close( ) \
                      tGetCommandTaskBody_cSerialPort_close( ) 
#define cSerialPort_read( buffer, length ) \
                      tGetCommandTaskBody_cSerialPort_read( buffer, length ) 
#define cSerialPort_write( buffer, length ) \
                      tGetCommandTaskBody_cSerialPort_write( buffer, length ) 
#define cSerialPort_control( ioControl ) \
                      tGetCommandTaskBody_cSerialPort_control( ioControl ) 
#define cSerialPort_refer( pk_rpor ) \
                      tGetCommandTaskBody_cSerialPort_refer( pk_rpor ) 
#define cSysLog_write( priority, p_syslog ) \
                      tGetCommandTaskBody_cSysLog_write( priority, p_syslog ) 
#define cSysLog_read( p_syslog ) \
                      tGetCommandTaskBody_cSysLog_read( p_syslog ) 
#define cSysLog_mask( logMask, lowMask ) \
                      tGetCommandTaskBody_cSysLog_mask( logMask, lowMask ) 
#define cSysLog_refer( pk_rlog ) \
                      tGetCommandTaskBody_cSysLog_refer( pk_rlog ) 
#define cLinetracerControl_setLightThreshold( color, light ) \
                      tGetCommandTaskBody_cLinetracerControl_setLightThreshold( color, light ) 
#define cLinetracerControl_getLightThreshold( color, light ) \
                      tGetCommandTaskBody_cLinetracerControl_getLightThreshold( color, light ) 
#define cLinetracerControl_setEdge( edge ) \
                      tGetCommandTaskBody_cLinetracerControl_setEdge( edge ) 
#define cLinetracerControl_getEdge( edge ) \
                      tGetCommandTaskBody_cLinetracerControl_getEdge( edge ) 
#define cBalancerControl_setSpeed( speed ) \
                      tGetCommandTaskBody_cBalancerControl_setSpeed( speed ) 
#define cBalancerControl_getSpeed( speed ) \
                      tGetCommandTaskBody_cBalancerControl_getSpeed( speed ) 
#define cBalancerControl_setTurn( turn ) \
                      tGetCommandTaskBody_cBalancerControl_setTurn( turn ) 
#define cBalancerControl_getTurn( turn ) \
                      tGetCommandTaskBody_cBalancerControl_getTurn( turn ) 
#define cBalancerControl_calibrate( ) \
                      tGetCommandTaskBody_cBalancerControl_calibrate( ) 
#define cTailController_setAngle( angle ) \
                      tGetCommandTaskBody_cTailController_setAngle( angle ) 
#define cTailController_getAngle( angle ) \
                      tGetCommandTaskBody_cTailController_getAngle( angle ) 
#define cTailController_signalStop( ) \
                      tGetCommandTaskBody_cTailController_signalStop( ) 
#define cTailController_signalStart( ) \
                      tGetCommandTaskBody_cTailController_signalStart( ) 
#define cTailController_calibrate( ) \
                      tGetCommandTaskBody_cTailController_calibrate( ) 
#define cSemaphore_signal( ) \
                      tGetCommandTaskBody_cSemaphore_signal( ) 
#define cSemaphore_wait( ) \
                      tGetCommandTaskBody_cSemaphore_wait( ) 
#define cSemaphore_waitPolling( ) \
                      tGetCommandTaskBody_cSemaphore_waitPolling( ) 
#define cSemaphore_waitTimeout( timeout ) \
                      tGetCommandTaskBody_cSemaphore_waitTimeout( timeout ) 
#define cSemaphore_initialize( ) \
                      tGetCommandTaskBody_cSemaphore_initialize( ) 
#define cSemaphore_refer( pk_semaphoreStatus ) \
                      tGetCommandTaskBody_cSemaphore_refer( pk_semaphoreStatus ) 
#define cTouchSensor_getValue( value ) \
                      tGetCommandTaskBody_cTouchSensor_getValue( value ) 
#define cPrintDisplayControl_print_str( ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print_str( ) 
#define cPrintDisplayControl_print_k( string1, value1 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print_k( string1, value1 ) 
#define cPrintDisplayControl_print1( value1 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print1( value1 ) 
#define cPrintDisplayControl_print2( value1, value2 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print2( value1, value2 ) 
#define cPrintDisplayControl_print3( value1, value2, value3 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) 
#define cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) 
#define cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) 
#define cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) 
#define cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) 
#define cPrintDisplayControl_printS1( string1, value1 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_printS1( string1, value1 ) 
#define cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) 
#define cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
                      tGetCommandTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) 
#define cBalancerTask_start( ) \
                      tGetCommandTaskBody_cBalancerTask_start( ) 
#define cBalancerTask_stop( ) \
                      tGetCommandTaskBody_cBalancerTask_stop( ) 
#define cBalancerTask_refer( pk_cyclicHandlerStatus ) \
                      tGetCommandTaskBody_cBalancerTask_refer( pk_cyclicHandlerStatus ) 
#define cLinetracerTask_start( ) \
                      tGetCommandTaskBody_cLinetracerTask_start( ) 
#define cLinetracerTask_stop( ) \
                      tGetCommandTaskBody_cLinetracerTask_stop( ) 
#define cLinetracerTask_refer( pk_cyclicHandlerStatus ) \
                      tGetCommandTaskBody_cLinetracerTask_refer( pk_cyclicHandlerStatus ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tGetCommandTaskBody_eBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tGetCommandTaskBody_SINGLE_CELL_CB.parameter = 0;\
	tGetCommandTaskBody_SINGLE_CELL_CB.sign = 1;
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tGetCommandTaskBody_TECSGEN_H */
