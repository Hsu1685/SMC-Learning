/**
 * @file main.c
 * @author chihmin.hsu (chihmin.hsu.a5u@tw.denso.com)
 * @brief
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023 DENSO Corp.
 */

#include <stdlib.h>

#include "week.h"

struct Week days;

int main() {
	unsigned char a = 1;

    week_Init(&days);

    while (a) {
        week_NextDay(&days);
		a++;
    }
    return 0;
}
