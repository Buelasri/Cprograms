#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(3*sizeof(int));
    if(ptr==NULL){
        printf("memory not allocated\n");
        return 1;
    }
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;

    for(int i=0;i<3;i++){
        printf("%d\n1",ptr[i]);
    }
     free(ptr);
    return 0;
}
    