/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSoundBody_tecsgen.h"

#include "tSoundBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSound : omitted by entry port optimize */
/* eInitialize */
struct tag_tSoundBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tSoundBody_IDX  idx;
};

/* eiBody */
struct tag_tSoundBody_eiBody_DES {
    const struct tag_siHandlerBody_VMT *vmt;
    tSoundBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSound : omitted by entry port optimize */
/* eInitialize */
void           tSoundBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tSoundBody_eInitialize_main( );
}
/* eiBody */
void           tSoundBody_eiBody_main_skel( struct tag_siHandlerBody_VDES *epd)
{
    tSoundBody_eiBody_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSound : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tSoundBody_eInitialize_MT = {
    tSoundBody_eInitialize_main_skel,
};
/* eiBody */
static const struct tag_siHandlerBody_VMT tSoundBody_eiBody_MT = {
    tSoundBody_eiBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
const uint32_t tSoundBody_SINGLE_CELL_CB_maxTonePattern_INIT[16] = { 0xF0F0F0F0, 0xF0F0F0F0, 0xFCFCFCFC, 0xFCFCFDFD, 0xFFFFFFFF, 0xFFFFFFFF, 0xFDFDFCFC, 0xFCFCFCFC, 0xF0F0F0F0, 0xF0F0F0F0, 0xC0C0C0C0, 0xC0C08080, 0x00000000, 0x00000000, 0x8080C0C0, 0xC0C0C0C0, };
uint32_t tSoundBody_SINGLE_CELL_CB_tonePattern_INIT[16];
/* ���� INIB #_INIB_# */
tSoundBody_INIB tSoundBody_SINGLE_CELL_INIB = 
{
    /* attribute(RO) */ 
    tSoundBody_SINGLE_CELL_CB_maxTonePattern_INIT, /* maxTonePattern */
    tSoundBody_SINGLE_CELL_CB_tonePattern_INIT, /* tonePattern */
};
/* ���� CB #_CB_# */
struct tag_tSoundBody_CB tSoundBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eSound : omitted by entry port optimize */
const struct tag_tSoundBody_eInitialize_DES Sound_SoundBody_eInitialize_des = {
    &tSoundBody_eInitialize_MT,
    &tSoundBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tSoundBody_eiBody_DES Sound_SoundBody_eiBody_des = {
    &tSoundBody_eiBody_MT,
    &tSoundBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tSoundBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
