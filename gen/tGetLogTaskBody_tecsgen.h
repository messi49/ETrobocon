/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tGetLogTaskBody_TECSGEN_H
#define tGetLogTaskBody_TECSGEN_H

/*
 * celltype    :  tGetLogTaskBody
 * global name :  tGetLogTaskBody
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
#include "sGetLogControl_tecsgen.h"
#include "sSerialPort_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sLinetracerControl_tecsgen.h"
#include "sBalancerControl_tecsgen.h"
#include "sTailController_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "sSensor_tecsgen.h"
#include "sMotor_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tGetLogTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tSerialPortMain_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tLinetracerTaskBody_tecsgen.h"
#include "tBalancerTaskBody_tecsgen.h"
#include "tTailControllerTaskBody_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#include "tLightSensorBody_tecsgen.h"
#include "tMotor_tecsgen.h"
#ifdef  tGetLogTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tGetLogTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tGetLogTaskBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tGetLogTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tGetLogTaskBody_cSerialPort_open( ) \
	  tSerialPortMain_eSerialPort_open( \
	   &tSerialPortMain_CB_tab[0] )
#define tGetLogTaskBody_cSerialPort_close( ) \
	  tSerialPortMain_eSerialPort_close( \
	   &tSerialPortMain_CB_tab[0] )
#define tGetLogTaskBody_cSerialPort_read( buffer, length ) \
	  tSerialPortMain_eSerialPort_read( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tGetLogTaskBody_cSerialPort_write( buffer, length ) \
	  tSerialPortMain_eSerialPort_write( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tGetLogTaskBody_cSerialPort_control( ioControl ) \
	  tSerialPortMain_eSerialPort_control( \
	   &tSerialPortMain_CB_tab[0], (ioControl) )
#define tGetLogTaskBody_cSerialPort_refer( pk_rpor ) \
	  tSerialPortMain_eSerialPort_refer( \
	   &tSerialPortMain_CB_tab[0], (pk_rpor) )
#define tGetLogTaskBody_cSysLog_write( priority, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (priority), (p_syslog) )
#define tGetLogTaskBody_cSysLog_read( p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tGetLogTaskBody_cSysLog_mask( logMask, lowMask ) \
	  tSysLog_eSysLog_mask( \
	    (logMask), (lowMask) )
#define tGetLogTaskBody_cSysLog_refer( pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tGetLogTaskBody_cLinetracerControl_setLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_setLightThreshold( \
	    (color), (light) )
#define tGetLogTaskBody_cLinetracerControl_getLightThreshold( color, light ) \
	  tLinetracerTaskBody_eLinetracerControl_getLightThreshold( \
	    (color), (light) )
#define tGetLogTaskBody_cLinetracerControl_setEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_setEdge( \
	    (edge) )
#define tGetLogTaskBody_cLinetracerControl_getEdge( edge ) \
	  tLinetracerTaskBody_eLinetracerControl_getEdge( \
	    (edge) )
#define tGetLogTaskBody_cBalancerControl_setSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_setSpeed( \
	    (speed) )
#define tGetLogTaskBody_cBalancerControl_getSpeed( speed ) \
	  tBalancerTaskBody_eBalancerControl_getSpeed( \
	    (speed) )
#define tGetLogTaskBody_cBalancerControl_setTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_setTurn( \
	    (turn) )
#define tGetLogTaskBody_cBalancerControl_getTurn( turn ) \
	  tBalancerTaskBody_eBalancerControl_getTurn( \
	    (turn) )
#define tGetLogTaskBody_cBalancerControl_calibrate( ) \
	  tBalancerTaskBody_eBalancerControl_calibrate( \
	    )
#define tGetLogTaskBody_cTailController_setAngle( angle ) \
	  tTailControllerTaskBody_eTailController_setAngle( \
	    (angle) )
#define tGetLogTaskBody_cTailController_getAngle( angle ) \
	  tTailControllerTaskBody_eTailController_getAngle( \
	    (angle) )
#define tGetLogTaskBody_cTailController_signalStop( ) \
	  tTailControllerTaskBody_eTailController_signalStop( \
	    )
#define tGetLogTaskBody_cTailController_signalStart( ) \
	  tTailControllerTaskBody_eTailController_signalStart( \
	    )
#define tGetLogTaskBody_cTailController_calibrate( ) \
	  tTailControllerTaskBody_eTailController_calibrate( \
	    )
#define tGetLogTaskBody_cSemaphore_signal( ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[1] )
#define tGetLogTaskBody_cSemaphore_wait( ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[1] )
#define tGetLogTaskBody_cSemaphore_waitPolling( ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[1] )
#define tGetLogTaskBody_cSemaphore_waitTimeout( timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[1], (timeout) )
#define tGetLogTaskBody_cSemaphore_initialize( ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[1] )
#define tGetLogTaskBody_cSemaphore_refer( pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[1], (pk_semaphoreStatus) )
#define tGetLogTaskBody_cLightSensor_getValue( value ) \
	  tLightSensorBody_eSensor_getValue( \
	   (tLightSensorBody_IDX)0, (value) )
#define tGetLogTaskBody_cRightMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[1], (pwm), (brakeMode) )
#define tGetLogTaskBody_cRightMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[1], (revolution) )
#define tGetLogTaskBody_cRightMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[1], (revolution) )
#define tGetLogTaskBody_cLeftMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[2], (pwm), (brakeMode) )
#define tGetLogTaskBody_cLeftMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[2], (revolution) )
#define tGetLogTaskBody_cLeftMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[2], (revolution) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tGetLogTaskBody_CB {
    int  dummy;
} tGetLogTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tGetLogTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tGetLogTaskBody_eBody_main();
/* sGetLogControl */
void         tGetLogTaskBody_eGetLogControl_portOpen();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tGetLogTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tGetLogTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tGetLogTaskBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tGetLogTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cSerialPort_open( ) \
                      tGetLogTaskBody_cSerialPort_open( ) 
