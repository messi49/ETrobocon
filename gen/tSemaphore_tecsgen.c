/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSemaphore_tecsgen.h"

#include "tSemaphore_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tSemaphore_INIB tSemaphore_INIB_tab[] = {
    /* cell: tSemaphore_CB_tab[0]:  BluetoothSemapohre id=1 */
    {
        /* attribute(RO) */ 
        SEMID_tSemaphore_BluetoothSemapohre,     /* id */
    },
    /* cell: tSemaphore_CB_tab[1]:  StartSemaphore id=2 */
    {
        /* attribute(RO) */ 
        SEMID_tSemaphore_StartSemaphore,         /* id */
    },
    /* cell: tSemaphore_CB_tab[2]:  SerialPort1_ReceiveSemaphore id=3 */
    {
        /* attribute(RO) */ 
        SEMID_tSemaphore_SerialPort1_ReceiveSemaphore, /* id */
    },
    /* cell: tSemaphore_CB_tab[3]:  SerialPort1_SendSemaphore id=4 */
    {
        /* attribute(RO) */ 
        SEMID_tSemaphore_SerialPort1_SendSemaphore, /* id */
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tSemaphore_CB_initialize()
{
    tSemaphore_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
