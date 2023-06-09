/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : week.sm
 */

#include "week.h"
#include "week_sm.h"

#define getOwner(fsm) (fsm)->_owner

static void WeekState_NextDay(struct weekContext *const fsm)
{
    getState(fsm)->Default(fsm);
}

static void WeekState_Default(struct weekContext *const fsm)
{
    State_Default(fsm);
}

#define WeekMap_Sunday_Default WeekState_Default
#define WeekMap_Monday_Default WeekState_Default
#define WeekMap_Tuesday_Default WeekState_Default
#define WeekMap_Wednesday_Default WeekState_Default
#define WeekMap_Thrsday_Default WeekState_Default
#define WeekMap_Friday_Default WeekState_Default
#define WeekMap_Saturday_Default WeekState_Default
#define WeekMap_DefaultState_NextDay WeekState_NextDay
static void WeekMap_Sunday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingMonday(ctxt);
    setState(fsm, &WeekMap_Monday);

}

const struct WeekState WeekMap_Sunday = {
    WeekMap_Sunday_NextDay,
    WeekMap_Sunday_Default,
    0
};
static void WeekMap_Monday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingTuesday(ctxt);
    setState(fsm, &WeekMap_Tuesday);

}

const struct WeekState WeekMap_Monday = {
    WeekMap_Monday_NextDay,
    WeekMap_Monday_Default,
    1
};
static void WeekMap_Tuesday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingWednesday(ctxt);
    setState(fsm, &WeekMap_Wednesday);

}

const struct WeekState WeekMap_Tuesday = {
    WeekMap_Tuesday_NextDay,
    WeekMap_Tuesday_Default,
    2
};
static void WeekMap_Wednesday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingThrsday(ctxt);
    setState(fsm, &WeekMap_Thrsday);

}

const struct WeekState WeekMap_Wednesday = {
    WeekMap_Wednesday_NextDay,
    WeekMap_Wednesday_Default,
    3
};
static void WeekMap_Thrsday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingFriday(ctxt);
    setState(fsm, &WeekMap_Friday);

}

const struct WeekState WeekMap_Thrsday = {
    WeekMap_Thrsday_NextDay,
    WeekMap_Thrsday_Default,
    4
};
static void WeekMap_Friday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingSaturday(ctxt);
    setState(fsm, &WeekMap_Saturday);

}

const struct WeekState WeekMap_Friday = {
    WeekMap_Friday_NextDay,
    WeekMap_Friday_Default,
    5
};
static void WeekMap_Saturday_NextDay(struct weekContext *const fsm)
{
    struct Week *ctxt = getOwner(fsm);

    clearState(fsm);
    Week_DoingSunday(ctxt);
    setState(fsm, &WeekMap_Sunday);

}

const struct WeekState WeekMap_Saturday = {
    WeekMap_Saturday_NextDay,
    WeekMap_Saturday_Default,
    6
};

#ifdef NO_WEEK_SM_MACRO
void weekContext_Init(struct weekContext *const fsm, struct Week *const owner)
{
    FSM_INIT(fsm, &WeekMap_Sunday);
    fsm->_owner = owner;
}

void weekContext_NextDay(struct weekContext *const fsm)
{
    const struct WeekState* state = getState(fsm);

    assert(state != NULL);
    setTransition(fsm, "NextDay");
    state->NextDay(fsm);
    setTransition(fsm, NULL);
}
#endif

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
