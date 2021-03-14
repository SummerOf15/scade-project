#include "projet_interface.h"
#include "projet_type.h"
#include "projet_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_Doors inputs_ctx;
static inC_Doors inputs_ctx_execute;
outC_Doors outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_int8(&inputs_ctx.unlock_high_time);
    init_kcg_int8(&inputs_ctx_execute.unlock_high_time);
    init_kcg_int8(&inputs_ctx.high_to_down_time);
    init_kcg_int8(&inputs_ctx_execute.high_to_down_time);
    init_kcg_bool(&inputs_ctx.trigger);
    init_kcg_bool(&inputs_ctx_execute.trigger);
    init_kcg_bool(&inputs_ctx.gear_extended);
    init_kcg_bool(&inputs_ctx_execute.gear_extended);
    init_kcg_bool(&inputs_ctx.gear_retracted);
    init_kcg_bool(&inputs_ctx_execute.gear_retracted);
    init_kcg_int8(&inputs_ctx.down_to_high_time);
    init_kcg_int8(&inputs_ctx_execute.down_to_high_time);
    init_kcg_int8(&inputs_ctx.lock_high_time);
    init_kcg_int8(&inputs_ctx_execute.lock_high_time);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.unlock_high_time = inputs_ctx.unlock_high_time;
    inputs_ctx_execute.high_to_down_time = inputs_ctx.high_to_down_time;
    inputs_ctx_execute.trigger = inputs_ctx.trigger;
    inputs_ctx_execute.gear_extended = inputs_ctx.gear_extended;
    inputs_ctx_execute.gear_retracted = inputs_ctx.gear_retracted;
    inputs_ctx_execute.down_to_high_time = inputs_ctx.down_to_high_time;
    inputs_ctx_execute.lock_high_time = inputs_ctx.lock_high_time;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "60e862fb8c0af4e74702850caae3d05a";
const char* _SCSIM_SmuTypesCheckSum = "612a6f2dec6abe526bcaa0632c507adf";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    Doors_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    Doors_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_DoorsCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_DoorsCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_DoorsCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_DoorsCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_DoorsCIVTable != NULL && 
        pSimoutC_DoorsCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_DoorsCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    Doors(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_Doors);
    nSize += sizeof(outC_Doors);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_Doors));
    pCurrent += sizeof(inC_Doors);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_Doors));
    pCurrent += sizeof(outC_Doors);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_Doors));
    pCurrent += sizeof(inC_Doors);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_Doors));
    pCurrent += sizeof(outC_Doors);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

