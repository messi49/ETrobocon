/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSensorArray_TECSGEN_H
#define sSensorArray_TECSGEN_H

/*
 * signature   :  sSensorArray
 * global name :  sSensorArray
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSensorArray_VDES {
    struct tag_sSensorArray_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSensorArray_VMT {
    void           (*getValue)( struct tag_sSensorArray_VDES *edp, int16_t* buf, int8_t bufferSize );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENSORARRAY_GETVALUE           (1)

#endif /* sSensorArray_TECSGEN_H */
