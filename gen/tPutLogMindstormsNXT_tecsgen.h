/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPutLogMindstormsNXT_TECSGEN_H
#define tPutLogMindstormsNXT_TECSGEN_H

/*
 * celltype    :  tPutLogMindstormsNXT
 * global name :  tPutLogMindstormsNXT
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sPutLog_tecsgen.h"
#include "sBluetooth_tecsgen.h"
#include "sSIOPort_tecsgen.h"

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPutLogMindstormsNXT_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tBluetoothBody_tecsgen.h"
#include "tSIOPortMindstormsNXT_tecsgen.h"
#ifdef  tPutLogMindstormsNXT_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPutLogMindstormsNXT_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tPutLogMindstormsNXT_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tPutLogMindstormsNXT_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tPutLogMindstormsNXT_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tPutLogMindstormsNXT_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tPutLogMindstormsNXT_ATTR_US1_BASE( p_that )	((p_that)->_inib->US1_BASE)
#define tPutLogMindstormsNXT_ATTR_sendBufferSize( p_that )	((p_that)->_inib->sendBufferSize)
#define tPutLogMindstormsNXT_ATTR_sendBufferPointerInitialize( p_that )	((p_that)->_inib->sendBufferPointerInitialize)

#define tPutLogMindstormsNXT_GET_US1_BASE(p_that)	((p_that)->_inib->US1_BASE)
#define tPutLogMindstormsNXT_GET_sendBufferSize(p_that)	((p_that)->_inib->sendBufferSize)
#define tPutLogMindstormsNXT_GET_sendBufferPointerInitialize(p_that)	((p_that)->_inib->sendBufferPointerInitialize)


/* var アクセスマクロ #_VAM_# */
#define tPutLogMindstormsNXT_VAR_sendBuffer1(p_that)	((p_that)->_inib->sendBuffer1)
#define tPutLogMindstormsNXT_VAR_sendBuffer2(p_that)	((p_that)->_inib->sendBuffer2)
#define tPutLogMindstormsNXT_VAR_sendBufferPointer(p_that)	((p_that)->sendBufferPointer)
#define tPutLogMindstormsNXT_VAR_sendBufferCount(p_that)	((p_that)->sendBufferCount)

#define tPutLogMindstormsNXT_GET_sendBuffer1(p_that)	((p_that)->sendBuffer1)
#define tPutLogMindstormsNXT_SET_sendBuffer1(p_that,val)	((p_that)->sendBuffer1=(val))
#define tPutLogMindstormsNXT_GET_sendBuffer2(p_that)	((p_that)->sendBuffer2)
#define tPutLogMindstormsNXT_SET_sendBuffer2(p_that,val)	((p_that)->sendBuffer2=(val))
#define tPutLogMindstormsNXT_GET_sendBufferPointer(p_that)	((p_that)->sendBufferPointer)
#define tPutLogMindstormsNXT_SET_sendBufferPointer(p_that,val)	((p_that)->sendBufferPointer=(val))
#define tPutLogMindstormsNXT_GET_sendBufferCount(p_that)	((p_that)->sendBufferCount)
#define tPutLogMindstormsNXT_SET_sendBufferCount(p_that,val)	((p_that)->sendBufferCount=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tPutLogMindstormsNXT_cBluetooth_open( p_that ) \
	  tBluetoothBody_eBluetooth_open( \
	    )
#define tPutLogMindstormsNXT_cBluetooth_getLocalAddress( p_that, address ) \
	  tBluetoothBody_eBluetooth_getLocalAddress( \
	    (address) )
#define tPutLogMindstormsNXT_cBluetooth_getDeviceName( p_that, name ) \
	  tBluetoothBody_eBluetooth_getDeviceName( \
	    (name) )
#define tPutLogMindstormsNXT_cBluetooth_setDeviceName( p_that, name ) \
	  tBluetoothBody_eBluetooth_setDeviceName( \
	    (name) )
