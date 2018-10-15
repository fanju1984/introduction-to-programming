//
//  number_guess.cpp
//  session4
//
//  Created by Ju Fan on 15/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include<stdio.h>

int main () {
    int num = 31;
    int count = 1;
    int guess = 0;
    while (1) {
        printf ("# of attempt: %d \n", count);
        printf ("Please guess an odd number in [1,99]\n") ;
        scanf ("%d", &guess) ;
        if (guess % 2 == 0) {
            printf ("Please guess an ODD number\n");
            continue;
        }
        if (guess > num) {
            printf ("It is too big\n");
        } else if (guess < num) {
            printf ("It is too small\n");
        } else {
            printf ("Bingo! The number is %d", num);
            break;
        }
        count ++;
    }
    return 0;
}
