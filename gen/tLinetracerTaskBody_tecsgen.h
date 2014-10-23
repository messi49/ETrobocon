/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tLinetracerTaskBody_TECSGEN_H
#define tLinetracerTaskBody_TECSGEN_H

/*
 * celltype    :  tLinetracerTaskBody
 * global name :  tLinetracerTaskBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sLinetracerControl_tecsgen.h"
#include "sSensor_tecsgen.h"
#include "sSensorControl_tecsgen.h"
#include "sBalancerControl_tecsgen.h"
#include "sPIDControl_tecsgen.h"
#include "sPrintDisplayControl_tecsgen.h"
#include "sMotor_tecsgen.h"
#include "sCyclic_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLinetracerTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tLightSensorBody_tecsgen.h"
#include "tBalancerTaskBody_tecsgen.h"
#include "tPIDControllerTaskBody_tecsgen.h"
#include "tPrintDisplayTaskBody_tecsgen.h"
#include "tMotor_tecsgen.h"
#include "tCyclicHandler_tecsgen.h"
#ifdef  tLinetracerTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLinetracerTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tLinetracerTaskBody_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tLinetracerTaskBody_ATTR_maxTurn	(tLinetracerTaskBody_SINGLE_CELL_INIB.maxTurn)
#define tLinetracerTaskBody_ATTR_minTurn	(tLinetracerTaskBody_SINGLE_CELL_INIB.minTurn)

#define tLinetracerTaskBody_GET_maxTurn()	(tLinetracerTaskBody_SINGLE_CELL_INIB.maxTurn)
#define tLinetracerTaskBody_GET_minTurn()	(tLinetracerTaskBody_SINGLE_CELL_INIB.minTurn)


/* var アクセスマクロ #_VAM_# */
#define tLinetracerTaskBody_VAR_lightThreshold	(tLinetracerTaskBody_SINGLE_CELL_CB.lightThreshold)
#define tLinetracerTaskBody_VAR_edge	(tLinetracerTaskBody_SINGLE_CELL_CB.edge)
#define tLinetracerTaskBody_VAR_black	(tLinetracerTaskBody_SINGLE_CELL_CB.black)
#define tLinetracerTaskBody_VAR_white	(tLinetracerTaskBody_SINGLE_CELL_CB.white)
#define tLinetracerTaskBody_VAR_count	(tLinetracerTaskBody_SINGLE_CELL_CB.count)
#define tLinetracerTaskBody_VAR_xx	(tLinetracerTaskBody_SINGLE_CELL_CB.xx)
#define tLinetracerTaskBody_VAR_yy	(tLinetracerTaskBody_SINGLE_CELL_CB.yy)
#define tLinetracerTaskBody_VAR_sita	(tLinetracerTaskBody_SINGLE_CELL_CB.sita)
#define tLinetracerTaskBody_VAR_preLeft	(tLinetracerTaskBody_SINGLE_CELL_CB.preLeft)
#define tLinetracerTaskBody_VAR_preRight	(tLinetracerTaskBody_SINGLE_CELL_CB.preRight)

