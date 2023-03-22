/**
 * @file BatteryCooling_ES80.h
 * @author chihmin.hsu (chihmin.hsu.a5u@tw.denso.com)
 * @brief
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023 DENSO Corp.
 */

#ifndef BATTERYCOOLING_ES80_H_
#define BATTERYCOOLING_ES80_H_

/* 這邊設定flag不使用巨集模式 */
#define NO_BATTERYCOOLING_ES80_SM_MACRO

/* 要include BatteryCooling_ES80_sm.h */
#include "BatteryCooling_ES80_sm.h"

enum ModeState {
    IDLE = 1,
    DRIVING,
    CHARGING
};

enum CoolingState {
    RUN = 1,
    STOP
};

struct BatteryCooling_ES80 {
    struct BatteryCooling_ES80Context _fsm;
};

extern void BatteryCooling_ES80_Init(struct BatteryCooling_ES80* this);

extern void Switch_2DrivingMode(struct BatteryCooling_ES80* this);
extern void Switch_2ChargingMode(struct BatteryCooling_ES80* this);
extern void Back_2Idle(struct BatteryCooling_ES80* this);
extern void Run(struct BatteryCooling_ES80* this);
extern void Stop(struct BatteryCooling_ES80* this);
extern void Cooling(struct BatteryCooling_ES80* this, enum CoolingState state);

extern void BatteryCooling_ES80_ModeOperation(struct BatteryCooling_ES80* this, enum ModeState mode);
extern void BatteryCooling_ES80_CoolingOperation(struct BatteryCooling_ES80* this, enum ModeState mode);

#endif