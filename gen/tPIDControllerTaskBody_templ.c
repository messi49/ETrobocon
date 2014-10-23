/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tPIDControllerTaskBody_template.c => src/tPIDControllerTaskBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * kp               float32_t        VAR_kp          
 * ki               float32_t        VAR_ki          
 * kd               float32_t        VAR_kd          
 * integral         float32_t        VAR_integral    
 * diff0            float32_t        VAR_diff0       
 * diff1            float32_t        VAR_diff1       
 * DELTAT           float32_t        VAR_DELTAT      
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * require port : signature: sKernel context: task
 *   ER             sleep( );
 *   ER             sleepTimeout( TMO timeout );
 *   ER             delay( RELTIM delayTime );
 *   ER             exitTask( );
 *   ER             getTaskId( ID* p_taskId );
 *   ER             rotateReadyQueue( PRI taskPriority );
 *   ER             getTime( SYSTIM* p_systemTime );
 *   ER             getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             lockCpu( );
 *   ER             unlockCpu( );
 *   ER             disableDispatch( );
 *   ER             enableDispatch( );
 *   ER             disableTaskException( );
 *   ER             enableTaskException( );
 *   ER             changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             exitKernel( );
 *   bool_t         senseContext( );
 *   bool_t         senseLock( );
 *   bool_t         senseDispatch( );
 *   bool_t         senseDispatchPendingState( );
 *   bool_t         senseKernel( );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tPIDControllerTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# ePIDControl
 * entry port: ePIDControl
 * signature:  sPIDControl
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePIDControl_getPIDValue
 * name:         ePIDControl_getPIDValue
 * global_name:  tPIDControllerTaskBody_ePIDControl_getPIDValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePIDControl_getPIDValue(uint16_t light, uint16_t VAR_lightThreshold, float32_t* turn_f)
{
}

/* #[<ENTRY_FUNC>]# ePIDControl_getKValue
 * name:         ePIDControl_getKValue
 * global_name:  tPIDControllerTaskBody_ePIDControl_getKValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePIDControl_getKValue(float32_t* kp, float32_t* ki, float32_t* kd)
{
}

/* #[<ENTRY_FUNC>]# ePIDControl_setKValue
 * name:         ePIDControl_setKValue
 * global_name:  tPIDControllerTaskBody_ePIDControl_setKValue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePIDControl_setKValue(uint8_t kind, float32_t value)
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
