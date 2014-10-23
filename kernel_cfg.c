/* kernel_cfg.c */
#include "kernel/kernel_int.h"
#include "kernel_cfg.h"

#ifndef TOPPERS_EMPTY_LABEL
#define TOPPERS_EMPTY_LABEL(x,y) x y[0]
#endif

#if TKERNEL_PRID != 0x07u
#error The kernel does not match this configuration file.
#endif

/*
 *  Include Directives (#include)
 */

#include "target_timer.h"
#include "cb_type_only.h"
#include "tTask_tecsgen.h"
#include "tInitializeRoutine_tecsgen.h"
#include "tTerminateRoutine_tecsgen.h"
#include "tISR_tecsgen.h"
#include "tCyclicHandler_tecsgen.h"
#include "tAlarmHandler_tecsgen.h"
#include "target_at91sam7s.h"
#include "syssvc/tLogTask.h"
#include "syssvc/banner.h"

/*
 *  Default Definitions of Trace Log Macros
 */

#ifndef LOG_ISR_ENTER
#define LOG_ISR_ENTER(intno)
#endif /* LOG_ISR_ENTER */

#ifndef LOG_ISR_LEAVE
#define LOG_ISR_LEAVE(intno)
#endif /* LOG_ISR_LEAVE */

/*
 *  Task Management Functions
 */

const ID _kernel_tmax_tskid = (TMIN_TSKID + TNUM_TSKID - 1);

static STK_T _kernel_stack_TSKID_tTask_ConnectBluetoothTask[COUNT_STK_T(512)];
static STK_T _kernel_stack_TSKID_tTask_StarterTask[COUNT_STK_T(1024)];
static STK_T _kernel_stack_TSKID_tTask_GetCommandTask[COUNT_STK_T(1024)];
static STK_T _kernel_stack_TSKID_tTask_LogTask_Task[COUNT_STK_T(512)];
static STK_T _kernel_stack_TSKID_tTask_TailControllerTask_Task[COUNT_STK_T(512)];
static STK_T _kernel_stack_TSKID_tTask_BalancerTask_Task[COUNT_STK_T(1024)];
static STK_T _kernel_stack_TSKID_tTask_LinetracerTask_Task[COUNT_STK_T(512)];
static STK_T _kernel_stack_TSKID_tTask_GetLogTask_Task[COUNT_STK_T(1024)];

const TINIB _kernel_tinib_table[TNUM_TSKID] = {
	{ (TA_ACT), (intptr_t)(&tTask_CB_tab[0]), ((TASK)(tTask_start_task)), INT_PRIORITY(2), ROUND_STK_T(512), _kernel_stack_TSKID_tTask_ConnectBluetoothTask, (TA_NULL), (tTask_start_exception) },
	{ (TA_ACT), (intptr_t)(&tTask_CB_tab[1]), ((TASK)(tTask_start_task)), INT_PRIORITY(6), ROUND_STK_T(1024), _kernel_stack_TSKID_tTask_StarterTask, (TA_NULL), (tTask_start_exception) },
	{ (TA_ACT), (intptr_t)(&tTask_CB_tab[2]), ((TASK)(tTask_start_task)), INT_PRIORITY(5), ROUND_STK_T(1024), _kernel_stack_TSKID_tTask_GetCommandTask, (TA_NULL), (tTask_start_exception) },
	{ (TA_ACT), (intptr_t)(&tTask_CB_tab[3]), ((TASK)(tTask_start_task)), INT_PRIORITY(3), ROUND_STK_T(512), _kernel_stack_TSKID_tTask_LogTask_Task, (TA_NULL), (tTask_start_exception) },
	{ (TA_NULL), (intptr_t)(&tTask_CB_tab[4]), ((TASK)(tTask_start_task)), INT_PRIORITY(5), ROUND_STK_T(512), _kernel_stack_TSKID_tTask_TailControllerTask_Task, (TA_NULL), (tTask_start_exception) },
	{ (TA_NULL), (intptr_t)(&tTask_CB_tab[5]), ((TASK)(tTask_start_task)), INT_PRIORITY(1), ROUND_STK_T(1024), _kernel_stack_TSKID_tTask_BalancerTask_Task, (TA_NULL), (tTask_start_exception) },
	{ (TA_NULL), (intptr_t)(&tTask_CB_tab[6]), ((TASK)(tTask_start_task)), INT_PRIORITY(4), ROUND_STK_T(512), _kernel_stack_TSKID_tTask_LinetracerTask_Task, (TA_NULL), (tTask_start_exception) },
	{ (TA_NULL), (intptr_t)(&tTask_CB_tab[7]), ((TASK)(tTask_start_task)), INT_PRIORITY(6), ROUND_STK_T(1024), _kernel_stack_TSKID_tTask_GetLogTask_Task, (TA_NULL), (tTask_start_exception) }
};

