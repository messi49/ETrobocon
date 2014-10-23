/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tConfigInterrupt_TECSGEN_H
#define tConfigInterrupt_TECSGEN_H

/*
 * celltype    :  tConfigInterrupt
 * global name :  tConfigInterrupt
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sConfigInterrupt_tecsgen.h"

#define tConfigInterrupt_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tConfigInterrupt_N_CELL        (6)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tConfigInterrupt_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tConfigInterrupt_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tConfigInterrupt_ATTR_interruptNumber( p_that )	((p_that)->interruptNumber)

#define tConfigInterrupt_GET_interruptNumber(p_that)	((p_that)->interruptNumber)



#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tConfigInterrupt_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    INTNO          interruptNumber;
}  tConfigInterrupt_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tConfigInterrupt_CB_tab           tConfigInterrupt_INIB_tab
#define tConfigInterrupt_SINGLE_CELL_CB   tConfigInterrupt_SINGLE_CELL_INIB
#define tConfigInterrupt_CB               tConfigInterrupt_INIB
#define tag_tConfigInterrupt_CB           tag_tConfigInterrupt_INIB

extern tConfigInterrupt_CB  tConfigInterrupt_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tConfigInterrupt_INIB *tConfigInterrupt_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sConfigInterrupt */
Inline ER           tConfigInterrupt_eConfigInterrupt_disable(tConfigInterrupt_IDX idx);
Inline ER           tConfigInterrupt_eConfigInterrupt_enable(tConfigInterrupt_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tConfigInterrupt_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tConfigInterrupt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tConfigInterrupt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tConfigInterrupt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_interruptNumber tConfigInterrupt_ATTR_interruptNumber( p_cellcb )



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eConfigInterrupt_disable tConfigInterrupt_eConfigInterrupt_disable
#define eConfigInterrupt_enable tConfigInterrupt_eConfigInterrupt_enable

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tConfigInterrupt_N_CELL; (i)++ ){ \
       (p_cb) = &tConfigInterrupt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tConfigInterrupt_inline.h"

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
#undef ATTR_interruptNumber
#undef tConfigInterrupt_ATTR_interruptNumber
#undef tConfigInterrupt_GET_interruptNumber
#undef ATTR_attribute
#undef tConfigInterrupt_ATTR_attribute
#undef tConfigInterrupt_GET_attribute
#undef ATTR_interruptPriority
#undef tConfigInterrupt_ATTR_interruptPriority
#undef tConfigInterrupt_GET_interruptPriority
#undef eConfigInterrupt_disable
#undef eConfigInterrupt_enable
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tConfigInterrupt_TECSGEN_H */
