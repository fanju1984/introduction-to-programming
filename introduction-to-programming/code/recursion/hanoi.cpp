//
//  hanoi.cpp
//  prog_recursion
//
//  Created by Ju Fan on 25/11/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;

void move (int n, char A, char B, char C) {
    if (n == 1) {
        cout << "move from " << A << " to " << C << endl;
    } else {
        move (n-1, A, C, B);
        cout << "move from " << A << " to " << C << endl;
        move (n-1, B, A, C);
    }
}

int main () {
    int n = 4;
    char A = 'A',B = 'B',C = 'C';
    move (n, A, B, C);
}
