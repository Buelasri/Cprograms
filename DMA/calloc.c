#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)calloc(3,sizeof(int));
    if(ptr==NULL){
        printf("memory not allocated\n");
        return 1;
    }
    for(int i=0;i<3;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}