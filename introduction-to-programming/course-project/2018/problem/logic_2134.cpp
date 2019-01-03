#include <string.h>  
#include <iostream>  
using namespace std;  
  
int compare(char a, char b){  
    if(a==b)return 0;  
    if(a<b)return 1;  
    if(a>b)return -1;  
}  
  
  
int Logic(char word[12]){  
    strcat(word,"~");  
    int intstack[10]={0};  
    char charstack[10]={0};  
    int recordi=0,recordc=0;  
    charstack[0]='~';  
    recordc++;  
    for(int i=0;i<strlen(word);i++){  
        if(word[i]=='0'||word[i]=='1'){  
            intstack[recordi]=word[i]-'0';  
            recordi++;  
        }  
        else{  
            while(compare(charstack[recordc-1],word[i])>0){  
                if(charstack[recordc-1]=='!'){  
                    intstack[recordi-1]=!intstack[recordi-1];  
                }  
                else if(charstack[recordc-1]=='&'){  
                    intstack[recordi-2]=intstack[recordi-2]&intstack[recordi-1];  
                    intstack[recordi-1]=0;  
                    recordi--;  
                }  
                else{  
                    intstack[recordi-2]=intstack[recordi-2]|intstack[recordi-1];  
                    intstack[recordi-1]=0;  
                    recordi--;  
                }  
                charstack[recordc-1]=0;  
                recordc--;  
            }  
            charstack[recordc]=word[i];  
            recordc++;  
        }  
    }  
    return intstack[0];  
}  
  
int main(){  
    int n;  
    cin>>n;  
    char temp[12]={0};  
    cin.getline(temp,12);  
    for(int i=0;i<n;i++){  
        cin.getline(temp,12);  
        cout<<Logic(temp)<<endl;  
    }  
    return 0;  
}  