#define tPutLogMindstormsNXT_cBluetooth_setFactorySetting( p_that ) \
	  tBluetoothBody_eBluetooth_setFactorySetting( \
	    )
#define tPutLogMindstormsNXT_cBluetooth_initializeMaster( p_that, address ) \
	  tBluetoothBody_eBluetooth_initializeMaster( \
	    (address) )
#define tPutLogMindstormsNXT_cBluetooth_initializeSlave( p_that ) \
	  tBluetoothBody_eBluetooth_initializeSlave( \
	    )
#define tPutLogMindstormsNXT_cBluetooth_terminateConnection( p_that ) \
	  tBluetoothBody_eBluetooth_terminateConnection( \
	    )
#define tPutLogMindstormsNXT_cBluetooth_sendPacket( p_that, buffer, length ) \
	  tBluetoothBody_eBluetooth_sendPacket( \
	    (buffer), (length) )
#define tPutLogMindstormsNXT_cBluetooth_readPacket( p_that, buffer, length ) \
	  tBluetoothBody_eBluetooth_readPacket( \
	    (buffer), (length) )
#define tPutLogMindstormsNXT_cBluetooth_isConnected( p_that ) \
	  tBluetoothBody_eBluetooth_isConnected( \
	    )
#define tPutLogMindstormsNXT_cSIOPort_waitReady( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_waitReady( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tPutLogMindstormsNXT_cSIOPort_isOpened( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_isOpened( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tPutLogMindstormsNXT_cSIOPort_open( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_open( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tPutLogMindstormsNXT_cSIOPort_close( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_close( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tPutLogMindstormsNXT_cSIOPort_putChar( p_that, c ) \
	  tSIOPortMindstormsNXT_eSIOPort_putChar( \
	   &tSIOPortMindstormsNXT_CB_tab[0], (c) )
#define tPutLogMindstormsNXT_cSIOPort_getChar( p_that ) \
	  tSIOPortMindstormsNXT_eSIOPort_getChar( \
	   &tSIOPortMindstormsNXT_CB_tab[0] )
#define tPutLogMindstormsNXT_cSIOPort_enableCBR( p_that, cbrtn ) \
	  tSIOPortMindstormsNXT_eSIOPort_enableCBR( \
	   &tSIOPortMindstormsNXT_CB_tab[0], (cbrtn) )
