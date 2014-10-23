/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSensorDriverBody_tecsgen.h"

#include "tSensorDriverBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eInitialize */
struct tag_tSensorDriverBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tSensorDriverBody_IDX  idx;
};

/* eiBody */
struct tag_tSensorDriverBody_eiBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tSensorDriverBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eInitialize */
void           tSensorDriverBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tSensorDriverBody_eInitialize_main( );
}
/* eiBody */
void           tSensorDriverBody_eiBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tSensorDriverBody_eiBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tSensorDriverBody_eInitialize_MT = {
    tSensorDriverBody_eInitialize_main_skel,
};
/* eiBody */
static const struct tag_siHandlerBody_VMT tSensorDriverBody_eiBody_MT = {
    tSensorDriverBody_eiBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_siSensorDriver_VDES GyroSensor_GyroSensorBody_eiSensorDriver_des;
extern struct tag_siSensorDriver_VDES SonicSensor_SonicSensorBody_eiSensorDriver_des;
extern struct tag_siSensorDriver_VDES LightSensor_LightSensorBody_eiSensorDriver_des;
extern struct tag_siSensorDriver_VDES TouchSensor_TouchSensorBody_eiSensorDriver_des;

/* �ƤӸ����� #_CPA_# */
struct tag_siSensorDriver_VDES *SensorDriver_SensorDriverBody_ciSensorDriver[] = {
    &GyroSensor_GyroSensorBody_eiSensorDriver_des,
    &SonicSensor_SonicSensorBody_eiSensorDriver_des,
    &LightSensor_LightSensorBody_eiSensorDriver_des,
    &TouchSensor_TouchSensorBody_eiSensorDriver_des,
};

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tSensorDriverBody_INIB tSensorDriverBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    SensorDriver_SensorDriverBody_ciSensorDriver, /* #_CCP3_# */
    4,                                       /* length of ciSensorDriver (n_ciSensorDriver) #_CCP4_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    4,                                       /* portMax */
    0xFFFA0000,                              /* TimerBase */
    INTNO_TC0_PID,                           /* interruptNumber */
};
/* �������ǥ�������ץ� #_EPD_# */
const struct tag_tSensorDriverBody_eInitialize_DES SensorDriver_SensorDriverBody_eInitialize_des = {
    &tSensorDriverBody_eInitialize_MT,
    &tSensorDriverBody_SINGLE_CELL_INIB,     /* INIB */
};
const struct tag_tSensorDriverBody_eiBody_DES SensorDriver_SensorDriverBody_eiBody_des = {
    &tSensorDriverBody_eiBody_MT,
    &tSensorDriverBody_SINGLE_CELL_INIB,     /* INIB */
};
/* CB ����������� #_CIC_# */
void
tSensorDriverBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
