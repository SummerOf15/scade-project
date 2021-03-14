/* projet_mapping.c */

#include "projet_type.h"
#include "projet_interface.h"
#include "projet_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 2);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 2);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 3);
DECL_SCOPE(scope_2, 11);
DECL_SCOPE(scope_1, 10);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Intermediate1_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Intermediate1_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_State4_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_State4_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_close_door_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_close_door_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_open_door_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_open_door_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_State4_close_door_1_State4_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_State4_close_door_1_State4_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_close_door_Intermediate1_1_close_door_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_close_door_Intermediate1_1_close_door_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_open_door_State4_1_open_door_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_open_door_State4_1_open_door_SM1; }

/* mapping definition */


const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_State4_close_door_1_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "Doors/ DoorsSM1:State4:<1",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_State4_close_door_1_State4_SM1, &scope_10, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_State4_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State4_SM1, NULL, 1, 1 }
};
const MappingScope scope_9 = {
    "Doors/ DoorsSM1:State4:",
    scope_9_entries, 2
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "Doors/ DoorsSM1:Intermediate1:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1, &scope_8, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Intermediate1_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Intermediate1_SM1, NULL, 1, 1 }
};
const MappingScope scope_7 = {
    "Doors/ DoorsSM1:Intermediate1:",
    scope_7_entries, 2
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_close_door_Intermediate1_1_close_door_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "Doors/ DoorsSM1:close_door:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_close_door_Intermediate1_1_close_door_SM1, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_close_door_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_close_door_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_close_door_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_close_door_SM1, NULL, 1, 2 }
};
const MappingScope scope_5 = {
    "Doors/ DoorsSM1:close_door:",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_open_door_State4_1_open_door_SM1, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "Doors/ DoorsSM1:open_door:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[5], isActive_SSM_TR_SM1_SSM_TR_open_door_State4_1_open_door_SM1, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_open_door_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_open_door_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_open_door_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_open_door_SM1, NULL, 1, 2 }
};
const MappingScope scope_3 = {
    "Doors/ DoorsSM1:open_door:",
    scope_3_entries, 3
};

const MappingEntry scope_2_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "open_door:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_open_door_SM1, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "close_door:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_close_door_SM1, &scope_5, 1, 8 },
    /* 9 */ { MAP_STATE, "Intermediate1:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Intermediate1_SM1, &scope_7, 1, 9 },
    /* 10 */ { MAP_STATE, "State4:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State4_SM1, &scope_9, 1, 10 }
};
const MappingScope scope_2 = {
    "Doors/ DoorsSM1:",
    scope_2_entries, 11
};

const MappingEntry scope_1_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "door_closed", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.door_closed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "door_open", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.door_open, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "unlock_high_time", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.unlock_high_time, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "high_to_down_time", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.high_to_down_time, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "trigger", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.trigger, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "gear_extended", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_extended, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INPUT, "gear_retracted", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.gear_retracted, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "down_to_high_time", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.down_to_high_time, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "lock_high_time", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.lock_high_time, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 9 }
};
const MappingScope scope_1 = {
    "Doors/ Doors",
    scope_1_entries, 10
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Doors", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
