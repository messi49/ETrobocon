/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tCyclicHandler_tecsgen.h"

#include "tCyclicHandler_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eCyclic : omitted by entry port optimize */
/* ������������ȥ�ؿ� #_EPSF_# */
/* eCyclic : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eCyclic : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_siHandlerBody_VDES CheckNXTButtonBody_eiBody_des;

extern struct tag_siHandlerBody_VDES AVR_AVRBody_eiCyclicBody_des;

extern struct tag_siHandlerBody_VDES Button_ButtonBody_eiBody_des;

extern struct tag_siHandlerBody_VDES RotaryEncoder_RotaryEncoderBody_eiCyclicBody_des;

extern struct tag_siHandlerBody_VDES TailControllerTask_CyclicMain_eiBody_des;

extern struct tag_siHandlerBody_VDES BalancerTask_CyclicMain_eiBody_des;

extern struct tag_siHandlerBody_VDES LinetracerTask_CyclicMain_eiBody_des;

extern struct tag_siHandlerBody_VDES GetLogTask_CyclicMain_eiBody_des;

/* �ƤӸ����� #_CPA_# */








/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tCyclicHandler_INIB tCyclicHandler_INIB_tab[] = {
    /* cell: tCyclicHandler_CB_tab[0]:  CheckNXTButton id=1 */
    {
        /* call port #_CP_# */ 
        &CheckNXTButtonBody_eiBody_des,          /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_CheckNXTButton, /* id */
    },
    /* cell: tCyclicHandler_CB_tab[1]:  AVR_CyclicAVR id=2 */
    {
        /* call port #_CP_# */ 
        &AVR_AVRBody_eiCyclicBody_des,           /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_AVR_CyclicAVR,  /* id */
    },
    /* cell: tCyclicHandler_CB_tab[2]:  Button_ButtonUpdate id=3 */
    {
        /* call port #_CP_# */ 
        &Button_ButtonBody_eiBody_des,           /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_Button_ButtonUpdate, /* id */
    },
    /* cell: tCyclicHandler_CB_tab[3]:  RotaryEncoder_CyclicMotor id=4 */
    {
        /* call port #_CP_# */ 
        &RotaryEncoder_RotaryEncoderBody_eiCyclicBody_des, /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_RotaryEncoder_CyclicMotor, /* id */
    },
    /* cell: tCyclicHandler_CB_tab[4]:  TailControllerTask_CyclicHandler id=5 */
    {
        /* call port #_CP_# */ 
        &TailControllerTask_CyclicMain_eiBody_des, /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_TailControllerTask_CyclicHandler, /* id */
    },
    /* cell: tCyclicHandler_CB_tab[5]:  BalancerTask_CyclicHandler id=6 */
    {
        /* call port #_CP_# */ 
        &BalancerTask_CyclicMain_eiBody_des,     /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_BalancerTask_CyclicHandler, /* id */
    },
    /* cell: tCyclicHandler_CB_tab[6]:  LinetracerTask_CyclicHandler id=7 */
    {
        /* call port #_CP_# */ 
        &LinetracerTask_CyclicMain_eiBody_des,   /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_LinetracerTask_CyclicHandler, /* id */
    },
    /* cell: tCyclicHandler_CB_tab[7]:  GetLogTask_CyclicHandler id=8 */
    {
        /* call port #_CP_# */ 
        &GetLogTask_CyclicMain_eiBody_des,       /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_GetLogTask_CyclicHandler, /* id */
    },
};
/* �������ǥ�������ץ� #_EPD_# */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* eCyclic : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tCyclicHandler_CB_initialize()
{
    tCyclicHandler_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
