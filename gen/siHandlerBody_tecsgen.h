/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siHandlerBody_TECSGEN_H
#define siHandlerBody_TECSGEN_H

/*
 * signature   :  siHandlerBody
 * global name :  siHandlerBody
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siHandlerBody_VDES {
    struct tag_siHandlerBody_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siHandlerBody_VMT {
    void           (*main)( struct tag_siHandlerBody_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIHANDLERBODY_MAIN              (1)

#endif /* siHandlerBody_TECSGEN_H */
