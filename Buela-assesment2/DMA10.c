#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    if(ptr==NULL){
        printf("memory not allocated\n");
        return 1;
    }
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;

    for(int i=0;i<3;i++){
        printf("%d\n",ptr[i]);
    }
    
    return 0;
}