/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTaskBody_TECSGEN_H
#define sTaskBody_TECSGEN_H

/*
 * signature   :  sTaskBody
 * global name :  sTaskBody
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTaskBody_VDES {
    struct tag_sTaskBody_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTaskBody_VMT {
    void           (*main)( struct tag_sTaskBody_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASKBODY_MAIN                  (1)

#endif /* sTaskBody_TECSGEN_H */
