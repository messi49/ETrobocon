/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sPutLog_TECSGEN_H
#define sPutLog_TECSGEN_H

/*
 * signature   :  sPutLog
 * global name :  sPutLog
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sPutLog_VDES {
    struct tag_sPutLog_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sPutLog_VMT {
    ER             (*putChar)( struct tag_sPutLog_VDES *edp, char c );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPUTLOG_PUTCHAR                 (1)

#endif /* sPutLog_TECSGEN_H */
