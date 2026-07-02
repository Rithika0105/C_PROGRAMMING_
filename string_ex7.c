#include<stdio.h>
void nonrepeating(char* s){
    int freq[26]={0};
    int i=0;
    while(s[i]!='\0'){
        freq[s[i]-'a']++;
        i++;
    }
    printf("the frequency of each character is ,\n");
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            printf("%c->%d\n",i+'a',freq[i]);
        }
    }
   
}
int main(){
    char s[100];
    printf("enter the string : ");
    scanf("%[^\n]s",s);
    nonrepeating(s);
    return 0;
}