/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config G:/CROB301/PROJECT/PROJET/Simulation/config.txt
** Generation date: 2021-03-14T17:52:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Doors.h"

/* Doors/ */
void Doors(inC_Doors *inC, outC_Doors *outC)
{
  /* door_closed/ */
  kcg_bool door_closed_partial;
  /* door_open/ */
  kcg_bool door_open_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* door_closed/ */
  kcg_bool _1_door_closed_partial;
  /* door_open/ */
  kcg_bool _2_door_open_partial;
  /* SM1: */
  SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _5_SM1_fired_partial;
  /* door_closed/ */
  kcg_bool _6_door_closed_partial;
  /* door_open/ */
  kcg_bool _7_door_open_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  /* door_closed/ */
  kcg_bool _11_door_closed_partial;
  /* door_open/ */
  kcg_bool _12_door_open_partial;
  /* SM1: */
  SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:open_door:<1> */
  kcg_bool tr_1_guard_open_door_SM1;
  /* SM1: */
  SSM_ST_SM1 _16_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _18_SM1_fired_strong_partial;
  /* SM1:close_door:<1> */
  kcg_bool tr_1_guard_close_door_SM1;
  /* SM1: */
  SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _21_SM1_fired_strong_partial;
  /* SM1:Intermediate1:<1> */
  kcg_bool tr_1_guard_Intermediate1_SM1;
  /* SM1: */
  SSM_ST_SM1 _22_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _24_SM1_fired_strong_partial;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_close_door_SM1 :
      outC->n_times_5_int8 = inC->unlock_high_time;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State4_SM1 :
      outC->n_times_14_int8 = inC->lock_high_time + inC->down_to_high_time;
      if (SM1_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_14_int8 = outC->n_times_14_int8;
      }
      else {
        outC->v4_times_14_int8 = outC->v3_times_14_int8;
      }
      outC->c_times_14_int8 = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_14_int8 < kcg_lit_int8(0)) {
        outC->v3_times_14_int8 = outC->v4_times_14_int8;
      }
      else /* @3/_/v3= */
      if (outC->c_times_14_int8) {
        outC->v3_times_14_int8 = outC->v4_times_14_int8 - kcg_lit_int8(1);
      }
      else {
        outC->v3_times_14_int8 = outC->v4_times_14_int8;
      }
      outC->o_times_14_int8 = outC->c_times_14_int8 & (outC->v3_times_14_int8 ==
          kcg_lit_int8(0));
      tr_1_guard_State4_SM1 = outC->o_times_14_int8;
      if (tr_1_guard_State4_SM1) {
        _22_SM1_state_act_partial = SSM_st_close_door_SM1;
      }
      else {
        _22_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _22_SM1_state_act_partial;
      if (tr_1_guard_State4_SM1) {
        _24_SM1_fired_strong_partial = SSM_TR_State4_close_door_1_State4_SM1;
      }
      else {
        _24_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _24_SM1_fired_strong_partial;
      break;
    case SSM_st_Intermediate1_SM1 :
      outC->n_times_4_int8 = inC->high_to_down_time;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_4_int8 = outC->n_times_4_int8;
      }
      else {
        outC->v4_times_4_int8 = outC->v3_times_4_int8;
      }
      outC->c_times_4_int8 = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_4_int8 < kcg_lit_int8(0)) {
        outC->v3_times_4_int8 = outC->v4_times_4_int8;
      }
      else /* @2/_/v3= */
      if (outC->c_times_4_int8) {
        outC->v3_times_4_int8 = outC->v4_times_4_int8 - kcg_lit_int8(1);
      }
      else {
        outC->v3_times_4_int8 = outC->v4_times_4_int8;
      }
      outC->o_times_4_int8 = outC->c_times_4_int8 & (outC->v3_times_4_int8 ==
          kcg_lit_int8(0));
      tr_1_guard_Intermediate1_SM1 = outC->o_times_4_int8;
      if (tr_1_guard_Intermediate1_SM1) {
        _19_SM1_state_act_partial = SSM_st_open_door_SM1;
      }
      else {
        _19_SM1_state_act_partial = SSM_st_Intermediate1_SM1;
      }
      outC->SM1_state_act = _19_SM1_state_act_partial;
      if (tr_1_guard_Intermediate1_SM1) {
        _21_SM1_fired_strong_partial =
          SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1;
      }
      else {
        _21_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case SSM_st_close_door_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_5_int8 = outC->n_times_5_int8;
      }
      else {
        outC->v4_times_5_int8 = outC->v3_times_5_int8;
      }
      outC->c_times_5_int8 = kcg_true & (inC->trigger == kcg_true);
      /* @1/_/v3= */
      if (outC->v4_times_5_int8 < kcg_lit_int8(0)) {
        outC->v3_times_5_int8 = outC->v4_times_5_int8;
      }
      else /* @1/_/v3= */
      if (outC->c_times_5_int8) {
        outC->v3_times_5_int8 = outC->v4_times_5_int8 - kcg_lit_int8(1);
      }
      else {
        outC->v3_times_5_int8 = outC->v4_times_5_int8;
      }
      outC->o_times_5_int8 = outC->c_times_5_int8 & (outC->v3_times_5_int8 ==
          kcg_lit_int8(0));
      tr_1_guard_close_door_SM1 = outC->o_times_5_int8;
      if (tr_1_guard_close_door_SM1) {
        _16_SM1_state_act_partial = SSM_st_Intermediate1_SM1;
      }
      else {
        _16_SM1_state_act_partial = SSM_st_close_door_SM1;
      }
      outC->SM1_state_act = _16_SM1_state_act_partial;
      if (tr_1_guard_close_door_SM1) {
        _18_SM1_fired_strong_partial = SSM_TR_close_door_Intermediate1_1_close_door_SM1;
      }
      else {
        _18_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _18_SM1_fired_strong_partial;
      break;
    case SSM_st_open_door_SM1 :
      tr_1_guard_open_door_SM1 = (inC->gear_extended == kcg_true) |
        (inC->gear_retracted == kcg_true);
      if (tr_1_guard_open_door_SM1) {
        SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_open_door_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_open_door_SM1) {
        SM1_fired_strong_partial = SSM_TR_open_door_State4_1_open_door_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State4_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_State4_SM1;
      outC->_L1_State4_SM1 = kcg_false;
      _12_door_open_partial = outC->_L1_State4_SM1;
      _11_door_closed_partial = outC->_L1_State4_SM1;
      outC->door_closed = _11_door_closed_partial;
      outC->door_open = _12_door_open_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_Intermediate1_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_Intermediate1_SM1;
      outC->_L1_Intermediate1_SM1 = kcg_false;
      _7_door_open_partial = outC->_L1_Intermediate1_SM1;
      _6_door_closed_partial = outC->_L1_Intermediate1_SM1;
      outC->door_closed = _6_door_closed_partial;
      outC->door_open = _7_door_open_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_close_door_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_close_door_SM1;
      outC->_L2_close_door_SM1 = kcg_false;
      _2_door_open_partial = outC->_L2_close_door_SM1;
      outC->_L1_close_door_SM1 = kcg_true;
      _1_door_closed_partial = outC->_L1_close_door_SM1;
      outC->door_closed = _1_door_closed_partial;
      outC->door_open = _2_door_open_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_open_door_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_open_door_SM1;
      outC->_L2_open_door_SM1 = kcg_false;
      outC->_L1_open_door_SM1 = kcg_true;
      door_open_partial = outC->_L1_open_door_SM1;
      door_closed_partial = outC->_L2_open_door_SM1;
      outC->door_closed = door_closed_partial;
      outC->door_open = door_open_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_Intermediate1_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_close_door_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_open_door_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State4_SM1 :
      _23_SM1_reset_act_partial = tr_1_guard_State4_SM1;
      outC->SM1_reset_act = _23_SM1_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Intermediate1_SM1 :
      _20_SM1_reset_act_partial = tr_1_guard_Intermediate1_SM1;
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_close_door_SM1 :
      _17_SM1_reset_act_partial = tr_1_guard_close_door_SM1;
      outC->SM1_reset_act = _17_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_open_door_SM1 :
      SM1_reset_act_partial = tr_1_guard_open_door_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Doors_init(outC_Doors *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_open_door_SM1;
  outC->SM1_state_sel = SSM_st_open_door_SM1;
  outC->_L1_State4_SM1 = kcg_true;
  outC->_L1_Intermediate1_SM1 = kcg_true;
  outC->_L1_close_door_SM1 = kcg_true;
  outC->_L2_close_door_SM1 = kcg_true;
  outC->_L1_open_door_SM1 = kcg_true;
  outC->_L2_open_door_SM1 = kcg_true;
  outC->v4_times_14_int8 = kcg_lit_int8(0);
  outC->n_times_14_int8 = kcg_lit_int8(0);
  outC->c_times_14_int8 = kcg_true;
  outC->o_times_14_int8 = kcg_true;
  outC->v4_times_4_int8 = kcg_lit_int8(0);
  outC->n_times_4_int8 = kcg_lit_int8(0);
  outC->c_times_4_int8 = kcg_true;
  outC->o_times_4_int8 = kcg_true;
  outC->v4_times_5_int8 = kcg_lit_int8(0);
  outC->n_times_5_int8 = kcg_lit_int8(0);
  outC->c_times_5_int8 = kcg_true;
  outC->o_times_5_int8 = kcg_true;
  outC->v3_times_14_int8 = kcg_lit_int8(0);
  outC->v3_times_4_int8 = kcg_lit_int8(0);
  outC->v3_times_5_int8 = kcg_lit_int8(0);
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->door_open = kcg_true;
  outC->door_closed = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_close_door_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Doors_reset(outC_Doors *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_close_door_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Doors/
  @3: (times#14)
  @2: (times#4)
  @1: (times#5)
*/

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Doors.c
** Generation date: 2021-03-14T17:52:31
*************************************************************$ */

