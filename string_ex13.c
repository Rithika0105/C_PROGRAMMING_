#include<stdio.h>
#include<string.h>
void hexadecimal(int num,char* hex){
    char temp[1000]="";
    int i=0;
    while(num>0){
        int rem=num%16;
        if(rem<10){
            temp[i]=rem+'0';
        }
        else{
            temp[i]=rem-10+'a';
        }
        num/=16;
        i++;
    }
    int j=0;
    while(i>0){
        hex[j++]=temp[--i];
    }
    hex[j]='\0';
}
int main(){
    char s[100];
    char temp[10000]="";
    int i=0;
    printf("enter the string : ");
    scanf("%[^\n]s",s);
    int n=strlen(s);
    while(i<n){
        char ch=s[i];
        int c=0;
        while(i<n && s[i]==ch){
            i++;
            c++;
        }
        char hex[1000];
        hexadecimal(c,hex);
        int len=strlen(temp);
        temp[len]=ch;
        temp[len+1]='\0';
        strcat(temp,hex);
        
    }
    char result[1000]="";
    int len=strlen(temp);
    for(int i=0;i<n;i++){
        result[i]=temp[len-1-i];
    }
    result[len]='\0';
    printf("%s",result);
    return 0;
}
