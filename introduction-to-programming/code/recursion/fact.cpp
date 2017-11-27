//
//  fact.cpp
//  prog_recursion
//
//  Created by Ju Fan on 24/11/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;

int fact (int n) {
    if (n==1) return 1;
    else {
        int fn1 = fact(n-1);
        return n*fn1;
    }
}
int main () {
    cout << fact(3);
}
