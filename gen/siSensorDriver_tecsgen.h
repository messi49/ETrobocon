/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siSensorDriver_TECSGEN_H
#define siSensorDriver_TECSGEN_H

/*
 * signature   :  siSensorDriver
 * global name :  siSensorDriver
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siSensorDriver_VDES {
    struct tag_siSensorDriver_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siSensorDriver_VMT {
    void           (*initialize)( struct tag_siSensorDriver_VDES *edp );
    void           (*i2cInterruptBody)( struct tag_siSensorDriver_VDES *edp, uint32_t inputs );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SISENSORDRIVER_INITIALIZE       (1)
#define	FUNCID_SISENSORDRIVER_I2CINTERRUPTBODY (2)

#endif /* siSensorDriver_TECSGEN_H */
