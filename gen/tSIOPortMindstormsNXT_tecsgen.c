/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSIOPortMindstormsNXT_tecsgen.h"

#include "tSIOPortMindstormsNXT_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSIOPort : omitted by entry port optimize */
/* eInitialize */
struct tag_tSIOPortMindstormsNXT_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tSIOPortMindstormsNXT_IDX  idx;
};

/* eTerminate */
struct tag_tSIOPortMindstormsNXT_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tSIOPortMindstormsNXT_IDX  idx;
};

/* eiISR */
struct tag_tSIOPortMindstormsNXT_eiISR_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tSIOPortMindstormsNXT_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSIOPort : omitted by entry port optimize */
/* eInitialize */
void           tSIOPortMindstormsNXT_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    struct tag_tSIOPortMindstormsNXT_eInitialize_DES *lepd
        = (struct tag_tSIOPortMindstormsNXT_eInitialize_DES *)epd;
    tSIOPortMindstormsNXT_eInitialize_main( lepd->idx );
}
/* eTerminate */
void           tSIOPortMindstormsNXT_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    struct tag_tSIOPortMindstormsNXT_eTerminate_DES *lepd
        = (struct tag_tSIOPortMindstormsNXT_eTerminate_DES *)epd;
    tSIOPortMindstormsNXT_eTerminate_main( lepd->idx );
}
/* eiISR */
void           tSIOPortMindstormsNXT_eiISR_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    struct tag_tSIOPortMindstormsNXT_eiISR_DES *lepd
        = (struct tag_tSIOPortMindstormsNXT_eiISR_DES *)epd;
    tSIOPortMindstormsNXT_eiISR_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSIOPort : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tSIOPortMindstormsNXT_eInitialize_MT = {
    tSIOPortMindstormsNXT_eInitialize_main_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tSIOPortMindstormsNXT_eTerminate_MT = {
    tSIOPortMindstormsNXT_eTerminate_main_skel,
};
/* eiISR */
static const struct tag_siHandlerBody_VMT tSIOPortMindstormsNXT_eiISR_MT = {
    tSIOPortMindstormsNXT_eiISR_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_sendBuffer1_INIT[128];
char tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_sendBuffer2_INIT[128];
char tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_receiveBuffer1_INIT[1];
char tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_receiveBuffer2_INIT[1];
/* セル INIB #_INIB_# */
tSIOPortMindstormsNXT_INIB tSIOPortMindstormsNXT_INIB_tab[] = {
    /* cell: tSIOPortMindstormsNXT_CB_tab[0]:  SIOPortTarget_SIOPortNXT id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        (void*)0xFFFC4000,                       /* uartBase */
        128,                                     /* sendBufferSize */
        NULL,                                    /* sendBufferPointerInitialize */
        0U,                                      /* sendBufferCountInitialize */
        1,                                       /* receiveBufferSize */
        tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_sendBuffer1_INIT, /* sendBuffer1 */
        tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_sendBuffer2_INIT, /* sendBuffer2 */
        tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_receiveBuffer1_INIT, /* receiveBuffer1 */
        tSIOPortMindstormsNXT_SIOPortTarget_SIOPortNXT_CB_receiveBuffer2_INIT, /* receiveBuffer2 */
    },
};
/* セル CB #_CB_# */
struct tag_tSIOPortMindstormsNXT_CB tSIOPortMindstormsNXT_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
/* eSIOPort : omitted by entry port optimize */
const struct tag_tSIOPortMindstormsNXT_eInitialize_DES SIOPortTarget_SIOPortNXT_eInitialize_des = {
    &tSIOPortMindstormsNXT_eInitialize_MT,
    &tSIOPortMindstormsNXT_CB_tab[0],     /* CB */
};
const struct tag_tSIOPortMindstormsNXT_eTerminate_DES SIOPortTarget_SIOPortNXT_eTerminate_des = {
    &tSIOPortMindstormsNXT_eTerminate_MT,
    &tSIOPortMindstormsNXT_CB_tab[0],     /* CB */
};
const struct tag_tSIOPortMindstormsNXT_eiISR_DES SIOPortTarget_SIOPortNXT_eiISR_des = {
    &tSIOPortMindstormsNXT_eiISR_MT,
    &tSIOPortMindstormsNXT_CB_tab[0],     /* CB */
};
/* CB 初期化コード #_CIC_# */
void
tSIOPortMindstormsNXT_CB_initialize()
{
    tSIOPortMindstormsNXT_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
