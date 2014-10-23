/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tBalancerTaskBody_tecsgen.h"

#include "tBalancerTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tBalancerTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tBalancerTaskBody_IDX  idx;
};

/* eBalancerControl : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tBalancerTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tBalancerTaskBody_eBody_main( );
}
/* eBalancerControl : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tBalancerTaskBody_eBody_MT = {
    tBalancerTaskBody_eBody_main_skel,
};
/* eBalancerControl : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tBalancerTaskBody_INIB tBalancerTaskBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* maxSpeed */
    -100,                                    /* minSpeed */
};
/* セル CB #_CB_# */
struct tag_tBalancerTaskBody_CB tBalancerTaskBody_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tBalancerTaskBody_eBody_DES BalancerTaskBody_eBody_des = {
    &tBalancerTaskBody_eBody_MT,
    &tBalancerTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* eBalancerControl : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tBalancerTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
