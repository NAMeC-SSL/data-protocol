/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6 */

#ifndef PB_SENSORDATA_PB_H_INCLUDED
#define PB_SENSORDATA_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _Commands { 
    Commands_STOP = 0, 
    Commands_RUN = 1, 
    Commands_BREAK = 2 
} Commands;

typedef enum _Kicker { 
    Kicker_NO_KICK = 0, 
    Kicker_KICK1 = 1, 
    Kicker_KICK2 = 2 
} Kicker;

/* Struct definitions */
typedef struct _BrushlessToMainBoard { 
    uint32_t error_count; /* Number of SPI transmission errors */
    float measured_speed; /* m.s-1 */
} BrushlessToMainBoard;

typedef struct _IAToMainBoard { 
    float normal_speed; /* m.s-1 */
    float tangential_speed; /* m.s-1 */
    float angular_speed; /* rad.s-1 */
    bool motor_break;
    Kicker kicker_cmd;
    float kick_power; /* kick power (uS) */
    bool charge; /* charge kicker */
    bool dribbler; /* Enable / disable dribbler */
} IAToMainBoard;

typedef struct _MainBoardToBrushless { 
    Commands command; /* Brushless command */
    float speed; /* m.s-1 */
} MainBoardToBrushless;

typedef struct _MainboardToIA { 
    float measured_normal_speed; /* m.s-1 */
    float measured_tangential_speed; /* m.s-1 */
    float measured_angular_speed; /* rad.s-1 */
} MainboardToIA;


/* Helper constants for enums */
#define _Commands_MIN Commands_STOP
#define _Commands_MAX Commands_BREAK
#define _Commands_ARRAYSIZE ((Commands)(Commands_BREAK+1))

#define _Kicker_MIN Kicker_NO_KICK
#define _Kicker_MAX Kicker_KICK2
#define _Kicker_ARRAYSIZE ((Kicker)(Kicker_KICK2+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define MainBoardToBrushless_init_default        {_Commands_MIN, 0}
#define BrushlessToMainBoard_init_default        {0, 0}
#define IAToMainBoard_init_default               {0, 0, 0, 0, _Kicker_MIN, 0, 0, 0}
#define MainboardToIA_init_default               {0, 0, 0}
#define MainBoardToBrushless_init_zero           {_Commands_MIN, 0}
#define BrushlessToMainBoard_init_zero           {0, 0}
#define IAToMainBoard_init_zero                  {0, 0, 0, 0, _Kicker_MIN, 0, 0, 0}
#define MainboardToIA_init_zero                  {0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define BrushlessToMainBoard_error_count_tag     1
#define BrushlessToMainBoard_measured_speed_tag  2
#define IAToMainBoard_normal_speed_tag           1
#define IAToMainBoard_tangential_speed_tag       2
#define IAToMainBoard_angular_speed_tag          3
#define IAToMainBoard_motor_break_tag            4
#define IAToMainBoard_kicker_cmd_tag             5
#define IAToMainBoard_kick_power_tag             6
#define IAToMainBoard_charge_tag                 7
#define IAToMainBoard_dribbler_tag               8
#define MainBoardToBrushless_command_tag         1
#define MainBoardToBrushless_speed_tag           2
#define MainboardToIA_measured_normal_speed_tag  1
#define MainboardToIA_measured_tangential_speed_tag 2
#define MainboardToIA_measured_angular_speed_tag 3

/* Struct field encoding specification for nanopb */
#define MainBoardToBrushless_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    command,           1) \
X(a, STATIC,   SINGULAR, FLOAT,    speed,             2)
#define MainBoardToBrushless_CALLBACK NULL
#define MainBoardToBrushless_DEFAULT NULL

#define BrushlessToMainBoard_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   error_count,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    measured_speed,    2)
#define BrushlessToMainBoard_CALLBACK NULL
#define BrushlessToMainBoard_DEFAULT NULL

#define IAToMainBoard_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    normal_speed,      1) \
X(a, STATIC,   SINGULAR, FLOAT,    tangential_speed,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    angular_speed,     3) \
X(a, STATIC,   SINGULAR, BOOL,     motor_break,       4) \
X(a, STATIC,   SINGULAR, UENUM,    kicker_cmd,        5) \
X(a, STATIC,   SINGULAR, FLOAT,    kick_power,        6) \
X(a, STATIC,   SINGULAR, BOOL,     charge,            7) \
X(a, STATIC,   SINGULAR, BOOL,     dribbler,          8)
#define IAToMainBoard_CALLBACK NULL
#define IAToMainBoard_DEFAULT NULL

#define MainboardToIA_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    measured_normal_speed,   1) \
X(a, STATIC,   SINGULAR, FLOAT,    measured_tangential_speed,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    measured_angular_speed,   3)
#define MainboardToIA_CALLBACK NULL
#define MainboardToIA_DEFAULT NULL

extern const pb_msgdesc_t MainBoardToBrushless_msg;
extern const pb_msgdesc_t BrushlessToMainBoard_msg;
extern const pb_msgdesc_t IAToMainBoard_msg;
extern const pb_msgdesc_t MainboardToIA_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define MainBoardToBrushless_fields &MainBoardToBrushless_msg
#define BrushlessToMainBoard_fields &BrushlessToMainBoard_msg
#define IAToMainBoard_fields &IAToMainBoard_msg
#define MainboardToIA_fields &MainboardToIA_msg

/* Maximum encoded size of messages (where known) */
#define BrushlessToMainBoard_size                11
#define IAToMainBoard_size                       28
#define MainBoardToBrushless_size                7
#define MainboardToIA_size                       15

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
