/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tAlarmHandler_tecsgen.h"

#include "tAlarmHandler_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eAlarm : omitted by entry port optimize */
/* eiAlarm : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eAlarm : omitted by entry port optimize */
/* eiAlarm : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eAlarm : omitted by entry port optimize */
/* eiAlarm : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tAlarmHandler_INIB tAlarmHandler_INIB_tab[] = {
    /* cell: tAlarmHandler_CB_tab[0]:  Bluetooth_AlarmTimeOut id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ALMHDLRID_tAlarmHandler_Bluetooth_AlarmTimeOut, /* id */
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* eAlarm : omitted by entry port optimize */
/* eiAlarm : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tAlarmHandler_CB_initialize()
{
    tAlarmHandler_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
