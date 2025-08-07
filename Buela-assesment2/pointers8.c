#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
ptr=(int*)malloc(sizeof(int));
if(ptr==NULL){
    printf("memory not allocated\n");
    return 1;
}
*ptr=50;
printf("value stored in allocated memory:%d\n",*ptr);
free(ptr);
return 0;
}