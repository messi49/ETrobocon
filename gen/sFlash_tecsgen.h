/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sFlash_TECSGEN_H
#define sFlash_TECSGEN_H

/*
 * signature   :  sFlash
 * global name :  sFlash
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sFlash_VDES {
    struct tag_sFlash_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sFlash_VMT {
    void           (*rewriteBios)( struct tag_sFlash_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SFLASH_REWRITEBIOS              (1)

#endif /* sFlash_TECSGEN_H */
