/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tPutLogMindstormsNXT_tecsgen.h"

#include "tPutLogMindstormsNXT_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* ePutLog : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* ePutLog : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* ePutLog : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
char tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer1_INIT[128];
char tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer2_INIT[128];
/* ���� INIB #_INIB_# */
tPutLogMindstormsNXT_INIB tPutLogMindstormsNXT_INIB_tab[] = {
    /* cell: tPutLogMindstormsNXT_CB_tab[0]:  PutLogTarget id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0xFFFC4000,                              /* US1_BASE */
        128,                                     /* sendBufferSize */
        NULL,                                    /* sendBufferPointerInitialize */
        tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer1_INIT, /* sendBuffer1 */
        tPutLogMindstormsNXT_PutLogTarget_CB_sendBuffer2_INIT, /* sendBuffer2 */
    },
};
/* ���� CB #_CB_# */
struct tag_tPutLogMindstormsNXT_CB tPutLogMindstormsNXT_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* ePutLog : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tPutLogMindstormsNXT_CB_initialize()
{
    tPutLogMindstormsNXT_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
