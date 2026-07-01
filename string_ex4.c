#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    char word[100][100];
    int c=0,i=0,j;
    printf("enter the sentence : ");
    scanf("%[^\n]s",s);
    while(s[i]!='\0'){
        while(s[i]=='.'){
            i++;
        }
        if(s[i]=='\0'){
            break;
        }
        j=0;
        while(s[i]!='.'&& s[i]!='\0'){
            word[c][j++]=s[i++];
        }
        word[c][j]='\0';
        c++;
    }
    for(i=c-1;i>=0;i--){
        printf("%s",word[i]);
        if(i!=0){
            printf(".");
        }
    }
    return 0;
    
}