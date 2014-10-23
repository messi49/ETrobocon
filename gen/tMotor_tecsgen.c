/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMotor_tecsgen.h"

#include "tMotor_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMotor : omitted by entry port optimize */
/* eiMotorInterrupt */
struct tag_tMotor_eiMotorInterrupt_DES {
    const struct tag_siMotorInterrupt_VMT *vmt;
    tMotor_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMotor : omitted by entry port optimize */
/* eiMotorInterrupt */
void           tMotor_eiMotorInterrupt_quadDecode_skel( struct tag_siMotorInterrupt_VDES *epd, uint32_t pins)
{
    struct tag_tMotor_eiMotorInterrupt_DES *lepd
        = (struct tag_tMotor_eiMotorInterrupt_DES *)epd;
    tMotor_eiMotorInterrupt_quadDecode( lepd->idx, pins );
}
void           tMotor_eiMotorInterrupt_stopMotor_skel( struct tag_siMotorInterrupt_VDES *epd)
{
    struct tag_tMotor_eiMotorInterrupt_DES *lepd
        = (struct tag_tMotor_eiMotorInterrupt_DES *)epd;
    tMotor_eiMotorInterrupt_stopMotor( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMotor : omitted by entry port optimize */
/* eiMotorInterrupt */
static const struct tag_siMotorInterrupt_VMT tMotor_eiMotorInterrupt_MT = {
    tMotor_eiMotorInterrupt_quadDecode_skel,
    tMotor_eiMotorInterrupt_stopMotor_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */



/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMotor_INIB tMotor_INIB_tab[] = {
    /* cell: tMotor_CB_tab[0]:  TailMotor id=1 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* portNumber */
    },
    /* cell: tMotor_CB_tab[1]:  RightMotor id=2 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1,                                       /* portNumber */
    },
    /* cell: tMotor_CB_tab[2]:  LeftMotor id=3 */
    {
        /* call port #_CP_# */ 
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* portNumber */
    },
};
/* セル CB #_CB_# */
struct tag_tMotor_CB tMotor_CB_tab[3];
/* 受け口ディスクリプタ #_EPD_# */
/* eMotor : omitted by entry port optimize */
const struct tag_tMotor_eiMotorInterrupt_DES TailMotor_eiMotorInterrupt_des = {
    &tMotor_eiMotorInterrupt_MT,
    &tMotor_CB_tab[0],     /* CB */
};
/* eMotor : omitted by entry port optimize */
const struct tag_tMotor_eiMotorInterrupt_DES RightMotor_eiMotorInterrupt_des = {
    &tMotor_eiMotorInterrupt_MT,
    &tMotor_CB_tab[1],     /* CB */
};
/* eMotor : omitted by entry port optimize */
const struct tag_tMotor_eiMotorInterrupt_DES LeftMotor_eiMotorInterrupt_des = {
    &tMotor_eiMotorInterrupt_MT,
    &tMotor_CB_tab[2],     /* CB */
};
/* CB 初期化コード #_CIC_# */
void
tMotor_CB_initialize()
{
    tMotor_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
