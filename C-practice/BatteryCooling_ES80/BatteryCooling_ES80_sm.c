/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : BatteryCooling_ES80.sm
 */

#include "BatteryCooling_ES80.h"
#include "BatteryCooling_ES80_sm.h"

#define getOwner(fsm) (fsm)->_owner

static void BatteryCooling_ES80State_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void BatteryCooling_ES80State_Ready(struct BatteryCooling_ES80Context *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void BatteryCooling_ES80State_Run(struct BatteryCooling_ES80Context *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void BatteryCooling_ES80State_Stop(struct BatteryCooling_ES80Context *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void BatteryCooling_ES80State_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void BatteryCooling_ES80State_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void BatteryCooling_ES80State_Default(struct BatteryCooling_ES80Context *const fsm)
{
    State_Default(fsm);
}

#define BatteryCoolingMap_Idle_Ready BatteryCooling_ES80State_Ready
#define BatteryCoolingMap_Idle_Run BatteryCooling_ES80State_Run
#define BatteryCoolingMap_Idle_Stop BatteryCooling_ES80State_Stop
#define BatteryCoolingMap_Idle_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_DrivingMode_Run BatteryCooling_ES80State_Run
#define BatteryCoolingMap_DrivingMode_Stop BatteryCooling_ES80State_Stop
#define BatteryCoolingMap_DrivingMode_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_ChargingMode_Run BatteryCooling_ES80State_Run
#define BatteryCoolingMap_ChargingMode_Stop BatteryCooling_ES80State_Stop
#define BatteryCoolingMap_ChargingMode_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_DrivingCoolingReady_Ready BatteryCooling_ES80State_Ready
#define BatteryCoolingMap_DrivingCoolingReady_Stop BatteryCooling_ES80State_Stop
#define BatteryCoolingMap_DrivingCoolingReady_Switch_2DrivingMode BatteryCooling_ES80State_Switch_2DrivingMode
#define BatteryCoolingMap_DrivingCoolingReady_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_RunningDrivingCooling_Ready BatteryCooling_ES80State_Ready
#define BatteryCoolingMap_RunningDrivingCooling_Switch_2DrivingMode BatteryCooling_ES80State_Switch_2DrivingMode
#define BatteryCoolingMap_RunningDrivingCooling_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_ChargingCoolingReady_Ready BatteryCooling_ES80State_Ready
#define BatteryCoolingMap_ChargingCoolingReady_Stop BatteryCooling_ES80State_Stop
#define BatteryCoolingMap_ChargingCoolingReady_Switch_2ChargingMode BatteryCooling_ES80State_Switch_2ChargingMode
#define BatteryCoolingMap_ChargingCoolingReady_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_RunningChargingCooling_Ready BatteryCooling_ES80State_Ready
#define BatteryCoolingMap_RunningChargingCooling_Switch_2ChargingMode BatteryCooling_ES80State_Switch_2ChargingMode
#define BatteryCoolingMap_RunningChargingCooling_Default BatteryCooling_ES80State_Default
#define BatteryCoolingMap_DefaultState_Back_2Idle BatteryCooling_ES80State_Back_2Idle
#define BatteryCoolingMap_DefaultState_Ready BatteryCooling_ES80State_Ready
#define BatteryCoolingMap_DefaultState_Run BatteryCooling_ES80State_Run
#define BatteryCoolingMap_DefaultState_Stop BatteryCooling_ES80State_Stop
#define BatteryCoolingMap_DefaultState_Switch_2ChargingMode BatteryCooling_ES80State_Switch_2ChargingMode
#define BatteryCoolingMap_DefaultState_Switch_2DrivingMode BatteryCooling_ES80State_Switch_2DrivingMode
static void BatteryCoolingMap_Idle_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);
    const struct BatteryCooling_ES80State* EndStateName = getState(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, EndStateName);

}
static void BatteryCoolingMap_Idle_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, CHARGING);
    setState(fsm, &BatteryCoolingMap_ChargingMode);

}
static void BatteryCoolingMap_Idle_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, DRIVING);
    setState(fsm, &BatteryCoolingMap_DrivingMode);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_Idle = {
    BatteryCoolingMap_Idle_Back_2Idle,
    BatteryCoolingMap_Idle_Ready,
    BatteryCoolingMap_Idle_Run,
    BatteryCoolingMap_Idle_Stop,
    BatteryCoolingMap_Idle_Switch_2ChargingMode,
    BatteryCoolingMap_Idle_Switch_2DrivingMode,
    BatteryCoolingMap_Idle_Default,
    0
};
static void BatteryCoolingMap_DrivingMode_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, &BatteryCoolingMap_Idle);

}
static void BatteryCoolingMap_DrivingMode_Ready(struct BatteryCooling_ES80Context *const fsm)
{

    setState(fsm, &BatteryCoolingMap_DrivingCoolingReady);

}
static void BatteryCoolingMap_DrivingMode_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, CHARGING);
    setState(fsm, &BatteryCoolingMap_ChargingMode);

}
static void BatteryCoolingMap_DrivingMode_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);
    const struct BatteryCooling_ES80State* EndStateName = getState(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, DRIVING);
    setState(fsm, EndStateName);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_DrivingMode = {
    BatteryCoolingMap_DrivingMode_Back_2Idle,
    BatteryCoolingMap_DrivingMode_Ready,
    BatteryCoolingMap_DrivingMode_Run,
    BatteryCoolingMap_DrivingMode_Stop,
    BatteryCoolingMap_DrivingMode_Switch_2ChargingMode,
    BatteryCoolingMap_DrivingMode_Switch_2DrivingMode,
    BatteryCoolingMap_DrivingMode_Default,
    1
};
static void BatteryCoolingMap_ChargingMode_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, &BatteryCoolingMap_Idle);

}
static void BatteryCoolingMap_ChargingMode_Ready(struct BatteryCooling_ES80Context *const fsm)
{

    setState(fsm, &BatteryCoolingMap_ChargingCoolingReady);

}
static void BatteryCoolingMap_ChargingMode_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);
    const struct BatteryCooling_ES80State* EndStateName = getState(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, CHARGING);
    setState(fsm, EndStateName);

}
static void BatteryCoolingMap_ChargingMode_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, DRIVING);
    setState(fsm, &BatteryCoolingMap_DrivingMode);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_ChargingMode = {
    BatteryCoolingMap_ChargingMode_Back_2Idle,
    BatteryCoolingMap_ChargingMode_Ready,
    BatteryCoolingMap_ChargingMode_Run,
    BatteryCoolingMap_ChargingMode_Stop,
    BatteryCoolingMap_ChargingMode_Switch_2ChargingMode,
    BatteryCoolingMap_ChargingMode_Switch_2DrivingMode,
    BatteryCoolingMap_ChargingMode_Default,
    2
};
static void BatteryCoolingMap_DrivingCoolingReady_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, &BatteryCoolingMap_Idle);

}
static void BatteryCoolingMap_DrivingCoolingReady_Run(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_CoolingOperation(ctxt, DRIVING);
    setState(fsm, &BatteryCoolingMap_RunningDrivingCooling);

}
static void BatteryCoolingMap_DrivingCoolingReady_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, CHARGING);
    setState(fsm, &BatteryCoolingMap_ChargingMode);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_DrivingCoolingReady = {
    BatteryCoolingMap_DrivingCoolingReady_Back_2Idle,
    BatteryCoolingMap_DrivingCoolingReady_Ready,
    BatteryCoolingMap_DrivingCoolingReady_Run,
    BatteryCoolingMap_DrivingCoolingReady_Stop,
    BatteryCoolingMap_DrivingCoolingReady_Switch_2ChargingMode,
    BatteryCoolingMap_DrivingCoolingReady_Switch_2DrivingMode,
    BatteryCoolingMap_DrivingCoolingReady_Default,
    3
};
static void BatteryCoolingMap_RunningDrivingCooling_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, &BatteryCoolingMap_Idle);

}
static void BatteryCoolingMap_RunningDrivingCooling_Run(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);
    const struct BatteryCooling_ES80State* EndStateName = getState(fsm);

    clearState(fsm);
    BatteryCooling_ES80_CoolingOperation(ctxt, DRIVING);
    setState(fsm, EndStateName);

}
static void BatteryCoolingMap_RunningDrivingCooling_Stop(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_StopOperation(ctxt);
    setState(fsm, &BatteryCoolingMap_DrivingCoolingReady);

}
static void BatteryCoolingMap_RunningDrivingCooling_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, CHARGING);
    setState(fsm, &BatteryCoolingMap_ChargingMode);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_RunningDrivingCooling = {
    BatteryCoolingMap_RunningDrivingCooling_Back_2Idle,
    BatteryCoolingMap_RunningDrivingCooling_Ready,
    BatteryCoolingMap_RunningDrivingCooling_Run,
    BatteryCoolingMap_RunningDrivingCooling_Stop,
    BatteryCoolingMap_RunningDrivingCooling_Switch_2ChargingMode,
    BatteryCoolingMap_RunningDrivingCooling_Switch_2DrivingMode,
    BatteryCoolingMap_RunningDrivingCooling_Default,
    4
};
static void BatteryCoolingMap_ChargingCoolingReady_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, &BatteryCoolingMap_Idle);

}
static void BatteryCoolingMap_ChargingCoolingReady_Run(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_CoolingOperation(ctxt, CHARGING);
    setState(fsm, &BatteryCoolingMap_RunningChargingCooling);

}
static void BatteryCoolingMap_ChargingCoolingReady_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, DRIVING);
    setState(fsm, &BatteryCoolingMap_DrivingMode);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_ChargingCoolingReady = {
    BatteryCoolingMap_ChargingCoolingReady_Back_2Idle,
    BatteryCoolingMap_ChargingCoolingReady_Ready,
    BatteryCoolingMap_ChargingCoolingReady_Run,
    BatteryCoolingMap_ChargingCoolingReady_Stop,
    BatteryCoolingMap_ChargingCoolingReady_Switch_2ChargingMode,
    BatteryCoolingMap_ChargingCoolingReady_Switch_2DrivingMode,
    BatteryCoolingMap_ChargingCoolingReady_Default,
    5
};
static void BatteryCoolingMap_RunningChargingCooling_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, IDLE);
    setState(fsm, &BatteryCoolingMap_Idle);

}
static void BatteryCoolingMap_RunningChargingCooling_Run(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);
    const struct BatteryCooling_ES80State* EndStateName = getState(fsm);

    clearState(fsm);
    BatteryCooling_ES80_CoolingOperation(ctxt, CHARGING);
    setState(fsm, EndStateName);

}
static void BatteryCoolingMap_RunningChargingCooling_Stop(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_StopOperation(ctxt);
    setState(fsm, &BatteryCoolingMap_ChargingCoolingReady);

}
static void BatteryCoolingMap_RunningChargingCooling_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    struct BatteryCooling_ES80 *ctxt = getOwner(fsm);

    clearState(fsm);
    BatteryCooling_ES80_ModeOperation(ctxt, DRIVING);
    setState(fsm, &BatteryCoolingMap_DrivingMode);

}