#define cSerialPort_close( ) \
                      tGetLogTaskBody_cSerialPort_close( ) 
#define cSerialPort_read( buffer, length ) \
                      tGetLogTaskBody_cSerialPort_read( buffer, length ) 
#define cSerialPort_write( buffer, length ) \
                      tGetLogTaskBody_cSerialPort_write( buffer, length ) 
#define cSerialPort_control( ioControl ) \
                      tGetLogTaskBody_cSerialPort_control( ioControl ) 
#define cSerialPort_refer( pk_rpor ) \
                      tGetLogTaskBody_cSerialPort_refer( pk_rpor ) 
#define cSysLog_write( priority, p_syslog ) \
                      tGetLogTaskBody_cSysLog_write( priority, p_syslog ) 
#define cSysLog_read( p_syslog ) \
                      tGetLogTaskBody_cSysLog_read( p_syslog ) 
#define cSysLog_mask( logMask, lowMask ) \
                      tGetLogTaskBody_cSysLog_mask( logMask, lowMask ) 
#define cSysLog_refer( pk_rlog ) \
                      tGetLogTaskBody_cSysLog_refer( pk_rlog ) 
#define cLinetracerControl_setLightThreshold( color, light ) \
                      tGetLogTaskBody_cLinetracerControl_setLightThreshold( color, light ) 
#define cLinetracerControl_getLightThreshold( color, light ) \
                      tGetLogTaskBody_cLinetracerControl_getLightThreshold( color, light ) 
#define cLinetracerControl_setEdge( edge ) \
                      tGetLogTaskBody_cLinetracerControl_setEdge( edge ) 
#define cLinetracerControl_getEdge( edge ) \
                      tGetLogTaskBody_cLinetracerControl_getEdge( edge ) 
#define cBalancerControl_setSpeed( speed ) \
                      tGetLogTaskBody_cBalancerControl_setSpeed( speed ) 
#define cBalancerControl_getSpeed( speed ) \
                      tGetLogTaskBody_cBalancerControl_getSpeed( speed ) 
#define cBalancerControl_setTurn( turn ) \
                      tGetLogTaskBody_cBalancerControl_setTurn( turn ) 
#define cBalancerControl_getTurn( turn ) \
                      tGetLogTaskBody_cBalancerControl_getTurn( turn ) 
#define cBalancerControl_calibrate( ) \
                      tGetLogTaskBody_cBalancerControl_calibrate( ) 
#define cTailController_setAngle( angle ) \
                      tGetLogTaskBody_cTailController_setAngle( angle ) 
#define cTailController_getAngle( angle ) \
                      tGetLogTaskBody_cTailController_getAngle( angle ) 
#define cTailController_signalStop( ) \
                      tGetLogTaskBody_cTailController_signalStop( ) 
#define cTailController_signalStart( ) \
                      tGetLogTaskBody_cTailController_signalStart( ) 
#define cTailController_calibrate( ) \
                      tGetLogTaskBody_cTailController_calibrate( ) 
#define cSemaphore_signal( ) \
                      tGetLogTaskBody_cSemaphore_signal( ) 
#define cSemaphore_wait( ) \
                      tGetLogTaskBody_cSemaphore_wait( ) 
#define cSemaphore_waitPolling( ) \
                      tGetLogTaskBody_cSemaphore_waitPolling( ) 
#define cSemaphore_waitTimeout( timeout ) \
                      tGetLogTaskBody_cSemaphore_waitTimeout( timeout ) 
#define cSemaphore_initialize( ) \
                      tGetLogTaskBody_cSemaphore_initialize( ) 
#define cSemaphore_refer( pk_semaphoreStatus ) \
                      tGetLogTaskBody_cSemaphore_refer( pk_semaphoreStatus ) 
#define cLightSensor_getValue( value ) \
                      tGetLogTaskBody_cLightSensor_getValue( value ) 
#define cRightMotor_setPWM( pwm, brakeMode ) \
                      tGetLogTaskBody_cRightMotor_setPWM( pwm, brakeMode ) 
#define cRightMotor_setRevolution( revolution ) \
                      tGetLogTaskBody_cRightMotor_setRevolution( revolution ) 
#define cRightMotor_getRevolution( revolution ) \
                      tGetLogTaskBody_cRightMotor_getRevolution( revolution ) 
#define cLeftMotor_setPWM( pwm, brakeMode ) \
                      tGetLogTaskBody_cLeftMotor_setPWM( pwm, brakeMode ) 
#define cLeftMotor_setRevolution( revolution ) \
                      tGetLogTaskBody_cLeftMotor_setRevolution( revolution ) 
#define cLeftMotor_getRevolution( revolution ) \
                      tGetLogTaskBody_cLeftMotor_getRevolution( revolution ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tGetLogTaskBody_eBody_main
#define eGetLogControl_portOpen tGetLogTaskBody_eGetLogControl_portOpen

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tGetLogTaskBody_TECSGEN_H */