#define tPutLogMindstormsNXT_cSIOPort_disableCBR( p_that, cbrtn ) \
	  tSIOPortMindstormsNXT_eSIOPort_disableCBR( \
	   &tSIOPortMindstormsNXT_CB_tab[0], (cbrtn) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tPutLogMindstormsNXT_INIB {
    /* call port #_TCP_# */ 
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint32_t       US1_BASE;
    uint32_t       sendBufferSize;
    char*          sendBufferPointerInitialize;
    char*          sendBuffer1;
    char*          sendBuffer2;
}  tPutLogMindstormsNXT_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tPutLogMindstormsNXT_CB {
    tPutLogMindstormsNXT_INIB  *_inib;
    /* var #_VA_# */ 
    char*          sendBufferPointer;
    uint32_t       sendBufferCount;
}  tPutLogMindstormsNXT_CB;
extern tPutLogMindstormsNXT_CB  tPutLogMindstormsNXT_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tPutLogMindstormsNXT_CB *tPutLogMindstormsNXT_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sPutLog */
ER           tPutLogMindstormsNXT_ePutLog_putChar(tPutLogMindstormsNXT_IDX idx, char c);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tPutLogMindstormsNXT_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPutLogMindstormsNXT_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPutLogMindstormsNXT_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPutLogMindstormsNXT_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_US1_BASE        tPutLogMindstormsNXT_ATTR_US1_BASE( p_cellcb )
#define ATTR_sendBufferSize  tPutLogMindstormsNXT_ATTR_sendBufferSize( p_cellcb )
#define ATTR_sendBufferPointerInitialize tPutLogMindstormsNXT_ATTR_sendBufferPointerInitialize( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_sendBuffer1      tPutLogMindstormsNXT_VAR_sendBuffer1( p_cellcb )
#define VAR_sendBuffer2      tPutLogMindstormsNXT_VAR_sendBuffer2( p_cellcb )
#define VAR_sendBufferPointer tPutLogMindstormsNXT_VAR_sendBufferPointer( p_cellcb )
#define VAR_sendBufferCount  tPutLogMindstormsNXT_VAR_sendBufferCount( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cBluetooth_open( ) \
                      tPutLogMindstormsNXT_cBluetooth_open( p_cellcb ) 
#define cBluetooth_getLocalAddress( address ) \
                      tPutLogMindstormsNXT_cBluetooth_getLocalAddress( p_cellcb, address ) 
#define cBluetooth_getDeviceName( name ) \
                      tPutLogMindstormsNXT_cBluetooth_getDeviceName( p_cellcb, name ) 
#define cBluetooth_setDeviceName( name ) \
                      tPutLogMindstormsNXT_cBluetooth_setDeviceName( p_cellcb, name ) 
#define cBluetooth_setFactorySetting( ) \
                      tPutLogMindstormsNXT_cBluetooth_setFactorySetting( p_cellcb ) 
#define cBluetooth_initializeMaster( address ) \
                      tPutLogMindstormsNXT_cBluetooth_initializeMaster( p_cellcb, address ) 
#define cBluetooth_initializeSlave( ) \
                      tPutLogMindstormsNXT_cBluetooth_initializeSlave( p_cellcb ) 
#define cBluetooth_terminateConnection( ) \
                      tPutLogMindstormsNXT_cBluetooth_terminateConnection( p_cellcb ) 
#define cBluetooth_sendPacket( buffer, length ) \
                      tPutLogMindstormsNXT_cBluetooth_sendPacket( p_cellcb, buffer, length ) 
#define cBluetooth_readPacket( buffer, length ) \
                      tPutLogMindstormsNXT_cBluetooth_readPacket( p_cellcb, buffer, length ) 
#define cBluetooth_isConnected( ) \
                      tPutLogMindstormsNXT_cBluetooth_isConnected( p_cellcb ) 
#define cSIOPort_waitReady( ) \
                      tPutLogMindstormsNXT_cSIOPort_waitReady( p_cellcb ) 
#define cSIOPort_isOpened( ) \
                      tPutLogMindstormsNXT_cSIOPort_isOpened( p_cellcb ) 
#define cSIOPort_open( ) \
                      tPutLogMindstormsNXT_cSIOPort_open( p_cellcb ) 
#define cSIOPort_close( ) \
                      tPutLogMindstormsNXT_cSIOPort_close( p_cellcb ) 
#define cSIOPort_putChar( c ) \
                      tPutLogMindstormsNXT_cSIOPort_putChar( p_cellcb, c ) 
#define cSIOPort_getChar( ) \
                      tPutLogMindstormsNXT_cSIOPort_getChar( p_cellcb ) 
#define cSIOPort_enableCBR( cbrtn ) \
                      tPutLogMindstormsNXT_cSIOPort_enableCBR( p_cellcb, cbrtn ) 
#define cSIOPort_disableCBR( cbrtn ) \
                      tPutLogMindstormsNXT_cSIOPort_disableCBR( p_cellcb, cbrtn ) 


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define ePutLog_putChar  tPutLogMindstormsNXT_ePutLog_putChar

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tPutLogMindstormsNXT_N_CELL; (i)++ ){ \
       (p_cb) = &tPutLogMindstormsNXT_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->sendBufferPointer = tPutLogMindstormsNXT_ATTR_sendBufferPointerInitialize(p_that);\
	(p_that)->sendBufferCount = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tPutLogMindstormsNXT_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#include "tBluetooth.h"
#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPutLogMindstormsNXT_TECSGEN_H */
