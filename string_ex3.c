#include<stdio.h>
#include<string.h>
char *isreverse(char * s,int l,int r){
    if(l>=r){
        return s;
    }
    char temp=s[l];
    s[l]=s[r];
    s[r]=temp;
    
    isreverse(s,l+1,r-1);
}
int main(){
    char s[100];
    int l,r,len;
    printf("enter the string : ");
    scanf("%[^\n]s",s);
    len = strlen(s);
    printf("%s",isreverse(s,0,len-1));
    return 0;
}