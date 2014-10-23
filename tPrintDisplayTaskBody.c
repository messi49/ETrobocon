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

void printValue1(int16_t value1);
void printValue2(int16_t value1,int16_t value2);
void printValue3(int16_t value1,int16_t value2,int16_t value3);
void printValue4(int16_t value1, int16_t value2, int16_t value3,int16_t value4);
void printValue5(int16_t value1, int16_t value2,int16_t value3, int16_t value4,int16_t value5);
void printValueS1(const char* string1, int16_t value1);
void printValueS2(const char* string1, int16_t value1, const char* string2, int16_t value2);
void printValueS3(const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3);


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
  char a[20] = "============^INC";
  char b[20] = "<STP  NEXT  DEC>";
  char c[5] = "EXIT";
  
  cDisplay_gotoXY(0,4);
  cDisplay_putString(a); 
  cDisplay_gotoXY(0,5);
  cDisplay_putString(b);
  cDisplay_gotoXY(6,6);
  cDisplay_putString(c);
  cDisplay_update();
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
	printValue1(value1);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print2
 * name:         ePrintDisplayControl_print2
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print2(int16_t value1, int16_t value2)
{	printValue2(value1, value2);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print3
 * name:         ePrintDisplayControl_print3
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print3(int16_t value1, int16_t value2, int16_t value3)
{
		printValue3(value1, value2, value3);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print4
 * name:         ePrintDisplayControl_print4
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print4(int16_t value1, int16_t value2, int16_t value3, int16_t value4)
{
		printValue4(value1, value2, value3, value4);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_print5
 * name:         ePrintDisplayControl_print5
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_print5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_print5(int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5)
{
		printValue5(value1, value2, value3, value4, value5);

}


void
ePrintDisplayControl_print6(int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6)
{
		printValue6(value1, value2, value3, value4, value5, value6);

}

void
ePrintDisplayControl_print7(int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6, int16_t value7)
{
		printValue7(value1, value2, value3, value4, value5, value6, value7);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_printS1
 * name:         ePrintDisplayControl_printS1
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_printS1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_printS1(const char* string1, int16_t value1)
{
		printValueS1(string1, value1);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_printS2
 * name:         ePrintDisplayControl_printS2
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_printS2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_printS2(const char* string1, int16_t value1, const char* string2, int16_t value2)
{
		printValueS2(string1, value1, string2, value2);

}

/* #[<ENTRY_FUNC>]# ePrintDisplayControl_printS3
 * name:         ePrintDisplayControl_printS3
 * global_name:  tPrintDisplayTaskBody_ePrintDisplayControl_printS3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
ePrintDisplayControl_printS3(const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3)
{
		printValueS3(string1, value1, string2, value2, string3, value3);

}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/


void printValueki(int16_t value1){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("ki:");
	cDisplay_gotoXY(5,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_update();
}

void printValue1(int16_t value1){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_update();
}
void printValue2(int16_t value1,int16_t value2){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(0,1);
	cDisplay_putString("val2:");
	cDisplay_gotoXY(6,1);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_update();
}
void printValue3(int16_t value1,int16_t value2,int16_t value3){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(0,1);
	cDisplay_putString("val2:");
	cDisplay_gotoXY(6,1);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_gotoXY(0,2);
	cDisplay_putString("val3:");
	cDisplay_gotoXY(6,2);
	cDisplay_putInt((int32_t)value3, 0);
	cDisplay_update();	
}
void printValue4(int16_t value1, int16_t value2, int16_t value3,int16_t value4){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(0,1);
	cDisplay_putString("val2:");
	cDisplay_gotoXY(6,1);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_gotoXY(0,2);
	cDisplay_putString("val3:");
	cDisplay_gotoXY(6,2);
	cDisplay_putInt((int32_t)value3, 0);
	cDisplay_gotoXY(0,3);
	cDisplay_putString("val4:");
	cDisplay_gotoXY(6,3);
	cDisplay_putInt((int32_t)value4, 0);
	cDisplay_update();

}
void printValue5(int16_t value1, int16_t value2,int16_t value3, int16_t value4,int16_t value5){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(0,1);
	cDisplay_putString("val2:");
	cDisplay_gotoXY(6,1);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_gotoXY(0,2);
	cDisplay_putString("val3:");
	cDisplay_gotoXY(6,2);
	cDisplay_putInt((int32_t)value3, 0);
	cDisplay_gotoXY(0,3);
	cDisplay_putString("val4:");
	cDisplay_gotoXY(6,3);
	cDisplay_putInt((int32_t)value4, 0);
	cDisplay_gotoXY(0,4);
	cDisplay_putString("val5:");
	cDisplay_gotoXY(6,4);
	cDisplay_putInt((int32_t)value5, 0);
	cDisplay_update();
}


void printValue6(int16_t value1, int16_t value2,int16_t value3, int16_t value4,int16_t value5,int16_t value6){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(0,1);
	cDisplay_putString("val2:");
	cDisplay_gotoXY(6,1);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_gotoXY(0,2);
	cDisplay_putString("val3:");
	cDisplay_gotoXY(6,2);
	cDisplay_putInt((int32_t)value3, 0);
	cDisplay_gotoXY(0,3);
	cDisplay_putString("val4:");
	cDisplay_gotoXY(6,3);
	cDisplay_putInt((int32_t)value4, 0);
	cDisplay_gotoXY(0,4);
	cDisplay_putString("val5:");
	cDisplay_gotoXY(6,4);
	cDisplay_putInt((int32_t)value5, 0);
	cDisplay_gotoXY(0,5);
	cDisplay_putString("val6:");
	cDisplay_gotoXY(6,5);
	cDisplay_putInt((int32_t)value6, 0);
	cDisplay_update();
}
void printValue7(int16_t value1, int16_t value2,int16_t value3, int16_t value4,int16_t value5,int16_t value6, int16_t value7){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString("val1:");
	cDisplay_gotoXY(6,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(0,1);
	cDisplay_putString("val2:");
	cDisplay_gotoXY(6,1);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_gotoXY(0,2);
	cDisplay_putString("val3:");
	cDisplay_gotoXY(6,2);
	cDisplay_putInt((int32_t)value3, 0);
	cDisplay_gotoXY(0,3);
	cDisplay_putString("val4:");
	cDisplay_gotoXY(6,3);
	cDisplay_putInt((int32_t)value4, 0);
	cDisplay_gotoXY(0,4);
	cDisplay_putString("val5:");
	cDisplay_gotoXY(6,4);
	cDisplay_putInt((int32_t)value5, 0);
	cDisplay_gotoXY(0,4);
	cDisplay_putString("val5:");
	cDisplay_gotoXY(6,4);
	cDisplay_putInt((int32_t)value5, 0);
	cDisplay_gotoXY(0,5);
	cDisplay_putString("val6:");
	cDisplay_gotoXY(6,5);
	cDisplay_putInt((int32_t)value6, 0);
	cDisplay_gotoXY(0,6);
	cDisplay_putString("val7:");
	cDisplay_gotoXY(6,6);
	cDisplay_putInt((int32_t)value7, 0);
	cDisplay_update();
}




void printValueS1(const char* string1, int16_t value1){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString(string1);
	cDisplay_gotoXY(7,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_update();
}
void printValueS2(const char* string1, int16_t value1, const char* string2, int16_t value2){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString(string1);
	cDisplay_gotoXY(1,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(2,0);
	cDisplay_putString(string2);
	cDisplay_gotoXY(3,0);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_update();
}
void printValueS3(const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3){
	cDisplay_clear(0);
	cDisplay_gotoXY(0,0);
	cDisplay_putString(string1);
	cDisplay_gotoXY(1,0);
	cDisplay_putInt((int32_t)value1, 0);
	cDisplay_gotoXY(2,0);
	cDisplay_putString(string2);
	cDisplay_gotoXY(3,0);
	cDisplay_putInt((int32_t)value2, 0);
	cDisplay_gotoXY(4,0);
	cDisplay_putString(string3);
	cDisplay_gotoXY(5,0);
	cDisplay_putInt((int32_t)value3, 0);
	cDisplay_update();
}
