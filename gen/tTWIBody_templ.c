/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tTWIBody_template.c => src/tTWIBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * clockDivisor     uint32_t         ATTR_clockDivisor
 * pending          uint32_t         VAR_pending     
 * buffer           uint8_t*         VAR_buffer      
 * state            uint8_t          VAR_state       
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tTWIBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eTWI
 * entry port: eTWI
 * signature:  sTWI
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTWI_initialize
 * name:         eTWI_initialize
 * global_name:  tTWIBody_eTWI_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eTWI_initialize()
{
}

/* #[<ENTRY_FUNC>]# eTWI_startWrite
 * name:         eTWI_startWrite
 * global_name:  tTWIBody_eTWI_startWrite
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTWI_startWrite(uint32_t dev_addr, uint32_t int_addr_bytes, uint32_t int_addr, const uint8_t* data, uint32_t nBytes)
{
}

/* #[<ENTRY_FUNC>]# eTWI_startRead
 * name:         eTWI_startRead
 * global_name:  tTWIBody_eTWI_startRead
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTWI_startRead(uint32_t dev_addr, uint32_t int_addr_bytes, uint32_t int_addr, uint8_t* data, uint32_t nBytes)
{
}

/* #[<ENTRY_FUNC>]# eTWI_pollingUpdate
 * name:         eTWI_pollingUpdate
 * global_name:  tTWIBody_eTWI_pollingUpdate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTWI_pollingUpdate()
{
}

/* #[<ENTRY_FUNC>]# eTWI_isBusy
 * name:         eTWI_isBusy
 * global_name:  tTWIBody_eTWI_isBusy
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eTWI_isBusy()
{
}

/* #[<ENTRY_FUNC>]# eTWI_isOk
 * name:         eTWI_isOk
 * global_name:  tTWIBody_eTWI_isOk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eTWI_isOk()
{
}

/* #[<ENTRY_FUNC>]# eTWI_reset
 * name:         eTWI_reset
 * global_name:  tTWIBody_eTWI_reset
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTWI_reset()
{
}

/* #[<ENTRY_PORT>]# eiInterruptBody
 * entry port: eiInterruptBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiInterruptBody_main
 * name:         eiInterruptBody_main
 * global_name:  tTWIBody_eiInterruptBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiInterruptBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
