/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSound_TECSGEN_H
#define sSound_TECSGEN_H

/*
 * signature   :  sSound
 * global name :  sSound
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSound_VDES {
    struct tag_sSound_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSound_VMT {
    void           (*beepTone)( struct tag_sSound_VDES *edp, uint32_t frequency, uint32_t msecond );
    void           (*setVolume)( struct tag_sSound_VDES *edp, uint8_t volume );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSOUND_BEEPTONE                 (1)
#define	FUNCID_SSOUND_SETVOLUME                (2)

#endif /* sSound_TECSGEN_H */
