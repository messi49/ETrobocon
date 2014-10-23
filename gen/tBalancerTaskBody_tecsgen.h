/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tBalancerTaskBody_TECSGEN_H
#define tBalancerTaskBody_TECSGEN_H

/*
 * celltype    :  tBalancerTaskBody
 * global name :  tBalancerTaskBody
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
#include "sBalancerControl_tecsgen.h"
#include "sMotor_tecsgen.h"
#include "sSensor_tecsgen.h"
#include "sBattery_tecsgen.h"
#include "sBalancer_tecsgen.h"
#include "sPrintDisplayControl_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tBalancerTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tMotor_tecsgen.h"
#include "tGyroSensorBody_tecsgen.h"
#include "tBattery_tecsgen.h"
#include "tBalancerBody_tecsgen.h"
#include "tPrintDisplayTaskBody_tecsgen.h"
#ifdef  tBalancerTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tBalancerTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tBalancerTaskBody_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tBalancerTaskBody_ATTR_maxSpeed	(tBalancerTaskBody_SINGLE_CELL_INIB.maxSpeed)
#define tBalancerTaskBody_ATTR_minSpeed	(tBalancerTaskBody_SINGLE_CELL_INIB.minSpeed)

#define tBalancerTaskBody_GET_maxSpeed()	(tBalancerTaskBody_SINGLE_CELL_INIB.maxSpeed)
#define tBalancerTaskBody_GET_minSpeed()	(tBalancerTaskBody_SINGLE_CELL_INIB.minSpeed)


/* var アクセスマクロ #_VAM_# */
#define tBalancerTaskBody_VAR_gyroOffset	(tBalancerTaskBody_SINGLE_CELL_CB.gyroOffset)
#define tBalancerTaskBody_VAR_speed	(tBalancerTaskBody_SINGLE_CELL_CB.speed)
#define tBalancerTaskBody_VAR_turn	(tBalancerTaskBody_SINGLE_CELL_CB.turn)
#define tBalancerTaskBody_VAR_count	(tBalancerTaskBody_SINGLE_CELL_CB.count)

#define tBalancerTaskBody_GET_gyroOffset()	(tBalancerTaskBody_SINGLE_CELL_CB.gyroOffset)
#define tBalancerTaskBody_SET_gyroOffset(val)	(tBalancerTaskBody_SINGLE_CELL_CB.gyroOffset=(val))
#define tBalancerTaskBody_GET_speed()	(tBalancerTaskBody_SINGLE_CELL_CB.speed)
#define tBalancerTaskBody_SET_speed(val)	(tBalancerTaskBody_SINGLE_CELL_CB.speed=(val))
#define tBalancerTaskBody_GET_turn()	(tBalancerTaskBody_SINGLE_CELL_CB.turn)
#define tBalancerTaskBody_SET_turn(val)	(tBalancerTaskBody_SINGLE_CELL_CB.turn=(val))
#define tBalancerTaskBody_GET_count()	(tBalancerTaskBody_SINGLE_CELL_CB.count)
#define tBalancerTaskBody_SET_count(val)	(tBalancerTaskBody_SINGLE_CELL_CB.count=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tBalancerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tBalancerTaskBody_cRightMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[1], (pwm), (brakeMode) )
#define tBalancerTaskBody_cRightMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[1], (revolution) )
#define tBalancerTaskBody_cRightMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[1], (revolution) )
#define tBalancerTaskBody_cLeftMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[2], (pwm), (brakeMode) )
#define tBalancerTaskBody_cLeftMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[2], (revolution) )
#define tBalancerTaskBody_cLeftMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[2], (revolution) )
#define tBalancerTaskBody_cGyroSensor_getValue( value ) \
	  tGyroSensorBody_eSensor_getValue( \
	   (tGyroSensorBody_IDX)0, (value) )
#define tBalancerTaskBody_cBattery_getBatteryVoltage( ) \
	  tBattery_eBattery_getBatteryVoltage( \
	    )
#define tBalancerTaskBody_cBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r ) \
	  tBalancerBody_eBalancer_control( \
	    (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r) )
#define tBalancerTaskBody_cPrintDisplayControl_print_str( ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_str( \
	    )
#define tBalancerTaskBody_cPrintDisplayControl_print_k( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print_k( \
	    (string1), (value1) )
#define tBalancerTaskBody_cPrintDisplayControl_print1( value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print1( \
	    (value1) )
#define tBalancerTaskBody_cPrintDisplayControl_print2( value1, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print2( \
	    (value1), (value2) )
#define tBalancerTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print3( \
	    (value1), (value2), (value3) )
#define tBalancerTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print4( \
	    (value1), (value2), (value3), (value4) )
#define tBalancerTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print5( \
	    (value1), (value2), (value3), (value4), (value5) )
#define tBalancerTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print6( \
	    (value1), (value2), (value3), (value4), (value5), (value6) )
#define tBalancerTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_print7( \
	    (value1), (value2), (value3), (value4), (value5), (value6), (value7) )
#define tBalancerTaskBody_cPrintDisplayControl_printS1( string1, value1 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS1( \
	    (string1), (value1) )
