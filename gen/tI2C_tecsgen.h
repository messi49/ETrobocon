/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tI2C_TECSGEN_H
#define tI2C_TECSGEN_H

/*
 * celltype    :  tI2C
 * global name :  tI2C
 * idx_is_id   :  no
 * singleton   :  no
 * has_CB      :  true
 * has_INIB    :  true
 * rom         :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sI2C_tecsgen.h"

#ifndef TOPPERS_CB_TYPE_ONLY

#define tI2C_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tI2C_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tI2C_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tI2C_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tI2C_ATTR_portNumber( p_that )	((p_that)->_inib->portNumber)
#define tI2C_ATTR_TimerBase( p_that )	((p_that)->_inib->TimerBase)

#define tI2C_GET_portNumber(p_that)	((p_that)->_inib->portNumber)
#define tI2C_GET_TimerBase(p_that)	((p_that)->_inib->TimerBase)


/* var アクセスマクロ #_VAM_# */
#define tI2C_VAR_deviceAddress(p_that)	((p_that)->_inib->deviceAddress)
#define tI2C_VAR_partialTransaction(p_that)	((p_that)->_inib->partialTransaction)
#define tI2C_VAR_currentPT(p_that)	((p_that)->currentPT)
#define tI2C_VAR_state(p_that)	((p_that)->state)
#define tI2C_VAR_nbits(p_that)	((p_that)->nbits)
#define tI2C_VAR_ackSlot(p_that)	((p_that)->ackSlot)
#define tI2C_VAR_ackSlotPending(p_that)	((p_that)->ackSlotPending)
#define tI2C_VAR_data(p_that)	((p_that)->data)
#define tI2C_VAR_transmitting(p_that)	((p_that)->transmitting)

#define tI2C_GET_deviceAddress(p_that)	((p_that)->deviceAddress)
#define tI2C_SET_deviceAddress(p_that,val)	((p_that)->deviceAddress=(val))
#define tI2C_GET_partialTransaction(p_that)	((p_that)->partialTransaction)
#define tI2C_SET_partialTransaction(p_that,val)	((p_that)->partialTransaction=(val))
#define tI2C_GET_currentPT(p_that)	((p_that)->currentPT)
#define tI2C_SET_currentPT(p_that,val)	((p_that)->currentPT=(val))
#define tI2C_GET_state(p_that)	((p_that)->state)
#define tI2C_SET_state(p_that,val)	((p_that)->state=(val))
#define tI2C_GET_nbits(p_that)	((p_that)->nbits)
#define tI2C_SET_nbits(p_that,val)	((p_that)->nbits=(val))
#define tI2C_GET_ackSlot(p_that)	((p_that)->ackSlot)
#define tI2C_SET_ackSlot(p_that,val)	((p_that)->ackSlot=(val))
#define tI2C_GET_ackSlotPending(p_that)	((p_that)->ackSlotPending)
#define tI2C_SET_ackSlotPending(p_that,val)	((p_that)->ackSlotPending=(val))
#define tI2C_GET_data(p_that)	((p_that)->data)
#define tI2C_SET_data(p_that,val)	((p_that)->data=(val))
#define tI2C_GET_transmitting(p_that)	((p_that)->transmitting)
#define tI2C_SET_transmitting(p_that,val)	((p_that)->transmitting=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tI2C_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        portNumber;
    uint32_t       TimerBase;
    uint8_t*       deviceAddress;
    I2CPT*         partialTransaction;
}  tI2C_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tI2C_CB {
    tI2C_INIB  *_inib;
    /* var #_VA_# */ 
    I2CPT*         currentPT;
    uint32_t       state;
    uint32_t       nbits;
    bool_t         ackSlot;
    bool_t         ackSlotPending;
    uint8_t*       data;
    bool_t         transmitting;
}  tI2C_CB;
extern tI2C_CB  tI2C_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tI2C_CB *tI2C_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sI2C */
void         tI2C_eI2C_enable(tI2C_IDX idx);
void         tI2C_eI2C_disable(tI2C_IDX idx);
bool_t       tI2C_eI2C_isBusy(tI2C_IDX idx);
bool_t       tI2C_eI2C_startTransaction(tI2C_IDX idx, uint32_t address, int32_t internalAddress, int32_t internalAddressBytes, uint8_t* data, uint32_t dataSize, int32_t direction);
void         tI2C_eI2C_initialize(tI2C_IDX idx);
void         tI2C_eI2C_interruptBody(tI2C_IDX idx, uint32_t inputs);

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tI2C_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tI2C_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tI2C_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tI2C_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_portNumber      tI2C_ATTR_portNumber( p_cellcb )
#define ATTR_TimerBase       tI2C_ATTR_TimerBase( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_deviceAddress    tI2C_VAR_deviceAddress( p_cellcb )
#define VAR_partialTransaction tI2C_VAR_partialTransaction( p_cellcb )
#define VAR_currentPT        tI2C_VAR_currentPT( p_cellcb )
#define VAR_state            tI2C_VAR_state( p_cellcb )
#define VAR_nbits            tI2C_VAR_nbits( p_cellcb )
#define VAR_ackSlot          tI2C_VAR_ackSlot( p_cellcb )
#define VAR_ackSlotPending   tI2C_VAR_ackSlotPending( p_cellcb )
#define VAR_data             tI2C_VAR_data( p_cellcb )
#define VAR_transmitting     tI2C_VAR_transmitting( p_cellcb )


/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eI2C_enable      tI2C_eI2C_enable
#define eI2C_disable     tI2C_eI2C_disable
#define eI2C_isBusy      tI2C_eI2C_isBusy
#define eI2C_startTransaction tI2C_eI2C_startTransaction
#define eI2C_initialize  tI2C_eI2C_initialize
#define eI2C_interruptBody tI2C_eI2C_interruptBody

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tI2C_N_CELL; (i)++ ){ \
       (p_cb) = &tI2C_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tI2C_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tI2C_TECSGEN_H */
