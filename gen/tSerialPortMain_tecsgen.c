/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSerialPortMain_tecsgen.h"

#include "tSerialPortMain_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSerialPort : omitted by entry port optimize */
/* enSerialPort : omitted by entry port optimize */
/* eiSIOCBR : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eSerialPort : omitted by entry port optimize */
/* enSerialPort : omitted by entry port optimize */
/* eiSIOCBR : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSerialPort : omitted by entry port optimize */
/* enSerialPort : omitted by entry port optimize */
/* eiSIOCBR : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
char tSerialPortMain_SerialPort1_SerialPortMain_CB_receiveBuffer_INIT[256];
char tSerialPortMain_SerialPort1_SerialPortMain_CB_sendBuffer_INIT[256];
/* ���� INIB #_INIB_# */
tSerialPortMain_INIB tSerialPortMain_INIB_tab[] = {
    /* cell: tSerialPortMain_CB_tab[0]:  SerialPort1_SerialPortMain id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        256,                                     /* receiveBufferSize */
        256,                                     /* sendBufferSize */
        tSerialPortMain_SerialPort1_SerialPortMain_CB_receiveBuffer_INIT, /* receiveBuffer */
        tSerialPortMain_SerialPort1_SerialPortMain_CB_sendBuffer_INIT, /* sendBuffer */
    },
};
/* ���� CB #_CB_# */
struct tag_tSerialPortMain_CB tSerialPortMain_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eSerialPort : omitted by entry port optimize */
/* enSerialPort : omitted by entry port optimize */
/* eiSIOCBR : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tSerialPortMain_CB_initialize()
{
    tSerialPortMain_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
