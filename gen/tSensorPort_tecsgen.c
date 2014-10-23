/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSensorPort_tecsgen.h"

#include "tSensorPort_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eSensorPort : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eSensorPort : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eSensorPort : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */




/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tSensorPort_INIB tSensorPort_INIB_tab[] = {
    /* cell: tSensorPort_CB_tab[0]:  GyroSensor_SensorPort id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* portNumber */
    },
    /* cell: tSensorPort_CB_tab[1]:  SonicSensor_SensorPort id=2 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* portNumber */
    },
    /* cell: tSensorPort_CB_tab[2]:  LightSensor_SensorPort id=3 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* portNumber */
    },
    /* cell: tSensorPort_CB_tab[3]:  TouchSensor_SensorPort id=4 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        3,                                       /* portNumber */
    },
};
/* 受け口ディスクリプタ #_EPD_# */
/* eSensorPort : omitted by entry port optimize */
/* eSensorPort : omitted by entry port optimize */
/* eSensorPort : omitted by entry port optimize */
/* eSensorPort : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tSensorPort_CB_initialize()
{
    tSensorPort_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
