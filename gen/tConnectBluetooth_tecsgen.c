/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tConnectBluetooth_tecsgen.h"

#include "tConnectBluetooth_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eConnectBluetooth */
struct tag_tConnectBluetooth_eConnectBluetooth_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tConnectBluetooth_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eConnectBluetooth */
void           tConnectBluetooth_eConnectBluetooth_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tConnectBluetooth_eConnectBluetooth_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eConnectBluetooth */
static const struct tag_sTaskBody_VMT tConnectBluetooth_eConnectBluetooth_MT = {
    tConnectBluetooth_eConnectBluetooth_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
const char tConnectBluetooth_SINGLE_CELL_CB_deviceName_INIT[16] = { 'E', 'T', '1', '2', '3', '4', '\0', };
/* セル INIB #_INIB_# */
tConnectBluetooth_INIB tConnectBluetooth_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    16,                                      /* deviceNameSize */
    tConnectBluetooth_SINGLE_CELL_CB_deviceName_INIT, /* deviceName */
};
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tConnectBluetooth_eConnectBluetooth_DES ConnectBluetooth_eConnectBluetooth_des = {
    &tConnectBluetooth_eConnectBluetooth_MT,
    &tConnectBluetooth_SINGLE_CELL_INIB,     /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tConnectBluetooth_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
