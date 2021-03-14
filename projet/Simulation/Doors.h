/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config G:/CROB301/PROJECT/PROJET/Simulation/config.txt
** Generation date: 2021-03-14T17:52:31
*************************************************************$ */
#ifndef _Doors_H_
#define _Doors_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int8 /* unlock_high_time/ */ unlock_high_time;
  kcg_int8 /* high_to_down_time/ */ high_to_down_time;
  kcg_bool /* trigger/ */ trigger;
  kcg_bool /* gear_extended/ */ gear_extended;
  kcg_bool /* gear_retracted/ */ gear_retracted;
  kcg_int8 /* down_to_high_time/ */ down_to_high_time;
  kcg_int8 /* lock_high_time/ */ lock_high_time;
} inC_Doors;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* door_closed/ */ door_closed;
  kcg_bool /* door_open/ */ door_open;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_int8 /* @1/_/v3/ */ v3_times_5_int8;
  kcg_int8 /* @2/_/v3/ */ v3_times_4_int8;
  kcg_int8 /* @3/_/v3/ */ v3_times_14_int8;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_5_int8;
  kcg_bool /* @1/_/c/ */ c_times_5_int8;
  kcg_int8 /* @1/_/n/ */ n_times_5_int8;
  kcg_int8 /* @1/_/v4/ */ v4_times_5_int8;
  kcg_bool /* @2/_/o/ */ o_times_4_int8;
  kcg_bool /* @2/_/c/ */ c_times_4_int8;
  kcg_int8 /* @2/_/n/ */ n_times_4_int8;
  kcg_int8 /* @2/_/v4/ */ v4_times_4_int8;
  kcg_bool /* @3/_/o/ */ o_times_14_int8;
  kcg_bool /* @3/_/c/ */ c_times_14_int8;
  kcg_int8 /* @3/_/n/ */ n_times_14_int8;
  kcg_int8 /* @3/_/v4/ */ v4_times_14_int8;
  kcg_bool /* SM1:open_door:_L2/ */ _L2_open_door_SM1;
  kcg_bool /* SM1:open_door:_L1/ */ _L1_open_door_SM1;
  kcg_bool /* SM1:close_door:_L2/ */ _L2_close_door_SM1;
  kcg_bool /* SM1:close_door:_L1/ */ _L1_close_door_SM1;
  kcg_bool /* SM1:Intermediate1:_L1/ */ _L1_Intermediate1_SM1;
  kcg_bool /* SM1:State4:_L1/ */ _L1_State4_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Doors;

/* ===========  node initialization and cycle functions  =========== */
/* Doors/ */
extern void Doors(inC_Doors *inC, outC_Doors *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Doors_reset(outC_Doors *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Doors_init(outC_Doors *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Doors/
  @1: (times#5)
  @2: (times#4)
  @3: (times#14)
*/

#endif /* _Doors_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Doors.h
** Generation date: 2021-03-14T17:52:31
*************************************************************$ */

