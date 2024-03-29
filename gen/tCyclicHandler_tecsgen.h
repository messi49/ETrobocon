/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCyclicHandler_TECSGEN_H
#define tCyclicHandler_TECSGEN_H

/*
 * celltype    :  tCyclicHandler
 * global name :  tCyclicHandler
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sCyclic_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#define tCyclicHandler_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tCyclicHandler_N_CELL        (8)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCyclicHandler_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCyclicHandler_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCyclicHandler_ATTR_id( p_that )	((p_that)->id)

#define tCyclicHandler_GET_id(p_that)	((p_that)->id)



 /* 呼び口関数マクロ #_CPM_# */
#define tCyclicHandler_ciBody_main( p_that ) \
	  (p_that)->ciBody->VMT->main( \
	   (p_that)->ciBody )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCyclicHandler_INIB {
    /* call port #_TCP_# */ 
    struct tag_siHandlerBody_VDES *ciBody;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tCyclicHandler_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCyclicHandler_CB_tab           tCyclicHandler_INIB_tab
#define tCyclicHandler_SINGLE_CELL_CB   tCyclicHandler_SINGLE_CELL_INIB
#define tCyclicHandler_CB               tCyclicHandler_INIB
#define tag_tCyclicHandler_CB           tag_tCyclicHandler_INIB

extern tCyclicHandler_CB  tCyclicHandler_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCyclicHandler_INIB *tCyclicHandler_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sCyclic */
Inline ER           tCyclicHandler_eCyclic_start(tCyclicHandler_IDX idx);
Inline ER           tCyclicHandler_eCyclic_stop(tCyclicHandler_IDX idx);
Inline ER           tCyclicHandler_eCyclic_refer(tCyclicHandler_IDX idx, T_RCYC* pk_cyclicHandlerStatus);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCyclicHandler_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCyclicHandler_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCyclicHandler_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCyclicHandler_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tCyclicHandler_ATTR_id( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ciBody_main( ) \
                      tCyclicHandler_ciBody_main( p_cellcb ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eCyclic_start    tCyclicHandler_eCyclic_start
#define eCyclic_stop     tCyclicHandler_eCyclic_stop
#define eCyclic_refer    tCyclicHandler_eCyclic_refer

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCyclicHandler_N_CELL; (i)++ ){ \
       (p_cb) = &tCyclicHandler_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tCyclicHandler_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_id
#undef tCyclicHandler_ATTR_id
#undef tCyclicHandler_GET_id
#undef ATTR_attribute
#undef tCyclicHandler_ATTR_attribute
#undef tCyclicHandler_GET_attribute
#undef ATTR_cyclicTime
#undef tCyclicHandler_ATTR_cyclicTime
#undef tCyclicHandler_GET_cyclicTime
#undef ATTR_cyclicPhase
#undef tCyclicHandler_ATTR_cyclicPhase
#undef tCyclicHandler_GET_cyclicPhase
#undef tCyclicHandler_ciBody_main
#undef ciBody_main
#undef eCyclic_start
#undef eCyclic_stop
#undef eCyclic_refer
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tCyclicHandler_TECSGEN_H */
