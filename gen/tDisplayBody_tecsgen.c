/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tDisplayBody_tecsgen.h"

#include "tDisplayBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eDisplay : omitted by entry port optimize */
/* eInitialize */
struct tag_tDisplayBody_eInitialize_DES {
    const struct tag_sInitializeRoutineBody_VMT *vmt;
    tDisplayBody_IDX  idx;
};

/* eTerminate */
struct tag_tDisplayBody_eTerminate_DES {
    const struct tag_sTerminateRoutineBody_VMT *vmt;
    tDisplayBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eDisplay : omitted by entry port optimize */
/* eInitialize */
void           tDisplayBody_eInitialize_main_skel( struct tag_sInitializeRoutineBody_VDES *epd)
{
    tDisplayBody_eInitialize_main( );
}
/* eTerminate */
void           tDisplayBody_eTerminate_main_skel( struct tag_sTerminateRoutineBody_VDES *epd)
{
    tDisplayBody_eTerminate_main( );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eDisplay : omitted by entry port optimize */
/* eInitialize */
static const struct tag_sInitializeRoutineBody_VMT tDisplayBody_eInitialize_MT = {
    tDisplayBody_eInitialize_main_skel,
};
/* eTerminate */
static const struct tag_sTerminateRoutineBody_VMT tDisplayBody_eTerminate_MT = {
    tDisplayBody_eTerminate_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
uint8_t tDisplayBody_SINGLE_CELL_CB_buffer_INIT[900];
/* ���� INIB #_INIB_# */
tDisplayBody_INIB tDisplayBody_SINGLE_CELL_INIB = 
{
    /* call port #_CP_# */ 
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    100,                                     /* width */
    8,                                       /* depth */
    6,                                       /* cellWidth */
    16,                                      /* charWidth */
    8,                                       /* charDepth */
    tDisplayBody_SINGLE_CELL_CB_buffer_INIT, /* buffer */
};
/* ���� CB #_CB_# */
struct tag_tDisplayBody_CB tDisplayBody_SINGLE_CELL_CB;
/* �������ǥ�������ץ� #_EPD_# */
/* eDisplay : omitted by entry port optimize */
const struct tag_tDisplayBody_eInitialize_DES Display_DisplayBody_eInitialize_des = {
    &tDisplayBody_eInitialize_MT,
    &tDisplayBody_SINGLE_CELL_CB,       /* CB */
};
const struct tag_tDisplayBody_eTerminate_DES Display_DisplayBody_eTerminate_des = {
    &tDisplayBody_eTerminate_MT,
    &tDisplayBody_SINGLE_CELL_CB,       /* CB */
};
/* CB ����������� #_CIC_# */
void
tDisplayBody_CB_initialize()
{
	SET_CB_INIB_POINTER(i,p_cb)
	INITIALIZE_CB()
}
