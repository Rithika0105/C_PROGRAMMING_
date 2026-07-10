#include<stdio.h>
void reverse(int *start,int*end){
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    int n,k;
    printf("enter the no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("K : ");
    scanf("%d",&k);
    for(int i=0;i<n;i+=k){
        int *start=&arr[i];
        int *end;
        if(i+k-1<n){
            end=&arr[i+k-1];
        }
        else{
            end=&arr[n-1];
        }
        reverse(start,end);
    }
    printf("the reversed array in groups is : ");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1){
            printf(", ");
        }
    }
    printf("]");
    return 0;
}