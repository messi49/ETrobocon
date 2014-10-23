/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tGetCommandTaskBody_tecsgen.h"

#include "tGetCommandTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tGetCommandTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tGetCommandTaskBody_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tGetCommandTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tGetCommandTaskBody_eBody_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tGetCommandTaskBody_eBody_MT = {
    tGetCommandTaskBody_eBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tGetCommandTaskBody_CB tGetCommandTaskBody_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tGetCommandTaskBody_eBody_DES GetCommandTaskBody_eBody_des = {
    &tGetCommandTaskBody_eBody_MT,
    &tGetCommandTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* CB 初期化コード #_CIC_# */
void
tGetCommandTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
