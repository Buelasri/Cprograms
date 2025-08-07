#include<stdio.h>
int main(){
    int a,b,choice;
 float result;
 printf("===simple calculator===\n");
 printf("enter two numbers:\n");
 printf("first number:");
 scanf("%d",&a);
 printf("second number");
 scanf("%d",&b);
 printf("\nchoose operation:\n");
 printf("1.addition(+)\n");
 printf("2.subtraction(-)\n");
  printf("3.multiplication(*)\n");
   printf("4.division(*)\n");
   printf("enter your choice(1-4):");
   scanf("%d",&choice);
    if(choice==1){
        result=a+b;
        printf("%d+%d=%.2f\n",a,b,result);
    }else if(choice==2){
        result=a-b;
    printf("%d-%d=%.2f\n",a,b,result);
    }else if(choice==3){
        result=a*b;
        printf("%d*%d=%.2f\n",a,b,result);
    }else if(choice==4){
        if(b!=0){
            result=(float)a/b;
            printf("%d/%d=%.2f\n",a,b,result);
        }else{
            printf("error:division by zero!\n");
        }
    }else{
        printf("invalid choice!\n");
    }
    return 0;
}