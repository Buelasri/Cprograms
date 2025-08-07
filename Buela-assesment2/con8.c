#include<stdio.h>
int main(){
    int choice;
    float n1,n2,result;
    printf("\n------menu driven calculator----\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("enter two numbers:");
    scanf("%f %f",&n1,&n2);
    if(choice==1){
        result=n1+n2;
        printf("result=%.2f\n",result);
    }else if(choice==2){
        result=n1-n2;
        printf("result=%.2f\n",result);
}else if(choice==3){
        result=n1*n2;
        printf("result=%.2f\n",result);
}else if(choice==4){
        result=n1/n2;
        printf("result=%.2f\n",result);
}else{
    printf("invalid choice\n");
}
return 0;
}