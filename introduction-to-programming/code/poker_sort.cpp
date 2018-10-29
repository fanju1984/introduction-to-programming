//
//  poker_sort.cpp
//  session6
//
//  Created by Ju Fan on 29/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;

#define NUM 10

int compareTo (char p1[], char p2[]);
void swap (char p1[], char p2[]);

int main () {
    char pokers[NUM][2];
    printf ("Please enter");
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> pokers[i][0] >> pokers[i][1];
    }
    
    printf ("Before sort: ");
    for (int i = 0; i < n; i ++) {
        printf ("%c%c", pokers[i][0], pokers[i][1]);
    }
    printf ("\n");
    
    for (int i = 0; i < n-1; i ++) {
        for (int j = 0; j < n-1-i; j ++) {
            if (compareTo(pokers[j], pokers[j+1])>0) {
                swap (pokers[j], pokers[j+1]);
            }
        }
    }
    
    printf ("After sort: ");
    for (int i = 0; i < n; i ++) {
        printf ("%c%c", pokers[i][0], pokers[i][1]);
    }
    printf ("\n");
    return 0;
}

int compareTo (char p1[], char p2[]) {
    if (p1[0] == p2[0]) {
        if (p1[1]<p2[1]) return -1;
        else if (p1[1]>p2[1]) return 1;
        else return 0;
    }
    char strd[4] = {'B','H','C','D'};
    for (int i = 0; i < 4; i ++) {
        if (strd[i] == p1[0]) return 1;
        if (strd[i] == p2[0]) return -1;
    }
    return 0;
}


void swap (char p1[], char p2[]) {
    for (int i = 0; i < 2; i ++) {
        int tmp = p1[i];
        p1[i] = p2[i];
        p2[i] = tmp;
    }
}




