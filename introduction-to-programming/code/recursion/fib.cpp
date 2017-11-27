//
//  fib.cpp
//  prog_recursion
//
//  Created by Ju Fan on 25/11/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;

int times = 0;
int fib(int n) {
    times ++;
    if (n==1||n==2) return 1;
    return fib(n-1)+fib(n-2);
}

int main () {
    cout << fib(40) << endl;
    cout << "times: " << times << endl;
}
