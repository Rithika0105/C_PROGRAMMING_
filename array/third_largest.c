#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int third=INT_MIN;
    int second=INT_MIN;
    int first=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>=second){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }
    printf("the third largest element  : %d",third);
    return 0;
}