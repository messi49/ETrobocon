/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siKernel_TECSGEN_H
#define siKernel_TECSGEN_H

/*
 * signature   :  siKernel
 * global name :  siKernel
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siKernel_VDES {
    struct tag_siKernel_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siKernel_VMT {
    ER             (*getTaskId)( struct tag_siKernel_VDES *edp, ID* p_taskId );
    ER             (*rotateReadyQueue)( struct tag_siKernel_VDES *edp, PRI taskPriority );
    ER             (*getMicroTime)( struct tag_siKernel_VDES *edp, SYSUTM* p_systemMicroTime );
    ER             (*lockCpu)( struct tag_siKernel_VDES *edp );
    ER             (*unlockCpu)( struct tag_siKernel_VDES *edp );
    ER             (*exitKernel)( struct tag_siKernel_VDES *edp );
    bool_t         (*senseContext)( struct tag_siKernel_VDES *edp );
    bool_t         (*senseLock)( struct tag_siKernel_VDES *edp );
    bool_t         (*senseDispatch)( struct tag_siKernel_VDES *edp );
    bool_t         (*senseDispatchPendingState)( struct tag_siKernel_VDES *edp );
    bool_t         (*senseKernel)( struct tag_siKernel_VDES *edp );
    bool_t         (*senseDispatchPendingStateCPU)( struct tag_siKernel_VDES *edp, const void* p_exceptionInfomation );
    bool_t         (*senseTaskExceptionPendingStateCPU)( struct tag_siKernel_VDES *edp, const void* p_exceptionInfomation );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIKERNEL_GETTASKID              (1)
#define	FUNCID_SIKERNEL_ROTATEREADYQUEUE       (2)
#define	FUNCID_SIKERNEL_GETMICROTIME           (3)
#define	FUNCID_SIKERNEL_LOCKCPU                (4)
#define	FUNCID_SIKERNEL_UNLOCKCPU              (5)
#define	FUNCID_SIKERNEL_EXITKERNEL             (6)
#define	FUNCID_SIKERNEL_SENSECONTEXT           (7)
#define	FUNCID_SIKERNEL_SENSELOCK              (8)
#define	FUNCID_SIKERNEL_SENSEDISPATCH          (9)
#define	FUNCID_SIKERNEL_SENSEDISPATCHPENDINGSTATE (10)
#define	FUNCID_SIKERNEL_SENSEKERNEL            (11)
#define	FUNCID_SIKERNEL_SENSEDISPATCHPENDINGSTATECPU (12)
#define	FUNCID_SIKERNEL_SENSETASKEXCEPTIONPENDINGSTATECPU (13)

#endif /* siKernel_TECSGEN_H */
