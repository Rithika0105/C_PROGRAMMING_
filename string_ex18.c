#include<stdio.h>
#include<string.h>

int main(){
    char s1[1000];
    char s2[1000];
    char ans[1000];
    printf("enter the binary number 1 : ");
    scanf("%999s",s1);
     printf("enter the binary number 1 : ");
    scanf("%999s",s2);
    int i=strlen(s1)-1,j=strlen(s2)-1,k=0;
    int carry=0,sum=0;
    while(i>=0||j>=0||carry){
        sum=carry;
        if(i>=0){
            if(s1[i]!='0'&&s1[i]!='1'){
                printf("invalid binary number ");
                return 0 ;
            }
            sum+=s1[i]-'0';
        }
        if(j>=0){
              if(s2[j]!='0'&&s2[j]!='1'){
                printf("invalid binary number ");
                return 0;
            }
            sum+=s2[j]-'0';
        }
        ans[k++]=(sum%2)+'0';
        i--;
        j--;
       carry=sum/2; 
       
    }
    ans[k]='\0';
    int l,r;
    for(l=0,r=strlen(ans)-1;l<r;l++,r--){
        char tem=ans[l];
        ans[l]=ans[r];
        ans[r]=tem;
        
    }
    printf("the sum is : %s",ans);
    return 0;
    
}