/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tSPIBody_template.c => src/tSPIBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * display          uint8_t*         VAR_display     
 * dirty            volatile bool_t  VAR_dirty       
 * page             volatile uint8_t  VAR_page        
 * data             volatile uint8_t*  VAR_data        
 * mode             uint8_t          VAR_mode        
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tSPIBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eSPI
 * entry port: eSPI
 * signature:  sSPI
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSPI_initialize
 * name:         eSPI_initialize
 * global_name:  tSPIBody_eSPI_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSPI_initialize()
{
}

/* #[<ENTRY_FUNC>]# eSPI_write
 * name:         eSPI_write
 * global_name:  tSPIBody_eSPI_write
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSPI_write(uint32_t CD, const uint8_t* data, uint32_t nBytes)
{
}

/* #[<ENTRY_FUNC>]# eSPI_setDisplay
 * name:         eSPI_setDisplay
 * global_name:  tSPIBody_eSPI_setDisplay
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSPI_setDisplay(const uint8_t* display)
{
}

/* #[<ENTRY_FUNC>]# eSPI_refresh
 * name:         eSPI_refresh
 * global_name:  tSPIBody_eSPI_refresh
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSPI_refresh()
{
}

/* #[<ENTRY_PORT>]# eiInterruptBody
 * entry port: eiInterruptBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiInterruptBody_main
 * name:         eiInterruptBody_main
 * global_name:  tSPIBody_eiInterruptBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiInterruptBody_main()
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
