/**
 * @file main.c
 * @author chihmin.hsu (chihmin.hsu.a5u@tw.denso.com)
 * @brief
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023 DENSO Corp.
 */

#include <stdio.h>
#include "BatteryCooling_ES80.h"

struct BatteryCooling_ES80 bc;

int main() {
	unsigned char a = 255;

    BatteryCooling_ES80_Init(&bc);

    while (a) {
        Switch_2DrivingMode(&bc);  /* 切換至Driving Mode */
        Switch_2ChargingMode(&bc); /* 切換至Charging Mode */
        Back_2Idle(&bc);           /* 切換至Idle */
        Switch_2ChargingMode(&bc); /* 切換至Charging Mode */
        // Run(&bc);                  /* 開始冷卻 (Charging) */
        Cooling(&bc, RUN);  /* 開始冷卻 (Charging) */
        Cooling(&bc, RUN);  /* 開始冷卻 (Charging) */
        Cooling(&bc, STOP); /* 停止冷卻 (Charging) */
        Back_2Idle(&bc);    /* 切換至Idle */
        a++;
    }
    return 0;
}
