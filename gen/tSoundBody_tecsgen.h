/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSoundBody_TECSGEN_H
#define tSoundBody_TECSGEN_H

/*
 * celltype    :  tSoundBody
 * global name :  tSoundBody
 * idx_is_id   :  no
 * singleton   :  yes
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSound_tecsgen.h"
#include "sInitializeRoutineBody_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tSoundBody_GET_CELLCB(idx) ((void *)0)

/* °�����������ޥ��� #_AAM_# */
#define tSoundBody_ATTR_maxTonePattern	(tSoundBody_SINGLE_CELL_INIB.maxTonePattern)

#define tSoundBody_GET_maxTonePattern()	(tSoundBody_SINGLE_CELL_INIB.maxTonePattern)


/* var ���������ޥ��� #_VAM_# */
#define tSoundBody_VAR_toneCycles	(tSoundBody_SINGLE_CELL_CB.toneCycles)
#define tSoundBody_VAR_tonePattern	(tSoundBody_SINGLE_CELL_INIB.tonePattern)
#define tSoundBody_VAR_volume	(tSoundBody_SINGLE_CELL_CB.volume)

#define tSoundBody_GET_toneCycles()	(tSoundBody_SINGLE_CELL_CB.toneCycles)
#define tSoundBody_SET_toneCycles(val)	(tSoundBody_SINGLE_CELL_CB.toneCycles=(val))
#define tSoundBody_GET_tonePattern()	(tSoundBody_SINGLE_CELL_CB.tonePattern)
#define tSoundBody_SET_tonePattern(val)	(tSoundBody_SINGLE_CELL_CB.tonePattern=(val))
#define tSoundBody_GET_volume()	(tSoundBody_SINGLE_CELL_CB.volume)
#define tSoundBody_SET_volume(val)	(tSoundBody_SINGLE_CELL_CB.volume=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSoundBody_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    const const uint32_t* maxTonePattern;
    uint32_t*      tonePattern;
}  tSoundBody_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tSoundBody_CB {
    tSoundBody_INIB  *_inib;
    /* var #_VA_# */ 
    uint32_t       toneCycles;
    int8_t         volume;
}  tSoundBody_CB;
/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tSoundBody_CB  tSoundBody_SINGLE_CELL_CB;
extern  tSoundBody_INIB  tSoundBody_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tSoundBody_CB *tSoundBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSound */
void         tSoundBody_eSound_beepTone( uint32_t frequency, uint32_t msecond);
void         tSoundBody_eSound_setVolume( uint8_t volume);
/* sInitializeRoutineBody */
void         tSoundBody_eInitialize_main();
/* siHandlerBody */
void         tSoundBody_eiBody_main();

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSoundBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSoundBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSoundBody_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_maxTonePattern  tSoundBody_ATTR_maxTonePattern


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_toneCycles       tSoundBody_VAR_toneCycles
#define VAR_tonePattern      tSoundBody_VAR_tonePattern
#define VAR_volume           tSoundBody_VAR_volume


/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSound_beepTone  tSoundBody_eSound_beepTone
#define eSound_setVolume tSoundBody_eSound_setVolume
#define eInitialize_main tSoundBody_eInitialize_main
#define eiBody_main      tSoundBody_eiBody_main

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()\
	tSoundBody_SINGLE_CELL_CB.volume = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	tSoundBody_SINGLE_CELL_CB._inib = &tSoundBody_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSoundBody_TECSGEN_H */
