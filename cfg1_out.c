/* cfg1_out.c */
#define TOPPERS_CFG1_OUT  1
#include "kernel/kernel_int.h"
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


#ifdef INT64_MAX
  typedef int64_t signed_t;
  typedef uint64_t unsigned_t;
#else
  typedef int32_t signed_t;
  typedef uint32_t unsigned_t;
#endif

#include <target_cfg1_out.h>

const uint32_t TOPPERS_cfg_magic_number = 0x12345678;
const uint32_t TOPPERS_cfg_sizeof_signed_t = sizeof(signed_t);
const uint32_t TOPPERS_cfg_sizeof_pointer = sizeof(const volatile void*);
const unsigned_t TOPPERS_cfg_CHAR_BIT = CHAR_BIT;
const unsigned_t TOPPERS_cfg_CHAR_MAX = CHAR_MAX;
const unsigned_t TOPPERS_cfg_CHAR_MIN = CHAR_MIN;
const unsigned_t TOPPERS_cfg_SCHAR_MAX = SCHAR_MAX;
const unsigned_t TOPPERS_cfg_SHRT_MAX = SHRT_MAX;
const unsigned_t TOPPERS_cfg_INT_MAX = INT_MAX;
const unsigned_t TOPPERS_cfg_LONG_MAX = LONG_MAX;

