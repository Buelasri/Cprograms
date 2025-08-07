#include<stdio.h>
int main(){
int arr[100],n,i,j,temp;
printf("enter your elements:");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("ascending:");
for(i=0;i<5;i++){
    printf("%d\n",arr[i]);
}
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(arr[i]<arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
        }
    }
}
printf("descending:");
for(i=0;i<5;i++){
    printf("%d\n",arr[i]);
}
return 0;
}
