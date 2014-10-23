/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAlarmHandler_TECSGEN_H
#define tAlarmHandler_TECSGEN_H

/*
 * celltype    :  tAlarmHandler
 * global name :  tAlarmHandler
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sAlarm_tecsgen.h"
#include "siAlarm_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tAlarmHandler_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tBluetoothBody_tecsgen.h"
#ifdef  tAlarmHandler_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tAlarmHandler_CB_TYPE_ONLY */
#define tAlarmHandler_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tAlarmHandler_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAlarmHandler_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAlarmHandler_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAlarmHandler_ATTR_id( p_that )	((p_that)->id)

#define tAlarmHandler_GET_id(p_that)	((p_that)->id)



 /* 呼び口関数マクロ #_CPM_# */
#define tAlarmHandler_ciBody_main( p_that ) \
	  tBluetoothBody_eiAlarmBody_main( \
	    )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tAlarmHandler_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tAlarmHandler_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tAlarmHandler_CB_tab           tAlarmHandler_INIB_tab
#define tAlarmHandler_SINGLE_CELL_CB   tAlarmHandler_SINGLE_CELL_INIB
#define tAlarmHandler_CB               tAlarmHandler_INIB
#define tag_tAlarmHandler_CB           tag_tAlarmHandler_INIB

extern tAlarmHandler_CB  tAlarmHandler_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tAlarmHandler_INIB *tAlarmHandler_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sAlarm */
Inline ER           tAlarmHandler_eAlarm_start(tAlarmHandler_IDX idx, RELTIM alarmTime);
Inline ER           tAlarmHandler_eAlarm_stop(tAlarmHandler_IDX idx);
Inline ER           tAlarmHandler_eAlarm_refer(tAlarmHandler_IDX idx, T_RALM* pk_alarmStatus);
/* siAlarm */
Inline ER           tAlarmHandler_eiAlarm_start(tAlarmHandler_IDX idx, RELTIM alarmTime);
Inline ER           tAlarmHandler_eiAlarm_stop(tAlarmHandler_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tAlarmHandler_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAlarmHandler_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAlarmHandler_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAlarmHandler_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tAlarmHandler_ATTR_id( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ciBody_main( ) \
                      tAlarmHandler_ciBody_main( p_cellcb ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eAlarm_start     tAlarmHandler_eAlarm_start
#define eAlarm_stop      tAlarmHandler_eAlarm_stop
#define eAlarm_refer     tAlarmHandler_eAlarm_refer
#define eiAlarm_start    tAlarmHandler_eiAlarm_start
#define eiAlarm_stop     tAlarmHandler_eiAlarm_stop

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAlarmHandler_N_CELL; (i)++ ){ \
       (p_cb) = &tAlarmHandler_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tAlarmHandler_inline.h"

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
#undef tAlarmHandler_ATTR_id
#undef tAlarmHandler_GET_id
#undef ATTR_attribute
#undef tAlarmHandler_ATTR_attribute
#undef tAlarmHandler_GET_attribute
#undef tAlarmHandler_ciBody_main
#undef ciBody_main
#undef eAlarm_start
#undef eAlarm_stop
#undef eAlarm_refer
#undef eiAlarm_start
#undef eiAlarm_stop
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tAlarmHandler_TECSGEN_H */
