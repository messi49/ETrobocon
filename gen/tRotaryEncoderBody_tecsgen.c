/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tRotaryEncoderBody_tecsgen.h"

#include "tRotaryEncoderBody_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInitialize */
struct tag_tRotaryEncoderBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tRotaryEncoderBody_IDX  idx;
};

/* eTerminate */
struct tag_tRotaryEncoderBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tRotaryEncoderBody_IDX  idx;
};

/* eiCyclicBody */
struct tag_tRotaryEncoderBody_eiCyclicBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tRotaryEncoderBody_IDX  idx;
};

/* eiInterruptBody */
struct tag_tRotaryEncoderBody_eiInterruptBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tRotaryEncoderBody_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eInitialize */
void           tRotaryEncoderBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tRotaryEncoderBody_eInitialize_main( );
}
/* eTerminate */
void           tRotaryEncoderBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    tRotaryEncoderBody_eTerminate_main( );
}
/* eiCyclicBody */
void           tRotaryEncoderBody_eiCyclicBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tRotaryEncoderBody_eiCyclicBody_main( );
}
/* eiInterruptBody */
void           tRotaryEncoderBody_eiInterruptBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tRotaryEncoderBody_eiInterruptBody_main( );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tRotaryEncoderBody_eInitialize_MT = {
    tRotaryEncoderBody_eInitialize_main_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tRotaryEncoderBody_eTerminate_MT = {
    tRotaryEncoderBody_eTerminate_main_skel,
};
/* eiCyclicBody */
static const struct tag_siHandlerBody_VMT tRotaryEncoderBody_eiCyclicBody_MT = {
    tRotaryEncoderBody_eiCyclicBody_main_skel,
};
/* eiInterruptBody */
static const struct tag_siHandlerBody_VMT tRotaryEncoderBody_eiInterruptBody_MT = {
    tRotaryEncoderBody_eiInterruptBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_siMotorInterrupt_VDES TailMotor_eiMotorInterrupt_des;
extern struct tag_siMotorInterrupt_VDES RightMotor_eiMotorInterrupt_des;
extern struct tag_siMotorInterrupt_VDES LeftMotor_eiMotorInterrupt_des;

/* 呼び口配列 #_CPA_# */
struct tag_siMotorInterrupt_VDES *RotaryEncoder_RotaryEncoderBody_ciMotorInterrupt[] = {
    &TailMotor_eiMotorInterrupt_des,
    &RightMotor_eiMotorInterrupt_des,
    &LeftMotor_eiMotorInterrupt_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tRotaryEncoderBody_INIB tRotaryEncoderBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    RotaryEncoder_RotaryEncoderBody_ciMotorInterrupt, /* #_CCP3_# */
    3,                                       /* length of ciMotorInterrupt (n_ciMotorInterrupt) #_CCP4_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    (void*)0xFFFFF400,                       /* PIOBase */
    INTNO_PIOA_PID,                          /* interruptNumber */
};
/* セル CB #_CB_# */
struct tag_tRotaryEncoderBody_CB tRotaryEncoderBody_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
const struct tag_tRotaryEncoderBody_eInitialize_DES RotaryEncoder_RotaryEncoderBody_eInitialize_des = {
    &tRotaryEncoderBody_eInitialize_MT,
    &tRotaryEncoderBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tRotaryEncoderBody_eTerminate_DES RotaryEncoder_RotaryEncoderBody_eTerminate_des = {
    &tRotaryEncoderBody_eTerminate_MT,
    &tRotaryEncoderBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tRotaryEncoderBody_eiCyclicBody_DES RotaryEncoder_RotaryEncoderBody_eiCyclicBody_des = {
    &tRotaryEncoderBody_eiCyclicBody_MT,
    &tRotaryEncoderBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tRotaryEncoderBody_eiInterruptBody_DES RotaryEncoder_RotaryEncoderBody_eiInterruptBody_des = {
    &tRotaryEncoderBody_eiInterruptBody_MT,
    &tRotaryEncoderBody_SINGLE_CELL_CB,       /* CB */
};
/* CB 初期化コード #_CIC_# */
void
tRotaryEncoderBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
