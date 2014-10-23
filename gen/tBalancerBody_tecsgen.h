/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tBalancerBody_TECSGEN_H
#define tBalancerBody_TECSGEN_H

/*
 * celltype    :  tBalancerBody
 * global name :  tBalancerBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sBalancer_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"


/* セルCBを得るマクロ #_GCB_# */
#define tBalancerBody_GET_CELLCB(idx) ((void *)0)
#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tBalancerBody_CB {
    int  dummy;
} tBalancerBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tBalancerBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sBalancer */
Inline void         tBalancerBody_eBalancer_control( int16_t forward, int16_t turn, uint16_t gyro, uint16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, uint16_t battery, int8_t* pwm_l, int8_t* pwm_r);
/* sInitializeRoutineBody */
Inline void         tBalancerBody_eInitialize_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tBalancerBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tBalancerBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tBalancerBody_IDX


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBalancer_control tBalancerBody_eBalancer_control
#define eInitialize_main tBalancerBody_eInitialize_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#include "balancer.h"
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "tBalancerBody_inline.h"

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
#undef eBalancer_control
#undef eInitialize_main
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tBalancerBody_TECSGEN_H */
