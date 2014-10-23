/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tLinetracerTaskBody_tecsgen.h"

#include "tLinetracerTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tLinetracerTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tLinetracerTaskBody_IDX  idx;
};

/* eLinetracerControl : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tLinetracerTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tLinetracerTaskBody_eBody_main( );
}
/* eLinetracerControl : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tLinetracerTaskBody_eBody_MT = {
    tLinetracerTaskBody_eBody_main_skel,
};
/* eLinetracerControl : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tLinetracerTaskBody_INIB tLinetracerTaskBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* maxTurn */
    -100,                                    /* minTurn */
};
/* セル CB #_CB_# */
struct tag_tLinetracerTaskBody_CB tLinetracerTaskBody_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tLinetracerTaskBody_eBody_DES LinetracerTaskBody_eBody_des = {
    &tLinetracerTaskBody_eBody_MT,
    &tLinetracerTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* eLinetracerControl : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tLinetracerTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