#define tLinetracerTaskBody_GET_lightThreshold()	(tLinetracerTaskBody_SINGLE_CELL_CB.lightThreshold)
#define tLinetracerTaskBody_SET_lightThreshold(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.lightThreshold=(val))
#define tLinetracerTaskBody_GET_edge()	(tLinetracerTaskBody_SINGLE_CELL_CB.edge)
#define tLinetracerTaskBody_SET_edge(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.edge=(val))
#define tLinetracerTaskBody_GET_black()	(tLinetracerTaskBody_SINGLE_CELL_CB.black)
#define tLinetracerTaskBody_SET_black(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.black=(val))
#define tLinetracerTaskBody_GET_white()	(tLinetracerTaskBody_SINGLE_CELL_CB.white)
#define tLinetracerTaskBody_SET_white(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.white=(val))
#define tLinetracerTaskBody_GET_count()	(tLinetracerTaskBody_SINGLE_CELL_CB.count)
#define tLinetracerTaskBody_SET_count(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.count=(val))
#define tLinetracerTaskBody_GET_xx()	(tLinetracerTaskBody_SINGLE_CELL_CB.xx)
#define tLinetracerTaskBody_SET_xx(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.xx=(val))
#define tLinetracerTaskBody_GET_yy()	(tLinetracerTaskBody_SINGLE_CELL_CB.yy)
#define tLinetracerTaskBody_SET_yy(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.yy=(val))
#define tLinetracerTaskBody_GET_sita()	(tLinetracerTaskBody_SINGLE_CELL_CB.sita)
#define tLinetracerTaskBody_SET_sita(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.sita=(val))
#define tLinetracerTaskBody_GET_preLeft()	(tLinetracerTaskBody_SINGLE_CELL_CB.preLeft)
#define tLinetracerTaskBody_SET_preLeft(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.preLeft=(val))
#define tLinetracerTaskBody_GET_preRight()	(tLinetracerTaskBody_SINGLE_CELL_CB.preRight)
#define tLinetracerTaskBody_SET_preRight(val)	(tLinetracerTaskBody_SINGLE_CELL_CB.preRight=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tLinetracerTaskBody_cLightSensor_getValue( value ) \
	  tLightSensorBody_eSensor_getValue( \
	   (tLightSensorBody_IDX)0, (value) )
#define tLinetracerTaskBody_cLightSensorControl_on( ) \
	  tLightSensorBody_eSensorControl_on( \
	   (tLightSensorBody_IDX)0 )
#define tLinetracerTaskBody_cLightSensorControl_off( ) \
	  tLightSensorBody_eSensorControl_off( \
	   (tLightSensorBody_IDX)0 )
#define tLinetracerTaskBody_cBalancerControl_setSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_setSpeed( \
	    (speed) )
#define tLinetracerTaskBody_cBalancerControl_getSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_getSpeed( \
	    (speed) )
#define tLinetracerTaskBody_cBalancerControl_setTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_setTurn( \
	    (turn) )
#define tLinetracerTaskBody_cBalancerControl_getTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_getTurn( \
	    (turn) )
#define tLinetracerTaskBody_cBalancerControl_calibrate( ) \
	  tBalancerTaskBody_eBalancerControl_calibrate( \
	    )
#define tLinetracerTaskBody_cPIDControl_getPIDValue( light, VAR_lightThreshold, turn_f ) \
	  tPIDControllerTaskBody_ePIDControl_getPIDValue( \
	    (light), (VAR_lightThreshold), (turn_f) )
#define tLinetracerTaskBody_cPIDControl_getKValue( kp, ki, kd ) \
	  tPIDControllerTaskBody_ePIDControl_getKValue( \
	    (kp), (ki), (kd) )
#define tLinetracerTaskBody_cPIDControl_setKValue( kind, value ) \
	  tPIDControllerTaskBody_ePIDControl_setKValue( \
	    (kind), (value) )
#define tLinetracerTaskBody_cPrintDisplayControl_print_str( ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_str( \
	    )
#define tLinetracerTaskBody_cPrintDisplayControl_print_k( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_k( \
	    (string1), (value1) )
#define tLinetracerTaskBody_cPrintDisplayControl_print1( value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print1( \
	    (value1) )
#define tLinetracerTaskBody_cPrintDisplayControl_print2( value1, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print2( \
	    (value1), (value2) )
#define tLinetracerTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print3( \
	    (value1), (value2), (value3) )
#define tLinetracerTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print4( \
	    (value1), (value2), (value3), (value4) )
#define tLinetracerTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print5( \
	    (value1), (value2), (value3), (value4), (value5) )
#define tLinetracerTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print6( \
	    (value1), (value2), (value3), (value4), (value5), (value6) )
#define tLinetracerTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print7( \
	    (value1), (value2), (value3), (value4), (value5), (value6), (value7) )
#define tLinetracerTaskBody_cPrintDisplayControl_printS1( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS1( \
	    (string1), (value1) )
#define tLinetracerTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS2( \
	    (string1), (value1), (string2), (value2) )
#define tLinetracerTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS3( \
	    (string1), (value1), (string2), (value2), (string3), (value3) )