TCB _kernel_tcb_table[TNUM_TSKID];

const ID _kernel_torder_table[TNUM_TSKID] = {
	TSKID_tTask_ConnectBluetoothTask, TSKID_tTask_StarterTask, TSKID_tTask_GetCommandTask, TSKID_tTask_LogTask_Task, TSKID_tTask_TailControllerTask_Task, TSKID_tTask_BalancerTask_Task, TSKID_tTask_LinetracerTask_Task, TSKID_tTask_GetLogTask_Task
};

/*
 *  Semaphore Functions
 */

const ID _kernel_tmax_semid = (TMIN_SEMID + TNUM_SEMID - 1);

const SEMINIB _kernel_seminib_table[TNUM_SEMID] = {
	{ (TA_TPRI), (0), (1) },
	{ (TA_NULL), (0), (1) },
	{ (TA_NULL), (0), (1) },
	{ (TA_NULL), (1), (1) }
};

SEMCB _kernel_semcb_table[TNUM_SEMID];

/*
 *  Eventflag Functions
 */

const ID _kernel_tmax_flgid = (TMIN_FLGID + TNUM_FLGID - 1);

TOPPERS_EMPTY_LABEL(const FLGINIB, _kernel_flginib_table);
TOPPERS_EMPTY_LABEL(FLGCB, _kernel_flgcb_table);

/*
 *  Dataqueue Functions
 */

const ID _kernel_tmax_dtqid = (TMIN_DTQID + TNUM_DTQID - 1);

TOPPERS_EMPTY_LABEL(const DTQINIB, _kernel_dtqinib_table);
TOPPERS_EMPTY_LABEL(DTQCB, _kernel_dtqcb_table);

/*
 *  Priority Dataqueue Functions
 */

const ID _kernel_tmax_pdqid = (TMIN_PDQID + TNUM_PDQID - 1);

TOPPERS_EMPTY_LABEL(const PDQINIB, _kernel_pdqinib_table);
TOPPERS_EMPTY_LABEL(PDQCB, _kernel_pdqcb_table);

/*
 *  Mailbox Functions
 */

const ID _kernel_tmax_mbxid = (TMIN_MBXID + TNUM_MBXID - 1);

TOPPERS_EMPTY_LABEL(const MBXINIB, _kernel_mbxinib_table);
TOPPERS_EMPTY_LABEL(MBXCB, _kernel_mbxcb_table);

/*
 *  Fixed-sized Memorypool Functions
 */

const ID _kernel_tmax_mpfid = (TMIN_MPFID + TNUM_MPFID - 1);

TOPPERS_EMPTY_LABEL(const MPFINIB, _kernel_mpfinib_table);
TOPPERS_EMPTY_LABEL(MPFCB, _kernel_mpfcb_table);

/*
 *  Cyclic Handler Functions
 */

const ID _kernel_tmax_cycid = (TMIN_CYCID + TNUM_CYCID - 1);