const unsigned_t TOPPERS_cfg_SIL_ENDIAN_BIG = 
#if defined(SIL_ENDIAN_BIG)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_SIL_ENDIAN_LITTLE = 
#if defined(SIL_ENDIAN_LITTLE)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TA_NULL = TA_NULL;
const unsigned_t TOPPERS_cfg_TA_ACT = TA_ACT;
const unsigned_t TOPPERS_cfg_TA_TPRI = TA_TPRI;
const unsigned_t TOPPERS_cfg_TA_MPRI = TA_MPRI;
const unsigned_t TOPPERS_cfg_TA_WMUL = TA_WMUL;
const unsigned_t TOPPERS_cfg_TA_CLR = TA_CLR;
const unsigned_t TOPPERS_cfg_TA_STA = TA_STA;
const unsigned_t TOPPERS_cfg_TA_NONKERNEL = TA_NONKERNEL;
const unsigned_t TOPPERS_cfg_TA_ENAINT = TA_ENAINT;
const unsigned_t TOPPERS_cfg_TA_EDGE = TA_EDGE;
const signed_t TOPPERS_cfg_TMIN_TPRI = TMIN_TPRI;
const signed_t TOPPERS_cfg_TMAX_TPRI = TMAX_TPRI;
const signed_t TOPPERS_cfg_TMIN_DPRI = TMIN_DPRI;
const signed_t TOPPERS_cfg_TMAX_DPRI = TMAX_DPRI;
const signed_t TOPPERS_cfg_TMIN_MPRI = TMIN_MPRI;
const signed_t TOPPERS_cfg_TMAX_MPRI = TMAX_MPRI;
const signed_t TOPPERS_cfg_TMIN_ISRPRI = TMIN_ISRPRI;
const signed_t TOPPERS_cfg_TMAX_ISRPRI = TMAX_ISRPRI;
const unsigned_t TOPPERS_cfg_TMAX_MAXSEM = TMAX_MAXSEM;
const unsigned_t TOPPERS_cfg_TMAX_RELTIM = TMAX_RELTIM;
const signed_t TOPPERS_cfg_TMIN_INTPRI = TMIN_INTPRI;
const unsigned_t TOPPERS_cfg_OMIT_INITIALIZE_INTERRUPT = 
#if defined(OMIT_INITIALIZE_INTERRUPT)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_OMIT_INITIALIZE_EXCEPTION = 
#if defined(OMIT_INITIALIZE_EXCEPTION)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_USE_TSKINICTXB = 
#if defined(USE_TSKINICTXB)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TARGET_TSKATR = 
#if defined(TARGET_TSKATR)
(TARGET_TSKATR);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TARGET_INTATR = 
#if defined(TARGET_INTATR)
(TARGET_INTATR);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TARGET_INHATR = 
#if defined(TARGET_INHATR)
(TARGET_INHATR);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TARGET_ISRATR = 
#if defined(TARGET_ISRATR)
(TARGET_ISRATR);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TARGET_EXCATR = 
#if defined(TARGET_EXCATR)
(TARGET_EXCATR);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TARGET_MIN_STKSZ = 
#if defined(TARGET_MIN_STKSZ)
(TARGET_MIN_STKSZ);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_STKSZ_ALIGN = 
#if defined(CHECK_STKSZ_ALIGN)
(CHECK_STKSZ_ALIGN);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_FUNC_ALIGN = 
#if defined(CHECK_FUNC_ALIGN)
(CHECK_FUNC_ALIGN);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_FUNC_NONNULL = 
#if defined(CHECK_FUNC_NONNULL)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_STACK_ALIGN = 
#if defined(CHECK_STACK_ALIGN)
(CHECK_STACK_ALIGN);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_STACK_NONNULL = 
#if defined(CHECK_STACK_NONNULL)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_MPF_ALIGN = 
#if defined(CHECK_MPF_ALIGN)
(CHECK_MPF_ALIGN);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_CHECK_MPF_NONNULL = 
#if defined(CHECK_MPF_NONNULL)
(1);
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_sizeof_ID = sizeof(ID);
const unsigned_t TOPPERS_cfg_sizeof_uint_t = sizeof(uint_t);
const unsigned_t TOPPERS_cfg_sizeof_SIZE = sizeof(SIZE);
const unsigned_t TOPPERS_cfg_sizeof_ATR = sizeof(ATR);
const unsigned_t TOPPERS_cfg_sizeof_PRI = sizeof(PRI);
const unsigned_t TOPPERS_cfg_sizeof_void_ptr = sizeof(void*);
const unsigned_t TOPPERS_cfg_sizeof_VP = sizeof(void*);
const unsigned_t TOPPERS_cfg_sizeof_intptr_t = sizeof(intptr_t);
const unsigned_t TOPPERS_cfg_sizeof_FP = sizeof(FP);
const unsigned_t TOPPERS_cfg_sizeof_INHNO = sizeof(INHNO);
const unsigned_t TOPPERS_cfg_sizeof_INTNO = sizeof(INTNO);
const unsigned_t TOPPERS_cfg_sizeof_EXCNO = sizeof(EXCNO);
const unsigned_t TOPPERS_cfg_sizeof_TINIB = sizeof(TINIB);
const unsigned_t TOPPERS_cfg_offsetof_TINIB_tskatr = offsetof(TINIB,tskatr);
const unsigned_t TOPPERS_cfg_offsetof_TINIB_exinf = offsetof(TINIB,exinf);
const unsigned_t TOPPERS_cfg_offsetof_TINIB_task = offsetof(TINIB,task);
const unsigned_t TOPPERS_cfg_offsetof_TINIB_ipriority = offsetof(TINIB,ipriority);
const unsigned_t TOPPERS_cfg_offsetof_TINIB_stksz = 
#if !defined(USE_TSKINICTXB)
(offsetof(TINIB,stksz));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offsetof_TINIB_stk = 
#if !defined(USE_TSKINICTXB)
(offsetof(TINIB,stk));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offsetof_TINIB_texatr = offsetof(TINIB,texatr);
const unsigned_t TOPPERS_cfg_offsetof_TINIB_texrtn = offsetof(TINIB,texrtn);
const unsigned_t TOPPERS_cfg_sizeof_SEMINIB = sizeof(SEMINIB);
const unsigned_t TOPPERS_cfg_offsetof_SEMINIB_sematr = offsetof(SEMINIB,sematr);
const unsigned_t TOPPERS_cfg_offsetof_SEMINIB_isemcnt = offsetof(SEMINIB,isemcnt);
const unsigned_t TOPPERS_cfg_offsetof_SEMINIB_maxsem = offsetof(SEMINIB,maxsem);
const unsigned_t TOPPERS_cfg_sizeof_FLGPTN = sizeof(FLGPTN);
const unsigned_t TOPPERS_cfg_sizeof_FLGINIB = sizeof(FLGINIB);
const unsigned_t TOPPERS_cfg_offsetof_FLGINIB_flgatr = offsetof(FLGINIB,flgatr);
const unsigned_t TOPPERS_cfg_offsetof_FLGINIB_iflgptn = offsetof(FLGINIB,iflgptn);
const unsigned_t TOPPERS_cfg_sizeof_DTQINIB = sizeof(DTQINIB);
const unsigned_t TOPPERS_cfg_offsetof_DTQINIB_dtqatr = offsetof(DTQINIB,dtqatr);
const unsigned_t TOPPERS_cfg_offsetof_DTQINIB_dtqcnt = offsetof(DTQINIB,dtqcnt);
const unsigned_t TOPPERS_cfg_offsetof_DTQINIB_p_dtqmb = offsetof(DTQINIB,p_dtqmb);
const unsigned_t TOPPERS_cfg_sizeof_PDQINIB = sizeof(PDQINIB);
const unsigned_t TOPPERS_cfg_offsetof_PDQINIB_pdqatr = offsetof(PDQINIB,pdqatr);
const unsigned_t TOPPERS_cfg_offsetof_PDQINIB_pdqcnt = offsetof(PDQINIB,pdqcnt);
const unsigned_t TOPPERS_cfg_offsetof_PDQINIB_maxdpri = offsetof(PDQINIB,maxdpri);
const unsigned_t TOPPERS_cfg_offsetof_PDQINIB_p_pdqmb = offsetof(PDQINIB,p_pdqmb);
const unsigned_t TOPPERS_cfg_sizeof_MBXINIB = sizeof(MBXINIB);
const unsigned_t TOPPERS_cfg_offsetof_MBXINIB_mbxatr = offsetof(MBXINIB,mbxatr);
const unsigned_t TOPPERS_cfg_offsetof_MBXINIB_maxmpri = offsetof(MBXINIB,maxmpri);
const unsigned_t TOPPERS_cfg_sizeof_MPFINIB = sizeof(MPFINIB);
const unsigned_t TOPPERS_cfg_offsetof_MPFINIB_mpfatr = offsetof(MPFINIB,mpfatr);
const unsigned_t TOPPERS_cfg_offsetof_MPFINIB_blkcnt = offsetof(MPFINIB,blkcnt);
const unsigned_t TOPPERS_cfg_offsetof_MPFINIB_blksz = offsetof(MPFINIB,blksz);
const unsigned_t TOPPERS_cfg_offsetof_MPFINIB_mpf = offsetof(MPFINIB,mpf);
const unsigned_t TOPPERS_cfg_offsetof_MPFINIB_p_mpfmb = offsetof(MPFINIB,p_mpfmb);
const unsigned_t TOPPERS_cfg_sizeof_CYCINIB = sizeof(CYCINIB);
const unsigned_t TOPPERS_cfg_offsetof_CYCINIB_cycatr = offsetof(CYCINIB,cycatr);
const unsigned_t TOPPERS_cfg_offsetof_CYCINIB_exinf = offsetof(CYCINIB,exinf);
const unsigned_t TOPPERS_cfg_offsetof_CYCINIB_cychdr = offsetof(CYCINIB,cychdr);
const unsigned_t TOPPERS_cfg_offsetof_CYCINIB_cyctim = offsetof(CYCINIB,cyctim);
const unsigned_t TOPPERS_cfg_offsetof_CYCINIB_cycphs = offsetof(CYCINIB,cycphs);
const unsigned_t TOPPERS_cfg_sizeof_ALMINIB = sizeof(ALMINIB);
const unsigned_t TOPPERS_cfg_offsetof_ALMINIB_almatr = offsetof(ALMINIB,almatr);
const unsigned_t TOPPERS_cfg_offsetof_ALMINIB_exinf = offsetof(ALMINIB,exinf);
const unsigned_t TOPPERS_cfg_offsetof_ALMINIB_almhdr = offsetof(ALMINIB,almhdr);
const unsigned_t TOPPERS_cfg_sizeof_INHINIB = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(sizeof(INHINIB));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_INHINIB_inhno = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(offsetof(INHINIB,inhno));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_INHINIB_inhatr = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(offsetof(INHINIB,inhatr));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_INHINIB_int_entry = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(offsetof(INHINIB,int_entry));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_sizeof_INTINIB = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(sizeof(INTINIB));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_INTINIB_intno = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(offsetof(INTINIB,intno));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_INTINIB_intatr = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(offsetof(INTINIB,intatr));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_INTINIB_intpri = 
#if !defined(OMIT_INITIALIZE_INTERRUPT)
(offsetof(INTINIB,intpri));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_sizeof_EXCINIB = 
#if !defined(OMIT_INITIALIZE_EXCEPTION)
(sizeof(EXCINIB));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_EXCINIB_excno = 
#if !defined(OMIT_INITIALIZE_EXCEPTION)
(offsetof(EXCINIB,excno));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_EXCINIB_excatr = 
#if !defined(OMIT_INITIALIZE_EXCEPTION)
(offsetof(EXCINIB,excatr));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_offset_EXCINIB_exc_entry = 
#if !defined(OMIT_INITIALIZE_EXCEPTION)
(offsetof(EXCINIB,exc_entry));
#else
(0);
#endif
const unsigned_t TOPPERS_cfg_TA_HIGHLEVEL = TA_HIGHLEVEL;
const unsigned_t TOPPERS_cfg_TA_POSEDGE = TA_POSEDGE;
const unsigned_t TOPPERS_cfg_TA_LOWLEVEL = TA_LOWLEVEL;
const unsigned_t TOPPERS_cfg_sizeof_TCB = sizeof(TCB);
const unsigned_t TOPPERS_cfg_offsetof_TCB_p_tinib = offsetof(TCB,p_tinib);
const unsigned_t TOPPERS_cfg_offsetof_TCB_texptn = offsetof(TCB,texptn);
const unsigned_t TOPPERS_cfg_offsetof_TCB_sp = offsetof(TCB,tskctxb.sp);
const unsigned_t TOPPERS_cfg_offsetof_TCB_pc = offsetof(TCB,tskctxb.pc);


