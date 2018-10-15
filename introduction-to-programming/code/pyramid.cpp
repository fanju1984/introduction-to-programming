//
//  pyramid.cpp
//  session4
//
//  Created by Ju Fan on 15/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include <stdio.h>

int main() {
    int line = 0;
    printf ("Enter: ");
    while (scanf("%d", &line) == 1) {
        for (int row = 0; row < line; row ++) {
            // Step 1: print the whitespace chars;
            for (int i = 0; i < line-row-1; i++) {
                printf (" ");
            }
            for (int i = 0; i < row; i ++) printf ("%c", 'A'+i);
            printf ("%c", 'A' + row);
            for (int i = row-1; i >= 0; i --) printf ("%c", 'A'+i);
            printf ("\n");
        }
    }
}
