/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sPrintDisplayControl_TECSGEN_H
#define sPrintDisplayControl_TECSGEN_H

/*
 * signature   :  sPrintDisplayControl
 * global name :  sPrintDisplayControl
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sPrintDisplayControl_VDES {
    struct tag_sPrintDisplayControl_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sPrintDisplayControl_VMT {
    void           (*print_str)( struct tag_sPrintDisplayControl_VDES *edp );
    void           (*print_k)( struct tag_sPrintDisplayControl_VDES *edp, const char* string1, int16_t value1 );
    void           (*print1)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1 );
    void           (*print2)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1, int16_t value2 );
    void           (*print3)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1, int16_t value2, int16_t value3 );
    void           (*print4)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1, int16_t value2, int16_t value3, int16_t value4 );
    void           (*print5)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5 );
    void           (*print6)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6 );
    void           (*print7)( struct tag_sPrintDisplayControl_VDES *edp, int16_t value1, int16_t value2, int16_t value3, int16_t value4, int16_t value5, int16_t value6, int16_t value7 );
    void           (*printS1)( struct tag_sPrintDisplayControl_VDES *edp, const char* string1, int16_t value1 );
    void           (*printS2)( struct tag_sPrintDisplayControl_VDES *edp, const char* string1, int16_t value1, const char* string2, int16_t value2 );
    void           (*printS3)( struct tag_sPrintDisplayControl_VDES *edp, const char* string1, int16_t value1, const char* string2, int16_t value2, const char* string3, int16_t value3 );
};
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT_STR  (1)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT_K    (2)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT1     (3)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT2     (4)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT3     (5)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT4     (6)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT5     (7)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT6     (8)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINT7     (9)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINTS1    (10)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINTS2    (11)
#define	FUNCID_SPRINTDISPLAYCONTROL_PRINTS3    (12)

#endif /* sPrintDisplayControl_TECSGEN_H */
