/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tStarterTaskBody_tecsgen.h"

#include "tStarterTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tStarterTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tStarterTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tStarterTaskBody_eBody_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tStarterTaskBody_eBody_MT = {
    tStarterTaskBody_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tStarterTaskBody_eBody_DES StarterTaskBody_eBody_des = {
    &tStarterTaskBody_eBody_MT,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tStarterTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
