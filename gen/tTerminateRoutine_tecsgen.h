/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTerminateRoutine_TECSGEN_H
#define tTerminateRoutine_TECSGEN_H

/*
 * celltype    :  tTerminateRoutine
 * global name :  tTerminateRoutine
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTerminateRoutineBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTerminateRoutine_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tTerminateRoutine_N_CELL        (7)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTerminateRoutine_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTerminateRoutine_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tTerminateRoutine_cTerminateRoutine_main( p_that ) \
	  (p_that)->cTerminateRoutine->VMT->main( \
	   (p_that)->cTerminateRoutine )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTerminateRoutine_INIB {
    /* call port #_TCP_# */ 
    struct tag_sTerminateRoutineBody_VDES *cTerminateRoutine;
}  tTerminateRoutine_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTerminateRoutine_CB_tab           tTerminateRoutine_INIB_tab
#define tTerminateRoutine_SINGLE_CELL_CB   tTerminateRoutine_SINGLE_CELL_INIB
#define tTerminateRoutine_CB               tTerminateRoutine_INIB
#define tag_tTerminateRoutine_CB           tag_tTerminateRoutine_INIB

extern tTerminateRoutine_CB  tTerminateRoutine_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTerminateRoutine_INIB *tTerminateRoutine_IDX;

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTerminateRoutine_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTerminateRoutine_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTerminateRoutine_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTerminateRoutine_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTerminateRoutine_main( ) \
                      tTerminateRoutine_cTerminateRoutine_main( p_cellcb ) 

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTerminateRoutine_N_CELL; (i)++ ){ \
       (p_cb) = &tTerminateRoutine_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTerminateRoutine_TECSGEN_H */
