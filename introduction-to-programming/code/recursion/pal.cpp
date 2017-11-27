//
//  pal.cpp
//  prog_recursion
//
//  Created by Ju Fan on 25/11/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;
#include<string.h>

int pal(char str[], int low, int high) {
    if(high<=low) {
        return 1; // base case
    } else {
        if (str[low]!=str[high]) return 0;
        return pal(str,low+1,high-1);
    }
}

int main() {
    char str[100] = "madamimadam";
    int len = (int)strlen(str);
    cout << pal(str,0,len-1) << endl;
}
