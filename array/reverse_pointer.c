#include <stdio.h>

int main()
{
    int n;
    printf("enter the no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *start=arr;
    int *end=arr+n-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("the reversed array : ");
    for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
     return 0;
        
    }
    
    
    return 0;
}
