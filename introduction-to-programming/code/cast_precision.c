#include <stdio.h>
#include <stdlib.h>
/*

向程序中尝试输入：
3.141592653
3.99999
3.9999999
3.999999999999999999

感受结果。

1.当float型强制转化成int型时截取整数舍去小数部分，此时运算结果不遵循四舍五入原则。

2.当其他类型强制转化为float类型时默认保留6位小数，此时运算结果遵循四舍五入原则。

3.当9的个数超过一定数目,程序会丢失精度。
 */

int main(int argc, char** argv) {
        //double c = -1;
        double c;
        c = -1;
        do{
            //scanf("%lf",&c);
            scanf("%lf",&c);
            printf("original: %lf\n",c);
            printf("cast to float: %f\n",(float)c);
            printf("cast to int: %d\n",(int)c);
            if(c<=0.1 && c>=-0.1){
                break;
            }
        }while(1);
}
