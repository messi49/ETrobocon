/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tAVRBody_tecsgen.h"

#include "tAVRBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eAvrMotor : omitted by entry port optimize */
/* eAvrSensor : omitted by entry port optimize */
/* eAvrButton : omitted by entry port optimize */
/* eAvrBattery : omitted by entry port optimize */
/* eAvrPower : omitted by entry port optimize */
/* eInitialize */
struct tag_tAVRBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tAVRBody_IDX  idx;
};

/* eTerminate */
struct tag_tAVRBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tAVRBody_IDX  idx;
};

/* eiCyclicBody */
struct tag_tAVRBody_eiCyclicBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tAVRBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eAvrMotor : omitted by entry port optimize */
/* eAvrSensor : omitted by entry port optimize */
/* eAvrButton : omitted by entry port optimize */
/* eAvrBattery : omitted by entry port optimize */
/* eAvrPower : omitted by entry port optimize */
/* eInitialize */
void           tAVRBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tAVRBody_eInitialize_main( );
}
/* eTerminate */
void           tAVRBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    tAVRBody_eTerminate_main( );
}
/* eiCyclicBody */
void           tAVRBody_eiCyclicBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tAVRBody_eiCyclicBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eAvrMotor : omitted by entry port optimize */
/* eAvrSensor : omitted by entry port optimize */
/* eAvrButton : omitted by entry port optimize */
/* eAvrBattery : omitted by entry port optimize */
/* eAvrPower : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tAVRBody_eInitialize_MT = {
    tAVRBody_eInitialize_main_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tAVRBody_eTerminate_MT = {
    tAVRBody_eTerminate_main_skel,
};
/* eiCyclicBody */
static const struct tag_siHandlerBody_VMT tAVRBody_eiCyclicBody_MT = {
    tAVRBody_eiCyclicBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
uint8_t tAVRBody_SINGLE_CELL_CB_dataFromAvr_INIT[13];
uint8_t tAVRBody_SINGLE_CELL_CB_dataToAvr_INIT[9];
/* ���� INIB #_INIB_# */
tAVRBody_INIB tAVRBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    tAVRBody_SINGLE_CELL_CB_dataFromAvr_INIT, /* dataFromAvr */
    tAVRBody_SINGLE_CELL_CB_dataToAvr_INIT,  /* dataToAvr */
};
/* ���� CB #_CB_# */
struct tag_tAVRBody_CB tAVRBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eAvrMotor : omitted by entry port optimize */
/* eAvrSensor : omitted by entry port optimize */
/* eAvrButton : omitted by entry port optimize */
/* eAvrBattery : omitted by entry port optimize */
/* eAvrPower : omitted by entry port optimize */
const struct tag_tAVRBody_eInitialize_DES AVR_AVRBody_eInitialize_des = {
    &tAVRBody_eInitialize_MT,
    &tAVRBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tAVRBody_eTerminate_DES AVR_AVRBody_eTerminate_des = {
    &tAVRBody_eTerminate_MT,
    &tAVRBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tAVRBody_eiCyclicBody_DES AVR_AVRBody_eiCyclicBody_des = {
    &tAVRBody_eiCyclicBody_MT,
    &tAVRBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tAVRBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