/* #include "target_timer.h" */

#line 43 "../../target/mindstorms_nxt_gcc/target_timer.cfg"
const unsigned_t TOPPERS_cfg_static_api_0 = 0;
const unsigned_t TOPPERS_cfg_valueof_iniatr_0 = ( TA_NULL ); 
#line 44 "../../target/mindstorms_nxt_gcc/target_timer.cfg"
const unsigned_t TOPPERS_cfg_static_api_1 = 1;
const unsigned_t TOPPERS_cfg_valueof_teratr_1 = ( TA_NULL ); 
#line 45 "../../target/mindstorms_nxt_gcc/target_timer.cfg"
const unsigned_t TOPPERS_cfg_static_api_2 = 2;
const unsigned_t TOPPERS_cfg_valueof_inhno_2 = ( INHNO_SYSIRQ ); const unsigned_t TOPPERS_cfg_valueof_inhatr_2 = ( TA_NULL ); 
#line 46 "../../target/mindstorms_nxt_gcc/target_timer.cfg"
const unsigned_t TOPPERS_cfg_static_api_3 = 3;
const unsigned_t TOPPERS_cfg_valueof_intno_3 = ( INTNO_SYSIRQ ); const unsigned_t TOPPERS_cfg_valueof_intatr_3 = ( TA_ENAINT|INTATR_SYSIRQ ); const signed_t TOPPERS_cfg_valueof_intpri_3 = ( INTPRI_SYSIRQ ); /* #include "cb_type_only.h" */
/* #include "tTask_tecsgen.h" */

