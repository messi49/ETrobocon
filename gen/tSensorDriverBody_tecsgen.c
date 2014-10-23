/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSensorDriverBody_tecsgen.h"

#include "tSensorDriverBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
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

/* 受け口スケルトン関数 #_EPSF_# */
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

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tSensorDriverBody_eInitialize_MT = {
    tSensorDriverBody_eInitialize_main_skel,
};
/* eiBody */
static const struct tag_siHandlerBody_VMT tSensorDriverBody_eiBody_MT = {
    tSensorDriverBody_eiBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_siSensorDriver_VDES GyroSensor_GyroSensorBody_eiSensorDriver_des;
extern struct tag_siSensorDriver_VDES SonicSensor_SonicSensorBody_eiSensorDriver_des;
extern struct tag_siSensorDriver_VDES LightSensor_LightSensorBody_eiSensorDriver_des;
extern struct tag_siSensorDriver_VDES TouchSensor_TouchSensorBody_eiSensorDriver_des;

/* 呼び口配列 #_CPA_# */
struct tag_siSensorDriver_VDES *SensorDriver_SensorDriverBody_ciSensorDriver[] = {
    &GyroSensor_GyroSensorBody_eiSensorDriver_des,
    &SonicSensor_SonicSensorBody_eiSensorDriver_des,
    &LightSensor_LightSensorBody_eiSensorDriver_des,
    &TouchSensor_TouchSensorBody_eiSensorDriver_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
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
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tSensorDriverBody_eInitialize_DES SensorDriver_SensorDriverBody_eInitialize_des = {
    &tSensorDriverBody_eInitialize_MT,
    &tSensorDriverBody_SINGLE_CELL_INIB,     /* INIB */
};
const struct tag_tSensorDriverBody_eiBody_DES SensorDriver_SensorDriverBody_eiBody_des = {
    &tSensorDriverBody_eiBody_MT,
    &tSensorDriverBody_SINGLE_CELL_INIB,     /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tSensorDriverBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
