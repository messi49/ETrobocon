/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSensorControl_TECSGEN_H
#define sSensorControl_TECSGEN_H

/*
 * signature   :  sSensorControl
 * global name :  sSensorControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSensorControl_VDES {
    struct tag_sSensorControl_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSensorControl_VMT {
    void           (*on)( struct tag_sSensorControl_VDES *edp );
    void           (*off)( struct tag_sSensorControl_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENSORCONTROL_ON               (1)
#define	FUNCID_SSENSORCONTROL_OFF              (2)

#endif /* sSensorControl_TECSGEN_H */
