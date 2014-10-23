/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tButtonSetTaskBody_TECSGEN_H
#define tButtonSetTaskBody_TECSGEN_H

/*
 * celltype    :  tButtonSetTaskBody
 * global name :  tButtonSetTaskBody
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
#include "sButtonSetValue_tecsgen.h"
#include "sButton_tecsgen.h"
#include "sDisplay_tecsgen.h"
#include "sPIDControl_tecsgen.h"
#include "sLinetracerControl_tecsgen.h"
#include "sBalancerControl_tecsgen.h"
#include "sTailController_tecsgen.h"
#include "sPrintDisplayControl_tecsgen.h"
#include "sSensor_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tButtonSetTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tButtonBody_tecsgen.h"
#include "tDisplayBody_tecsgen.h"
#include "tPIDControllerTaskBody_tecsgen.h"
#include "tLinetracerTaskBody_tecsgen.h"
#include "tBalancerTaskBody_tecsgen.h"
#include "tTailControllerTaskBody_tecsgen.h"
#include "tPrintDisplayTaskBody_tecsgen.h"
#include "tTouchSensorBody_tecsgen.h"
#ifdef  tButtonSetTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tButtonSetTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tButtonSetTaskBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tButtonSetTaskBody_cButton_isENTERButton( ) \
	  tButtonBody_eButton_isENTERButton( \
	    )
#define tButtonSetTaskBody_cButton_isRUNButton( ) \
	  tButtonBody_eButton_isRUNButton( \
	    )
#define tButtonSetTaskBody_cButton_isSTOPButton( ) \
	  tButtonBody_eButton_isSTOPButton( \
	    )
#define tButtonSetTaskBody_cButton_isEXITButton( ) \
	  tButtonBody_eButton_isEXITButton( \
	    )
#define tButtonSetTaskBody_cButton_isENTERButtonOnly( ) \
	  tButtonBody_eButton_isENTERButtonOnly( \
	    )
#define tButtonSetTaskBody_cButton_isRUNButtonOnly( ) \
	  tButtonBody_eButton_isRUNButtonOnly( \
	    )
#define tButtonSetTaskBody_cButton_isSTOPButtonOnly( ) \
	  tButtonBody_eButton_isSTOPButtonOnly( \
	    )
#define tButtonSetTaskBody_cButton_isEXITButtonOnly( ) \
	  tButtonBody_eButton_isEXITButtonOnly( \
	    )
#define tButtonSetTaskBody_cDisplay_update( ) \
	  tDisplayBody_eDisplay_update( \
	    )
#define tButtonSetTaskBody_cDisplay_clear( updateToo ) \
	  tDisplayBody_eDisplay_clear( \
	    (updateToo) )
#define tButtonSetTaskBody_cDisplay_gotoXY( x, y ) \
	  tDisplayBody_eDisplay_gotoXY( \
	    (x), (y) )
#define tButtonSetTaskBody_cDisplay_putChar( c ) \
	  tDisplayBody_eDisplay_putChar( \
	    (c) )
#define tButtonSetTaskBody_cDisplay_putString( string ) \
	  tDisplayBody_eDisplay_putString( \
	    (string) )
#define tButtonSetTaskBody_cDisplay_putInt( val, places ) \
	  tDisplayBody_eDisplay_putInt( \
	    (val), (places) )
#define tButtonSetTaskBody_cDisplay_putUnsigned( val, places ) \
	  tDisplayBody_eDisplay_putUnsigned( \
	    (val), (places) )
#define tButtonSetTaskBody_cDisplay_putHex( val, places ) \
	  tDisplayBody_eDisplay_putHex( \
	    (val), (places) )
#define tButtonSetTaskBody_cDisplay_getBuffer( ) \
	  tDisplayBody_eDisplay_getBuffer( \
	    )
#define tButtonSetTaskBody_cDisplay_powerOff( updateToo ) \
	  tDisplayBody_eDisplay_powerOff( \
	    (updateToo) )
#define tButtonSetTaskBody_cPIDControl_getPIDValue( light, VAR_lightThreshold, turn_f ) \
	  tPIDControllerTaskBody_ePIDControl_getPIDValue( \
	    (light), (VAR_lightThreshold), (turn_f) )
#define tButtonSetTaskBody_cPIDControl_getKValue( kp, ki, kd ) \
	  tPIDControllerTaskBody_ePIDControl_getKValue( \
	    (kp), (ki), (kd) )
#define tButtonSetTaskBody_cPIDControl_setKValue( kind, value ) \
	  tPIDControllerTaskBody_ePIDControl_setKValue( \
	    (kind), (value) )
#define tButtonSetTaskBody_cLinetracerControl_setLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_setLightThreshold( \
	    (color), (light) )
#define tButtonSetTaskBody_cLinetracerControl_getLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_getLightThreshold( \
	    (color), (light) )
#define tButtonSetTaskBody_cLinetracerControl_setEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_setEdge( \
	    (edge) )
#define tButtonSetTaskBody_cLinetracerControl_getEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_getEdge( \
	    (edge) )
#define tButtonSetTaskBody_cBalancerControl_setSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_setSpeed( \
	    (speed) )
#define tButtonSetTaskBody_cBalancerControl_getSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_getSpeed( \
	    (speed) )
#define tButtonSetTaskBody_cBalancerControl_setTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_setTurn( \
	    (turn) )
#define tButtonSetTaskBody_cBalancerControl_getTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_getTurn( \
	    (turn) )
#define tButtonSetTaskBody_cBalancerControl_calibrate( ) \
	  tBalancerTaskBody_eBalancerControl_calibrate( \
	    )
#define tButtonSetTaskBody_cTailController_setAngle( angle ) \
	  tTailControllerTaskBody_eTailController_setAngle( \
	    (angle) )
#define tButtonSetTaskBody_cTailController_getAngle( angle ) \
	  tTailControllerTaskBody_eTailController_getAngle( \
	    (angle) )
#define tButtonSetTaskBody_cTailController_signalStop( ) \
	  tTailControllerTaskBody_eTailController_signalStop( \
	    )
#define tButtonSetTaskBody_cTailController_signalStart( ) \
	  tTailControllerTaskBody_eTailController_signalStart( \
	    )
#define tButtonSetTaskBody_cTailController_calibrate( ) \
	  tTailControllerTaskBody_eTailController_calibrate( \
	    )
#define tButtonSetTaskBody_cPrintDisplayControl_print_str( ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_str( \
	    )
#define tButtonSetTaskBody_cPrintDisplayControl_print_k( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_k( \
	    (string1), (value1) )
#define tButtonSetTaskBody_cPrintDisplayControl_print1( value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print1( \
	    (value1) )
#define tButtonSetTaskBody_cPrintDisplayControl_print2( value1, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print2( \
	    (value1), (value2) )
#define tButtonSetTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print3( \
	    (value1), (value2), (value3) )
#define tButtonSetTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print4( \
	    (value1), (value2), (value3), (value4) )
#define tButtonSetTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print5( \
	    (value1), (value2), (value3), (value4), (value5) )
#define tButtonSetTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print6( \
	    (value1), (value2), (value3), (value4), (value5), (value6) )
#define tButtonSetTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print7( \
	    (value1), (value2), (value3), (value4), (value5), (value6), (value7) )
#define tButtonSetTaskBody_cPrintDisplayControl_printS1( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS1( \
	    (string1), (value1) )
#define tButtonSetTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS2( \
	    (string1), (value1), (string2), (value2) )
#define tButtonSetTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS3( \
	    (string1), (value1), (string2), (value2), (string3), (value3) )
#define tButtonSetTaskBody_cTouchSensor_getValue( value ) \
	  tTouchSensorBody_eSensor_getValue( \
	   (tTouchSensorBody_IDX)0, (value) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tButtonSetTaskBody_CB {
    int  dummy;
} tButtonSetTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tButtonSetTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sButtonSetValue */
void         tButtonSetTaskBody_eButtonSetValue_kvalue();
void         tButtonSetTaskBody_eButtonSetValue_threshold();
void         tButtonSetTaskBody_eButtonSetValue_speed();
void         tButtonSetTaskBody_eButtonSetValue_tailAngle();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tButtonSetTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tButtonSetTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tButtonSetTaskBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tButtonSetTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cButton_isENTERButton( ) \
                      tButtonSetTaskBody_cButton_isENTERButton( ) 
