/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tLightSensorBody_TECSGEN_H
#define tLightSensorBody_TECSGEN_H

/*
 * celltype    :  tLightSensorBody
 * global name :  tLightSensorBody
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
#include "sSensorControl_tecsgen.h"
#include "siSensorDriver_tecsgen.h"
#include "sTerminateRoutineBody_tecsgen.h"
#include "sSensorPort_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLightSensorBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSensorPort_tecsgen.h"
#ifdef  tLightSensorBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLightSensorBody_CB_TYPE_ONLY */
#define tLightSensorBody_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tLightSensorBody_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tLightSensorBody_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tLightSensorBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tLightSensorBody_cSensorPort_clearSCL( p_that ) \
	  tSensorPort_eSensorPort_clearSCL( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_clearSDA( p_that ) \
	  tSensorPort_eSensorPort_clearSDA( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_setSCL( p_that ) \
	  tSensorPort_eSensorPort_setSCL( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_setSDA( p_that ) \
	  tSensorPort_eSensorPort_setSDA( \
	   &tSensorPort_CB_tab[2] )
#define tLightSensorBody_cSensorPort_inputPower( p_that, powerType ) \
	  tSensorPort_eSensorPort_inputPower( \
	   &tSensorPort_CB_tab[2], (powerType) )
#define tLightSensorBody_cSensorPort_getValue( p_that ) \
	  tSensorPort_eSensorPort_getValue( \
	   &tSensorPort_CB_tab[2] )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tLightSensorBody_CB {
    int  dummy;
} tLightSensorBody_CB;
extern tLightSensorBody_CB  tLightSensorBody_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tLightSensorBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSensor */
Inline void         tLightSensorBody_eSensor_getValue(tLightSensorBody_IDX idx, uint16_t* value);
/* sSensorControl */
Inline void         tLightSensorBody_eSensorControl_on(tLightSensorBody_IDX idx);
Inline void         tLightSensorBody_eSensorControl_off(tLightSensorBody_IDX idx);
/* siSensorDriver */
Inline void         tLightSensorBody_eiSensorDriver_initialize(tLightSensorBody_IDX idx);
Inline void         tLightSensorBody_eiSensorDriver_i2cInterruptBody(tLightSensorBody_IDX idx, uint32_t inputs);
/* sTerminateRoutineBody */
Inline void         tLightSensorBody_eTerminate_main(tLightSensorBody_IDX idx);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tLightSensorBody_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tLightSensorBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tLightSensorBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tLightSensorBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSensorPort_clearSCL( ) \
                      tLightSensorBody_cSensorPort_clearSCL( p_cellcb ) 
#define cSensorPort_clearSDA( ) \
                      tLightSensorBody_cSensorPort_clearSDA( p_cellcb ) 
#define cSensorPort_setSCL( ) \
                      tLightSensorBody_cSensorPort_setSCL( p_cellcb ) 
#define cSensorPort_setSDA( ) \
                      tLightSensorBody_cSensorPort_setSDA( p_cellcb ) 
#define cSensorPort_inputPower( powerType ) \
                      tLightSensorBody_cSensorPort_inputPower( p_cellcb, powerType ) 
#define cSensorPort_getValue( ) \
                      tLightSensorBody_cSensorPort_getValue( p_cellcb ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSensor_getValue tLightSensorBody_eSensor_getValue
#define eSensorControl_on tLightSensorBody_eSensorControl_on
#define eSensorControl_off tLightSensorBody_eSensorControl_off
#define eiSensorDriver_initialize tLightSensorBody_eiSensorDriver_initialize
#define eiSensorDriver_i2cInterruptBody tLightSensorBody_eiSensorDriver_i2cInterruptBody
#define eTerminate_main  tLightSensorBody_eTerminate_main

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
#include "tLightSensorBody_inline.h"

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
#undef tLightSensorBody_cSensorPort_clearSCL
#undef cSensorPort_clearSCL
#undef tLightSensorBody_cSensorPort_clearSDA
#undef cSensorPort_clearSDA
#undef tLightSensorBody_cSensorPort_setSCL
#undef cSensorPort_setSCL
#undef tLightSensorBody_cSensorPort_setSDA
#undef cSensorPort_setSDA
#undef tLightSensorBody_cSensorPort_inputPower
#undef cSensorPort_inputPower
#undef tLightSensorBody_cSensorPort_getValue
#undef cSensorPort_getValue
#undef eSensor_getValue
#undef eSensorControl_on
#undef eSensorControl_off
#undef eiSensorDriver_initialize
#undef eiSensorDriver_i2cInterruptBody
#undef eTerminate_main
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tLightSensorBody_TECSGEN_H */
