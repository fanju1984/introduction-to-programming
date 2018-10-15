//
//  fib.cpp
//  session4
//
//  Created by Ju Fan on 15/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include <stdio.h>

int main () {
    int n = 0;
    int fib,fib1,fib2;
    fib =fib1=fib2=0;
    printf ("Enter the month num: ");
    scanf ("%d", &n);
    for (int i = 0; i < n; i ++) {
        if (i==0||i==1) fib=fib1=fib2=1;
        else {
            fib = fib1+fib2;
            fib2 = fib1;
            fib1 = fib;
        }
    }
    printf ("%d", fib);
}
