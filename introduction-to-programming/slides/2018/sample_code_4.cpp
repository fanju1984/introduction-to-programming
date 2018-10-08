//
//  main.cpp
//  session4
//
//  Created by Ju Fan on 8/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    /**
     ** 示例程序：谁做了好事
     **/
    cout << "示例程序：谁做了好事" << endl;
    int k=0,sum=0,g=0; //声明整数变量，且均初始化为0
    char thisman=' ';
    for(k=0; k<4; k++) { //k是计数器，表示第k+1个人
        thisman = 'A'+k;
        
        sum= (thisman!='A')
            + (thisman=='C')
            + (thisman=='D')
            + (thisman!='D');
        
        if (sum==3) { // 如果4句话有3句话为真，则输出该人
            cout << "做好事者: " << thisman << endl;
            g=1;            // 有解标志置1
        }
    }
    if (g!=1)
        cout << "此题无解" << endl;
    
    cout << "示例程序：找出作案人" << endl;
    // 课堂现场填充
    
    return 0;
}

