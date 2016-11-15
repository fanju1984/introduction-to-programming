/*
 * minmax.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */


#include <stdio.h>
int main(void) {
    int n, m;
    int min;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i ++) {
        int local_max;
        for (int j = 0; j < m; j ++) {
            int value;
            scanf("%d", &value);
            if (j == 0 || value > local_max) local_max = value;
        }
        if (i == 0 || local_max < min) min = local_max;
    }
    printf("%d\n", min);
}

