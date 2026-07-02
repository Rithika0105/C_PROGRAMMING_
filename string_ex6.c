#include<stdio.h>
char nonrepeating(char* s){
    int freq[26]={0};
    int i=0;
    while(s[i]!='\0'){
        freq[s[i]-'a']++;
        i++;
    }
    i=0;
    while(s[i]!='\0'){
        if(freq[s[i]-'a']==1){
            return s[i];
        }
        i++;
    }
    return '$';
}
int main(){
    char s[100];
    printf("enter the string : ");
    scanf("%[^\n]s",s);
    
    printf("%c",nonrepeating(s));
    return 0;
}