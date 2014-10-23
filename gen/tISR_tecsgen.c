/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tISR_tecsgen.h"

#include "tISR_factory.h"



/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_siHandlerBody_VDES AVR_TWI_TWIBody_eiInterruptBody_des;

extern struct tag_siHandlerBody_VDES SIOPortTarget_SIOPortNXT_eiISR_des;

extern struct tag_siHandlerBody_VDES SensorDriver_SensorDriverBody_eiBody_des;

extern struct tag_siHandlerBody_VDES RotaryEncoder_RotaryEncoderBody_eiInterruptBody_des;

extern struct tag_siHandlerBody_VDES Display_SPI_SPIBody_eiInterruptBody_des;

extern struct tag_siHandlerBody_VDES Sound_SoundBody_eiBody_des;

/* 呼び口配列 #_CPA_# */






/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tISR_INIB tISR_INIB_tab[] = {
    /* cell: tISR_CB_tab[0]:  AVR_TWI_ISRTWI_ISRMain id=1 */
    {
        /* call port #_CP_# */ 
        &AVR_TWI_TWIBody_eiInterruptBody_des,    /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tISR_CB_tab[1]:  SIOPortTarget_SIOISR_ISRMain id=2 */
    {
        /* call port #_CP_# */ 
        &SIOPortTarget_SIOPortNXT_eiISR_des,     /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tISR_CB_tab[2]:  SensorDriver_ISRI2C_ISRMain id=3 */
    {
        /* call port #_CP_# */ 
        &SensorDriver_SensorDriverBody_eiBody_des, /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tISR_CB_tab[3]:  RotaryEncoder_ISRMotor_ISRMain id=4 */
    {
        /* call port #_CP_# */ 
        &RotaryEncoder_RotaryEncoderBody_eiInterruptBody_des, /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tISR_CB_tab[4]:  Display_SPI_ISRSPI_ISRMain id=5 */
    {
        /* call port #_CP_# */ 
        &Display_SPI_SPIBody_eiInterruptBody_des, /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tISR_CB_tab[5]:  Sound_ISRSound_ISRMain id=6 */
    {
        /* call port #_CP_# */ 
        &Sound_SoundBody_eiBody_des,             /* ciBody #_CCP1_# */
        /* entry port #_EP_# */ 
    },
};
/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tISR_CB_initialize()
{
    tISR_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
