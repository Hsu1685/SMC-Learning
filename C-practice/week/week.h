/**
 * @file week.h
 * @author chihmin.hsu (chihmin.hsu.a5u@tw.denso.com)
 * @brief
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023 DENSO Corp.
 */

#ifndef _WEEK_H_
#define _WEEK_H_

#define NO_WEEK_SM_MACRO
#include "week_sm.h"

struct Week {
    struct weekContext _fsm;
};

extern void week_Init(struct Week* this);

extern void week_NextDay(struct Week* this);

extern void Week_DoingMonday(struct Week* this);
extern void Week_DoingTuesday(struct Week* this);
extern void Week_DoingWednesday(struct Week* this);
extern void Week_DoingThrsday(struct Week* this);
extern void Week_DoingFriday(struct Week* this);
extern void Week_DoingSaturday(struct Week* this);
extern void Week_DoingSunday(struct Week* this);

#endif