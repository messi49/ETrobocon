/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSensorCaribrate_TECSGEN_H
#define sSensorCaribrate_TECSGEN_H

/*
 * signature   :  sSensorCaribrate
 * global name :  sSensorCaribrate
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSensorCaribrate_VDES {
    struct tag_sSensorCaribrate_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSensorCaribrate_VMT {
    bool_t         (*calibrate)( struct tag_sSensorCaribrate_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENSORCARIBRATE_CALIBRATE      (1)

#endif /* sSensorCaribrate_TECSGEN_H */
