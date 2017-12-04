//
//  perm.cpp
//  prog_recursion
//
//  Created by Ju Fan on 28/11/17.
//  Copyright © 2017 Ju Fan. All rights reserved.
//

#include <iostream>
using namespace std;

#define MAX_LEN 5

void perm_bad (int ary[MAX_LEN], int n);
void perm_impl1 (int ary[MAX_LEN], int trace[MAX_LEN], int k, int n);
void perm_impl2 (int ary[MAX_LEN], int indices[MAX_LEN], int used[MAX_LEN], int k, int n);
void swap (int ary[MAX_LEN], int i, int j);

int main () {
    int ary[MAX_LEN]={1,2,3,4,5};
    
    //perm_bad(ary, MAX_LEN);
    
    int trace[MAX_LEN];
    perm_impl1(ary, trace, 0, MAX_LEN);
    
    //int indices[MAX_LEN];
    //int used[MAX_LEN] = {0};
    //perm_impl2 (ary, indices, used, 0, MAX_LEN);
}


void perm_bad (int ary[MAX_LEN], int n) {
    if (n == 1) {
        cout << ary[0] << endl;
    }
    else {
        for (int i = 0; i < n; i ++) {
            cout << ary[i] << " ";
            int sub[MAX_LEN];
            for (int j = 0; j < n-1; j ++) {
                if (j < i) sub[j] = ary[j];
                else sub[j] = ary[j+1];
            }
            perm_bad(sub, n-1);
        }
    }
}

void perm_impl1 (int ary[MAX_LEN], int trace[MAX_LEN], int k, int n){
    if (k == n) {
        for (int i = 0; i < n; i ++)
            cout << trace[i] << " ";
        cout << endl;
    } else {
        for (int i = k; i < n; i ++) {
            trace[k] = ary[i];
            swap (ary, k, i);
            perm_impl1(ary, trace, k+1, n);
            swap (ary, k, i);
        }
    }
}

void swap (int ary[MAX_LEN], int i, int j) {
    int tmp = ary[i];
    ary[i]  = ary[j];
    ary[j] = tmp;
}

void perm_impl2 (int ary[MAX_LEN], int indices[MAX_LEN],
                 int used[MAX_LEN], int k, int n) {
    if (k == n) {
        for (int i = 0; i < n; i ++)
            cout << ary[indices[i]] << " ";
        cout << endl;
    } else {
        for (int i = 0; i < n; i ++) {
            if (used[i] == 1) continue;
            used[i] = 1;
            indices[k] = i;
            perm_impl2(ary, indices, used, k+1, n);
            used[i] = 0;
        }
    }
}