const CYCINIB _kernel_cycinib_table[TNUM_CYCID] = {
	{ (TA_STA), (intptr_t)(&tCyclicHandler_CB_tab[0]), (tCyclicHandler_start), (10), (1) },
	{ (TA_STA), (intptr_t)(&tCyclicHandler_CB_tab[1]), (tCyclicHandler_start), (2), (1) },
	{ (TA_STA), (intptr_t)(&tCyclicHandler_CB_tab[2]), (tCyclicHandler_start), (10), (1) },
	{ (TA_STA), (intptr_t)(&tCyclicHandler_CB_tab[3]), (tCyclicHandler_start), (1), (1) },
	{ (TA_NULL), (intptr_t)(&tCyclicHandler_CB_tab[4]), (tCyclicHandler_start), (4), (1) },
	{ (TA_NULL), (intptr_t)(&tCyclicHandler_CB_tab[5]), (tCyclicHandler_start), (4), (1) },
	{ (TA_NULL), (intptr_t)(&tCyclicHandler_CB_tab[6]), (tCyclicHandler_start), (10), (1) },
	{ (TA_NULL), (intptr_t)(&tCyclicHandler_CB_tab[7]), (tCyclicHandler_start), (20), (1) }
};

CYCCB _kernel_cyccb_table[TNUM_CYCID];

/*
 *  Alarm Handler Functions
 */

const ID _kernel_tmax_almid = (TMIN_ALMID + TNUM_ALMID - 1);

const ALMINIB _kernel_alminib_table[TNUM_ALMID] = {
	{ (TA_NULL), (intptr_t)(&tAlarmHandler_CB_tab[0]), (tAlarmHandler_start) }
};

ALMCB _kernel_almcb_table[TNUM_ALMID];

/*
 *  Interrupt Management Functions
 */

void
_kernel_inthdr_2(void)
{
	i_begin_int(2);
	LOG_ISR_ENTER(2);
	((ISR)(tISR_start))((intptr_t)(&tISR_CB_tab[3]));
	LOG_ISR_LEAVE(2);
	i_end_int(2);
}
void
_kernel_inthdr_5(void)
{
	i_begin_int(5);
	LOG_ISR_ENTER(5);
	((ISR)(tISR_start))((intptr_t)(&tISR_CB_tab[4]));
	LOG_ISR_LEAVE(5);
	i_end_int(5);
}
void
_kernel_inthdr_7(void)
{
	i_begin_int(7);
	LOG_ISR_ENTER(7);
	((ISR)(tISR_start))((intptr_t)(&tISR_CB_tab[1]));
	LOG_ISR_LEAVE(7);
	i_end_int(7);
}
void
_kernel_inthdr_8(void)
{
	i_begin_int(8);
	LOG_ISR_ENTER(8);
	((ISR)(tISR_start))((intptr_t)(&tISR_CB_tab[5]));
	LOG_ISR_LEAVE(8);
	i_end_int(8);
}
void
_kernel_inthdr_9(void)
{
	i_begin_int(9);
	LOG_ISR_ENTER(9);
	((ISR)(tISR_start))((intptr_t)(&tISR_CB_tab[0]));
	LOG_ISR_LEAVE(9);
	i_end_int(9);
}
void
_kernel_inthdr_12(void)
{
	i_begin_int(12);
	LOG_ISR_ENTER(12);
	((ISR)(tISR_start))((intptr_t)(&tISR_CB_tab[2]));
	LOG_ISR_LEAVE(12);
	i_end_int(12);
}

#define TNUM_INHNO	7
const uint_t _kernel_tnum_inhno = TNUM_INHNO;

INTHDR_ENTRY(INHNO_SYSIRQ, 1, target_timer_handler)
INTHDR_ENTRY(2, 2, _kernel_inthdr_2)
INTHDR_ENTRY(5, 5, _kernel_inthdr_5)
INTHDR_ENTRY(7, 7, _kernel_inthdr_7)
INTHDR_ENTRY(8, 8, _kernel_inthdr_8)
INTHDR_ENTRY(9, 9, _kernel_inthdr_9)
INTHDR_ENTRY(12, 12, _kernel_inthdr_12)

