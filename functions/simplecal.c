#include<stdio.h>
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
float divide(int a,int b){
    if (b!=0)return (float)a/b;
    else{
        printf("cannot divide by zero\n");
        return 0;
    }
}
int main(){
    int x,y,choice;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("1.add 2.subtract 3.multiply 4.divide\n");
    printf("enter your choice");
      scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("result=%d\n",add(x,y));
        break;
        case 2:
        printf("result=%d\n",sub(x,y));
        break;
        case 3:
        printf("result=%d\n",mul(x,y));
        break;
        case 4:
        printf("result=%.2f\n",divide(x,y));
        break;
        default:printf("invalid choice\n");
}
return 0;
}