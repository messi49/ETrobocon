/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tConnectBluetooth_tecsgen.h"

#include "tConnectBluetooth_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eConnectBluetooth */
struct tag_tConnectBluetooth_eConnectBluetooth_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tConnectBluetooth_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eConnectBluetooth */
void           tConnectBluetooth_eConnectBluetooth_main_skel( struct tag_sTaskBody_VDES *epd)
{
    tConnectBluetooth_eConnectBluetooth_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eConnectBluetooth */
static const struct tag_sTaskBody_VMT tConnectBluetooth_eConnectBluetooth_MT = {
    tConnectBluetooth_eConnectBluetooth_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
const char tConnectBluetooth_SINGLE_CELL_CB_deviceName_INIT[16] = { 'E', 'T', '1', '2', '3', '4', '\0', };
/* ���� INIB #_INIB_# */
tConnectBluetooth_INIB tConnectBluetooth_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    16,                                      /* deviceNameSize */
    tConnectBluetooth_SINGLE_CELL_CB_deviceName_INIT, /* deviceName */
};
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tConnectBluetooth_eConnectBluetooth_DES ConnectBluetooth_eConnectBluetooth_des = {
    &tConnectBluetooth_eConnectBluetooth_MT,
    &tConnectBluetooth_SINGLE_CELL_INIB,     /* INIB */
};
/* CB ����������� #_CIC_# */
void
tConnectBluetooth_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
