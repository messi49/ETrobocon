/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tPutLogMindstormsNXT_tecsgen.h"

#include "tPutLogMindstormsNXT_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* ePutLog : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* ePutLog : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* ePutLog : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer1_INIT[128];
char tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer2_INIT[128];
/* セル INIB #_INIB_# */
tPutLogMindstormsNXT_INIB tPutLogMindstormsNXT_INIB_tab[] = {
    /* cell: tPutLogMindstormsNXT_CB_tab[0]:  PutLogTarget id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0xFFFC4000,                              /* US1_BASE */
        128,                                     /* sendBufferSize */
        NULL,                                    /* sendBufferPointerInitialize */
        tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer1_INIT, /* sendBuffer1 */
        tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer2_INIT, /* sendBuffer2 */
    },
};
/* セル CB #_CB_# */
struct tag_tPutLogMindstormsNXT_CB tPutLogMindstormsNXT_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
/* ePutLog : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tPutLogMindstormsNXT_CB_initialize()
{
    tPutLogMindstormsNXT_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
