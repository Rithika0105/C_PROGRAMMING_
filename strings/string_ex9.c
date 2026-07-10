#include<stdio.h>
void lowercase(char* s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
        i++;
    }
}
void skipnewline(char *s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
        i++;
    }
}
int length(char* s1){
    int i=0;
    while(s1[i]!='\0'){
        i++;
    }
    return i;
    
}
void validanagram(char* s1,char* s2){
    int freq[26]={0};
    if(length(s1)!=length(s2)){
        printf("Not Anagram");
        return;
    }
    int i=0;
    while(s1[i]!='\0'){
        freq[s1[i]-'a']++;
        i++;
    }
    i=0;
    while(s2[i]!='\0'){
        freq[s2[i]-'a']--;
        i++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            printf("Not Anagram");
            return;
        }
    }
    printf("Anagram");
}
int main(){
    char s1[100],s2[100];
    printf("enter the string 1 : ");
    fgets(s1,sizeof(s1),stdin);
    skipnewline(s1);
    lowercase(s1);
    printf("enter the string 2 : ");
    fgets(s2,sizeof(s2),stdin);
    skipnewline(s2);
    lowercase(s2);
    validanagram(s1,s2);
    return 0;
}