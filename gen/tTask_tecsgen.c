/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTask_tecsgen.h"

#include "tTask_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* 受け口スケルトン関数 #_EPSF_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sTaskBody_VDES ConnectBluetooth_eConnectBluetooth_des;

extern struct tag_sTaskBody_VDES StarterTaskBody_eBody_des;

extern struct tag_sTaskBody_VDES GetCommandTaskBody_eBody_des;

extern struct tag_sTaskBody_VDES LogTask_LogTaskMain_eLogTaskBody_des;

extern struct tag_sTaskBody_VDES TailControllerTaskBody_eBody_des;

extern struct tag_sTaskBody_VDES BalancerTaskBody_eBody_des;

extern struct tag_sTaskBody_VDES LinetracerTaskBody_eBody_des;

extern struct tag_sTaskBody_VDES GetLogTaskBody_eBody_des;

/* 呼び口配列 #_CPA_# */








/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  ConnectBluetoothTask id=1 */
    {
        /* call port #_CP_# */ 
        &ConnectBluetooth_eConnectBluetooth_des, /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_ConnectBluetoothTask,        /* id */
    },
    /* cell: tTask_CB_tab[1]:  StarterTask id=2 */
    {
        /* call port #_CP_# */ 
        &StarterTaskBody_eBody_des,              /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_StarterTask,                 /* id */
    },
    /* cell: tTask_CB_tab[2]:  GetCommandTask id=3 */
    {
        /* call port #_CP_# */ 
        &GetCommandTaskBody_eBody_des,           /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_GetCommandTask,              /* id */
    },
    /* cell: tTask_CB_tab[3]:  LogTask_Task id=4 */
    {
        /* call port #_CP_# */ 
        &LogTask_LogTaskMain_eLogTaskBody_des,   /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_LogTask_Task,                /* id */
    },
    /* cell: tTask_CB_tab[4]:  TailControllerTask_Task id=5 */
    {
        /* call port #_CP_# */ 
        &TailControllerTaskBody_eBody_des,       /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_TailControllerTask_Task,     /* id */
    },
    /* cell: tTask_CB_tab[5]:  BalancerTask_Task id=6 */
    {
        /* call port #_CP_# */ 
        &BalancerTaskBody_eBody_des,             /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_BalancerTask_Task,           /* id */
    },
    /* cell: tTask_CB_tab[6]:  LinetracerTask_Task id=7 */
    {
        /* call port #_CP_# */ 
        &LinetracerTaskBody_eBody_des,           /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_LinetracerTask_Task,         /* id */
    },
    /* cell: tTask_CB_tab[7]:  GetLogTask_Task id=8 */
    {
        /* call port #_CP_# */ 
        &GetLogTaskBody_eBody_des,               /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_GetLogTask_Task,             /* id */
    },
};
/* 受け口ディスクリプタ #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
	int		i;
	FOREACH_CELL(i,p_cb)
		SET_CB_INIB_POINTER(i,p_cb)
		INITIALIZE_CB(p_cb)
	END_FOREACH_CELL
}
