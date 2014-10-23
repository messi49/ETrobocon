/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tBluetoothBody_tecsgen.h"

#include "tBluetoothBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
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
/* ������������ȥ�ؿ� #_EPSF_# */
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

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
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

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
char tBluetoothBody_SINGLE_CELL_CB_sendBuffer1_INIT[128];
char tBluetoothBody_SINGLE_CELL_CB_sendBuffer2_INIT[128];
char tBluetoothBody_SINGLE_CELL_CB_receiveBuffer1_INIT[128];
char tBluetoothBody_SINGLE_CELL_CB_receiveBuffer2_INIT[128];
/* ���� INIB #_INIB_# */
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
/* ���� CB #_CB_# */
struct tag_tBluetoothBody_CB tBluetoothBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
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
/* CB ����������� #_CIC_# */
void
tBluetoothBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
