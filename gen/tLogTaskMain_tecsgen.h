/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tLogTaskMain_TECSGEN_H
#define tLogTaskMain_TECSGEN_H

/*
 * celltype    :  tLogTaskMain
 * global name :  tLogTaskMain
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  false
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sLogTask_tecsgen.h"
#include "sSerialPort_tecsgen.h"
#include "snSerialPort_tecsgen.h"
#include "sSysLog_tecsgen.h"
#include "sPutLog_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLogTaskMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSerialPortMain_tecsgen.h"
#include "tSysLog_tecsgen.h"
#include "tPutLogMindstormsNXT_tecsgen.h"
#ifdef  tLogTaskMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLogTaskMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tLogTaskMain_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tLogTaskMain_ATTR_interval	(tLogTaskMain_SINGLE_CELL_INIB.interval)
#define tLogTaskMain_ATTR_flushWait	(tLogTaskMain_SINGLE_CELL_INIB.flushWait)

#define tLogTaskMain_GET_interval()	(tLogTaskMain_SINGLE_CELL_INIB.interval)
#define tLogTaskMain_GET_flushWait()	(tLogTaskMain_SINGLE_CELL_INIB.flushWait)



 /* 呼び口関数マクロ #_CPM_# */
#define tLogTaskMain_cSerialPort_open( ) \
	  tSerialPortMain_eSerialPort_open( \
	   &tSerialPortMain_CB_tab[0] )
#define tLogTaskMain_cSerialPort_close( ) \
	  tSerialPortMain_eSerialPort_close( \
	   &tSerialPortMain_CB_tab[0] )
#define tLogTaskMain_cSerialPort_read( buffer, length ) \
	  tSerialPortMain_eSerialPort_read( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tLogTaskMain_cSerialPort_write( buffer, length ) \
	  tSerialPortMain_eSerialPort_write( \
	   &tSerialPortMain_CB_tab[0], (buffer), (length) )
#define tLogTaskMain_cSerialPort_control( ioControl ) \
	  tSerialPortMain_eSerialPort_control( \
	   &tSerialPortMain_CB_tab[0], (ioControl) )
#define tLogTaskMain_cSerialPort_refer( pk_rpor ) \
	  tSerialPortMain_eSerialPort_refer( \
	   &tSerialPortMain_CB_tab[0], (pk_rpor) )
#define tLogTaskMain_cnSerialPort_getChar( p_char ) \
	  tSerialPortMain_enSerialPort_getChar( \
	   &tSerialPortMain_CB_tab[0], (p_char) )
#define tLogTaskMain_cSysLog_write( priority, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (priority), (p_syslog) )
#define tLogTaskMain_cSysLog_read( p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tLogTaskMain_cSysLog_mask( logMask, lowMask ) \
	  tSysLog_eSysLog_mask( \
	    (logMask), (lowMask) )
#define tLogTaskMain_cSysLog_refer( pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tLogTaskMain_cPutLog_putChar( c ) \
	  tPutLogMindstormsNXT_ePutLog_putChar( \
	   &tPutLogMindstormsNXT_CB_tab[0], (c) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tLogTaskMain_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    RELTIM         interval;
    RELTIM         flushWait;
}  tLogTaskMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tLogTaskMain_CB_tab           tLogTaskMain_INIB_tab
#define tLogTaskMain_SINGLE_CELL_CB   tLogTaskMain_SINGLE_CELL_INIB
#define tLogTaskMain_CB               tLogTaskMain_INIB
#define tag_tLogTaskMain_CB           tag_tLogTaskMain_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tLogTaskMain_INIB  tLogTaskMain_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tLogTaskMain_INIB *tLogTaskMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tLogTaskMain_eLogTaskBody_main();
/* sLogTask */
ER           tLogTaskMain_eLogTask_flush( uint_t count);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tLogTaskMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tLogTaskMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tLogTaskMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_interval        tLogTaskMain_ATTR_interval
#define ATTR_flushWait       tLogTaskMain_ATTR_flushWait


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cSerialPort_open( ) \
                      tLogTaskMain_cSerialPort_open( ) 
#define cSerialPort_close( ) \
                      tLogTaskMain_cSerialPort_close( ) 
#define cSerialPort_read( buffer, length ) \
                      tLogTaskMain_cSerialPort_read( buffer, length ) 
#define cSerialPort_write( buffer, length ) \
                      tLogTaskMain_cSerialPort_write( buffer, length ) 
#define cSerialPort_control( ioControl ) \
                      tLogTaskMain_cSerialPort_control( ioControl ) 
#define cSerialPort_refer( pk_rpor ) \
                      tLogTaskMain_cSerialPort_refer( pk_rpor ) 
#define cnSerialPort_getChar( p_char ) \
                      tLogTaskMain_cnSerialPort_getChar( p_char ) 
#define cSysLog_write( priority, p_syslog ) \
                      tLogTaskMain_cSysLog_write( priority, p_syslog ) 
#define cSysLog_read( p_syslog ) \
                      tLogTaskMain_cSysLog_read( p_syslog ) 
#define cSysLog_mask( logMask, lowMask ) \
                      tLogTaskMain_cSysLog_mask( logMask, lowMask ) 
#define cSysLog_refer( pk_rlog ) \
                      tLogTaskMain_cSysLog_refer( pk_rlog ) 
#define cPutLog_putChar( c ) \
                      tLogTaskMain_cPutLog_putChar( c ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eLogTaskBody_main tLogTaskMain_eLogTaskBody_main
#define eLogTask_flush   tLogTaskMain_eLogTask_flush

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLogTaskMain_TECSGEN_H */
