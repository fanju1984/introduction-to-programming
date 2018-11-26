/*
 * q5_struct.cpp
 *
 *  Created on: 20 Nov 2018
 *      Author: hanh
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 2010
using namespace std;
struct BigInteger{
    int sign;
    int number[SIZE];
    int offset;
};
void readint(BigInteger& integer){
    char c = 0;
    int container[SIZE];
    int i = 0;
    integer.sign = 1;
    while((c=getchar())!=0){
        if(c=='+'){
            integer.sign = 1;
            continue;
        }
        if(c=='-'){
            integer.sign = -1;
            continue;
        }
        if(c=='\n'||c=='\r'){
                if(i!=0)break;
                continue;
        }
        int k = c-'0';
        if(k<0||k>9)continue;
        container[i++]=c-'0';
    }
    integer.offset = SIZE-i;
    memcpy(&integer.number[SIZE-i],container,i*sizeof(int));
    for(int i = 0;i<integer.offset;i++)integer.number[i]=0;
}
void printint(BigInteger& integer){
    if(integer.sign<0)printf("-");
    int i = integer.offset;
    while(integer.number[i]==0&&i!=SIZE-1){
        i++;
    }
    for(;i<SIZE;i++){
        printf("%d",integer.number[i]);
    }
}
void add(BigInteger& num1, BigInteger& num2, BigInteger& num3, int i,int extraAdd){
    num3.number[i]=num1.number[i]+num2.number[i]+extraAdd;
    int real = num3.number[i]%10;
    extraAdd=(num3.number[i]-real)/10;
    num3.number[i]=real;
    if(i<num3.offset)num3.offset=i;
    if(i>num1.offset||i>num2.offset||extraAdd!=0)
    {
        add(num1,num2,num3,i-1,extraAdd);
    }
}
bool cmp(BigInteger& num1, BigInteger& num2){
    if(num1.offset<num2.offset)return true;
    if(num1.offset>num2.offset)return false;
    return num1.number[num1.offset]>num2.number[num2.offset];
}

void substract(BigInteger& num1, BigInteger& num2, BigInteger& num3, int i,int extraSub,bool& change){
     num3.number[i]=num1.number[i]-num2.number[i]-extraSub;
     extraSub = 0;
     while(num3.number[i]<0){
        num3.number[i]+=10;
        extraSub++;
     }
    if(i<num1.offset){
        change = true;
     }
     if(i<num3.offset)num3.offset=i;

     if(i>num1.offset||i>num2.offset||extraSub!=0)
     {
         substract(num1,num2,num3,i-1,extraSub,change);
     }
}
void substract2(BigInteger& num1, BigInteger& num2, BigInteger& num3,int extraSub){
    bool leftBigger = true;
    bool change = false;
    if(cmp(num1,num2)){
        num3.sign = num1.sign;
        substract(num1,num2,num3,SIZE-1,0,change);
    }else{
        num3.sign = -num2.sign;
        substract(num2,num1,num3,SIZE-1,0,change);
    }
}
int main(){
    BigInteger b1;
    BigInteger b2;
    BigInteger b3;
    b3.offset=SIZE;
    for(int i =0;i<SIZE;i++)b3.number[i]=0;
    char c;
    c = getchar();
    readint(b1);
    readint(b2);
    if((c=='+'&& b1.sign==b2.sign) || (c=='-'&&b1.sign!=b2.sign)){
        b3.sign = b1.sign;
        add(b1,b2,b3,SIZE-1,0);
    }else{
        substract2(b1,b2,b3,0);
    }
    printint(b3);
    return 0;
}