#line 3 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_4 = 4;
#define TSKID_tTask_ConnectBluetoothTask	(<>)

#line 3 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_4 = ( TA_ACT ); const signed_t TOPPERS_cfg_valueof_itskpri_4 = ( 2 ); const unsigned_t TOPPERS_cfg_valueof_stksz_4 = ( 512 ); 
#line 4 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_5 = 5;
const unsigned_t TOPPERS_cfg_valueof_texatr_5 = ( TA_NULL ); 
#line 5 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_6 = 6;
#define TSKID_tTask_StarterTask	(<>)

#line 5 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_6 = ( TA_ACT ); const signed_t TOPPERS_cfg_valueof_itskpri_6 = ( 6 ); const unsigned_t TOPPERS_cfg_valueof_stksz_6 = ( 1024 ); 
#line 6 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_7 = 7;
const unsigned_t TOPPERS_cfg_valueof_texatr_7 = ( TA_NULL ); 
#line 7 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_8 = 8;
#define TSKID_tTask_GetCommandTask	(<>)

#line 7 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_8 = ( TA_ACT ); const signed_t TOPPERS_cfg_valueof_itskpri_8 = ( 5 ); const unsigned_t TOPPERS_cfg_valueof_stksz_8 = ( 1024 ); 
#line 8 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_9 = 9;
const unsigned_t TOPPERS_cfg_valueof_texatr_9 = ( TA_NULL ); 
#line 9 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_10 = 10;
#define TSKID_tTask_LogTask_Task	(<>)