const INHINIB _kernel_inhinib_table[TNUM_INHNO] = {
	{ (INHNO_SYSIRQ), (TA_NULL), (FP)(INT_ENTRY(INHNO_SYSIRQ, target_timer_handler)) },
	{ (2), (TA_NULL), (FP)(INT_ENTRY(2, _kernel_inthdr_2)) },
	{ (5), (TA_NULL), (FP)(INT_ENTRY(5, _kernel_inthdr_5)) },
	{ (7), (TA_NULL), (FP)(INT_ENTRY(7, _kernel_inthdr_7)) },
	{ (8), (TA_NULL), (FP)(INT_ENTRY(8, _kernel_inthdr_8)) },
	{ (9), (TA_NULL), (FP)(INT_ENTRY(9, _kernel_inthdr_9)) },
	{ (12), (TA_NULL), (FP)(INT_ENTRY(12, _kernel_inthdr_12)) }
};

#define TNUM_INTNO	7
const uint_t _kernel_tnum_intno = TNUM_INTNO;

const INTINIB _kernel_intinib_table[TNUM_INTNO] = {
	{ (INTNO_SYSIRQ), (TA_ENAINT|INTATR_SYSIRQ), (INTPRI_SYSIRQ) },
	{ (INTNO_TWI_PID), ((TA_ENAINT | TA_LOWLEVEL)), (-5) },
	{ (7), (TA_NULL), (-2) },
	{ (INTNO_TC0_PID), ((TA_ENAINT | TA_LOWLEVEL)), (-4) },
	{ (INTNO_PIOA_PID), ((TA_ENAINT | TA_LOWLEVEL)), (-4) },
	{ (INTNO_SPI_PID), ((TA_ENAINT | TA_LOWLEVEL)), (-4) },
	{ (INTNO_SSC_PID), ((TA_ENAINT | TA_EDGE)), (-1) }
};

/*
 *  CPU Exception Management Functions
 */

/*
 *  Stack Area for Non-task Context
 */

#ifdef DEFAULT_ISTK

#define TOPPERS_ISTKSZ		DEFAULT_ISTKSZ
#define TOPPERS_ISTK		DEFAULT_ISTK

#else /* DEAULT_ISTK */

static STK_T				_kernel_istack[COUNT_STK_T(DEFAULT_ISTKSZ)];
#define TOPPERS_ISTKSZ		ROUND_STK_T(DEFAULT_ISTKSZ)
#define TOPPERS_ISTK		_kernel_istack

#endif /* DEAULT_ISTK */

const SIZE		_kernel_istksz = TOPPERS_ISTKSZ;
STK_T *const	_kernel_istk = TOPPERS_ISTK;

#ifdef TOPPERS_ISTKPT
STK_T *const	_kernel_istkpt = TOPPERS_ISTKPT(TOPPERS_ISTK, TOPPERS_ISTKSZ);
#endif /* TOPPERS_ISTKPT */

/*
 *  Time Event Management
 */

TMEVTN   _kernel_tmevt_heap[TNUM_TSKID + TNUM_CYCID + TNUM_ALMID];

/*
 *  Module Initialization Function
 */

void
_kernel_initialize_object(void)
{
	_kernel_initialize_task();
	_kernel_initialize_semaphore();
	_kernel_initialize_cyclic();
	_kernel_initialize_alarm();
	_kernel_initialize_interrupt();
	_kernel_initialize_exception();
}

/*
 *  Initialization Routine
 */

void
_kernel_call_inirtn(void)
{
	((INIRTN)(target_timer_initialize))((intptr_t)(0));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[0]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[1]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[2]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[3]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[4]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[5]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[6]));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(&tInitializeRoutine_CB_tab[7]));
	((INIRTN)(print_banner))((intptr_t)(0));
}

/*
 *  Termination Routine
 */

void
_kernel_call_terrtn(void)
{
	((TERRTN)(tLogTask_terminate))((intptr_t)(0));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[6]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[5]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[4]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[3]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[2]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[1]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_CB_tab[0]));
	((TERRTN)(target_timer_terminate))((intptr_t)(0));
}



