#include<stdio.h>
int main(){
    int arr[50],pos,i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the location   of the element to delete:");
    scanf("%d",&pos);
    printf("the updated array is:");
    for(i=0;i<n-1;i++)
    printf("%d\n",arr[i]);
    return 0;
}