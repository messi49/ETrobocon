/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPrintDisplayTaskBody_TECSGEN_H
#define tPrintDisplayTaskBody_TECSGEN_H

/*
 * celltype    :  tPrintDisplayTaskBody
 * global name :  tPrintDisplayTaskBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  false
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sPrintDisplayControl_tecsgen.h"
#include "sDisplay_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPrintDisplayTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tDisplayBody_tecsgen.h"
#ifdef  tPrintDisplayTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPrintDisplayTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tPrintDisplayTaskBody_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tPrintDisplayTaskBody_cDisplay_update( ) \
	  tDisplayBody_eDisplay_update( \
	    )
#define tPrintDisplayTaskBody_cDisplay_clear( updateToo ) \
	  tDisplayBody_eDisplay_clear( \
	    (updateToo) )
#define tPrintDisplayTaskBody_cDisplay_gotoXY( x, y ) \
	  tDisplayBody_eDisplay_gotoXY( \
	    (x), (y) )
#define tPrintDisplayTaskBody_cDisplay_putChar( c ) \
	  tDisplayBody_eDisplay_putChar( \
	    (c) )
#define tPrintDisplayTaskBody_cDisplay_putString( string ) \
	  tDisplayBody_eDisplay_putString( \
	    (string) )
#define tPrintDisplayTaskBody_cDisplay_putInt( val, places ) \
	  tDisplayBody_eDisplay_putInt( \
	    (val), (places) )
#define tPrintDisplayTaskBody_cDisplay_putUnsigned( val, places ) \
	  tDisplayBody_eDisplay_putUnsigned( \
	    (val), (places) )
#define tPrintDisplayTaskBody_cDisplay_putHex( val, places ) \
	  tDisplayBody_eDisplay_putHex( \
	    (val), (places) )
#define tPrintDisplayTaskBody_cDisplay_getBuffer( ) \
	  tDisplayBody_eDisplay_getBuffer( \
	    )
#define tPrintDisplayTaskBody_cDisplay_powerOff( updateToo ) \
	  tDisplayBody_eDisplay_powerOff( \
	    (updateToo) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tPrintDisplayTaskBody_CB {
    int  dummy;
} tPrintDisplayTaskBody_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */


/* セルタイプのIDX型 #_CTIX_# */
typedef int   tPrintDisplayTaskBody_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sPrintDisplayControl */
void         tPrintDisplayTaskBody_ePrintDisplayControl_print_str();
void         tPrintDisplayTaskBody_ePrintDisplayControl_print_k( const char* string1, int16_t value1);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print1( int16_t value1);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print2( int16_t value1, int16_t value2);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print3( int16_t value1, int16_t value2, int16_t value3);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print4( int16_t value1, int16_t value2, int16_t value3, int16_t value4);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print5( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print6( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6);
void         tPrintDisplayTaskBody_ePrintDisplayControl_print7( int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6, int16_t value7);
void         tPrintDisplayTaskBody_ePrintDisplayControl_printS1( const char* string1, int16_t value1);
void         tPrintDisplayTaskBody_ePrintDisplayControl_printS2( const char* string1, int16_t value1, const char* string2, int16_t value2);
void         tPrintDisplayTaskBody_ePrintDisplayControl_printS3( const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPrintDisplayTaskBody_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPrintDisplayTaskBody_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPrintDisplayTaskBody_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cDisplay_update( ) \
                      tPrintDisplayTaskBody_cDisplay_update( ) 
#define cDisplay_clear( updateToo ) \
                      tPrintDisplayTaskBody_cDisplay_clear( updateToo ) 
#define cDisplay_gotoXY( x, y ) \
                      tPrintDisplayTaskBody_cDisplay_gotoXY( x, y ) 
#define cDisplay_putChar( c ) \
                      tPrintDisplayTaskBody_cDisplay_putChar( c ) 
#define cDisplay_putString( string ) \
                      tPrintDisplayTaskBody_cDisplay_putString( string ) 
#define cDisplay_putInt( val, places ) \
                      tPrintDisplayTaskBody_cDisplay_putInt( val, places ) 
#define cDisplay_putUnsigned( val, places ) \
                      tPrintDisplayTaskBody_cDisplay_putUnsigned( val, places ) 
#define cDisplay_putHex( val, places ) \
                      tPrintDisplayTaskBody_cDisplay_putHex( val, places ) 
#define cDisplay_getBuffer( ) \
                      tPrintDisplayTaskBody_cDisplay_getBuffer( ) 
#define cDisplay_powerOff( updateToo ) \
                      tPrintDisplayTaskBody_cDisplay_powerOff( updateToo ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define ePrintDisplayControl_print_str tPrintDisplayTaskBody_ePrintDisplayControl_print_str
#define ePrintDisplayControl_print_k tPrintDisplayTaskBody_ePrintDisplayControl_print_k
#define ePrintDisplayControl_print1 tPrintDisplayTaskBody_ePrintDisplayControl_print1
#define ePrintDisplayControl_print2 tPrintDisplayTaskBody_ePrintDisplayControl_print2
#define ePrintDisplayControl_print3 tPrintDisplayTaskBody_ePrintDisplayControl_print3
#define ePrintDisplayControl_print4 tPrintDisplayTaskBody_ePrintDisplayControl_print4
#define ePrintDisplayControl_print5 tPrintDisplayTaskBody_ePrintDisplayControl_print5
#define ePrintDisplayControl_print6 tPrintDisplayTaskBody_ePrintDisplayControl_print6
#define ePrintDisplayControl_print7 tPrintDisplayTaskBody_ePrintDisplayControl_print7
#define ePrintDisplayControl_printS1 tPrintDisplayTaskBody_ePrintDisplayControl_printS1
#define ePrintDisplayControl_printS2 tPrintDisplayTaskBody_ePrintDisplayControl_printS2
#define ePrintDisplayControl_printS3 tPrintDisplayTaskBody_ePrintDisplayControl_printS3

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPrintDisplayTaskBody_TECSGEN_H */
