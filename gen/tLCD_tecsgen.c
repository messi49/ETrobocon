/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLCD_tecsgen.h"

#include "tLCD_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eLCD : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eLCD : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eLCD : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tLCD_INIB tLCD_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* width */
    8,                                       /* depth */
};
/* �������ǥ�������ץ� #_EPD_# */
/* eLCD : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tLCD_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
