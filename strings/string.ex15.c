#include<stdio.h>
char lowercase(char s){
    if(s>='A'&& s<='Z'){
    s=s+32;}
    return s;
}
int ispangram(char *s){
    char visited[26]={0};
    for(int i=0;s[i]!='\0';i++){
         s[i]=lowercase(s[i]);
         if(s[i]>='a'&&s[i]<='z'){
             visited[s[i]-'a']++;
         }
    }
    for(int i=0;i<26;i++){
        if(visited[i]==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[1000];
    printf("enter the string : ");
    scanf("%[^\n]s",s);
    if(ispangram(s)){
        printf("true pangram");
    }
    else{
        printf("false");
    }
}