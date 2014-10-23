/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCyclicTaskActivator_TECSGEN_H
#define tCyclicTaskActivator_TECSGEN_H

/*
 * celltype    :  tCyclicTaskActivator
 * global name :  tCyclicTaskActivator
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "siHandlerBody_tecsgen.h"
#include "siTask_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCyclicTaskActivator_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTask_tecsgen.h"
#ifdef  tCyclicTaskActivator_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCyclicTaskActivator_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCyclicTaskActivator_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tCyclicTaskActivator_N_CELL        (4)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCyclicTaskActivator_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCyclicTaskActivator_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tCyclicTaskActivator_ciTask_activate( p_that ) \
	  tTask_eiTask_activate( \
	   (p_that)->ciTask )
#define tCyclicTaskActivator_ciTask_wakeup( p_that ) \
	  tTask_eiTask_wakeup( \
	   (p_that)->ciTask )
#define tCyclicTaskActivator_ciTask_releaseWait( p_that ) \
	  tTask_eiTask_releaseWait( \
	   (p_that)->ciTask )
#define tCyclicTaskActivator_ciTask_raiseException( p_that, pattern ) \
	  tTask_eiTask_raiseException( \
	   (p_that)->ciTask, (pattern) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCyclicTaskActivator_INIB {
    /* call port #_TCP_# */ 
    const struct tag_tTask_INIB * ciTask;
    /* call port #_NEP_# */ 
}  tCyclicTaskActivator_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCyclicTaskActivator_CB_tab           tCyclicTaskActivator_INIB_tab
#define tCyclicTaskActivator_SINGLE_CELL_CB   tCyclicTaskActivator_SINGLE_CELL_INIB
#define tCyclicTaskActivator_CB               tCyclicTaskActivator_INIB
#define tag_tCyclicTaskActivator_CB           tag_tCyclicTaskActivator_INIB

extern tCyclicTaskActivator_CB  tCyclicTaskActivator_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCyclicTaskActivator_INIB *tCyclicTaskActivator_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* siHandlerBody */
void         tCyclicTaskActivator_eiBody_main(tCyclicTaskActivator_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCyclicTaskActivator_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCyclicTaskActivator_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCyclicTaskActivator_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCyclicTaskActivator_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ciTask_activate( ) \
                      tCyclicTaskActivator_ciTask_activate( p_cellcb ) 
#define ciTask_wakeup( ) \
                      tCyclicTaskActivator_ciTask_wakeup( p_cellcb ) 
#define ciTask_releaseWait( ) \
                      tCyclicTaskActivator_ciTask_releaseWait( p_cellcb ) 
#define ciTask_raiseException( pattern ) \
                      tCyclicTaskActivator_ciTask_raiseException( p_cellcb, pattern ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eiBody_main      tCyclicTaskActivator_eiBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCyclicTaskActivator_N_CELL; (i)++ ){ \
       (p_cb) = &tCyclicTaskActivator_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCyclicTaskActivator_TECSGEN_H */