#line 9 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_10 = ( TA_ACT ); const signed_t TOPPERS_cfg_valueof_itskpri_10 = ( 3 ); const unsigned_t TOPPERS_cfg_valueof_stksz_10 = ( 512 ); 
#line 10 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_11 = 11;
const unsigned_t TOPPERS_cfg_valueof_texatr_11 = ( TA_NULL ); 
#line 11 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_12 = 12;
#define TSKID_tTask_TailControllerTask_Task	(<>)

#line 11 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_12 = ( TA_NULL ); const signed_t TOPPERS_cfg_valueof_itskpri_12 = ( 5 ); const unsigned_t TOPPERS_cfg_valueof_stksz_12 = ( 512 ); 
#line 12 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_13 = 13;
const unsigned_t TOPPERS_cfg_valueof_texatr_13 = ( TA_NULL ); 
#line 13 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_14 = 14;
#define TSKID_tTask_BalancerTask_Task	(<>)

#line 13 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_14 = ( TA_NULL ); const signed_t TOPPERS_cfg_valueof_itskpri_14 = ( 1 ); const unsigned_t TOPPERS_cfg_valueof_stksz_14 = ( 1024 ); 
#line 14 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_15 = 15;
const unsigned_t TOPPERS_cfg_valueof_texatr_15 = ( TA_NULL ); 
#line 15 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_16 = 16;
#define TSKID_tTask_LinetracerTask_Task	(<>)

#line 15 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_16 = ( TA_NULL ); const signed_t TOPPERS_cfg_valueof_itskpri_16 = ( 4 ); const unsigned_t TOPPERS_cfg_valueof_stksz_16 = ( 512 ); 
#line 16 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_17 = 17;
const unsigned_t TOPPERS_cfg_valueof_texatr_17 = ( TA_NULL ); 
#line 17 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_18 = 18;
#define TSKID_tTask_GetLogTask_Task	(<>)

#line 17 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_tskatr_18 = ( TA_NULL ); const signed_t TOPPERS_cfg_valueof_itskpri_18 = ( 6 ); const unsigned_t TOPPERS_cfg_valueof_stksz_18 = ( 1024 ); 
#line 18 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_19 = 19;
const unsigned_t TOPPERS_cfg_valueof_texatr_19 = ( TA_NULL ); /* #include "tInitializeRoutine_tecsgen.h" */

#line 20 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_20 = 20;
const unsigned_t TOPPERS_cfg_valueof_iniatr_20 = ( TA_NULL ); 
#line 21 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_21 = 21;
const unsigned_t TOPPERS_cfg_valueof_iniatr_21 = ( TA_NULL ); 
#line 22 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_22 = 22;
const unsigned_t TOPPERS_cfg_valueof_iniatr_22 = ( TA_NULL ); 
#line 23 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_23 = 23;
const unsigned_t TOPPERS_cfg_valueof_iniatr_23 = ( TA_NULL ); 
#line 24 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_24 = 24;
const unsigned_t TOPPERS_cfg_valueof_iniatr_24 = ( TA_NULL ); 
#line 25 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_25 = 25;
const unsigned_t TOPPERS_cfg_valueof_iniatr_25 = ( TA_NULL ); 
#line 26 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_26 = 26;
const unsigned_t TOPPERS_cfg_valueof_iniatr_26 = ( TA_NULL ); 
#line 27 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_27 = 27;
const unsigned_t TOPPERS_cfg_valueof_iniatr_27 = ( TA_NULL ); /* #include "tTerminateRoutine_tecsgen.h" */

#line 29 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_28 = 28;
const unsigned_t TOPPERS_cfg_valueof_teratr_28 = ( TA_NULL ); 
#line 30 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_29 = 29;
const unsigned_t TOPPERS_cfg_valueof_teratr_29 = ( TA_NULL ); 
#line 31 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_30 = 30;
const unsigned_t TOPPERS_cfg_valueof_teratr_30 = ( TA_NULL ); 
#line 32 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_31 = 31;
const unsigned_t TOPPERS_cfg_valueof_teratr_31 = ( TA_NULL ); 
#line 33 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_32 = 32;
const unsigned_t TOPPERS_cfg_valueof_teratr_32 = ( TA_NULL ); 
#line 34 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_33 = 33;
const unsigned_t TOPPERS_cfg_valueof_teratr_33 = ( TA_NULL ); 
#line 35 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_34 = 34;
const unsigned_t TOPPERS_cfg_valueof_teratr_34 = ( TA_NULL ); /* #include "tISR_tecsgen.h" */

