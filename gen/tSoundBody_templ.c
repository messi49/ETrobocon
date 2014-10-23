/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tSoundBody_template.c => src/tSoundBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * maxTonePattern   const uint32_t*  ATTR_maxTonePattern
 * toneCycles       uint32_t         VAR_toneCycles  
 * tonePattern      uint32_t*        VAR_tonePattern 
 * volume           int8_t           VAR_volume      
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tSoundBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eSound
 * entry port: eSound
 * signature:  sSound
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSound_beepTone
 * name:         eSound_beepTone
 * global_name:  tSoundBody_eSound_beepTone
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSound_beepTone(uint32_t frequency, uint32_t msecond)
{
}

/* #[<ENTRY_FUNC>]# eSound_setVolume
 * name:         eSound_setVolume
 * global_name:  tSoundBody_eSound_setVolume
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSound_setVolume(uint8_t volume)
{
}

/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_main
 * name:         eInitialize_main
 * global_name:  tSoundBody_eInitialize_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_main()
{
}

/* #[<ENTRY_PORT>]# eiBody
 * entry port: eiBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiBody_main
 * name:         eiBody_main
 * global_name:  tSoundBody_eiBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
