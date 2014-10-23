/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSoundBody_TECSGEN_H
#define tSoundBody_TECSGEN_H

/*
 * celltype    :  tSoundBody
 * global name :  tSoundBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSound_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSoundBody_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tSoundBody_ATTR_maxTonePattern	(tSoundBody_SINGLE_CELL_INIB.maxTonePattern)

#define tSoundBody_GET_maxTonePattern()	(tSoundBody_SINGLE_CELL_INIB.maxTonePattern)


/* var アクセスマクロ #_VAM_# */
#define tSoundBody_VAR_toneCycles	(tSoundBody_SINGLE_CELL_CB.toneCycles)
#define tSoundBody_VAR_tonePattern	(tSoundBody_SINGLE_CELL_INIB.tonePattern)
#define tSoundBody_VAR_volume	(tSoundBody_SINGLE_CELL_CB.volume)

#define tSoundBody_GET_toneCycles()	(tSoundBody_SINGLE_CELL_CB.toneCycles)
#define tSoundBody_SET_toneCycles(val)	(tSoundBody_SINGLE_CELL_CB.toneCycles=(val))
#define tSoundBody_GET_tonePattern()	(tSoundBody_SINGLE_CELL_CB.tonePattern)
#define tSoundBody_SET_tonePattern(val)	(tSoundBody_SINGLE_CELL_CB.tonePattern=(val))
#define tSoundBody_GET_volume()	(tSoundBody_SINGLE_CELL_CB.volume)
#define tSoundBody_SET_volume(val)	(tSoundBody_SINGLE_CELL_CB.volume=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSoundBody_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    const const uint32_t* maxTonePattern;
    uint32_t*      tonePattern;
}  tSoundBody_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSoundBody_CB {
    tSoundBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint32_t       toneCycles;
    int8_t         volume;
}  tSoundBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSoundBody_CB  tSoundBody_SINGLE_CELL_CB;
extern  tSoundBody_INIB  tSoundBody_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSoundBody_CB *tSoundBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSound */
void         tSoundBody_eSound_beepTone( uint32_t frequency, uint32_t msecond);
void         tSoundBody_eSound_setVolume( uint8_t volume);
/* sInitializeRoutineBody */
void         tSoundBody_eInitialize_main();
/* siHandlerBody */
void         tSoundBody_eiBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSoundBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSoundBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSoundBody_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_maxTonePattern  tSoundBody_ATTR_maxTonePattern


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_toneCycles       tSoundBody_VAR_toneCycles
#define VAR_tonePattern      tSoundBody_VAR_tonePattern
#define VAR_volume           tSoundBody_VAR_volume


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSound_beepTone  tSoundBody_eSound_beepTone
#define eSound_setVolume tSoundBody_eSound_setVolume
#define eInitialize_main tSoundBody_eInitialize_main
#define eiBody_main      tSoundBody_eiBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tSoundBody_SINGLE_CELL_CB.volume = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	tSoundBody_SINGLE_CELL_CB._inib = &tSoundBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSoundBody_TECSGEN_H */
