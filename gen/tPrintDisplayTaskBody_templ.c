/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tPrintDisplayTaskBody_template.c => src/tPrintDisplayTaskBody.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port : cDisplay  signature: sDisplay context: task
 *   void           cDisplay_update( );
 *   void           cDisplay_clear( bool_t updateToo );
 *   void           cDisplay_gotoXY( uint8_t x, uint8_t y );
 *   void           cDisplay_putChar( char c );
 *   void           cDisplay_putString( const char* string );
 *   void           cDisplay_putInt( int32_t val, uint8_t places );
 *   void           cDisplay_putUnsigned( uint32_t val, uint8_t places );
 *   void           cDisplay_putHex( uint32_t val, uint8_t places );
 *   uint8_t*       cDisplay_getBuffer( );
 *   void           cDisplay_powerOff( bool_t updateToo );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tPrintDisplayTaskBody_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# ePrintDisplayControl
 * entry port: ePrintDisplayControl
 * signature:  sPrintDisplayControl
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print_str
 * name:         ePrintDisplayControl_print_str
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print_str
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print_str()
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print_k
 * name:         ePrintDisplayControl_print_k
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print_k
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print_k(const char* string1, int16_t value1)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print1
 * name:         ePrintDisplayControl_print1
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print1(int16_t value1)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print2
 * name:         ePrintDisplayControl_print2
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print2(int16_t value1, int16_t value2)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print3
 * name:         ePrintDisplayControl_print3
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print3(int16_t value1, int16_t value2, int16_t value3)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print4
 * name:         ePrintDisplayControl_print4
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print4(int16_t value1, int16_t value2, int16_t value3, int16_t value4)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print5
 * name:         ePrintDisplayControl_print5
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print5(int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print6
 * name:         ePrintDisplayControl_print6
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print6(int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print7
 * name:         ePrintDisplayControl_print7
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print7(int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6, int16_t value7)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_printS1
 * name:         ePrintDisplayControl_printS1
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_printS1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_printS1(const char* string1, int16_t value1)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_printS2
 * name:         ePrintDisplayControl_printS2
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_printS2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_printS2(const char* string1, int16_t value1, const char* string2, int16_t value2)
{
}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_printS3
 * name:         ePrintDisplayControl_printS3
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_printS3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_printS3(const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3)
{
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
