/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef snSerialPort_TECSGEN_H
#define snSerialPort_TECSGEN_H

/*
 * signature   :  snSerialPort
 * global name :  snSerialPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_snSerialPort_VDES {
    struct tag_snSerialPort_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_snSerialPort_VMT {
    bool_t         (*getChar)( struct tag_snSerialPort_VDES *edp, char* p_char );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SNSERIALPORT_GETCHAR            (1)

#endif /* snSerialPort_TECSGEN_H */
