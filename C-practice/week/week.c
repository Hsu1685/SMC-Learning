/**
 * @file week.c
 * @author chihmin.hsu (chihmin.hsu.a5u@tw.denso.com)
 * @brief
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023 DENSO Corp.
 */

#include "week.h"

void week_Init(struct Week* this) {
    weekContext_Init(&this->_fsm, this);
    printf("This is Sunday.\n");
}

void week_NextDay(struct Week* this) {
    weekContext_NextDay(&this->_fsm);
}

void Week_DoingMonday(struct Week* this) {
    printf("This is Monday.\n");
}

void Week_DoingTuesday(struct Week* this) {
    printf("This is Tuesday.\n");
}

void Week_DoingWednesday(struct Week* this) {
    printf("This is Wednesday.\n");
}

void Week_DoingThrsday(struct Week* this) {
    printf("This is Thrsday.\n");
}

void Week_DoingFriday(struct Week* this) {
    printf("This is Friday.\n");
}

void Week_DoingSaturday(struct Week* this) {
    printf("This is Saturday.\n");
}

void Week_DoingSunday(struct Week* this) {
    printf("This is Sunday.\n");
}