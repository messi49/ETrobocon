/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSPIBody_TECSGEN_H
#define tSPIBody_TECSGEN_H

/*
 * celltype    :  tSPIBody
 * global name :  tSPIBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  false
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSPI_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSPIBody_GET_CELLCB(idx) ((void *)0)



/* var アクセスマクロ #_VAM_# */
#define tSPIBody_VAR_display	(tSPIBody_SINGLE_CELL_CB.display)
#define tSPIBody_VAR_dirty  	(tSPIBody_SINGLE_CELL_CB.dirty)
#define tSPIBody_VAR_page   	(tSPIBody_SINGLE_CELL_CB.page)
#define tSPIBody_VAR_data   	(tSPIBody_SINGLE_CELL_CB.data)
#define tSPIBody_VAR_mode   	(tSPIBody_SINGLE_CELL_CB.mode)

#define tSPIBody_GET_display()	(tSPIBody_SINGLE_CELL_CB.display)
#define tSPIBody_SET_display(val)	(tSPIBody_SINGLE_CELL_CB.display=(val))
#define tSPIBody_GET_dirty()	(tSPIBody_SINGLE_CELL_CB.dirty)
#define tSPIBody_SET_dirty(val)	(tSPIBody_SINGLE_CELL_CB.dirty=(val))
#define tSPIBody_GET_page() 	(tSPIBody_SINGLE_CELL_CB.page)
#define tSPIBody_SET_page(val)	(tSPIBody_SINGLE_CELL_CB.page=(val))
#define tSPIBody_GET_data() 	(tSPIBody_SINGLE_CELL_CB.data)
#define tSPIBody_SET_data(val)	(tSPIBody_SINGLE_CELL_CB.data=(val))
#define tSPIBody_GET_mode() 	(tSPIBody_SINGLE_CELL_CB.mode)
#define tSPIBody_SET_mode(val)	(tSPIBody_SINGLE_CELL_CB.mode=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSPIBody_CB {
    /* var #_VA_# */ 
    uint8_t*       display;
    volatile bool_t dirty;
    volatile uint8_t page;
    volatile uint8_t* data;
    uint8_t        mode;
}  tSPIBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSPIBody_CB  tSPIBody_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSPIBody_CB *tSPIBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSPI */
void         tSPIBody_eSPI_initialize();
void         tSPIBody_eSPI_write( uint32_t CD, const uint8_t* data, uint32_t nBytes);
void         tSPIBody_eSPI_setDisplay( const uint8_t* display);
void         tSPIBody_eSPI_refresh();
/* siHandlerBody */
void         tSPIBody_eiInterruptBody_main();

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSPIBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSPIBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSPIBody_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_display          tSPIBody_VAR_display
#define VAR_dirty            tSPIBody_VAR_dirty
#define VAR_page             tSPIBody_VAR_page
#define VAR_data             tSPIBody_VAR_data
#define VAR_mode             tSPIBody_VAR_mode


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSPI_initialize  tSPIBody_eSPI_initialize
#define eSPI_write       tSPIBody_eSPI_write
#define eSPI_setDisplay  tSPIBody_eSPI_setDisplay
#define eSPI_refresh     tSPIBody_eSPI_refresh
#define eiInterruptBody_main tSPIBody_eiInterruptBody_main

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSPIBody_TECSGEN_H */
