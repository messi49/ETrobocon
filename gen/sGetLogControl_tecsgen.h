/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sGetLogControl_TECSGEN_H
#define sGetLogControl_TECSGEN_H

/*
 * signature   :  sGetLogControl
 * global name :  sGetLogControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sGetLogControl_VDES {
    struct tag_sGetLogControl_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sGetLogControl_VMT {
    void           (*portOpen)( struct tag_sGetLogControl_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SGETLOGCONTROL_PORTOPEN         (1)

#endif /* sGetLogControl_TECSGEN_H */
