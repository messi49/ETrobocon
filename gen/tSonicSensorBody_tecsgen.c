/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSonicSensorBody_tecsgen.h"

#include "tSonicSensorBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tSonicSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    tSonicSensorBody_IDX  idx;
};

/* eTerminate */
struct tag_tSonicSensorBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tSonicSensorBody_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
void           tSonicSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tSonicSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tSonicSensorBody_eiSensorDriver_DES *)epd;
    tSonicSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tSonicSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tSonicSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tSonicSensorBody_eiSensorDriver_DES *)epd;
    tSonicSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}
/* eTerminate */
void           tSonicSensorBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    struct tag_tSonicSensorBody_eTerminate_DES *lepd
        = (struct tag_tSonicSensorBody_eTerminate_DES *)epd;
    tSonicSensorBody_eTerminate_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tSonicSensorBody_eiSensorDriver_MT = {
    tSonicSensorBody_eiSensorDriver_initialize_skel,
    tSonicSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tSonicSensorBody_eTerminate_MT = {
    tSonicSensorBody_eTerminate_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル CB #_CB_# */
struct tag_tSonicSensorBody_CB tSonicSensorBody_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
/* eSensor : omitted by entry port optimize */
const struct tag_tSonicSensorBody_eiSensorDriver_DES SonicSensor_SonicSensorBody_eiSensorDriver_des = {
    &tSonicSensorBody_eiSensorDriver_MT,
    &tSonicSensorBody_CB_tab[0],     /* CB */
};
const struct tag_tSonicSensorBody_eTerminate_DES SonicSensor_SonicSensorBody_eTerminate_des = {
    &tSonicSensorBody_eTerminate_MT,
    &tSonicSensorBody_CB_tab[0],     /* CB */
};
/* CB 初期化コード #_CIC_# */
void
tSonicSensorBody_CB_initialize()
{
    tSonicSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
