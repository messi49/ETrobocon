/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPIDControllerTaskBody_TECSGEN_H
#define tPIDControllerTaskBody_TECSGEN_H

/*
 * celltype    :  tPIDControllerTaskBody
 * global name :  tPIDControllerTaskBody
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
#include "sPIDControl_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPIDControllerTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#ifdef  tPIDControllerTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPIDControllerTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tPIDControllerTaskBody_GET_CELLCB(idx) ((void *)0)



/* var アクセスマクロ #_VAM_# */
#define tPIDControllerTaskBody_VAR_kp	(tPIDControllerTaskBody_SINGLE_CELL_CB.kp)
#define tPIDControllerTaskBody_VAR_ki	(tPIDControllerTaskBody_SINGLE_CELL_CB.ki)
#define tPIDControllerTaskBody_VAR_kd	(tPIDControllerTaskBody_SINGLE_CELL_CB.kd)
#define tPIDControllerTaskBody_VAR_integral	(tPIDControllerTaskBody_SINGLE_CELL_CB.integral)
#define tPIDControllerTaskBody_VAR_diff0	(tPIDControllerTaskBody_SINGLE_CELL_CB.diff0)
#define tPIDControllerTaskBody_VAR_diff1	(tPIDControllerTaskBody_SINGLE_CELL_CB.diff1)
#define tPIDControllerTaskBody_VAR_DELTAT	(tPIDControllerTaskBody_SINGLE_CELL_CB.DELTAT)

#define tPIDControllerTaskBody_GET_kp()	(tPIDControllerTaskBody_SINGLE_CELL_CB.kp)
#define tPIDControllerTaskBody_SET_kp(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.kp=(val))
#define tPIDControllerTaskBody_GET_ki()	(tPIDControllerTaskBody_SINGLE_CELL_CB.ki)
#define tPIDControllerTaskBody_SET_ki(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.ki=(val))
#define tPIDControllerTaskBody_GET_kd()	(tPIDControllerTaskBody_SINGLE_CELL_CB.kd)
#define tPIDControllerTaskBody_SET_kd(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.kd=(val))
#define tPIDControllerTaskBody_GET_integral()	(tPIDControllerTaskBody_SINGLE_CELL_CB.integral)
#define tPIDControllerTaskBody_SET_integral(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.integral=(val))
#define tPIDControllerTaskBody_GET_diff0()	(tPIDControllerTaskBody_SINGLE_CELL_CB.diff0)
#define tPIDControllerTaskBody_SET_diff0(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.diff0=(val))
#define tPIDControllerTaskBody_GET_diff1()	(tPIDControllerTaskBody_SINGLE_CELL_CB.diff1)
#define tPIDControllerTaskBody_SET_diff1(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.diff1=(val))
#define tPIDControllerTaskBody_GET_DELTAT()	(tPIDControllerTaskBody_SINGLE_CELL_CB.DELTAT)
#define tPIDControllerTaskBody_SET_DELTAT(val)	(tPIDControllerTaskBody_SINGLE_CELL_CB.DELTAT=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tPIDControllerTaskBody_CB {
    /* var #_VA_# */ 
    float32_t      kp;
    float32_t      ki;
    float32_t      kd;
    float32_t      integral;
    float32_t      diff0;
    float32_t      diff1;
    float32_t      DELTAT;
}  tPIDControllerTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tPIDControllerTaskBody_CB  tPIDControllerTaskBody_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tPIDControllerTaskBody_CB *tPIDControllerTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sPIDControl */
void         tPIDControllerTaskBody_ePIDControl_getPIDValue( uint16_t light, uint16_t VAR_lightThreshold, float32_t* turn_f);
void         tPIDControllerTaskBody_ePIDControl_getKValue( float32_t* kp, float32_t* ki, float32_t* kd);
void         tPIDControllerTaskBody_ePIDControl_setKValue( uint8_t kind, float32_t value);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPIDControllerTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPIDControllerTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPIDControllerTaskBody_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_kp               tPIDControllerTaskBody_VAR_kp
#define VAR_ki               tPIDControllerTaskBody_VAR_ki
#define VAR_kd               tPIDControllerTaskBody_VAR_kd
#define VAR_integral         tPIDControllerTaskBody_VAR_integral
#define VAR_diff0            tPIDControllerTaskBody_VAR_diff0
#define VAR_diff1            tPIDControllerTaskBody_VAR_diff1
#define VAR_DELTAT           tPIDControllerTaskBody_VAR_DELTAT

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tPIDControllerTaskBody__require_call_port_tKernel_eKernel_senseKernel( ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define ePIDControl_getPIDValue tPIDControllerTaskBody_ePIDControl_getPIDValue
#define ePIDControl_getKValue tPIDControllerTaskBody_ePIDControl_getKValue
#define ePIDControl_setKValue tPIDControllerTaskBody_ePIDControl_setKValue

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tPIDControllerTaskBody_SINGLE_CELL_CB.kp = 0.6;\
	tPIDControllerTaskBody_SINGLE_CELL_CB.ki = 0;\
	tPIDControllerTaskBody_SINGLE_CELL_CB.kd = 0.2;\
	tPIDControllerTaskBody_SINGLE_CELL_CB.integral = 0;\
	tPIDControllerTaskBody_SINGLE_CELL_CB.diff0 = 0;\
	tPIDControllerTaskBody_SINGLE_CELL_CB.diff1 = 0;\
	tPIDControllerTaskBody_SINGLE_CELL_CB.DELTAT = 0.010;
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPIDControllerTaskBody_TECSGEN_H */