const struct BatteryCooling_ES80State BatteryCoolingMap_RunningChargingCooling = {
    BatteryCoolingMap_RunningChargingCooling_Back_2Idle,
    BatteryCoolingMap_RunningChargingCooling_Ready,
    BatteryCoolingMap_RunningChargingCooling_Run,
    BatteryCoolingMap_RunningChargingCooling_Stop,
    BatteryCoolingMap_RunningChargingCooling_Switch_2ChargingMode,
    BatteryCoolingMap_RunningChargingCooling_Switch_2DrivingMode,
    BatteryCoolingMap_RunningChargingCooling_Default,
    6
};

#ifdef NO_BATTERYCOOLING_ES80_SM_MACRO
void BatteryCooling_ES80Context_Init(struct BatteryCooling_ES80Context *const fsm, struct BatteryCooling_ES80 *const owner)
{
    FSM_INIT(fsm, &BatteryCoolingMap_Idle);
    fsm->_owner = owner;
}

void BatteryCooling_ES80Context_Back_2Idle(struct BatteryCooling_ES80Context *const fsm)
{
    const struct BatteryCooling_ES80State* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "Back_2Idle");
    state->Back_2Idle(fsm);
    setTransition(fsm, NULL);
}

void BatteryCooling_ES80Context_Ready(struct BatteryCooling_ES80Context *const fsm)
{
    const struct BatteryCooling_ES80State* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "Ready");
    state->Ready(fsm);
    setTransition(fsm, NULL);
}

void BatteryCooling_ES80Context_Run(struct BatteryCooling_ES80Context *const fsm)
{
    const struct BatteryCooling_ES80State* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "Run");
    state->Run(fsm);
    setTransition(fsm, NULL);
}

void BatteryCooling_ES80Context_Stop(struct BatteryCooling_ES80Context *const fsm)
{
    const struct BatteryCooling_ES80State* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "Stop");
    state->Stop(fsm);
    setTransition(fsm, NULL);
}

void BatteryCooling_ES80Context_Switch_2ChargingMode(struct BatteryCooling_ES80Context *const fsm)
{
    const struct BatteryCooling_ES80State* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "Switch_2ChargingMode");
    state->Switch_2ChargingMode(fsm);
    setTransition(fsm, NULL);
}

void BatteryCooling_ES80Context_Switch_2DrivingMode(struct BatteryCooling_ES80Context *const fsm)
{
    const struct BatteryCooling_ES80State* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "Switch_2DrivingMode");
    state->Switch_2DrivingMode(fsm);
    setTransition(fsm, NULL);
}
#endif

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
