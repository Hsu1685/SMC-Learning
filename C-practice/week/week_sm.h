/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : week.sm
 */

#ifndef _WEEK_SM_H
#define _WEEK_SM_H

#include <assert.h>
#include <statemap.h>


struct Week;
struct weekContext;

struct WeekState {
    void(*NextDay)(struct weekContext *const fsm);
    void(*Default)(struct weekContext *const fsm);
    STATE_MEMBERS
};

extern const struct WeekState WeekMap_Sunday;
extern const struct WeekState WeekMap_Monday;
extern const struct WeekState WeekMap_Tuesday;
extern const struct WeekState WeekMap_Wednesday;
extern const struct WeekState WeekMap_Thrsday;
extern const struct WeekState WeekMap_Friday;
extern const struct WeekState WeekMap_Saturday;

struct weekContext {
    struct Week *_owner;
    FSM_MEMBERS(Week)
};

#ifdef NO_WEEK_SM_MACRO
extern void weekContext_Init(struct weekContext *const fsm, struct Week *const owner);
extern void weekContext_NextDay(struct weekContext *const fsm);
#else
#define weekContext_Init(fsm, owner) \
    FSM_INIT((fsm), &WeekMap_Sunday); \
    (fsm)->_owner = (owner)

#define weekContext_NextDay(fsm) \
    assert(getState(fsm) != NULL); \
    setTransition((fsm), "NextDay"); \
    getState(fsm)->NextDay((fsm)); \
    setTransition((fsm), NULL)
#endif

#endif

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
