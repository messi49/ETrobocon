/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tLogTaskMain_tecsgen.h"

#include "tLogTaskMain_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eLogTaskBody */
struct tag_tLogTaskMain_eLogTaskBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tLogTaskMain_IDX  idx;
};

/* eLogTask : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eLogTaskBody */
void           tLogTaskMain_eLogTaskBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tLogTaskMain_eLogTaskBody_main( );
}
/* eLogTask : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eLogTaskBody */
static const struct tag_sTaskBody_VMT tLogTaskMain_eLogTaskBody_MT = {
    tLogTaskMain_eLogTaskBody_main_skel,
};
/* eLogTask : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tLogTaskMain_INIB tLogTaskMain_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    10,                                      /* interval */
    1,                                       /* flushWait */
};
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tLogTaskMain_eLogTaskBody_DES LogTask_LogTaskMain_eLogTaskBody_des = {
    &tLogTaskMain_eLogTaskBody_MT,
    &tLogTaskMain_SINGLE_CELL_INIB,     /* INIB */
};
/* eLogTask : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tLogTaskMain_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
