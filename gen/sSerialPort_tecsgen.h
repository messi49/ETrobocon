/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSerialPort_TECSGEN_H
#define sSerialPort_TECSGEN_H

/*
 * signature   :  sSerialPort
 * global name :  sSerialPort
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSerialPort_VDES {
    struct tag_sSerialPort_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSerialPort_VMT {
    ER             (*open)( struct tag_sSerialPort_VDES *edp );
    ER             (*close)( struct tag_sSerialPort_VDES *edp );
    ER_UINT        (*read)( struct tag_sSerialPort_VDES *edp, char* buffer, uint_t length );
    ER_UINT        (*write)( struct tag_sSerialPort_VDES *edp, const char* buffer, uint_t length );
    ER             (*control)( struct tag_sSerialPort_VDES *edp, uint_t ioControl );
    ER             (*refer)( struct tag_sSerialPort_VDES *edp, T_SERIAL_RPOR* pk_rpor );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSERIALPORT_OPEN                (1)
#define	FUNCID_SSERIALPORT_CLOSE               (2)
#define	FUNCID_SSERIALPORT_READ                (3)
#define	FUNCID_SSERIALPORT_WRITE               (4)
#define	FUNCID_SSERIALPORT_CONTROL             (5)
#define	FUNCID_SSERIALPORT_REFER               (6)

#endif /* sSerialPort_TECSGEN_H */
