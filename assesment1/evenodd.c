#include<stdio.h>
int main(){ 
    int a;
    printf("enter your choice");
    scanf("%d",&a);
    if(a%2==0){
        printf("a is even number%d\n",a);
    }else{
        printf("a is a not even number%d\n",a);
    }
    return 0;
}
