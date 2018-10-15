//
//  num_sys.cpp
//  session4
//
//  Created by Ju Fan on 15/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include <stdio.h>

int main() {
    int num = 0;
    char ch;
    printf ("Enter a binary number: ");
    while ((ch = getchar()) != '\n') {
        num = num*2+(ch-'0');
    }
    printf ("%d", num);
    
}
