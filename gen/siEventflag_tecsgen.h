/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siEventflag_TECSGEN_H
#define siEventflag_TECSGEN_H

/*
 * signature   :  siEventflag
 * global name :  siEventflag
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siEventflag_VDES {
    struct tag_siEventflag_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siEventflag_VMT {
    ER             (*set)( struct tag_siEventflag_VDES *edp, FLGPTN setPattern );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIEVENTFLAG_SET                 (1)

#endif /* siEventflag_TECSGEN_H */
