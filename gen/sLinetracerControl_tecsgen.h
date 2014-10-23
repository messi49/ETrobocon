/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sLinetracerControl_TECSGEN_H
#define sLinetracerControl_TECSGEN_H

/*
 * signature   :  sLinetracerControl
 * global name :  sLinetracerControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sLinetracerControl_VDES {
    struct tag_sLinetracerControl_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sLinetracerControl_VMT {
    void           (*setLightThreshold)( struct tag_sLinetracerControl_VDES *edp, uint8_t color, uint16_t light );
    void           (*getLightThreshold)( struct tag_sLinetracerControl_VDES *edp, uint8_t color, uint16_t* light );
    void           (*setEdge)( struct tag_sLinetracerControl_VDES *edp, int8_t edge );
    void           (*getEdge)( struct tag_sLinetracerControl_VDES *edp, int8_t* edge );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SLINETRACERCONTROL_SETLIGHTTHRESHOLD (1)
#define	FUNCID_SLINETRACERCONTROL_GETLIGHTTHRESHOLD (2)
#define	FUNCID_SLINETRACERCONTROL_SETEDGE      (3)
#define	FUNCID_SLINETRACERCONTROL_GETEDGE      (4)

#endif /* sLinetracerControl_TECSGEN_H */
