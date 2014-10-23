/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tCyclicTaskActivator_tecsgen.h"

#include "tCyclicTaskActivator_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eiBody */
struct tag_tCyclicTaskActivator_eiBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tCyclicTaskActivator_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eiBody */
void           tCyclicTaskActivator_eiBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    struct tag_tCyclicTaskActivator_eiBody_DES *lepd
        = (struct tag_tCyclicTaskActivator_eiBody_DES *)epd;
    tCyclicTaskActivator_eiBody_main( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eiBody */
static const struct tag_siHandlerBody_VMT tCyclicTaskActivator_eiBody_MT = {
    tCyclicTaskActivator_eiBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_siTask_VDES TailControllerTask_Task_eiTask_des;

extern struct tag_siTask_VDES BalancerTask_Task_eiTask_des;

extern struct tag_siTask_VDES LinetracerTask_Task_eiTask_des;

extern struct tag_siTask_VDES GetLogTask_Task_eiTask_des;

/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tCyclicTaskActivator_INIB tCyclicTaskActivator_INIB_tab[] = {
    /* cell: tCyclicTaskActivator_CB_tab[0]:  TailControllerTask_CyclicMain id=1 */
    {
        /* call port #_CP_# */ 
        &tTask_CB_tab[4],                        /* ciTask #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCyclicTaskActivator_CB_tab[1]:  BalancerTask_CyclicMain id=2 */
    {
        /* call port #_CP_# */ 
        &tTask_CB_tab[5],                        /* ciTask #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCyclicTaskActivator_CB_tab[2]:  LinetracerTask_CyclicMain id=3 */
    {
        /* call port #_CP_# */ 
        &tTask_CB_tab[6],                        /* ciTask #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCyclicTaskActivator_CB_tab[3]:  GetLogTask_CyclicMain id=4 */
    {
        /* call port #_CP_# */ 
        &tTask_CB_tab[7],                        /* ciTask #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tCyclicTaskActivator_eiBody_DES TailControllerTask_CyclicMain_eiBody_des = {
    &tCyclicTaskActivator_eiBody_MT,
    &tCyclicTaskActivator_INIB_tab[0],   /* INIB */
};
const struct tag_tCyclicTaskActivator_eiBody_DES BalancerTask_CyclicMain_eiBody_des = {
    &tCyclicTaskActivator_eiBody_MT,
    &tCyclicTaskActivator_INIB_tab[1],   /* INIB */
};
const struct tag_tCyclicTaskActivator_eiBody_DES LinetracerTask_CyclicMain_eiBody_des = {
    &tCyclicTaskActivator_eiBody_MT,
    &tCyclicTaskActivator_INIB_tab[2],   /* INIB */
};
const struct tag_tCyclicTaskActivator_eiBody_DES GetLogTask_CyclicMain_eiBody_des = {
    &tCyclicTaskActivator_eiBody_MT,
    &tCyclicTaskActivator_INIB_tab[3],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
tCyclicTaskActivator_CB_initialize()
{
    tCyclicTaskActivator_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
