/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tRotaryEncoderBody_template.c => src/tRotaryEncoderBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * PIOBase          void*            ATTR_PIOBase    
 * interruptNumber  INTNO            ATTR_interruptNumber
 * interruptCount   int32_t          VAR_interruptCount
 * initializedFlag  bool_t           VAR_initializedFlag
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : ciMotorInterrupt  signature: siMotorInterrupt context: non-task
 *   void           ciMotorInterrupt_quadDecode( subscript, uint32_t pins );
 *   void           ciMotorInterrupt_stopMotor( subscript );
 *       subscript:  0...(NCP_ciMotorInterrupt-1)
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tRotaryEncoderBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tRotaryEncoderBody_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_main()
{
}

/* #[<ENTRY_PORT>]# eTerminate
 * entry port: eTerminate
 * signature:  sTerminateRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTerminate_main
 * name:         eTerminate_main
 * global_name:  tRotaryEncoderBody_eTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTerminate_main()
{
}

/* #[<ENTRY_PORT>]# eiCyclicBody
 * entry port: eiCyclicBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiCyclicBody_main
 * name:         eiCyclicBody_main
 * global_name:  tRotaryEncoderBody_eiCyclicBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiCyclicBody_main()
{
}

/* #[<ENTRY_PORT>]# eiInterruptBody
 * entry port: eiInterruptBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiInterruptBody_main
 * name:         eiInterruptBody_main
 * global_name:  tRotaryEncoderBody_eiInterruptBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiInterruptBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
