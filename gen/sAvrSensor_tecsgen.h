/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sAvrSensor_TECSGEN_H
#define sAvrSensor_TECSGEN_H

/*
 * signature   :  sAvrSensor
 * global name :  sAvrSensor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sAvrSensor_VDES {
    struct tag_sAvrSensor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sAvrSensor_VMT {
    void           (*setInputPower)( struct tag_sAvrSensor_VDES *edp, uint8_t portNumber, uint8_t powerType );
    uint16_t       (*getSensor)( struct tag_sAvrSensor_VDES *edp, uint8_t portNumber );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SAVRSENSOR_SETINPUTPOWER        (1)
#define	FUNCID_SAVRSENSOR_GETSENSOR            (2)

#endif /* sAvrSensor_TECSGEN_H */
