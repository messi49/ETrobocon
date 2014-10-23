/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTailControllerTaskBody_tecsgen.h"

#include "tTailControllerTaskBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody */
struct tag_tTailControllerTaskBody_eBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tTailControllerTaskBody_IDX  idx;
};

/* eTailController : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eBody */
void           tTailControllerTaskBody_eBody_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tTailControllerTaskBody_eBody_main( );
}
/* eTailController : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody */
static const struct tag_sTaskBody_VMT tTailControllerTaskBody_eBody_MT = {
    tTailControllerTaskBody_eBody_main_skel,
};
/* eTailController : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTailControllerTaskBody_INIB tTailControllerTaskBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    106,                                     /* tailAngleStop */
    60,                                      /* tailAngleDrive */
    2.5,                                     /* kp */
    60,                                      /* maxPwm */
    -60,                                     /* minPwm */
};
/* セル CB #_CB_# */
struct tag_tTailControllerTaskBody_CB tTailControllerTaskBody_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tTailControllerTaskBody_eBody_DES TailControllerTaskBody_eBody_des = {
    &tTailControllerTaskBody_eBody_MT,
    &tTailControllerTaskBody_SINGLE_CELL_CB,       /* CB */
};
/* eTailController : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTailControllerTaskBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
