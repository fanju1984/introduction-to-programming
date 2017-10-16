/*
 * pro17.c
 *
 *  Created on: 11 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
    int n, x, y;
    scanf ("%d", &n);
    int len = 3 * n - 2;
    for (x = 0; x < len; x ++) {
        for (y = 0; y < len; y ++) {
            if (x == 0 || x == len - 1) {
                if (y >= n - 1 && y <= 2*n - 2) printf ("*");
                else printf (" ");
            } else if (x >= n - 1 && x <= 2*n-2) {
                if (y == 0 || y == len -1) printf ("*");
                else printf (" ");
            } else {
                if (x + y == n - 1) printf ("*");
                else if (len - 1 - x + y == n-1) printf ("*");
                else if (len - 1 - y + x == n-1) printf ("*");
                else if (2*len - 2 - x - y == n-1) printf ("*");
                else printf (" ");
            }
        }
        printf ("\n");
    }
}