#line 37 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_35 = 35;
const unsigned_t TOPPERS_cfg_valueof_isratr_35 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_intno_35 = ( INTNO_TWI_PID ); const signed_t TOPPERS_cfg_valueof_isrpri_35 = ( 1 ); 
#line 38 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_36 = 36;
const unsigned_t TOPPERS_cfg_valueof_isratr_36 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_intno_36 = ( 7 ); const signed_t TOPPERS_cfg_valueof_isrpri_36 = ( 1 ); 
#line 39 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_37 = 37;
const unsigned_t TOPPERS_cfg_valueof_isratr_37 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_intno_37 = ( INTNO_TC0_PID ); const signed_t TOPPERS_cfg_valueof_isrpri_37 = ( 1 ); 
#line 40 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_38 = 38;
const unsigned_t TOPPERS_cfg_valueof_isratr_38 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_intno_38 = ( INTNO_PIOA_PID ); const signed_t TOPPERS_cfg_valueof_isrpri_38 = ( 1 ); 
#line 41 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_39 = 39;
const unsigned_t TOPPERS_cfg_valueof_isratr_39 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_intno_39 = ( INTNO_SPI_PID ); const signed_t TOPPERS_cfg_valueof_isrpri_39 = ( 1 ); 
#line 42 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_40 = 40;
const unsigned_t TOPPERS_cfg_valueof_isratr_40 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_intno_40 = ( INTNO_SSC_PID ); const signed_t TOPPERS_cfg_valueof_isrpri_40 = ( 1 ); 
#line 43 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_41 = 41;
const unsigned_t TOPPERS_cfg_valueof_intno_41 = ( INTNO_TWI_PID ); const unsigned_t TOPPERS_cfg_valueof_intatr_41 = ( (TA_ENAINT | TA_LOWLEVEL) ); const signed_t TOPPERS_cfg_valueof_intpri_41 = ( -5 ); 
#line 44 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_42 = 42;
const unsigned_t TOPPERS_cfg_valueof_intno_42 = ( 7 ); const unsigned_t TOPPERS_cfg_valueof_intatr_42 = ( TA_NULL ); const signed_t TOPPERS_cfg_valueof_intpri_42 = ( -2 ); 
#line 45 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_43 = 43;
const unsigned_t TOPPERS_cfg_valueof_intno_43 = ( INTNO_TC0_PID ); const unsigned_t TOPPERS_cfg_valueof_intatr_43 = ( (TA_ENAINT | TA_LOWLEVEL) ); const signed_t TOPPERS_cfg_valueof_intpri_43 = ( -4 ); 
#line 46 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_44 = 44;
const unsigned_t TOPPERS_cfg_valueof_intno_44 = ( INTNO_PIOA_PID ); const unsigned_t TOPPERS_cfg_valueof_intatr_44 = ( (TA_ENAINT | TA_LOWLEVEL) ); const signed_t TOPPERS_cfg_valueof_intpri_44 = ( -4 ); 
#line 47 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_45 = 45;
const unsigned_t TOPPERS_cfg_valueof_intno_45 = ( INTNO_SPI_PID ); const unsigned_t TOPPERS_cfg_valueof_intatr_45 = ( (TA_ENAINT | TA_LOWLEVEL) ); const signed_t TOPPERS_cfg_valueof_intpri_45 = ( -4 ); 
#line 48 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_46 = 46;
const unsigned_t TOPPERS_cfg_valueof_intno_46 = ( INTNO_SSC_PID ); const unsigned_t TOPPERS_cfg_valueof_intatr_46 = ( (TA_ENAINT | TA_EDGE) ); const signed_t TOPPERS_cfg_valueof_intpri_46 = ( -1 ); /* #include "tCyclicHandler_tecsgen.h" */

#line 50 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_47 = 47;
#define CYCHDLRID_tCyclicHandler_CheckNXTButton	(<>)