#define tLinetracerTaskBody_cRightMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[1], (pwm), (brakeMode) )
#define tLinetracerTaskBody_cRightMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[1], (revolution) )
#define tLinetracerTaskBody_cRightMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[1], (revolution) )
#define tLinetracerTaskBody_cLeftMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[2], (pwm), (brakeMode) )
#define tLinetracerTaskBody_cLeftMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[2], (revolution) )
#define tLinetracerTaskBody_cLeftMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[2], (revolution) )
#define tLinetracerTaskBody_cBalancerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[5] )
#define tLinetracerTaskBody_cBalancerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[5] )
#define tLinetracerTaskBody_cBalancerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[5], (pk_cyclicHandlerStatus) )
#define tLinetracerTaskBody_cLinetracerTask_start( ) \
	  tCyclicHandler_eCyclic_start( \
	   &tCyclicHandler_CB_tab[6] )
#define tLinetracerTaskBody_cLinetracerTask_stop( ) \
	  tCyclicHandler_eCyclic_stop( \
	   &tCyclicHandler_CB_tab[6] )
#define tLinetracerTaskBody_cLinetracerTask_refer( pk_cyclicHandlerStatus ) \
	  tCyclicHandler_eCyclic_refer( \
	   &tCyclicHandler_CB_tab[6], (pk_cyclicHandlerStatus) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tLinetracerTaskBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        maxTurn;
    int16_t        minTurn;
}  tLinetracerTaskBody_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tLinetracerTaskBody_CB {
    tLinetracerTaskBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint16_t       lightThreshold;
    int8_t         edge;
    uint16_t       black;
    uint16_t       white;
    int32_t        count;
    float32_t      xx;
    float32_t      yy;
    float32_t      sita;
    int32_t        preLeft;
    int32_t        preRight;
}  tLinetracerTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tLinetracerTaskBody_CB  tLinetracerTaskBody_SINGLE_CELL_CB;
extern  tLinetracerTaskBody_INIB  tLinetracerTaskBody_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tLinetracerTaskBody_CB *tLinetracerTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tLinetracerTaskBody_eBody_main();
/* sLinetracerControl */
void         tLinetracerTaskBody_eLinetracerControl_setLightThreshold( uint8_t color, uint16_t light);
void         tLinetracerTaskBody_eLinetracerControl_getLightThreshold( uint8_t color, uint16_t* light);
void         tLinetracerTaskBody_eLinetracerControl_setEdge( int8_t edge);
void         tLinetracerTaskBody_eLinetracerControl_getEdge( int8_t* edge);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tLinetracerTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tLinetracerTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tLinetracerTaskBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_maxTurn         tLinetracerTaskBody_ATTR_maxTurn
#define ATTR_minTurn         tLinetracerTaskBody_ATTR_minTurn


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_lightThreshold   tLinetracerTaskBody_VAR_lightThreshold
#define VAR_edge             tLinetracerTaskBody_VAR_edge
#define VAR_black            tLinetracerTaskBody_VAR_black
#define VAR_white            tLinetracerTaskBody_VAR_white
#define VAR_count            tLinetracerTaskBody_VAR_count
#define VAR_xx               tLinetracerTaskBody_VAR_xx
#define VAR_yy               tLinetracerTaskBody_VAR_yy
#define VAR_sita             tLinetracerTaskBody_VAR_sita
#define VAR_preLeft          tLinetracerTaskBody_VAR_preLeft
#define VAR_preRight         tLinetracerTaskBody_VAR_preRight

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tLinetracerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cLightSensor_getValue( value ) \
                      tLinetracerTaskBody_cLightSensor_getValue( value ) 
#define cLightSensorControl_on( ) \
                      tLinetracerTaskBody_cLightSensorControl_on( ) 
#define cLightSensorControl_off( ) \
                      tLinetracerTaskBody_cLightSensorControl_off( ) 
#define cBalancerControl_setSpeed( speed ) \
                      tLinetracerTaskBody_cBalancerControl_setSpeed( speed ) 
#define cBalancerControl_getSpeed( speed ) \
                      tLinetracerTaskBody_cBalancerControl_getSpeed( speed ) 
#define cBalancerControl_setTurn( turn ) \
                      tLinetracerTaskBody_cBalancerControl_setTurn( turn ) 
#define cBalancerControl_getTurn( turn ) \
                      tLinetracerTaskBody_cBalancerControl_getTurn( turn ) 