#define cButton_isRUNButton( ) \
                      tButtonSetTaskBody_cButton_isRUNButton( ) 
#define cButton_isSTOPButton( ) \
                      tButtonSetTaskBody_cButton_isSTOPButton( ) 
#define cButton_isEXITButton( ) \
                      tButtonSetTaskBody_cButton_isEXITButton( ) 
#define cButton_isENTERButtonOnly( ) \
                      tButtonSetTaskBody_cButton_isENTERButtonOnly( ) 
#define cButton_isRUNButtonOnly( ) \
                      tButtonSetTaskBody_cButton_isRUNButtonOnly( ) 
#define cButton_isSTOPButtonOnly( ) \
                      tButtonSetTaskBody_cButton_isSTOPButtonOnly( ) 
#define cButton_isEXITButtonOnly( ) \
                      tButtonSetTaskBody_cButton_isEXITButtonOnly( ) 
#define cDisplay_update( ) \
                      tButtonSetTaskBody_cDisplay_update( ) 
#define cDisplay_clear( updateToo ) \
                      tButtonSetTaskBody_cDisplay_clear( updateToo ) 
#define cDisplay_gotoXY( x, y ) \
                      tButtonSetTaskBody_cDisplay_gotoXY( x, y ) 
#define cDisplay_putChar( c ) \
                      tButtonSetTaskBody_cDisplay_putChar( c ) 
