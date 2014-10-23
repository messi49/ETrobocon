/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tGetLogTaskBody_tecsgen.h"

#include "tGetLogTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tGetLogTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* eGetLogControl : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tGetLogTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tGetLogTaskBody_eBody_main( );
}
/* eGetLogControl : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tGetLogTaskBody_eBody_MT = {
    tGetLogTaskBody_eBody_main_skel,
};
/* eGetLogControl : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tGetLogTaskBody_eBody_DES GetLogTaskBody_eBody_des = {
    &tGetLogTaskBody_eBody_MT,
    0,
};
/* eGetLogControl : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tGetLogTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
