#include <iostream>    
#include<stdio.h>    
#include<math.h>    
#include<string.h>    
void replaceResult(char* conditionStr);    
void replaceStr(char *str, char *substr, char *replace_str);    
int SubstrOccurNum(char *str, char *substr);    
    
using namespace std;    
int main() {    
    int n = 0;    
    cin >> n;    
    char a[80];    
    for(int i = 0; i < n; i++) {    
        cin >> a;    
         while(1) {    
            replaceResult(a);    
            int len_str = strlen(a);    
            if (len_str == 1) {    
                break;    
            }    
                
        }    
        cout << a << endl;    
    }    
}    
void replaceStr(char *str, char *substr, char *replace_str) {    
    char *ptr = strstr(str,substr);    
    if(ptr != NULL) {    
            
        int lensub = strlen(substr);    
        int lenreplace = strlen(replace_str);    
        char newstr[100] = "";    
        strncpy(newstr,str,ptr-str);    
        strcat(newstr,replace_str);    
        strcat(newstr,ptr+lensub);    
        strcpy(str,newstr);    
    }    
}    
    
int SubstrOccurNum(char *str, char *substr) {    
    char *p, *q;    
    q = substr;    
    int sublen = strlen(substr);    
    int occ = 0;    
    for (p=str; *(p+sublen-1) != '\0'; p++) {    
        int matched = 1;    
        if (strncmp (p,substr,sublen)!=0) matched = 0;    
        if (matched == 1) occ++;    
    }    
    return occ;    
}    
    
void replaceResult(char* conditionStr) {    
    char* arrays[] = {"!1","!0","!(1)","!(0)","1&1","1&0", "0&1","0&0","1|1","1|0","0|1","0|0","(1)","(0)"};    
    for (int i=0; i<14; i++) {    
        char *logic = arrays[i];    
        if (SubstrOccurNum(conditionStr,logic) != 0) {    
            if ((logic == "!(1)") ||  (logic == "!1")) {    
                replaceStr(conditionStr,logic,"0");    
                break;    
            }    
                
            if ((logic == "!(0)") || (logic == "!0")) {    
                replaceStr(conditionStr,logic,"1");    
                break;    
            }    
                
            if (logic == "1&1") {    
                replaceStr(conditionStr,logic,"1");    
                break;    
            } else if(SubstrOccurNum(logic,"&") != 0) {    
                replaceStr(conditionStr,logic,"0");    
                break;    
            }    
                
            if (logic == "0|0") {    
                replaceStr(conditionStr,logic,"0");    
                break;    
            } else if(SubstrOccurNum(logic,"|") != 0) {    
                replaceStr(conditionStr,logic,"1");    
                break;    
            }    
                
            if (logic == "(1)" ) {    
                replaceStr(conditionStr,logic,"1");    
                break;    
            }    
                
            if (logic == "(0)") {    
                replaceStr(conditionStr,logic,"0");    
                break;    
            }    
        }    
    }    
        
}   