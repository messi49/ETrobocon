/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tI2C_template.c => src/tI2C.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * portNumber       uint8_t          ATTR_portNumber 
 * TimerBase        uint32_t         ATTR_TimerBase  
 * deviceAddress    uint8_t*         VAR_deviceAddress
 * partialTransaction I2CPT*           VAR_partialTransaction
 * currentPT        I2CPT*           VAR_currentPT   
 * state            uint32_t         VAR_state       
 * nbits            uint32_t         VAR_nbits       
 * ackSlot          bool_t           VAR_ackSlot     
 * ackSlotPending   bool_t           VAR_ackSlotPending
 * data             uint8_t*         VAR_data        
 * transmitting     bool_t           VAR_transmitting
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tI2C_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eI2C
 * entry port: eI2C
 * signature:  sI2C
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eI2C_enable
 * name:         eI2C_enable
 * global_name:  tI2C_eI2C_enable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eI2C_enable(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eI2C_disable
 * name:         eI2C_disable
 * global_name:  tI2C_eI2C_disable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eI2C_disable(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eI2C_isBusy
 * name:         eI2C_isBusy
 * global_name:  tI2C_eI2C_isBusy
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eI2C_isBusy(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eI2C_startTransaction
 * name:         eI2C_startTransaction
 * global_name:  tI2C_eI2C_startTransaction
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eI2C_startTransaction(CELLIDX idx, uint32_t address, int32_t internalAddress, int32_t internalAddressBytes, uint8_t* data, uint32_t dataSize, int32_t direction)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eI2C_initialize
 * name:         eI2C_initialize
 * global_name:  tI2C_eI2C_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eI2C_initialize(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eI2C_interruptBody
 * name:         eI2C_interruptBody
 * global_name:  tI2C_eI2C_interruptBody
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eI2C_interruptBody(CELLIDX idx, uint32_t inputs)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