#line 50 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_47 = ( TA_STA ); const unsigned_t TOPPERS_cfg_valueof_cyctim_47 = ( 10 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_47 = ( 1 ); 
#line 51 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_48 = 48;
#define CYCHDLRID_tCyclicHandler_AVR_CyclicAVR	(<>)

#line 51 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_48 = ( TA_STA ); const unsigned_t TOPPERS_cfg_valueof_cyctim_48 = ( 2 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_48 = ( 1 ); 
#line 52 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_49 = 49;
#define CYCHDLRID_tCyclicHandler_Button_ButtonUpdate	(<>)

#line 52 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_49 = ( TA_STA ); const unsigned_t TOPPERS_cfg_valueof_cyctim_49 = ( 10 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_49 = ( 1 ); 
#line 53 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_50 = 50;
#define CYCHDLRID_tCyclicHandler_RotaryEncoder_CyclicMotor	(<>)

#line 53 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_50 = ( TA_STA ); const unsigned_t TOPPERS_cfg_valueof_cyctim_50 = ( 1 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_50 = ( 1 ); 
#line 54 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_51 = 51;
#define CYCHDLRID_tCyclicHandler_TailControllerTask_CyclicHandler	(<>)

#line 54 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_51 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_cyctim_51 = ( 4 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_51 = ( 1 ); 
#line 55 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_52 = 52;
#define CYCHDLRID_tCyclicHandler_BalancerTask_CyclicHandler	(<>)

#line 55 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_52 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_cyctim_52 = ( 4 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_52 = ( 1 ); 
#line 56 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_53 = 53;
#define CYCHDLRID_tCyclicHandler_LinetracerTask_CyclicHandler	(<>)

#line 56 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_53 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_cyctim_53 = ( 10 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_53 = ( 1 ); 
#line 57 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_54 = 54;
#define CYCHDLRID_tCyclicHandler_GetLogTask_CyclicHandler	(<>)

#line 57 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_cycatr_54 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_cyctim_54 = ( 20 ); const unsigned_t TOPPERS_cfg_valueof_cycphs_54 = ( 1 ); /* #include "tAlarmHandler_tecsgen.h" */

#line 59 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_55 = 55;
#define ALMHDLRID_tAlarmHandler_Bluetooth_AlarmTimeOut	(<>)

#line 59 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_almatr_55 = ( TA_NULL ); 
#line 60 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_56 = 56;
#define SEMID_tSemaphore_BluetoothSemapohre	(<>)

#line 60 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_sematr_56 = ( TA_TPRI ); const unsigned_t TOPPERS_cfg_valueof_isemcnt_56 = ( 0 ); const unsigned_t TOPPERS_cfg_valueof_maxsem_56 = ( 1 ); 
#line 61 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_57 = 57;
#define SEMID_tSemaphore_StartSemaphore	(<>)

#line 61 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_sematr_57 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_isemcnt_57 = ( 0 ); const unsigned_t TOPPERS_cfg_valueof_maxsem_57 = ( 1 ); 
#line 62 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_58 = 58;
#define SEMID_tSemaphore_SerialPort1_ReceiveSemaphore	(<>)

#line 62 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_sematr_58 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_isemcnt_58 = ( 0 ); const unsigned_t TOPPERS_cfg_valueof_maxsem_58 = ( 1 ); 
#line 63 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_59 = 59;
#define SEMID_tSemaphore_SerialPort1_SendSemaphore	(<>)

#line 63 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_valueof_sematr_59 = ( TA_NULL ); const unsigned_t TOPPERS_cfg_valueof_isemcnt_59 = ( 1 ); const unsigned_t TOPPERS_cfg_valueof_maxsem_59 = ( 1 ); /* #include "target_at91sam7s.h" */
/* #include "syssvc/tLogTask.h" */

#line 66 "./gen/tecsgen.cfg"
const unsigned_t TOPPERS_cfg_static_api_60 = 60;
const unsigned_t TOPPERS_cfg_valueof_teratr_60 = ( TA_NULL ); /* #include "syssvc/banner.h" */

#line 10 "../../syssvc/banner.cfg"
const unsigned_t TOPPERS_cfg_static_api_61 = 61;
const unsigned_t TOPPERS_cfg_valueof_iniatr_61 = ( TA_NULL ); 