#define tBalancerTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS2( \
	    (string1), (value1), (string2), (value2) )
#define tBalancerTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
	  tPrintDisplayTaskBody_ePrintDisplayControl_printS3( \
	    (string1), (value1), (string2), (value2), (string3), (value3) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tBalancerTaskBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int16_t        maxSpeed;
    int16_t        minSpeed;
}  tBalancerTaskBody_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tBalancerTaskBody_CB {
    tBalancerTaskBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint16_t       gyroOffset;
    int16_t        speed;
    int16_t        turn;
    int32_t        count;
}  tBalancerTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tBalancerTaskBody_CB  tBalancerTaskBody_SINGLE_CELL_CB;
extern  tBalancerTaskBody_INIB  tBalancerTaskBody_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tBalancerTaskBody_CB *tBalancerTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tBalancerTaskBody_eBody_main();
/* sBalancerControl */
void         tBalancerTaskBody_eBalancerControl_setSpeed( int16_t speed);
void         tBalancerTaskBody_eBalancerControl_getSpeed( int16_t* speed);
void         tBalancerTaskBody_eBalancerControl_setTurn( int16_t turn);
void         tBalancerTaskBody_eBalancerControl_getTurn( int16_t* turn);
void         tBalancerTaskBody_eBalancerControl_calibrate();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tBalancerTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tBalancerTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tBalancerTaskBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_maxSpeed        tBalancerTaskBody_ATTR_maxSpeed
#define ATTR_minSpeed        tBalancerTaskBody_ATTR_minSpeed


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_gyroOffset       tBalancerTaskBody_VAR_gyroOffset
#define VAR_speed            tBalancerTaskBody_VAR_speed
#define VAR_turn             tBalancerTaskBody_VAR_turn
#define VAR_count            tBalancerTaskBody_VAR_count

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tBalancerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cRightMotor_setPWM( pwm, brakeMode ) \
                      tBalancerTaskBody_cRightMotor_setPWM( pwm, brakeMode ) 
#define cRightMotor_setRevolution( revolution ) \
                      tBalancerTaskBody_cRightMotor_setRevolution( revolution ) 
#define cRightMotor_getRevolution( revolution ) \
                      tBalancerTaskBody_cRightMotor_getRevolution( revolution ) 
#define cLeftMotor_setPWM( pwm, brakeMode ) \
                      tBalancerTaskBody_cLeftMotor_setPWM( pwm, brakeMode ) 
#define cLeftMotor_setRevolution( revolution ) \
                      tBalancerTaskBody_cLeftMotor_setRevolution( revolution ) 
#define cLeftMotor_getRevolution( revolution ) \
                      tBalancerTaskBody_cLeftMotor_getRevolution( revolution ) 
#define cGyroSensor_getValue( value ) \
                      tBalancerTaskBody_cGyroSensor_getValue( value ) 
#define cBattery_getBatteryVoltage( ) \
                      tBalancerTaskBody_cBattery_getBatteryVoltage( ) 
#define cBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r ) \
                      tBalancerTaskBody_cBalancer_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r ) 
#define cPrintDisplayControl_print_str( ) \
                      tBalancerTaskBody_cPrintDisplayControl_print_str( ) 
#define cPrintDisplayControl_print_k( string1, value1 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print_k( string1, value1 ) 
#define cPrintDisplayControl_print1( value1 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print1( value1 ) 
#define cPrintDisplayControl_print2( value1, value2 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print2( value1, value2 ) 
#define cPrintDisplayControl_print3( value1, value2, value3 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print3( value1, value2, value3 ) 
#define cPrintDisplayControl_print4( value1, value2, value3, value4 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print4( value1, value2, value3, value4 ) 
#define cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print5( value1, value2, value3, value4, value5 ) 
#define cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print6( value1, value2, value3, value4, value5, value6 ) 
#define cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) \
                      tBalancerTaskBody_cPrintDisplayControl_print7( value1, value2, value3, value4, value5, value6, value7 ) 
#define cPrintDisplayControl_printS1( string1, value1 ) \
                      tBalancerTaskBody_cPrintDisplayControl_printS1( string1, value1 ) 
#define cPrintDisplayControl_printS2( string1, value1, string2, value2 ) \
                      tBalancerTaskBody_cPrintDisplayControl_printS2( string1, value1, string2, value2 ) 
#define cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) \
                      tBalancerTaskBody_cPrintDisplayControl_printS3( string1, value1, string2, value2, string3, value3 ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tBalancerTaskBody_eBody_main
#define eBalancerControl_setSpeed tBalancerTaskBody_eBalancerControl_setSpeed
#define eBalancerControl_getSpeed tBalancerTaskBody_eBalancerControl_getSpeed
#define eBalancerControl_setTurn tBalancerTaskBody_eBalancerControl_setTurn
#define eBalancerControl_getTurn tBalancerTaskBody_eBalancerControl_getTurn
#define eBalancerControl_calibrate tBalancerTaskBody_eBalancerControl_calibrate

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tBalancerTaskBody_SINGLE_CELL_CB.count = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	tBalancerTaskBody_SINGLE_CELL_CB._inib = &tBalancerTaskBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tBalancerTaskBody_TECSGEN_H */
