//  
------------------------------------------------------  
//  
//  test1.cpp  
//  finalproject2018  
//  
//  Created by Ju Fan on 2/1/19.  
//  Copyright © 2019 Ju Fan. All rights reserved.  
//  
  
#include <cstdio>  
#include <cstdlib>  
#include <iostream>  
#include <cstring>  
#define INT 1  
#define DOUBLE 2  
#define STRING 3  
char field[10][255];  
int fieldType[10];  
char* typeFormat[]={"","%lld","%lf","%s"};  
int fieldLen;  
void parse_lower(char* buffer){  
    int i = 0;  
    while(buffer[i]!='\0'){  
        if('A'<=buffer[i] && 'Z'>=buffer[i]){  
            buffer[i]=buffer[i]-'A'+'a';  
        }  
        i++;  
    }  
}  
void compare(char* c, void* compare, char* op,int hit){  
    long long int int_a;  
    double double_b;  
    char char_c[255];  
    int diff = 0;  
    switch(fieldType[hit]){  
        case INT:  
            sscanf(c,"%lld",&int_a);  
            diff = ((int_a==*(long long int*)compare)?0:int_a>(*(long long int*)compare)?-1:1);  
            break;  
        case DOUBLE:  
            sscanf(c,"%lf",&double_b);  
            diff = (*(double*)compare)==double_b?0:(double_b>*(double*)compare)?-1:1;  
            break;  
        case STRING:  
            sscanf(c,"%s",char_c);  
            diff = strcmp((const char*)compare,c);  
            break;  
    }  
    if((op[0]=='>'&&diff>0)||(op[0]=='<'&&diff<0)||(op[0]=='='&&diff==0)){  
        printf("1\n");  
    }else{  
        printf("0\n");  
    }  
      
}  
int main(){  
    int n = 0;  
    scanf("%d",&n);  
    fieldLen = n;  
    char buffer[255];  
    char buffer2[255];  
    void* storage[10];  
    char line[255];  
    for(int i = 0;i<n;i++){  
        scanf("%s",line);  
        strcpy(field[i],strtok(line,":"));  
        strcpy(buffer,strtok(NULL,":"));  
        strcpy(buffer2,strtok(NULL,":"));  
        parse_lower(field[i]);  
        parse_lower(buffer);  
        if(strcmp(buffer,"int")==0){  
            fieldType[i]= INT;  
            storage[i]=new long long int;  
        }else if (strcmp(buffer,"double")==0){  
            fieldType[i]= DOUBLE;  
            storage[i]=new double;  
        }else if (strcmp(buffer,"string")==0){  
            fieldType[i]= STRING;  
            storage[i]=new char[255];  
        }  
        sscanf(buffer2,typeFormat[fieldType[i]],storage[i]);  
    }  
    int number = 0;  
    scanf("%d",&number);  
    char a[255];  
    char b[255];  
    char c[255];  
      
    for(int i = 0;i<number;i++){  
        scanf("%s %s %s",a,b,c);  
        int hit = -1;  
        parse_lower(a);  
        for(int j = 0;j<fieldLen;j++){  
            if(strcmp(field[j],a)==0){  
                hit = j;  
                break;  
            }  
        }  
        if(hit<0){  
            printf("-1\n");  
        }else{  
            compare(c,storage[hit],b,hit);  
        }  
    }  
    for(int i = 0;i<n;i++){  
        switch(fieldType[i]){  
            case INT:  
            case DOUBLE:  
                delete storage[i];  
                break;  
            case STRING:  
                delete[] storage[i];  
                break;  
        }  
    }  
    //system("pause");  
}  