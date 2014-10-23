/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tGyroSensorBody_tecsgen.h"

#include "tGyroSensorBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
struct tag_tGyroSensorBody_eiSensorDriver_DES {
    const struct tag_siSensorDriver_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
void           tGyroSensorBody_eiSensorDriver_initialize_skel( struct tag_siSensorDriver_VDES *epd)
{
    struct tag_tGyroSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tGyroSensorBody_eiSensorDriver_DES *)epd;
    tGyroSensorBody_eiSensorDriver_initialize( lepd->idx );
}
void           tGyroSensorBody_eiSensorDriver_i2cInterruptBody_skel( struct tag_siSensorDriver_VDES *epd, uint32_t inputs)
{
    struct tag_tGyroSensorBody_eiSensorDriver_DES *lepd
        = (struct tag_tGyroSensorBody_eiSensorDriver_DES *)epd;
    tGyroSensorBody_eiSensorDriver_i2cInterruptBody( lepd->idx, inputs );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSensor : omitted by entry port optimize */
/* eiSensorDriver */
static const struct tag_siSensorDriver_VMT tGyroSensorBody_eiSensorDriver_MT = {
    tGyroSensorBody_eiSensorDriver_initialize_skel,
    tGyroSensorBody_eiSensorDriver_i2cInterruptBody_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
/* eSensor : omitted by entry port optimize */
const struct tag_tGyroSensorBody_eiSensorDriver_DES GyroSensor_GyroSensorBody_eiSensorDriver_des = {
    &tGyroSensorBody_eiSensorDriver_MT,
    0,
};
/* CB 初期化コード #_CIC_# */
void
tGyroSensorBody_CB_initialize()
{
    tGyroSensorBody_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
