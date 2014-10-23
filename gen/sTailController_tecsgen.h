/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTailController_TECSGEN_H
#define sTailController_TECSGEN_H

/*
 * signature   :  sTailController
 * global name :  sTailController
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTailController_VDES {
    struct tag_sTailController_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTailController_VMT {
    void           (*setAngle)( struct tag_sTailController_VDES *edp, int32_t angle );
    void           (*getAngle)( struct tag_sTailController_VDES *edp, int32_t* angle );
    void           (*signalStop)( struct tag_sTailController_VDES *edp );
    void           (*signalStart)( struct tag_sTailController_VDES *edp );
    void           (*calibrate)( struct tag_sTailController_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STAILCONTROLLER_SETANGLE        (1)
#define	FUNCID_STAILCONTROLLER_GETANGLE        (2)
#define	FUNCID_STAILCONTROLLER_SIGNALSTOP      (3)
#define	FUNCID_STAILCONTROLLER_SIGNALSTART     (4)
#define	FUNCID_STAILCONTROLLER_CALIBRATE       (5)

#endif /* sTailController_TECSGEN_H */
