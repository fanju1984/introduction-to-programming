//
//  lcm.cpp
//  session4
//
//  Created by Ju Fan on 9/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    int x=0, y=0, z=0, w=0;  // 整型变量
    cout << "请输入两个整数，用空格隔开："; // 提示信息
    cin >> x >> y;
    if ( x < y ) {         // 让 x 表示两者中的大数
        w = x;   x = y;   y = w;
    }
    z = x;        // 将一个大数赋给 z
    while ( z % y != 0 )    // 当z不能被y整除时，让z累加x
        z = z + x;
    cout << "最小公倍数为" << z << endl;
    return 0;
}
