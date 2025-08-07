#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>=50){
        if(marks>=90){
            printf("grade:A\n");
        }else{
            printf("grade:B\n");
        }
    }else{
        printf("fail\n");
        }
    return 0;
}