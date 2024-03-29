/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tISR_TECSGEN_H
#define tISR_TECSGEN_H

/*
 * celltype    :  tISR
 * global name :  tISR
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

#ifndef TOPPERS_CB_TYPE_ONLY

#define tISR_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tISR_N_CELL                 (6)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tISR_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tISR_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tISR_ciBody_main( p_that ) \
	  (p_that)->ciBody->VMT->main( \
	   (p_that)->ciBody )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tISR_INIB {
    /* call port #_TCP_# */ 
    struct tag_siHandlerBody_VDES *ciBody;
}  tISR_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tISR_CB_tab           tISR_INIB_tab
#define tISR_SINGLE_CELL_CB   tISR_SINGLE_CELL_INIB
#define tISR_CB               tISR_INIB
#define tag_tISR_CB           tag_tISR_INIB

extern tISR_CB  tISR_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tISR_INIB *tISR_IDX;

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tISR_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tISR_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tISR_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tISR_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ciBody_main( ) \
                      tISR_ciBody_main( p_cellcb ) 

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tISR_N_CELL; (i)++ ){ \
       (p_cb) = &tISR_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tISR_TECSGEN_H */
