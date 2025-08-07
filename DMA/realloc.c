#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(2*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr=(int*)realloc(ptr,4*sizeof(int));
    ptr[2]=3;
    ptr[3]=4;
    for(int i=0;i<4;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
    