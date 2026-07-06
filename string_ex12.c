#include<stdio.h>
int equalstring(char *s){
    int rightclose=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==')'){
            rightclose++;
        }
    }
    int leftopen=0;
    if(rightclose==leftopen){
        return 0;
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            leftopen++;
        }
        else{
            rightclose--;
        }
        if(rightclose==leftopen){
            return i+1;
        }
    }
    return -1;
    
}
int main(){
    char s[100];
    printf("enter the string : ");
    scanf("%[^\n]",s);
    printf("%d",equalstring(s));
    return 0;
}