#include<stdio.h>
int main(){
    char s[100];
    printf("enter the string: ");
    scanf("%[^\n]s",s);
    int i=0;
    long long num=0;
    int sign =1;
    int digit;
    while(s[i]==' ')
       i++;
   
    if(s[i]=='-'){
        sign=-1;
        i++;
    }
    else if(s[i]=='+'){
        i++;
    }
    
     while(s[i]=='0'){
        i++;
    }
    
    while(s[i]>='0'&&s[i]<='9'){
        digit=s[i]-'0';
        if(num>214748364||(num==214748364 && digit>(sign=1?7:8))){
            if(sign==1){
                printf("2147483647");
                
            }
            else{
                printf("-2147483648");
            }
            return 0;
        }
        num=num*10+digit;
        i++;
    }
    printf("%lld",num*sign);
  return 0;  
}