#define cBalancerControl_calibrate( ) \
                      tLinetracerTaskBody_cBalancerControl_calibrate( ) 
#define cPIDControl_getPIDValue( light, VAR_lightThreshold, turn_f ) \
                      tLinetracerTaskBody_cPIDControl_getPIDValue( light, VAR_lightThreshold, turn_f ) 
#define cPIDControl_getKValue( kp, ki, kd ) \
                      tLinetracerTaskBody_cPIDControl_getKValue( kp, ki, kd ) 
#define cPIDControl_setKValue( kind, value ) \
                      tLinetracerTaskBody_cPIDControl_setKValue( kind, value ) 
#define cPrintDisplayControl_print_str( ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print_str( ) 
#define cPrintDisplayControl_print_k( string1, value1 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print_k( string1, value1 ) 
#define cPrintDisplayControl_print1( value1 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print1( value1 ) 
#define cPrintDisplayControl_print2( value1, value2 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print2( value1, value2 ) 
#define cPrintDisplayControl_print3( value1, value2, value3 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) 
#define cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) 
#define cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) 
#define cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) 
#define cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) 
#define cPrintDisplayControl_printS1( string1, value1 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_printS1( string1, value1 ) 
#define cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) 
#define cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
                      tLinetracerTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) 
#define cRightMotor_setPWM( pwm, brakeMode ) \
                      tLinetracerTaskBody_cRightMotor_setPWM( pwm, brakeMode ) 
#define cRightMotor_setRevolution( revolution ) \
                      tLinetracerTaskBody_cRightMotor_setRevolution( revolution ) 
#define cRightMotor_getRevolution( revolution ) \
                      tLinetracerTaskBody_cRightMotor_getRevolution( revolution ) 
#define cLeftMotor_setPWM( pwm, brakeMode ) \
                      tLinetracerTaskBody_cLeftMotor_setPWM( pwm, brakeMode ) 
#define cLeftMotor_setRevolution( revolution ) \
                      tLinetracerTaskBody_cLeftMotor_setRevolution( revolution ) 
#define cLeftMotor_getRevolution( revolution ) \
                      tLinetracerTaskBody_cLeftMotor_getRevolution( revolution ) 
#define cBalancerTask_start( ) \
                      tLinetracerTaskBody_cBalancerTask_start( ) 
#define cBalancerTask_stop( ) \
                      tLinetracerTaskBody_cBalancerTask_stop( ) 
#define cBalancerTask_refer( pk_cyclicHandlerStatus ) \
                      tLinetracerTaskBody_cBalancerTask_refer( pk_cyclicHandlerStatus ) 
#define cLinetracerTask_start( ) \
                      tLinetracerTaskBody_cLinetracerTask_start( ) 
#define cLinetracerTask_stop( ) \
                      tLinetracerTaskBody_cLinetracerTask_stop( ) 
#define cLinetracerTask_refer( pk_cyclicHandlerStatus ) \
                      tLinetracerTaskBody_cLinetracerTask_refer( pk_cyclicHandlerStatus ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tLinetracerTaskBody_eBody_main
#define eLinetracerControl_setLightThreshold tLinetracerTaskBody_eLinetracerControl_setLightThreshold
#define eLinetracerControl_getLightThreshold tLinetracerTaskBody_eLinetracerControl_getLightThreshold
#define eLinetracerControl_setEdge tLinetracerTaskBody_eLinetracerControl_setEdge
#define eLinetracerControl_getEdge tLinetracerTaskBody_eLinetracerControl_getEdge

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tLinetracerTaskBody_SINGLE_CELL_CB.count = 0;\
	tLinetracerTaskBody_SINGLE_CELL_CB.xx = 0;\
	tLinetracerTaskBody_SINGLE_CELL_CB.yy = 0;\
	tLinetracerTaskBody_SINGLE_CELL_CB.sita = 0;\
	tLinetracerTaskBody_SINGLE_CELL_CB.preLeft = 0;\
	tLinetracerTaskBody_SINGLE_CELL_CB.preRight = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	tLinetracerTaskBody_SINGLE_CELL_CB._inib = &tLinetracerTaskBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLinetracerTaskBody_TECSGEN_H */
