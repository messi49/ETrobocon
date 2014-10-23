/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTWI_TECSGEN_H
#define sTWI_TECSGEN_H

/*
 * signature   :  sTWI
 * global name :  sTWI
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTWI_VDES {
    struct tag_sTWI_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTWI_VMT {
    bool_t         (*initialize)( struct tag_sTWI_VDES *edp );
    void           (*startWrite)( struct tag_sTWI_VDES *edp, uint32_t dev_addr, uint32_t int_addr_bytes, uint32_t int_addr, const uint8_t* data, uint32_t nBytes );
    void           (*startRead)( struct tag_sTWI_VDES *edp, uint32_t dev_addr, uint32_t int_addr_bytes, uint32_t int_addr, uint8_t* data, uint32_t nBytes );
    void           (*pollingUpdate)( struct tag_sTWI_VDES *edp );
    bool_t         (*isBusy)( struct tag_sTWI_VDES *edp );
    bool_t         (*isOk)( struct tag_sTWI_VDES *edp );
    void           (*reset)( struct tag_sTWI_VDES *edp );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STWI_INITIALIZE                 (1)
#define	FUNCID_STWI_STARTWRITE                 (2)
#define	FUNCID_STWI_STARTREAD                  (3)
#define	FUNCID_STWI_POLLINGUPDATE              (4)
#define	FUNCID_STWI_ISBUSY                     (5)
#define	FUNCID_STWI_ISOK                       (6)
#define	FUNCID_STWI_RESET                      (7)

#endif /* sTWI_TECSGEN_H */
