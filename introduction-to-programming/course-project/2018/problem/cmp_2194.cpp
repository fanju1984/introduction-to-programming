#include <iostream>  
#include<string.h>  
#include<stdlib.h>  
#include<stdio.h>  
using namespace std;  
int judge(int n);  
struct _string{  
    char name[20];  
    char type[10];  
    char num[20];  
};  
struct _string str[20];  
int main(){  
    int n=0,m=0;  
    cin>>n;  
      
    for(int i=0;i<n;i++){  
        char tmp[20];  
        cin>>tmp;  
        char *pch;  
        pch=strtok(tmp,":");  
        strcpy(str[i].name,pch);  
        pch=strtok(NULL,":");  
        strcpy(str[i].type,pch);  
        pch=strtok(NULL,":");  
        strcpy(str[i].num,pch);  
    }  
      
    cin>>m;  
      
    for(int k=0;k<m;k++){  
        cout<<judge(n)<<endl;  
    }  
}  
int judge(int n){  
    char in_name[20],sym[2],in_num[10];  
    scanf("%s %s %s",in_name,sym,in_num);  
    int check=0;  
    for(int i=0;i<n;i++){  
        if(stricmp(in_name,str[i].name)==0){  
            check=1;  
            if(stricmp(str[i].type,"INT")==0){  
                if((sym[0]=='>'&&atoi(str[i].num)>atoi(in_num))||  
                (sym[0]=='<'&&atoi(str[i].num)<atoi(in_num))||  
                (sym[0]=='='&&atoi(str[i].num)==atoi(in_num)))  return 1;  
                else return 0;  
            }else if(stricmp(str[i].type,"DOUBLE")==0){  
                if(sym[0]=='>'&&atof(str[i].num)>atof(in_num)||  
                sym[0]=='<'&&atof(str[i].num)<atof(in_num)||  
                sym[0]=='='&&atof(str[i].num)==atof(in_num))    return 1;  
                else return 0;  
            }else if(stricmp(str[i].type,"STRING")==0){  
                if(sym[0]=='='&&stricmp(str[i].num,in_num)==0||  
                sym[0]=='<'&&stricmp(str[i].num,in_num)<0||  
                sym[0]=='>'&&stricmp(str[i].num,in_num)>0)    return 1;  
                else return 0;  
        }  
    }  
}  
    if(check==0)    return -1;        
} 