/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTailControllerTaskBody_TECSGEN_H
#define tTailControllerTaskBody_TECSGEN_H

/*
 * celltype    :  tTailControllerTaskBody
 * global name :  tTailControllerTaskBody
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
#include "sTailController_tecsgen.h"
#include "sMotor_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTailControllerTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tMotor_tecsgen.h"
#ifdef  tTailControllerTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTailControllerTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tTailControllerTaskBody_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tTailControllerTaskBody_ATTR_tailAngleStop	(tTailControllerTaskBody_SINGLE_CELL_INIB.tailAngleStop)
#define tTailControllerTaskBody_ATTR_tailAngleDrive	(tTailControllerTaskBody_SINGLE_CELL_INIB.tailAngleDrive)
#define tTailControllerTaskBody_ATTR_kp	(tTailControllerTaskBody_SINGLE_CELL_INIB.kp)
#define tTailControllerTaskBody_ATTR_maxPwm	(tTailControllerTaskBody_SINGLE_CELL_INIB.maxPwm)
#define tTailControllerTaskBody_ATTR_minPwm	(tTailControllerTaskBody_SINGLE_CELL_INIB.minPwm)

#define tTailControllerTaskBody_GET_tailAngleStop()	(tTailControllerTaskBody_SINGLE_CELL_INIB.tailAngleStop)
#define tTailControllerTaskBody_GET_tailAngleDrive()	(tTailControllerTaskBody_SINGLE_CELL_INIB.tailAngleDrive)
#define tTailControllerTaskBody_GET_kp()	(tTailControllerTaskBody_SINGLE_CELL_INIB.kp)
#define tTailControllerTaskBody_GET_maxPwm()	(tTailControllerTaskBody_SINGLE_CELL_INIB.maxPwm)
#define tTailControllerTaskBody_GET_minPwm()	(tTailControllerTaskBody_SINGLE_CELL_INIB.minPwm)


/* var アクセスマクロ #_VAM_# */
#define tTailControllerTaskBody_VAR_targetAngle	(tTailControllerTaskBody_SINGLE_CELL_CB.targetAngle)

#define tTailControllerTaskBody_GET_targetAngle()	(tTailControllerTaskBody_SINGLE_CELL_CB.targetAngle)
#define tTailControllerTaskBody_SET_targetAngle(val)	(tTailControllerTaskBody_SINGLE_CELL_CB.targetAngle=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tTailControllerTaskBody_cTailMotor_setPWM( pwm, brakeMode ) \
	  tMotor_eMotor_setPWM( \
	   &tMotor_CB_tab[0], (pwm), (brakeMode) )
#define tTailControllerTaskBody_cTailMotor_setRevolution( revolution ) \
	  tMotor_eMotor_setRevolution( \
	   &tMotor_CB_tab[0], (revolution) )
#define tTailControllerTaskBody_cTailMotor_getRevolution( revolution ) \
	  tMotor_eMotor_getRevolution( \
	   &tMotor_CB_tab[0], (revolution) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTailControllerTaskBody_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        tailAngleStop;
    int32_t        tailAngleDrive;
    float32_t      kp;
    int8_t         maxPwm;
    int8_t         minPwm;
}  tTailControllerTaskBody_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tTailControllerTaskBody_CB {
    tTailControllerTaskBody_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        targetAngle;
}  tTailControllerTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tTailControllerTaskBody_CB  tTailControllerTaskBody_SINGLE_CELL_CB;
extern  tTailControllerTaskBody_INIB  tTailControllerTaskBody_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tTailControllerTaskBody_CB *tTailControllerTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tTailControllerTaskBody_eBody_main();
/* sTailController */
void         tTailControllerTaskBody_eTailController_setAngle( int32_t angle);
void         tTailControllerTaskBody_eTailController_getAngle( int32_t* angle);
void         tTailControllerTaskBody_eTailController_signalStop();
void         tTailControllerTaskBody_eTailController_signalStart();
void         tTailControllerTaskBody_eTailController_calibrate();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTailControllerTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTailControllerTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTailControllerTaskBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_tailAngleStop   tTailControllerTaskBody_ATTR_tailAngleStop
#define ATTR_tailAngleDrive  tTailControllerTaskBody_ATTR_tailAngleDrive
#define ATTR_kp              tTailControllerTaskBody_ATTR_kp
#define ATTR_maxPwm          tTailControllerTaskBody_ATTR_maxPwm
#define ATTR_minPwm          tTailControllerTaskBody_ATTR_minPwm


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_targetAngle      tTailControllerTaskBody_VAR_targetAngle

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tTailControllerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cTailMotor_setPWM( pwm, brakeMode ) \
                      tTailControllerTaskBody_cTailMotor_setPWM( pwm, brakeMode ) 
#define cTailMotor_setRevolution( revolution ) \
                      tTailControllerTaskBody_cTailMotor_setRevolution( revolution ) 
#define cTailMotor_getRevolution( revolution ) \
                      tTailControllerTaskBody_cTailMotor_getRevolution( revolution ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tTailControllerTaskBody_eBody_main
#define eTailController_setAngle tTailControllerTaskBody_eTailController_setAngle
#define eTailController_getAngle tTailControllerTaskBody_eTailController_getAngle
#define eTailController_signalStop tTailControllerTaskBody_eTailController_signalStop
#define eTailController_signalStart tTailControllerTaskBody_eTailController_signalStart
#define eTailController_calibrate tTailControllerTaskBody_eTailController_calibrate

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tTailControllerTaskBody_SINGLE_CELL_CB._inib = &tTailControllerTaskBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTailControllerTaskBody_TECSGEN_H */
