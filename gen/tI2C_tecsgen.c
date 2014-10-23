/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tI2C_tecsgen.h"

#include "tI2C_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eI2C : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eI2C : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eI2C : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
uint8_t tI2C_SonicSensor_I2C_CB_deviceAddress_INIT[3];
I2CPT tI2C_SonicSensor_I2C_CB_partialTransaction_INIT[3];
/* セル INIB #_INIB_# */
tI2C_INIB tI2C_INIB_tab[] = {
    /* cell: tI2C_CB_tab[0]:  SonicSensor_I2C id=1 */
    {
        /* attribute(RO) */ 
        1,                                       /* portNumber */
        0xFFFA0000,                              /* TimerBase */
        tI2C_SonicSensor_I2C_CB_deviceAddress_INIT, /* deviceAddress */
        tI2C_SonicSensor_I2C_CB_partialTransaction_INIT, /* partialTransaction */
    },
};
/* セル CB #_CB_# */
struct tag_tI2C_CB tI2C_CB_tab[1];
/* 受け口ディスクリプタ #_EPD_# */
/* eI2C : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tI2C_CB_initialize()
{
    tI2C_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
