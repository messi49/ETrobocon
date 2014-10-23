/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tSysLog_template.c => src/tSysLog.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * logBufferSize    uint_t           ATTR_logBufferSize
 * logBuffer        SYSLOG*          VAR_logBuffer   
 * count            uint_t           VAR_count       
 * head             uint_t           VAR_head        
 * tail             uint_t           VAR_tail        
 * lost             uint_t           VAR_lost        
 * logMask          uint_t           VAR_logMask     
 * lowMaskNot       uint_t           VAR_lowMaskNot  
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cPutLog  signature: sPutLog context: task
 *   ER             cPutLog_putChar( char c );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tSysLog_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eSysLog
 * entry port: eSysLog
 * signature:  sSysLog
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSysLog_write
 * name:         eSysLog_write
 * global_name:  tSysLog_eSysLog_write
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSysLog_write(uint_t priority, const SYSLOG* p_syslog)
{
}

/* #[<ENTRY_FUNC>]# eSysLog_read
 * name:         eSysLog_read
 * global_name:  tSysLog_eSysLog_read
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eSysLog_read(SYSLOG* p_syslog)
{
}

/* #[<ENTRY_FUNC>]# eSysLog_mask
 * name:         eSysLog_mask
 * global_name:  tSysLog_eSysLog_mask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSysLog_mask(uint_t logMask, uint_t lowMask)
{
}

/* #[<ENTRY_FUNC>]# eSysLog_refer
 * name:         eSysLog_refer
 * global_name:  tSysLog_eSysLog_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSysLog_refer(T_SYSLOG_RLOG* pk_rlog)
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
