/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSysLog_tecsgen.h"

#include "tSysLog_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSysLog : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eSysLog : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSysLog : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
SYSLOG tSysLog_SINGLE_CELL_CB_logBuffer_INIT[32];
/* ���� INIB #_INIB_# */
tSysLog_INIB tSysLog_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    32,                                      /* logBufferSize */
    tSysLog_SINGLE_CELL_CB_logBuffer_INIT,   /* logBuffer */
};
/* ���� CB #_CB_# */
struct tag_tSysLog_CB tSysLog_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eSysLog : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tSysLog_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
