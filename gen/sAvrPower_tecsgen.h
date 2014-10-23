/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sAvrPower_TECSGEN_H
#define sAvrPower_TECSGEN_H

/*
 * signature   :  sAvrPower
 * global name :  sAvrPower
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sAvrPower_VDES {
    struct tag_sAvrPower_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sAvrPower_VMT {
    void           (*powerDown)( struct tag_sAvrPower_VDES *edp );
    void           (*update)( struct tag_sAvrPower_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SAVRPOWER_POWERDOWN             (1)
#define	FUNCID_SAVRPOWER_UPDATE                (2)

#endif /* sAvrPower_TECSGEN_H */
