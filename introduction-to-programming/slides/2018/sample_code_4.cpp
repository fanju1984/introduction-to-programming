//
//  main.cpp
//  session4
//
//  Created by Ju Fan on 8/10/18.
//  Copyright © 2018 Ju Fan. All rights reserved.
//

#include <iostream>
using namespace std;

int main (int argc, const char * argv[]) {
    /**
     ** 示例程序：谁做了好事
     **/
/*    cout << "示例程序：谁做了好事" << endl;
    int k=0,sum=0,g=0; //声明整数变量，且均初始化为0
    char thisman=' ';
    for(k=0; k<4; k++) { //k是计数器，表示第k+1个人
        thisman = 'A'+k;
        cout << "Testing " << thisman << endl;
        sum= (thisman!='A')
            + (thisman=='C')
            + (thisman=='D')
            + (thisman!='D');
        cout << "\tsum = " << sum << endl;
        
        if (sum==3) { // 如果4句话有3句话为真，则输出该人
            cout << "做好事者: " << thisman << endl;
            g=1;            // 有解标志置1
        }
    }
    if (g!=1)
        cout << "此题无解" << endl;
    */
   
    cout << "示例程序：找出作案人" << endl;
    for (int A = 0; A < 2; A++) {
        for (int B = 0; B < 2; B++) {
            for (int C = 0; C < 2; C++) {
                for (int D = 0; D < 2; D++) {
                    for (int E = 0; E < 2; E++) {
                        for (int F = 0; F < 2; F++) {
                            
                            //cout << "Debug: " << A << B << C << D << E << F << endl;
                            
                            int CC1 = A||B;
                            int CC2 = !(A&&D);
                            int CC3 = (A&&E) || (A&&F) || (E&&F);
                            int CC4 = (B&&C) || (!B&&!C);
                            int CC5 = (C&&!D) || (!C&&D);
                            int CC6 = (!D&&!E) || (D);
                            if (CC1+CC2+CC3+
                                CC4+CC5+CC6 == 6) {
                                cout << A << B << C
                                << D << E << F << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

