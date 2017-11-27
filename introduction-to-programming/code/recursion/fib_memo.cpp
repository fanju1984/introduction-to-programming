//
//  fib_memo.cpp
//  prog_recursion
//
//  Created by Ju Fan on 25/11/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;

int times = 0;
int fib(int n, int memo[]) {
    if (memo[n]!=-1) return memo[n];
    times ++;
    if (n==1||n==2) memo[n]=1;
    else memo[n]=fib(n-1,memo)+fib(n-2,memo);
    return memo[n];
}

int main () {
    int memo[100];
    for (int i = 0; i < 100; i ++) memo[i]=-1;
    cout << fib(5,memo) << endl;
    cout << "times: " << times << endl;
}
