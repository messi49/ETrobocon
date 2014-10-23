/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tLightSensorBody_tecsgen.h"

#include "tLightSensorBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tLightSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    int           idx;
};

/* eTerminate */
struct tag_tLightSensorBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
/* eiSensorDriver */
void           tLightSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tLightSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tLightSensorBody_eiSensorDriver_DES *)epd;
    tLightSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tLightSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tLightSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tLightSensorBody_eiSensorDriver_DES *)epd;
    tLightSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}
/* eTerminate */
void           tLightSensorBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    struct tag_tLightSensorBody_eTerminate_DES *lepd
        = (struct tag_tLightSensorBody_eTerminate_DES *)epd;
    tLightSensorBody_eTerminate_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tLightSensorBody_eiSensorDriver_MT = {
    tLightSensorBody_eiSensorDriver_initialize_skel,
    tLightSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tLightSensorBody_eTerminate_MT = {
    tLightSensorBody_eTerminate_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
/* eSensor : omitted by entry port optimize */
/* eSensorControl : omitted by entry port optimize */
const struct tag_tLightSensorBody_eiSensorDriver_DES LightSensor_LightSensorBody_eiSensorDriver_des = {
    &tLightSensorBody_eiSensorDriver_MT,
    0,
};
const struct tag_tLightSensorBody_eTerminate_DES LightSensor_LightSensorBody_eTerminate_des = {
    &tLightSensorBody_eTerminate_MT,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tLightSensorBody_CB_initialize()
{
    tLightSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