#define cDisplay_putString( string ) \
                      tButtonSetTaskBody_cDisplay_putString( string ) 
#define cDisplay_putInt( val, places ) \
                      tButtonSetTaskBody_cDisplay_putInt( val, places ) 
#define cDisplay_putUnsigned( val, places ) \
                      tButtonSetTaskBody_cDisplay_putUnsigned( val, places ) 
#define cDisplay_putHex( val, places ) \
                      tButtonSetTaskBody_cDisplay_putHex( val, places ) 
#define cDisplay_getBuffer( ) \
                      tButtonSetTaskBody_cDisplay_getBuffer( ) 
#define cDisplay_powerOff( updateToo ) \
                      tButtonSetTaskBody_cDisplay_powerOff( updateToo ) 
#define cPIDControl_getPIDValue( light, VAR_lightThreshold, turn_f ) \
                      tButtonSetTaskBody_cPIDControl_getPIDValue( light, VAR_lightThreshold, turn_f ) 
#define cPIDControl_getKValue( kp, ki, kd ) \
                      tButtonSetTaskBody_cPIDControl_getKValue( kp, ki, kd ) 
#define cPIDControl_setKValue( kind, value ) \
                      tButtonSetTaskBody_cPIDControl_setKValue( kind, value ) 
#define cLinetracerControl_setLightThreshold( color, light ) \
                      tButtonSetTaskBody_cLinetracerControl_setLightThreshold( color, light ) 
#define cLinetracerControl_getLightThreshold( color, light ) \
                      tButtonSetTaskBody_cLinetracerControl_getLightThreshold( color, light ) 
#define cLinetracerControl_setEdge( edge ) \
                      tButtonSetTaskBody_cLinetracerControl_setEdge( edge ) 
#define cLinetracerControl_getEdge( edge ) \
                      tButtonSetTaskBody_cLinetracerControl_getEdge( edge ) 
#define cBalancerControl_setSpeed( speed ) \
                      tButtonSetTaskBody_cBalancerControl_setSpeed( speed ) 
#define cBalancerControl_getSpeed( speed ) \
                      tButtonSetTaskBody_cBalancerControl_getSpeed( speed ) 
#define cBalancerControl_setTurn( turn ) \
                      tButtonSetTaskBody_cBalancerControl_setTurn( turn ) 
#define cBalancerControl_getTurn( turn ) \
                      tButtonSetTaskBody_cBalancerControl_getTurn( turn ) 
#define cBalancerControl_calibrate( ) \
                      tButtonSetTaskBody_cBalancerControl_calibrate( ) 
#define cTailController_setAngle( angle ) \
                      tButtonSetTaskBody_cTailController_setAngle( angle ) 
#define cTailController_getAngle( angle ) \
                      tButtonSetTaskBody_cTailController_getAngle( angle ) 
#define cTailController_signalStop( ) \
                      tButtonSetTaskBody_cTailController_signalStop( ) 
#define cTailController_signalStart( ) \
                      tButtonSetTaskBody_cTailController_signalStart( ) 
#define cTailController_calibrate( ) \
                      tButtonSetTaskBody_cTailController_calibrate( ) 
#define cPrintDisplayControl_print_str( ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print_str( ) 
#define cPrintDisplayControl_print_k( string1, value1 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print_k( string1, value1 ) 
#define cPrintDisplayControl_print1( value1 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print1( value1 ) 
#define cPrintDisplayControl_print2( value1, value2 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print2( value1, value2 ) 
#define cPrintDisplayControl_print3( value1, value2, value3 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) 
#define cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) 
#define cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) 
#define cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) 
#define cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) 
#define cPrintDisplayControl_printS1( string1, value1 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_printS1( string1, value1 ) 
#define cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) 
#define cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
                      tButtonSetTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) 
#define cTouchSensor_getValue( value ) \
                      tButtonSetTaskBody_cTouchSensor_getValue( value ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eButtonSetValue_kvalue tButtonSetTaskBody_eButtonSetValue_kvalue
#define eButtonSetValue_threshold tButtonSetTaskBody_eButtonSetValue_threshold
#define eButtonSetValue_speed tButtonSetTaskBody_eButtonSetValue_speed
#define eButtonSetValue_tailAngle tButtonSetTaskBody_eButtonSetValue_tailAngle

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tButtonSetTaskBody_TECSGEN_H */
