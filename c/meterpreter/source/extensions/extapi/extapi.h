/*!
 * @file extapi.h
 * @brief Entry point and intialisation declarations for the extended API extension.
 */
#ifndef _METERPRETER_SOURCE_EXTENSION_EXTAPI_EXTAPI_H
#define _METERPRETER_SOURCE_EXTENSION_EXTAPI_EXTAPI_H

#include "../../common/common.h"

#define TLV_TYPE_EXTENSION_EXTAPI	0

#define TLV_TYPE_EXT_WINDOW_ENUM_GROUP              MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 1)
#define TLV_TYPE_EXT_WINDOW_ENUM_PID                MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 2)
#define TLV_TYPE_EXT_WINDOW_ENUM_HANDLE             MAKE_CUSTOM_TLV(TLV_META_TYPE_QWORD,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 3)
#define TLV_TYPE_EXT_WINDOW_ENUM_TITLE              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 4)
#define TLV_TYPE_EXT_WINDOW_ENUM_INCLUDEUNKNOWN     MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 5)

#define TLV_TYPE_EXT_SERVICE_ENUM_GROUP             MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 10)
#define TLV_TYPE_EXT_SERVICE_ENUM_NAME              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 11)
#define TLV_TYPE_EXT_SERVICE_ENUM_DISPLAYNAME       MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 12)
#define TLV_TYPE_EXT_SERVICE_ENUM_PID               MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 13)
#define TLV_TYPE_EXT_SERVICE_ENUM_STATUS            MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 14)
#define TLV_TYPE_EXT_SERVICE_ENUM_INTERACTIVE       MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 15)

#define TLV_TYPE_EXT_SERVICE_QUERY_STARTTYPE        MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 20)
#define TLV_TYPE_EXT_SERVICE_QUERY_DISPLAYNAME      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 21)
#define TLV_TYPE_EXT_SERVICE_QUERY_STARTNAME        MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 22)
#define TLV_TYPE_EXT_SERVICE_QUERY_PATH             MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 23)
#define TLV_TYPE_EXT_SERVICE_QUERY_LOADORDERGROUP   MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 24)
#define TLV_TYPE_EXT_SERVICE_QUERY_INTERACTIVE      MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 25)
#define TLV_TYPE_EXT_SERVICE_QUERY_DACL             MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 26)
#define TLV_TYPE_EXT_SERVICE_QUERY_STATUS           MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 27)

#define TLV_TYPE_EXT_SERVICE_CTRL_NAME              MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 28)
#define TLV_TYPE_EXT_SERVICE_CTRL_OP                MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 29)

#define TLV_TYPE_EXT_CLIPBOARD_DOWNLOAD             MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 35)

#define TLV_TYPE_EXT_CLIPBOARD_TYPE_TIMESTAMP       MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 38)

#define TLV_TYPE_EXT_CLIPBOARD_TYPE_TEXT            MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 39)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_TEXT_CONTENT    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 40)

#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILE            MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 41)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILE_NAME       MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 42)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILE_SIZE       MAKE_CUSTOM_TLV(TLV_META_TYPE_QWORD,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 43)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_FILES           MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 44)

#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG       MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 45)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG_DIMX  MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 46)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG_DIMY  MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 47)
#define TLV_TYPE_EXT_CLIPBOARD_TYPE_IMAGE_JPG_DATA  MAKE_CUSTOM_TLV(TLV_META_TYPE_RAW,       TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 48)

#define TLV_TYPE_EXT_CLIPBOARD_MON_CAP_IMG_DATA     MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 50)
#define TLV_TYPE_EXT_CLIPBOARD_MON_WIN_CLASS        MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 51)
#define TLV_TYPE_EXT_CLIPBOARD_MON_DUMP             MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 52)
#define TLV_TYPE_EXT_CLIPBOARD_MON_PURGE            MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 53)

#define TLV_TYPE_EXT_ADSI_DOMAIN                    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 54)
#define TLV_TYPE_EXT_ADSI_FILTER                    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 55)
#define TLV_TYPE_EXT_ADSI_FIELD                     MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 56)
#define TLV_TYPE_EXT_ADSI_RESULT                    MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 57)
#define TLV_TYPE_EXT_ASDI_MAXRESULTS                MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 58)
#define TLV_TYPE_EXT_ASDI_PAGESIZE                  MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 59)
#define TLV_TYPE_EXT_ADSI_ARRAY                     MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 60)
#define TLV_TYPE_EXT_ADSI_STRING                    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 61)
#define TLV_TYPE_EXT_ADSI_NUMBER                    MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 62)
#define TLV_TYPE_EXT_ADSI_BIGNUMBER                 MAKE_CUSTOM_TLV(TLV_META_TYPE_QWORD,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 63)
#define TLV_TYPE_EXT_ADSI_BOOL                      MAKE_CUSTOM_TLV(TLV_META_TYPE_BOOL,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 64)
#define TLV_TYPE_EXT_ADSI_RAW                       MAKE_CUSTOM_TLV(TLV_META_TYPE_RAW,       TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 65)
#define TLV_TYPE_EXT_ADSI_PATH                      MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 66)
#define TLV_TYPE_EXT_ADSI_PATH_VOL                  MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 67)
#define TLV_TYPE_EXT_ADSI_PATH_PATH                 MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 68)
#define TLV_TYPE_EXT_ADSI_PATH_TYPE                 MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,      TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 69)
#define TLV_TYPE_EXT_ADSI_DN                        MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 70)

#define TLV_TYPE_EXT_WMI_DOMAIN                     MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 90)
#define TLV_TYPE_EXT_WMI_QUERY                      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 91)
#define TLV_TYPE_EXT_WMI_FIELD                      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 92)
#define TLV_TYPE_EXT_WMI_VALUE                      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 93)
#define TLV_TYPE_EXT_WMI_FIELDS                     MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 94)
#define TLV_TYPE_EXT_WMI_VALUES                     MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,     TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 95)
#define TLV_TYPE_EXT_WMI_ERROR                      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING,    TLV_TYPE_EXTENSION_EXTAPI, TLV_EXTENSIONS + 96)

#endif
