//
//  main.cpp
//  session3
//  The sample code gives examples for session 3, i.e., data and C
//  Created by Ju Fan on 8/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    /**
     ** part 1: operations on integers
     **/
    int n1, n2;
    cout << "Please input two integers: " ;
    cin >> n1 >> n2;
    float res1 = n1 / n2;
    float res2 = (float) n1 / n2;
    cout << "result of integer division: " << res1 << endl;
    cout << "result of integer division after type conversion: "
    << res2 << endl;
    
    /**
     ** part 2: relational expression
     **/
    cout << "value of \"2>1\": " << (2>1) << endl;
    cout << "value of \"2>1 && 2>3\": " << (2>1 && 2>3) << endl;
    cout << "value of \"2>1 || 2>3\": " << (2>1 || 2>3) << endl;
    cout << "value of \"5>3&&8<4-!0 \": " << (5>3&&8<4-!0) << endl;
    
    /**
     ** part 3: sizeof function
     **/
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;

    /**
     ** part 4: upper/lower case
     **/
    char ch = 0;
    cout << "Please input a char: " ;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') ch = ch-'a'+'A';
    else if (ch >= 'A' && ch <= 'Z') ch = ch-'A'+'a';
    cout << "the char after toggling case: " << ch << endl;
    
    /**
     ** part 5: rounding
     **/
    float num = 1.666666;
    printf ("rounding 1: %.2f\n", num);
    printf ("rounding 2: %.2f\n", (float)((int)(num*100))/100);
    
    return 0;
}
