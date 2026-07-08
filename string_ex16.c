#include<stdio.h>
#include<string.h>

int main(){
    char s[100][90];
    int n;
    printf("enter the row size :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strlen(s[i])!= strlen(s[j])){
                continue;
            }
            
             int count1[26]={0};
             int count2[26]={0};
             for(int k=0;s[i][k]!='\0';k++){
                 count1[s[i][k]-'a']++;
             }
             for(int k=0;s[j][k]!='\0';k++){
                 count2[s[j][k]-'a']++;
             }
             int flag=1;
             for(int k=0;k<26;k++){
                 if(count1[k]!=count2[k]){
                     flag=0;
                     break;
                 }
             }
             if(flag){
                 printf("the anagrams are %s and %s \n",s[i],s[j]);
             }
        }
    }
    return 0;
}