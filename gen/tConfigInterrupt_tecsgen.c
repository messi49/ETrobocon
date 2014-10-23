/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tConfigInterrupt_tecsgen.h"

#include "tConfigInterrupt_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eConfigInterrupt : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eConfigInterrupt : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eConfigInterrupt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */






/* 呼び口配列 #_CPA_# */






/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tConfigInterrupt_INIB tConfigInterrupt_INIB_tab[] = {
    /* cell: tConfigInterrupt_CB_tab[0]:  AVR_TWI_ISRTWI_ConfigInterrupt id=1 */
    {
        /* attribute(RO) */ 
        INTNO_TWI_PID,                           /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[1]:  SIOPortTarget_SIOISR_ConfigInterrupt id=2 */
    {
        /* attribute(RO) */ 
        7,                                       /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[2]:  SensorDriver_ISRI2C_ConfigInterrupt id=3 */
    {
        /* attribute(RO) */ 
        INTNO_TC0_PID,                           /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[3]:  RotaryEncoder_ISRMotor_ConfigInterrupt id=4 */
    {
        /* attribute(RO) */ 
        INTNO_PIOA_PID,                          /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[4]:  Display_SPI_ISRSPI_ConfigInterrupt id=5 */
    {
        /* attribute(RO) */ 
        INTNO_SPI_PID,                           /* interruptNumber */
    },
    /* cell: tConfigInterrupt_CB_tab[5]:  Sound_ISRSound_ConfigInterrupt id=6 */
    {
        /* attribute(RO) */ 
        INTNO_SSC_PID,                           /* interruptNumber */
    },
};
/* 受け口ディスクリプタ #_EPD_# */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* eConfigInterrupt : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tConfigInterrupt_CB_initialize()
{
    tConfigInterrupt_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
