/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tBalancerBody_tecsgen.h"

#include "tBalancerBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBalancer : omitted by entry port optimize */
/* eInitialize */
struct tag_tBalancerBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBalancer : omitted by entry port optimize */
/* eInitialize */
void           tBalancerBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tBalancerBody_eInitialize_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBalancer : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tBalancerBody_eInitialize_MT = {
    tBalancerBody_eInitialize_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
/* eBalancer : omitted by entry port optimize */
const struct tag_tBalancerBody_eInitialize_DES Balancer_BalancerBody_eInitialize_des = {
    &tBalancerBody_eInitialize_MT,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tBalancerBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
