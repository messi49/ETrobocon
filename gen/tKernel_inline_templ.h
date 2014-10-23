/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tKernel_inline_template.h => src/tKernel_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eKernel
 * entry port: eKernel
 * signature:  sKernel
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eKernel_sleep
 * name:         eKernel_sleep
 * global_name:  tKernel_eKernel_sleep
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_sleep()
{
}

/* #[<ENTRY_FUNC>]# eKernel_sleepTimeout
 * name:         eKernel_sleepTimeout
 * global_name:  tKernel_eKernel_sleepTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_sleepTimeout(TMO timeout)
{
}

/* #[<ENTRY_FUNC>]# eKernel_delay
 * name:         eKernel_delay
 * global_name:  tKernel_eKernel_delay
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_delay(RELTIM delayTime)
{
}

/* #[<ENTRY_FUNC>]# eKernel_exitTask
 * name:         eKernel_exitTask
 * global_name:  tKernel_eKernel_exitTask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_exitTask()
{
}

/* #[<ENTRY_FUNC>]# eKernel_getTaskId
 * name:         eKernel_getTaskId
 * global_name:  tKernel_eKernel_getTaskId
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_getTaskId(ID* p_taskId)
{
}

/* #[<ENTRY_FUNC>]# eKernel_rotateReadyQueue
 * name:         eKernel_rotateReadyQueue
 * global_name:  tKernel_eKernel_rotateReadyQueue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_rotateReadyQueue(PRI taskPriority)
{
}

/* #[<ENTRY_FUNC>]# eKernel_getTime
 * name:         eKernel_getTime
 * global_name:  tKernel_eKernel_getTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_getTime(SYSTIM* p_systemTime)
{
}

/* #[<ENTRY_FUNC>]# eKernel_getMicroTime
 * name:         eKernel_getMicroTime
 * global_name:  tKernel_eKernel_getMicroTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_getMicroTime(SYSUTM* p_systemMicroTime)
{
}

/* #[<ENTRY_FUNC>]# eKernel_lockCpu
 * name:         eKernel_lockCpu
 * global_name:  tKernel_eKernel_lockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_lockCpu()
{
}

/* #[<ENTRY_FUNC>]# eKernel_unlockCpu
 * name:         eKernel_unlockCpu
 * global_name:  tKernel_eKernel_unlockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_unlockCpu()
{
}

/* #[<ENTRY_FUNC>]# eKernel_disableDispatch
 * name:         eKernel_disableDispatch
 * global_name:  tKernel_eKernel_disableDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_disableDispatch()
{
}

/* #[<ENTRY_FUNC>]# eKernel_enableDispatch
 * name:         eKernel_enableDispatch
 * global_name:  tKernel_eKernel_enableDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_enableDispatch()
{
}

/* #[<ENTRY_FUNC>]# eKernel_disableTaskException
 * name:         eKernel_disableTaskException
 * global_name:  tKernel_eKernel_disableTaskException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_disableTaskException()
{
}

/* #[<ENTRY_FUNC>]# eKernel_enableTaskException
 * name:         eKernel_enableTaskException
 * global_name:  tKernel_eKernel_enableTaskException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_enableTaskException()
{
}

/* #[<ENTRY_FUNC>]# eKernel_changeInterruptPriorityMask
 * name:         eKernel_changeInterruptPriorityMask
 * global_name:  tKernel_eKernel_changeInterruptPriorityMask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_changeInterruptPriorityMask(PRI interruptPriority)
{
}

/* #[<ENTRY_FUNC>]# eKernel_getInterruptPriorityMask
 * name:         eKernel_getInterruptPriorityMask
 * global_name:  tKernel_eKernel_getInterruptPriorityMask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_getInterruptPriorityMask(PRI* p_interruptPriority)
{
}

/* #[<ENTRY_FUNC>]# eKernel_exitKernel
 * name:         eKernel_exitKernel
 * global_name:  tKernel_eKernel_exitKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eKernel_exitKernel()
{
}

/* #[<ENTRY_FUNC>]# eKernel_senseContext
 * name:         eKernel_senseContext
 * global_name:  tKernel_eKernel_senseContext
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eKernel_senseContext()
{
}

/* #[<ENTRY_FUNC>]# eKernel_senseLock
 * name:         eKernel_senseLock
 * global_name:  tKernel_eKernel_senseLock
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eKernel_senseLock()
{
}

/* #[<ENTRY_FUNC>]# eKernel_senseDispatch
 * name:         eKernel_senseDispatch
 * global_name:  tKernel_eKernel_senseDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eKernel_senseDispatch()
{
}

/* #[<ENTRY_FUNC>]# eKernel_senseDispatchPendingState
 * name:         eKernel_senseDispatchPendingState
 * global_name:  tKernel_eKernel_senseDispatchPendingState
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eKernel_senseDispatchPendingState()
{
}

/* #[<ENTRY_FUNC>]# eKernel_senseKernel
 * name:         eKernel_senseKernel
 * global_name:  tKernel_eKernel_senseKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eKernel_senseKernel()
{
}

/* #[<ENTRY_PORT>]# eiKernel
 * entry port: eiKernel
 * signature:  siKernel
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiKernel_getTaskId
 * name:         eiKernel_getTaskId
 * global_name:  tKernel_eiKernel_getTaskId
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiKernel_getTaskId(ID* p_taskId)
{
}

/* #[<ENTRY_FUNC>]# eiKernel_rotateReadyQueue
 * name:         eiKernel_rotateReadyQueue
 * global_name:  tKernel_eiKernel_rotateReadyQueue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiKernel_rotateReadyQueue(PRI taskPriority)
{
}

/* #[<ENTRY_FUNC>]# eiKernel_getMicroTime
 * name:         eiKernel_getMicroTime
 * global_name:  tKernel_eiKernel_getMicroTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiKernel_getMicroTime(SYSUTM* p_systemMicroTime)
{
}

/* #[<ENTRY_FUNC>]# eiKernel_lockCpu
 * name:         eiKernel_lockCpu
 * global_name:  tKernel_eiKernel_lockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiKernel_lockCpu()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_unlockCpu
 * name:         eiKernel_unlockCpu
 * global_name:  tKernel_eiKernel_unlockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiKernel_unlockCpu()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_exitKernel
 * name:         eiKernel_exitKernel
 * global_name:  tKernel_eiKernel_exitKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiKernel_exitKernel()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseContext
 * name:         eiKernel_senseContext
 * global_name:  tKernel_eiKernel_senseContext
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseContext()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseLock
 * name:         eiKernel_senseLock
 * global_name:  tKernel_eiKernel_senseLock
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseLock()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseDispatch
 * name:         eiKernel_senseDispatch
 * global_name:  tKernel_eiKernel_senseDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseDispatch()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseDispatchPendingState
 * name:         eiKernel_senseDispatchPendingState
 * global_name:  tKernel_eiKernel_senseDispatchPendingState
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseDispatchPendingState()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseKernel
 * name:         eiKernel_senseKernel
 * global_name:  tKernel_eiKernel_senseKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseKernel()
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseDispatchPendingStateCPU
 * name:         eiKernel_senseDispatchPendingStateCPU
 * global_name:  tKernel_eiKernel_senseDispatchPendingStateCPU
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseDispatchPendingStateCPU(const void* p_exceptionInfomation)
{
}

/* #[<ENTRY_FUNC>]# eiKernel_senseTaskExceptionPendingStateCPU
 * name:         eiKernel_senseTaskExceptionPendingStateCPU
 * global_name:  tKernel_eiKernel_senseTaskExceptionPendingStateCPU
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline bool_t
eiKernel_senseTaskExceptionPendingStateCPU(const void* p_exceptionInfomation)
{
}

