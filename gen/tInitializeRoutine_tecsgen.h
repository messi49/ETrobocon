/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tInitializeRoutine_TECSGEN_H
#define tInitializeRoutine_TECSGEN_H

/*
 * celltype    :  tInitializeRoutine
 * global name :  tInitializeRoutine
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sInitializeRoutineBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

#define tInitializeRoutine_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tInitializeRoutine_N_CELL        (8)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tInitializeRoutine_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tInitializeRoutine_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tInitializeRoutine_cInitializeRoutine_main( p_that ) \
	  (p_that)->cInitializeRoutine->VMT->main( \
	   (p_that)->cInitializeRoutine )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tInitializeRoutine_INIB {
    /* call port #_TCP_# */ 
    struct tag_sInitializeRoutineBody_VDES *cInitializeRoutine;
}  tInitializeRoutine_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tInitializeRoutine_CB_tab           tInitializeRoutine_INIB_tab
#define tInitializeRoutine_SINGLE_CELL_CB   tInitializeRoutine_SINGLE_CELL_INIB
#define tInitializeRoutine_CB               tInitializeRoutine_INIB
#define tag_tInitializeRoutine_CB           tag_tInitializeRoutine_INIB

extern tInitializeRoutine_CB  tInitializeRoutine_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tInitializeRoutine_INIB *tInitializeRoutine_IDX;

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tInitializeRoutine_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tInitializeRoutine_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tInitializeRoutine_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tInitializeRoutine_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cInitializeRoutine_main( ) \
                      tInitializeRoutine_cInitializeRoutine_main( p_cellcb ) 

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tInitializeRoutine_N_CELL; (i)++ ){ \
       (p_cb) = &tInitializeRoutine_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tInitializeRoutine_TECSGEN_H */
