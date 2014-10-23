/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef snSerialPort_TECSGEN_H
#define snSerialPort_TECSGEN_H

/*
 * signature   :  snSerialPort
 * global name :  snSerialPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_snSerialPort_VDES {
    struct tag_snSerialPort_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_snSerialPort_VMT {
    bool_t         (*getChar)( struct tag_snSerialPort_VDES *edp, char* p_char );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SNSERIALPORT_GETCHAR            (1)

#endif /* snSerialPort_TECSGEN_H */