const FP _kernel_exch_tbl[TNUM_EXCH] = {
 	(FP)(_kernel_default_exc_handler), /* 0 */
 	(FP)(_kernel_default_exc_handler), /* 1 */
 	(FP)(_kernel_default_exc_handler), /* 2 */
 	(FP)(_kernel_default_exc_handler), /* 3 */
 	(FP)(_kernel_default_exc_handler), /* 4 */
 	(FP)(_kernel_default_exc_handler), /* 5 */
 	(FP)(_kernel_default_exc_handler), /* 6 */

};



const PRI _kernel_inh_ipm_tbl[TNUM_INH] = {
 	0, /* 0 */
 	INTPRI_SYSIRQ, /* 1 */
 	-4, /* 2 */
 	0, /* 3 */
 	0, /* 4 */
 	-4, /* 5 */
 	0, /* 6 */
 	-2, /* 7 */
 	-1, /* 8 */
 	-5, /* 9 */
 	0, /* 10 */
 	0, /* 11 */
 	-4, /* 12 */
 	0, /* 13 */
 	0, /* 14 */
 	0, /* 15 */
 	0, /* 16 */
 	0, /* 17 */
 	0, /* 18 */
 	0, /* 19 */
 	0, /* 20 */
 	0, /* 21 */
 	0, /* 22 */
 	0, /* 23 */
 	0, /* 24 */
 	0, /* 25 */
 	0, /* 26 */
 	0, /* 27 */
 	0, /* 28 */
 	0, /* 29 */
 	0, /* 30 */
 	0, /* 31 */

};

const uint32_t _kernel_ipm_mask_tbl[8]={
	UINT32_C(0x00000000),/* Priority 0 */
	UINT32_C(0x00000100),/* Priority -1 */
	UINT32_C(0x00000180),/* Priority -2 */
	UINT32_C(0x00000180),/* Priority -3 */
	UINT32_C(0x000011a6),/* Priority -4 */
	UINT32_C(0x000013a6),/* Priority -5 */
	UINT32_C(0x000013a6),/* Priority -6 */
	UINT32_C(0x000013a6),/* Priority -7 */

};

const FP _kernel_inh_tbl[TNUM_INH] = {
 	(FP)(_kernel_default_int_handler), /* 0 */
 	(FP)(target_timer_handler), /* 1 */
 	(FP)(_kernel_inthdr_2), /* 2 */
 	(FP)(_kernel_default_int_handler), /* 3 */
 	(FP)(_kernel_default_int_handler), /* 4 */
 	(FP)(_kernel_inthdr_5), /* 5 */
 	(FP)(_kernel_default_int_handler), /* 6 */
 	(FP)(_kernel_inthdr_7), /* 7 */
 	(FP)(_kernel_inthdr_8), /* 8 */
 	(FP)(_kernel_inthdr_9), /* 9 */
 	(FP)(_kernel_default_int_handler), /* 10 */
 	(FP)(_kernel_default_int_handler), /* 11 */
 	(FP)(_kernel_inthdr_12), /* 12 */
 	(FP)(_kernel_default_int_handler), /* 13 */
 	(FP)(_kernel_default_int_handler), /* 14 */
 	(FP)(_kernel_default_int_handler), /* 15 */
 	(FP)(_kernel_default_int_handler), /* 16 */
 	(FP)(_kernel_default_int_handler), /* 17 */
 	(FP)(_kernel_default_int_handler), /* 18 */
 	(FP)(_kernel_default_int_handler), /* 19 */
 	(FP)(_kernel_default_int_handler), /* 20 */
 	(FP)(_kernel_default_int_handler), /* 21 */
 	(FP)(_kernel_default_int_handler), /* 22 */
 	(FP)(_kernel_default_int_handler), /* 23 */
 	(FP)(_kernel_default_int_handler), /* 24 */
 	(FP)(_kernel_default_int_handler), /* 25 */
 	(FP)(_kernel_default_int_handler), /* 26 */
 	(FP)(_kernel_default_int_handler), /* 27 */
 	(FP)(_kernel_default_int_handler), /* 28 */
 	(FP)(_kernel_default_int_handler), /* 29 */
 	(FP)(_kernel_default_int_handler), /* 30 */
 	(FP)(_kernel_default_int_handler), /* 31 */

};

