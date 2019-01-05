#include <iostream>  
using namespace std;  
#include<string.h>  
#include<stdlib.h>  
struct data{  
    char name[20];  
    char shape[20];  
    double val;  
    char str[50];   
}reco[10];  
int judge(char s1[],char s2[],char s3[],int n);  
void xiaox(char sent[]);  
int main(){  
    int n,m;  
    char sent[10][50],js[10][50];  
    cin >> n;  
    getchar();  
    for(int  i = 0;i < 10;i ++){  
        reco[i].val = -10000;  
    }  
    for(int i = 0;i < n;i ++){  
        gets(sent[i]);  
        xiaox(sent[i]);  
        char *tok = strtok(sent[i],":");  
        strcpy(reco[i].name,tok);  
        tok = strtok(NULL,":");  
        strcpy(reco[i].shape,tok);  
        if(strcmp(reco[i].shape,"string") == 0){  
            tok = strtok(NULL,":");  
            strcpy(reco[i].str,tok);  
        }else{  
            tok = strtok(NULL,":");  
            reco[i].val = atof(tok);  
        }  
    }  
    cin >> m;  
    getchar();  
    for(int i = 0;i < m;i ++){  
        gets(js[i]);  
        xiaox(js[i]);  
        char *token = strtok(js[i]," ");  
        char s1[20]; strcpy(s1,token);  
        token = strtok(NULL," ");  
        char s2[20]; strcpy(s2,token);  
        token = strtok(NULL," ");  
        char s3[20]; strcpy(s3,token);  
        int a = judge(s1,s2,s3,n);  
        cout << a << endl;  
    }  
}  
void xiaox(char sent[]){  
    int len = strlen(sent);  
    for(int i = 0;i < len;i ++){  
        if(sent[i] >= 'A' && sent[i] <= 'Z'){  
            sent[i] = sent[i] + 'a' - 'A';  
        }  
    }  
}  
int judge(char s1[],char s2[],char s3[],int n){  
    for(int i = 0;i < n;i ++){  
        if(strcmp(reco[i].name,s1) == 0){  
            if(reco[i].val == -10000){//string  
                if(strcmp(s2,"=") == 0){  
                    if(strcmp(reco[i].str,s3) == 0){  
                        return 1;  
                    }else{  
                        return 0;  
                    }  
                }else if(strcmp(s2,">") == 0){  
                    if(strcmp(reco[i].str,s3) > 0){  
                        return 1;  
                    }else{  
                        return 0;  
                    }  
                }else if(strcmp(s2,"<") == 0){  
                    if(strcmp(reco[i].str,s3) < 0){  
                        return 1;  
                    }else{  
                        return 0;  
                    }  
                }  
            }else{  
                if(strcmp(s2,">") == 0){  
                    if(reco[i].val > atof(s3)){  
                        return 1;  
                    }else{  
                        return 0;  
                    }  
                }else if(strcmp(s2,"=") == 0){  
                    if(reco[i].val == atof(s3)){  
                        return 1;  
                    }else{  
                        return 0;  
                    }  
                }else if(strcmp(s2,"<") == 0)  
                {  
                    if(reco[i].val < atof(s3)){  
                        return 1;  
                    }else{  
                        return 0;  
                    }  
                }  
            }  
        }  
    }  
    return -1;  
}  