/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siSIOCBR_TECSGEN_H
#define siSIOCBR_TECSGEN_H

/*
 * signature   :  siSIOCBR
 * global name :  siSIOCBR
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siSIOCBR_VDES {
    struct tag_siSIOCBR_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siSIOCBR_VMT {
    void           (*readySend)( struct tag_siSIOCBR_VDES *edp );
    void           (*readyReceive)( struct tag_siSIOCBR_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SISIOCBR_READYSEND              (1)
#define	FUNCID_SISIOCBR_READYRECEIVE           (2)

#endif /* siSIOCBR_TECSGEN_H */
