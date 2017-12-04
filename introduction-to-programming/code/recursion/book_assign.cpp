//
//  book_assign.cpp
//  prog_recursion
//
//  Created by Ju Fan on 3/12/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;
#define PNUM 5
#define BNUM 5

int take[5],n;
int like[5][5] = {{0,0,1,1,0},{1,1,0,0,1},
    {0,1,1,0,1}, {0,0,0,1,0}, {0,1,0,0,1} };
int book[5]={0,0,0,0,0};

void Try(int i);

int main () {
    Try (0);
}

void Try(int i) {
    if (i == PNUM) {
        n++;
        cout << "Assignment Plan #" << n << endl;
        for(int k=0; k < PNUM; k++) {
            cout << "Person " << char(k+'A') << " takes Book " << take[k] << endl;
        }
        cout << endl;
    } else {
        for (int j = 0; j < BNUM; j ++) { // for each book
            if (book[j] == 1) continue; // already taken
            if (like[i][j] == 0) continue; // not like
            take[i] = j; // take the book
            book[j] = 1; // update the flag
            Try(i+1);
            take[i] = -1; // return the book
            book[j] = 0;  // update the flag
        }
    }
}



