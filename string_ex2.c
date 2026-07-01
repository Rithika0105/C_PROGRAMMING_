#include<stdio.h> 
#include<string.h>

char* reverse(char s[]){ 
    int len=strlen(s); 
    int l,r; l=0,r=len-1; 
    
    while(l<r){ 
        
    char t=s[l]; 
    s[l]=s[r]; 
    s[r]=t; 
    l++; 
    r--; 
        
    } 
    return s; 
    
} 
int main()
{ 
    char s[100]; 
    printf("enter the string : "); 
    scanf("%[^\n]s",s); 
    printf("%s" ,reverse(s)); 
    return 0;
}