/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tGyroSensorBody_TECSGEN_H
#define tGyroSensorBody_TECSGEN_H

/*
 * celltype    :  tGyroSensorBody
 * global name :  tGyroSensorBody
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSensor_tecsgen.h"
#include "siSensorDriver_tecsgen.h"
#include "sSensorPort_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tGyroSensorBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSensorPort_tecsgen.h"
#ifdef  tGyroSensorBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tGyroSensorBody_CB_TYPE_ONLY */
#define tGyroSensorBody_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tGyroSensorBody_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tGyroSensorBody_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tGyroSensorBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tGyroSensorBody_cSensorPort_clearSCL( p_that ) \
	  tSensorPort_eSensorPort_clearSCL( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_clearSDA( p_that ) \
	  tSensorPort_eSensorPort_clearSDA( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_setSCL( p_that ) \
	  tSensorPort_eSensorPort_setSCL( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_setSDA( p_that ) \
	  tSensorPort_eSensorPort_setSDA( \
	   &tSensorPort_CB_tab[0] )
#define tGyroSensorBody_cSensorPort_inputPower( p_that, powerType ) \
	  tSensorPort_eSensorPort_inputPower( \
	   &tSensorPort_CB_tab[0], (powerType) )
#define tGyroSensorBody_cSensorPort_getValue( p_that ) \
	  tSensorPort_eSensorPort_getValue( \
	   &tSensorPort_CB_tab[0] )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tGyroSensorBody_CB {
    int  dummy;
} tGyroSensorBody_CB;
extern tGyroSensorBody_CB  tGyroSensorBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tGyroSensorBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSensor */
Inline void         tGyroSensorBody_eSensor_getValue(tGyroSensorBody_IDX idx, uint16_t* value);
/* siSensorDriver */
Inline void         tGyroSensorBody_eiSensorDriver_initialize(tGyroSensorBody_IDX idx);
Inline void         tGyroSensorBody_eiSensorDriver_i2cInterruptBody(tGyroSensorBody_IDX idx, uint32_t inputs);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tGyroSensorBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tGyroSensorBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tGyroSensorBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tGyroSensorBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSensorPort_clearSCL( ) \
                      tGyroSensorBody_cSensorPort_clearSCL( p_cellcb ) 
#define cSensorPort_clearSDA( ) \
                      tGyroSensorBody_cSensorPort_clearSDA( p_cellcb ) 
#define cSensorPort_setSCL( ) \
                      tGyroSensorBody_cSensorPort_setSCL( p_cellcb ) 
#define cSensorPort_setSDA( ) \
                      tGyroSensorBody_cSensorPort_setSDA( p_cellcb ) 
#define cSensorPort_inputPower( powerType ) \
                      tGyroSensorBody_cSensorPort_inputPower( p_cellcb, powerType ) 
#define cSensorPort_getValue( ) \
                      tGyroSensorBody_cSensorPort_getValue( p_cellcb ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSensor_getValue tGyroSensorBody_eSensor_getValue
#define eiSensorDriver_initialize tGyroSensorBody_eiSensorDriver_initialize
#define eiSensorDriver_i2cInterruptBody tGyroSensorBody_eiSensorDriver_i2cInterruptBody

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tGyroSensorBody_inline.h"

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
#undef tGyroSensorBody_cSensorPort_clearSCL
#undef cSensorPort_clearSCL
#undef tGyroSensorBody_cSensorPort_clearSDA
#undef cSensorPort_clearSDA
#undef tGyroSensorBody_cSensorPort_setSCL
#undef cSensorPort_setSCL
#undef tGyroSensorBody_cSensorPort_setSDA
#undef cSensorPort_setSDA
#undef tGyroSensorBody_cSensorPort_inputPower
#undef cSensorPort_inputPower
#undef tGyroSensorBody_cSensorPort_getValue
#undef cSensorPort_getValue
#undef eSensor_getValue
#undef eiSensorDriver_initialize
#undef eiSensorDriver_i2cInterruptBody
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tGyroSensorBody_TECSGEN_H */
