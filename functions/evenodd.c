#include<stdio.h>                                                                               
void checkevenodd(int num){
    if(num%2==0)
    printf("%d is even\n",num);
    else
    printf("%d is odd\n",num);
}
int main(){
    int n;
    printf("enter your choice:");
    scanf("%d",&n);
checkevenodd(n);
return 0;
}