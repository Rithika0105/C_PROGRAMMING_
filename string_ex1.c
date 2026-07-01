#include<stdio.h>
#include<string.h>

int ispalindrom(char s[],int l,int r){
    if(l>=r){
        return 1;
    }
    if(s[l]!=s[r]){
        return 0;
    }
    return ispalindrom(s,l+1,r-1);
}
int main(){
     char s[100];
     int l,r,len;
     printf("enter the string : ");
     scanf("%[^\n]s",s);
     len = strlen(s);
     l=0;
     r=len-1;
     if(ispalindrom(s,l,r)){
        printf("yes, %s is a palindrome",s);
      }
     else{
        printf("No ,%s its not a palindrome",s);
      }
     return 0;
}