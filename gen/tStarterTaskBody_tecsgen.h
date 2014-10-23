/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tStarterTaskBody_TECSGEN_H
#define tStarterTaskBody_TECSGEN_H

/*
 * celltype    :  tStarterTaskBody
 * global name :  tStarterTaskBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sCyclic_tecsgen.h"
#include "sTailController_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "sPrintDisplayControl_tecsgen.h"
#include "sButtonSetValue_tecsgen.h"
#include "sBattery_tecsgen.h"
#include "sSensor_tecsgen.h"
#include "sBalancerControl_tecsgen.h"
#include "sLinetracerControl_tecsgen.h"
#include "sGetLogControl_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tStarterTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tCyclicHandler_tecsgen.h"
#include "tTailControllerTaskBody_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#include "tPrintDisplayTaskBody_tecsgen.h"
#include "tButtonSetTaskBody_tecsgen.h"
#include "tBattery_tecsgen.h"
#include "tLightSensorBody_tecsgen.h"
#include "tTouchSensorBody_tecsgen.h"
#include "tBalancerTaskBody_tecsgen.h"
#include "tLinetracerTaskBody_tecsgen.h"
#include "tGetLogTaskBody_tecsgen.h"
#ifdef  tStarterTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tStarterTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tStarterTaskBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tStarterTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tStarterTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tStarterTaskBody_cTailControllerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[4] )
#define tStarterTaskBody_cTailControllerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[4] )
#define tStarterTaskBody_cTailControllerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[4], (pk_cyclicHandlerStatus) )
#define tStarterTaskBody_cBalancerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[5] )
#define tStarterTaskBody_cBalancerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[5] )
#define tStarterTaskBody_cBalancerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[5], (pk_cyclicHandlerStatus) )
#define tStarterTaskBody_cLinetracerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[6] )
#define tStarterTaskBody_cLinetracerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[6] )
#define tStarterTaskBody_cLinetracerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[6], (pk_cyclicHandlerStatus) )
#define tStarterTaskBody_cGetLogTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[7] )
#define tStarterTaskBody_cGetLogTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[7] )
#define tStarterTaskBody_cGetLogTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[7], (pk_cyclicHandlerStatus) )
#define tStarterTaskBody_cTailController_setAngle( angle ) \
	  tTailControllerTaskBody_eTailController_setAngle( \
	    (angle) )
#define tStarterTaskBody_cTailController_getAngle( angle ) \
	  tTailControllerTaskBody_eTailController_getAngle( \
	    (angle) )
#define tStarterTaskBody_cTailController_signalStop( ) \
	  tTailControllerTaskBody_eTailController_signalStop( \
	    )
#define tStarterTaskBody_cTailController_signalStart( ) \
	  tTailControllerTaskBody_eTailController_signalStart( \
	    )
#define tStarterTaskBody_cTailController_calibrate( ) \
	  tTailControllerTaskBody_eTailController_calibrate( \
	    )
#define tStarterTaskBody_cSemaphore_signal( ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[1] )
#define tStarterTaskBody_cSemaphore_wait( ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[1] )
#define tStarterTaskBody_cSemaphore_waitPolling( ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[1] )
#define tStarterTaskBody_cSemaphore_waitTimeout( timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[1], (timeout) )
#define tStarterTaskBody_cSemaphore_initialize( ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[1] )
#define tStarterTaskBody_cSemaphore_refer( pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[1], (pk_semaphoreStatus) )
#define tStarterTaskBody_cPrintDisplayControl_print_str( ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_str( \
	    )
#define tStarterTaskBody_cPrintDisplayControl_print_k( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_k( \
	    (string1), (value1) )
#define tStarterTaskBody_cPrintDisplayControl_print1( value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print1( \
	    (value1) )
#define tStarterTaskBody_cPrintDisplayControl_print2( value1, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print2( \
	    (value1), (value2) )
#define tStarterTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print3( \
	    (value1), (value2), (value3) )
#define tStarterTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print4( \
	    (value1), (value2), (value3), (value4) )
#define tStarterTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print5( \
	    (value1), (value2), (value3), (value4), (value5) )
#define tStarterTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print6( \
	    (value1), (value2), (value3), (value4), (value5), (value6) )
#define tStarterTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print7( \
	    (value1), (value2), (value3), (value4), (value5), (value6), (value7) )
#define tStarterTaskBody_cPrintDisplayControl_printS1( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS1( \
	    (string1), (value1) )
#define tStarterTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS2( \
	    (string1), (value1), (string2), (value2) )
#define tStarterTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS3( \
	    (string1), (value1), (string2), (value2), (string3), (value3) )
#define tStarterTaskBody_cButtonSetValue_kvalue( ) \
	  tButtonSetTaskBody_eButtonSetValue_kvalue( \
	    )
#define tStarterTaskBody_cButtonSetValue_threshold( ) \
	  tButtonSetTaskBody_eButtonSetValue_threshold( \
	    )
#define tStarterTaskBody_cButtonSetValue_speed( ) \
	  tButtonSetTaskBody_eButtonSetValue_speed( \
	    )
#define tStarterTaskBody_cButtonSetValue_tailAngle( ) \
	  tButtonSetTaskBody_eButtonSetValue_tailAngle( \
	    )
#define tStarterTaskBody_cBattery_getBatteryVoltage( ) \
	  tBattery_eBattery_getBatteryVoltage( \
	    )
#define tStarterTaskBody_cLightSensor_getValue( value ) \
	  tLightSensorBody_eSensor_getValue( \
	   (tLightSensorBody_IDX)0, (value) )
#define tStarterTaskBody_cTouchSensor_getValue( value ) \
	  tTouchSensorBody_eSensor_getValue( \
	   (tTouchSensorBody_IDX)0, (value) )
#define tStarterTaskBody_cBalancerControl_setSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_setSpeed( \
	    (speed) )
#define tStarterTaskBody_cBalancerControl_getSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_getSpeed( \
	    (speed) )
#define tStarterTaskBody_cBalancerControl_setTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_setTurn( \
	    (turn) )
#define tStarterTaskBody_cBalancerControl_getTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_getTurn( \
	    (turn) )
#define tStarterTaskBody_cBalancerControl_calibrate( ) \
	  tBalancerTaskBody_eBalancerControl_calibrate( \
	    )
#define tStarterTaskBody_cLinetracerControl_setLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_setLightThreshold( \
	    (color), (light) )
#define tStarterTaskBody_cLinetracerControl_getLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_getLightThreshold( \
	    (color), (light) )
#define tStarterTaskBody_cLinetracerControl_setEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_setEdge( \
	    (edge) )
#define tStarterTaskBody_cLinetracerControl_getEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_getEdge( \
	    (edge) )
#define tStarterTaskBody_cGetLogControl_portOpen( ) \
	  tGetLogTaskBody_eGetLogControl_portOpen( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tStarterTaskBody_CB {
    int  dummy;
} tStarterTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tStarterTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tStarterTaskBody_eBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tStarterTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tStarterTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tStarterTaskBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tStarterTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cTailControllerTask_start( ) \
                      tStarterTaskBody_cTailControllerTask_start( ) 
#define cTailControllerTask_stop( ) \
                      tStarterTaskBody_cTailControllerTask_stop( ) 
#define cTailControllerTask_refer( pk_cyclicHandlerStatus ) \
                      tStarterTaskBody_cTailControllerTask_refer( pk_cyclicHandlerStatus ) 
#define cBalancerTask_start( ) \
                      tStarterTaskBody_cBalancerTask_start( ) 
#define cBalancerTask_stop( ) \
                      tStarterTaskBody_cBalancerTask_stop( ) 
#define cBalancerTask_refer( pk_cyclicHandlerStatus ) \
                      tStarterTaskBody_cBalancerTask_refer( pk_cyclicHandlerStatus ) 
#define cLinetracerTask_start( ) \
                      tStarterTaskBody_cLinetracerTask_start( ) 
#define cLinetracerTask_stop( ) \
                      tStarterTaskBody_cLinetracerTask_stop( ) 
#define cLinetracerTask_refer( pk_cyclicHandlerStatus ) \
                      tStarterTaskBody_cLinetracerTask_refer( pk_cyclicHandlerStatus ) 
#define cGetLogTask_start( ) \
                      tStarterTaskBody_cGetLogTask_start( ) 
#define cGetLogTask_stop( ) \
                      tStarterTaskBody_cGetLogTask_stop( ) 
#define cGetLogTask_refer( pk_cyclicHandlerStatus ) \
                      tStarterTaskBody_cGetLogTask_refer( pk_cyclicHandlerStatus ) 
#define cTailController_setAngle( angle ) \
                      tStarterTaskBody_cTailController_setAngle( angle ) 
#define cTailController_getAngle( angle ) \
                      tStarterTaskBody_cTailController_getAngle( angle ) 
#define cTailController_signalStop( ) \
                      tStarterTaskBody_cTailController_signalStop( ) 
#define cTailController_signalStart( ) \
                      tStarterTaskBody_cTailController_signalStart( ) 
#define cTailController_calibrate( ) \
                      tStarterTaskBody_cTailController_calibrate( ) 
#define cSemaphore_signal( ) \
                      tStarterTaskBody_cSemaphore_signal( ) 
#define cSemaphore_wait( ) \
                      tStarterTaskBody_cSemaphore_wait( ) 
#define cSemaphore_waitPolling( ) \
                      tStarterTaskBody_cSemaphore_waitPolling( ) 
#define cSemaphore_waitTimeout( timeout ) \
                      tStarterTaskBody_cSemaphore_waitTimeout( timeout ) 
#define cSemaphore_initialize( ) \
                      tStarterTaskBody_cSemaphore_initialize( ) 
#define cSemaphore_refer( pk_semaphoreStatus ) \
                      tStarterTaskBody_cSemaphore_refer( pk_semaphoreStatus ) 
#define cPrintDisplayControl_print_str( ) \
                      tStarterTaskBody_cPrintDisplayControl_print_str( ) 
#define cPrintDisplayControl_print_k( string1, value1 ) \
                      tStarterTaskBody_cPrintDisplayControl_print_k( string1, value1 ) 
#define cPrintDisplayControl_print1( value1 ) \
                      tStarterTaskBody_cPrintDisplayControl_print1( value1 ) 
#define cPrintDisplayControl_print2( value1, value2 ) \
                      tStarterTaskBody_cPrintDisplayControl_print2( value1, value2 ) 
#define cPrintDisplayControl_print3( value1, value2, value3 ) \
                      tStarterTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) 
#define cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
                      tStarterTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) 
#define cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
                      tStarterTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) 
#define cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
                      tStarterTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) 
#define cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
                      tStarterTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) 
#define cPrintDisplayControl_printS1( string1, value1 ) \
                      tStarterTaskBody_cPrintDisplayControl_printS1( string1, value1 ) 
#define cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
                      tStarterTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) 
#define cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
                      tStarterTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) 
#define cButtonSetValue_kvalue( ) \
                      tStarterTaskBody_cButtonSetValue_kvalue( ) 
#define cButtonSetValue_threshold( ) \
                      tStarterTaskBody_cButtonSetValue_threshold( ) 
#define cButtonSetValue_speed( ) \
                      tStarterTaskBody_cButtonSetValue_speed( ) 
#define cButtonSetValue_tailAngle( ) \
                      tStarterTaskBody_cButtonSetValue_tailAngle( ) 
#define cBattery_getBatteryVoltage( ) \
                      tStarterTaskBody_cBattery_getBatteryVoltage( ) 
#define cLightSensor_getValue( value ) \
                      tStarterTaskBody_cLightSensor_getValue( value ) 
#define cTouchSensor_getValue( value ) \
                      tStarterTaskBody_cTouchSensor_getValue( value ) 
#define cBalancerControl_setSpeed( speed ) \
                      tStarterTaskBody_cBalancerControl_setSpeed( speed ) 
#define cBalancerControl_getSpeed( speed ) \
                      tStarterTaskBody_cBalancerControl_getSpeed( speed ) 
#define cBalancerControl_setTurn( turn ) \
                      tStarterTaskBody_cBalancerControl_setTurn( turn ) 
#define cBalancerControl_getTurn( turn ) \
                      tStarterTaskBody_cBalancerControl_getTurn( turn ) 
#define cBalancerControl_calibrate( ) \
                      tStarterTaskBody_cBalancerControl_calibrate( ) 
#define cLinetracerControl_setLightThreshold( color, light ) \
                      tStarterTaskBody_cLinetracerControl_setLightThreshold( color, light ) 
#define cLinetracerControl_getLightThreshold( color, light ) \
                      tStarterTaskBody_cLinetracerControl_getLightThreshold( color, light ) 
#define cLinetracerControl_setEdge( edge ) \
                      tStarterTaskBody_cLinetracerControl_setEdge( edge ) 
#define cLinetracerControl_getEdge( edge ) \
                      tStarterTaskBody_cLinetracerControl_getEdge( edge ) 
#define cGetLogControl_portOpen( ) \
                      tStarterTaskBody_cGetLogControl_portOpen( ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tStarterTaskBody_eBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tStarterTaskBody_TECSGEN_H */
