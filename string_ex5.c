#include<stdio.h>
void removenewline(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
        i++;
    }
} 
int length (char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
int compare(char s1[],char s2[]){
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            return 0;
        }
        i++;
    }
    return s1[i]==s2[i];
}
void rotate(char s1[],int n){
    char f=s1[0];
    for(int i=0;i<n-1;i++){
        s1[i]=s1[i+1];
    }
    s1[n-1]=f;
}
int main(){
    char s1[100];
    char s2[100];
    int n;
    printf("enter the string 1 : ");
    fgets(s1,sizeof(s1),stdin);
    removenewline(s1);
    printf("enter the string 2 : ");
    fgets(s2,sizeof(s2),stdin);
    removenewline(s2);
    n=length(s1);
    if(n!=length(s2)){
        printf("false");
        return 0;
    }
    for(int i=0;i<n;i++){
        if(compare(s1,s2)){
            printf("true");
            return 0;
        }
        rotate(s1,n);
    }
    printf("false");
    return 0;
}