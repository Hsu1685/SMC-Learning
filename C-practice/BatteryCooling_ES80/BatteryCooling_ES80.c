/**
 * @file BatteryCooling_ES80.c
 * @author chihmin.hsu (chihmin.hsu.a5u@tw.denso.com)
 * @brief
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023 DENSO Corp.
 */

/* 要include BatteryCooling_ES80.h */
#include "BatteryCooling_ES80.h"

/* 實現BatteryCooling_ES80_Init */
void BatteryCooling_ES80_Init(struct BatteryCooling_ES80* this) {
    BatteryCooling_ES80Context_Init(&this->_fsm, this);
    printf("Initial mode: Idle. (Stop)\n");
}

/* 實現Transition函數: Switch_2DrivingMode */
void Switch_2DrivingMode(struct BatteryCooling_ES80* this) {
    BatteryCooling_ES80Context_Switch_2DrivingMode(&this->_fsm);
}

/* 實現Transition函數: Switch_2ChargingMode */
void Switch_2ChargingMode(struct BatteryCooling_ES80* this) {
    BatteryCooling_ES80Context_Switch_2ChargingMode(&this->_fsm);
}

/* 實現Transition函數: Back_2Idle */
void Back_2Idle(struct BatteryCooling_ES80* this) {
    BatteryCooling_ES80Context_Back_2Idle(&this->_fsm);
}

/* 實現Transition函數: Run */
void Run(struct BatteryCooling_ES80* this) {
    BatteryCooling_ES80Context_Run(&this->_fsm);
}

/* 實現Transition函數: Stop */
void Stop(struct BatteryCooling_ES80* this) {
    BatteryCooling_ES80Context_Stop(&this->_fsm);
}

/* 實現Transition函數: Cooling(包含Stop及Run) */
void Cooling(struct BatteryCooling_ES80* this, enum CoolingState state) {
    switch (state) {
        case RUN:
            BatteryCooling_ES80Context_Run(&this->_fsm);
            break;
        case STOP:
            BatteryCooling_ES80Context_Stop(&this->_fsm);
            break;
        default:
            /* default code */
            break;
    }
}

/* 實現Action函數: BatteryCooling_ES80_ModeOperation */
void BatteryCooling_ES80_ModeOperation(struct BatteryCooling_ES80* this, enum ModeState mode) {
    printf("Mode selection: ");

    switch (mode) {
        case IDLE:
            printf("Battery cooling idle. (Stop)\n");
            break;
        case DRIVING:
            printf("Driving. (Stop)\n");
            break;
        case CHARGING:
            printf("Charging. (Stop)\n");
            break;
        default:
            break;
    }
}

/* 實現Action函數: BatteryCooling_ES80_CoolingOperation */
void BatteryCooling_ES80_CoolingOperation(struct BatteryCooling_ES80* this, enum ModeState mode) {
    printf("Cooling operation: ");

    switch (mode) {
        case DRIVING:
            printf("Driving. (Run)\n");
            break;
        case CHARGING:
            printf("Charging. (Run)\n");
            break;
        default:
            break;
    }
}