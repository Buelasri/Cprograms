#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int key,i;
        printf("enter your choice:");
        scanf("%d",&key);
     for(int i=0;i<5;i++){
        if(arr[i]==key){
        printf("element found at position %d\n",i+1);
        }
        }
        return 0;
     }
       
    

