/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCheckNXTButtonBody_TECSGEN_H
#define tCheckNXTButtonBody_TECSGEN_H

/*
 * celltype    :  tCheckNXTButtonBody
 * global name :  tCheckNXTButtonBody
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
#include "siHandlerBody_tecsgen.h"
#include "sButton_tecsgen.h"
#include "sFlash_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCheckNXTButtonBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tButtonBody_tecsgen.h"
#ifdef  tCheckNXTButtonBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCheckNXTButtonBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* optional 呼び口をテストするマクロ #_TOCP_# */
#define tCheckNXTButtonBody_is_cFlash_joined(p_that) \
	  (0)    /* not joined */

/* セルCBを得るマクロ #_GCB_# */
#define tCheckNXTButtonBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_sleep( ) \
	  tKernel_eKernel_sleep( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_delay( delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_exitTask( ) \
	  tKernel_eKernel_exitTask( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_lockCpu( ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_unlockCpu( ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_disableDispatch( ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_enableDispatch( ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_disableTaskException( ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_enableTaskException( ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_exitKernel( ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseContext( ) \
	  tKernel_eKernel_senseContext( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseLock( ) \
	  tKernel_eKernel_senseLock( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseDispatch( ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseKernel( ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define tCheckNXTButtonBody_cButton_isENTERButton( ) \
	  tButtonBody_eButton_isENTERButton( \
	    )
#define tCheckNXTButtonBody_cButton_isRUNButton( ) \
	  tButtonBody_eButton_isRUNButton( \
	    )
#define tCheckNXTButtonBody_cButton_isSTOPButton( ) \
	  tButtonBody_eButton_isSTOPButton( \
	    )
#define tCheckNXTButtonBody_cButton_isEXITButton( ) \
	  tButtonBody_eButton_isEXITButton( \
	    )
#define tCheckNXTButtonBody_cButton_isENTERButtonOnly( ) \
	  tButtonBody_eButton_isENTERButtonOnly( \
	    )
#define tCheckNXTButtonBody_cButton_isRUNButtonOnly( ) \
	  tButtonBody_eButton_isRUNButtonOnly( \
	    )
#define tCheckNXTButtonBody_cButton_isSTOPButtonOnly( ) \
	  tButtonBody_eButton_isSTOPButtonOnly( \
	    )
#define tCheckNXTButtonBody_cButton_isEXITButtonOnly( ) \
	  tButtonBody_eButton_isEXITButtonOnly( \
	    )
#define tCheckNXTButtonBody_cFlash_rewriteBios( ) \
	  ((void (*)())0)()
	  /* optional no entry port joined */

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCheckNXTButtonBody_CB {
    int  dummy;
} tCheckNXTButtonBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCheckNXTButtonBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* siHandlerBody */
void         tCheckNXTButtonBody_eiBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCheckNXTButtonBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCheckNXTButtonBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCheckNXTButtonBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define sleep( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_sleep( ) 
#define sleepTimeout( timeout ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_sleepTimeout( timeout ) 
#define delay( delayTime ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_delay( delayTime ) 
#define exitTask( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_exitTask( ) 
#define getTaskId( p_taskId ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getTaskId( p_taskId ) 
#define rotateReadyQueue( taskPriority ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_rotateReadyQueue( taskPriority ) 
#define getTime( p_systemTime ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getTime( p_systemTime ) 
#define getMicroTime( p_systemMicroTime ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getMicroTime( p_systemMicroTime ) 
#define lockCpu( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_lockCpu( ) 
#define unlockCpu( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_unlockCpu( ) 
#define disableDispatch( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_disableDispatch( ) 
#define enableDispatch( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_enableDispatch( ) 
#define disableTaskException( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_disableTaskException( ) 
#define enableTaskException( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_enableTaskException( ) 
#define changeInterruptPriorityMask( interruptPriority ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( interruptPriority ) 
#define getInterruptPriorityMask( p_interruptPriority ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_interruptPriority ) 
#define exitKernel( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_exitKernel( ) 
#define senseContext( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseContext( ) 
#define senseLock( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseLock( ) 
#define senseDispatch( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseDispatch( ) 
#define senseDispatchPendingState( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseDispatchPendingState( ) 
#define senseKernel( ) \
                      tCheckNXTButtonBody__require_call_port_tKernel_eKernel_senseKernel( ) 
#define cButton_isENTERButton( ) \
                      tCheckNXTButtonBody_cButton_isENTERButton( ) 
#define cButton_isRUNButton( ) \
                      tCheckNXTButtonBody_cButton_isRUNButton( ) 
#define cButton_isSTOPButton( ) \
                      tCheckNXTButtonBody_cButton_isSTOPButton( ) 
#define cButton_isEXITButton( ) \
                      tCheckNXTButtonBody_cButton_isEXITButton( ) 
#define cButton_isENTERButtonOnly( ) \
                      tCheckNXTButtonBody_cButton_isENTERButtonOnly( ) 
#define cButton_isRUNButtonOnly( ) \
                      tCheckNXTButtonBody_cButton_isRUNButtonOnly( ) 
#define cButton_isSTOPButtonOnly( ) \
                      tCheckNXTButtonBody_cButton_isSTOPButtonOnly( ) 
#define cButton_isEXITButtonOnly( ) \
                      tCheckNXTButtonBody_cButton_isEXITButtonOnly( ) 
#define cFlash_rewriteBios( ) \
                      tCheckNXTButtonBody_cFlash_rewriteBios( ) 

/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cFlash_joined()\
		tCheckNXTButtonBody_is_cFlash_joined(p_cellcb)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eiBody_main      tCheckNXTButtonBody_eiBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCheckNXTButtonBody_TECSGEN_H */
