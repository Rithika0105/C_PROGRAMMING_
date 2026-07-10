#include<stdio.h>
int isvalid(char * s){
    int i=0;
    int digit=0;
    int dot=0;
    while(1){
        int num=0;
        if(s[i]=='.'||s[i]=='\0'){
            return 0;
        }
        if(s[i]==0 && s[i+1]!='.'&& s[i+1]!='\0'){
            return 0;
        }
        while(s[i]!='.'&&s[i]!='\0'){
            if(s[i]>='0'&&s[i]<='9'){
            num=num*10 + (s[i]-'0');
            digit++;
            }
            i++;
        }
        if(num<0 ||num>=255){
            return 0;
        }
        if(digit==0){
            return 0;
        }
        if(s[i]=='.'){
            dot++;
            i++;
        }
        else{
            break;
        }
    }
    return dot==3;
}
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    if(isvalid(s)){
        printf("true valid");
    }
    else{
        printf("not valid");
    }
    return 0;
}