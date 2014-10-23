/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSensorPort_TECSGEN_H
#define sSensorPort_TECSGEN_H

/*
 * signature   :  sSensorPort
 * global name :  sSensorPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSensorPort_VDES {
    struct tag_sSensorPort_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSensorPort_VMT {
    void           (*clearSCL)( struct tag_sSensorPort_VDES *edp );
    void           (*clearSDA)( struct tag_sSensorPort_VDES *edp );
    void           (*setSCL)( struct tag_sSensorPort_VDES *edp );
    void           (*setSDA)( struct tag_sSensorPort_VDES *edp );
    void           (*inputPower)( struct tag_sSensorPort_VDES *edp, uint8_t powerType );
    uint16_t       (*getValue)( struct tag_sSensorPort_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENSORPORT_CLEARSCL            (1)
#define	FUNCID_SSENSORPORT_CLEARSDA            (2)
#define	FUNCID_SSENSORPORT_SETSCL              (3)
#define	FUNCID_SSENSORPORT_SETSDA              (4)
#define	FUNCID_SSENSORPORT_INPUTPOWER          (5)
#define	FUNCID_SSENSORPORT_GETVALUE            (6)

#endif /* sSensorPort_TECSGEN_H */
