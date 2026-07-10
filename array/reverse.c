#include<stdio.h>
void reverse(int *arr,int left,int right){
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
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
        int left=i;
        int right;
        if(i+k-1<n){
            right=i+k-1;
        }
        else{
           right=n-1;
        }
        reverse(arr,left,right);
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