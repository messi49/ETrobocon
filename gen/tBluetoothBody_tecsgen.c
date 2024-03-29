/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tBluetoothBody_tecsgen.h"

#include "tBluetoothBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBluetooth : omitted by entry port optimize */
/* eInitialize */
struct tag_tBluetoothBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tBluetoothBody_IDX  idx;
};

/* eTerminate */
struct tag_tBluetoothBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tBluetoothBody_IDX  idx;
};

/* eiAlarmBody : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eBluetooth : omitted by entry port optimize */
/* eInitialize */
void           tBluetoothBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tBluetoothBody_eInitialize_main( );
}
/* eTerminate */
void           tBluetoothBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    tBluetoothBody_eTerminate_main( );
}
/* eiAlarmBody : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBluetooth : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tBluetoothBody_eInitialize_MT = {
    tBluetoothBody_eInitialize_main_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tBluetoothBody_eTerminate_MT = {
    tBluetoothBody_eTerminate_main_skel,
};
/* eiAlarmBody : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char tBluetoothBody_SINGLE_CELL_CB_sendBuffer1_INIT[128];
char tBluetoothBody_SINGLE_CELL_CB_sendBuffer2_INIT[128];
char tBluetoothBody_SINGLE_CELL_CB_receiveBuffer1_INIT[128];
char tBluetoothBody_SINGLE_CELL_CB_receiveBuffer2_INIT[128];
/* セル INIB #_INIB_# */
tBluetoothBody_INIB tBluetoothBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    128,                                     /* sendBufferSize */
    128,                                     /* receiveBufferSize */
    (void*)0xFFFC4000,                       /* uartBase */
    (void*)0xFFFA0040,                       /* timerBase */
    "1234",                                  /* keyCode */
    tBluetoothBody_SINGLE_CELL_CB_sendBuffer1_INIT, /* sendBuffer1 */
    tBluetoothBody_SINGLE_CELL_CB_sendBuffer2_INIT, /* sendBuffer2 */
    tBluetoothBody_SINGLE_CELL_CB_receiveBuffer1_INIT, /* receiveBuffer1 */
    tBluetoothBody_SINGLE_CELL_CB_receiveBuffer2_INIT, /* receiveBuffer2 */
};
/* セル CB #_CB_# */
struct tag_tBluetoothBody_CB tBluetoothBody_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
/* eBluetooth : omitted by entry port optimize */
const struct tag_tBluetoothBody_eInitialize_DES Bluetooth_BluetoothBody_eInitialize_des = {
    &tBluetoothBody_eInitialize_MT,
    &tBluetoothBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tBluetoothBody_eTerminate_DES Bluetooth_BluetoothBody_eTerminate_des = {
    &tBluetoothBody_eTerminate_MT,
    &tBluetoothBody_SINGLE_CELL_CB,       /* CB */
};
/* eiAlarmBody : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tBluetoothBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
