#include<stdio.h>
int main(){
    int binary,decimal=0,i=0;
    printf("enter a binary number:");
    scanf("%d",&binary);
    while(binary>0){
        int digit =binary%10;
        int power=1;
        for(int j=0;j<i;j++){
            power*=2;
        }
        decimal+=digit*power;
        binary/=10;
        i++;
    }
    printf("decimal value:%d\n",decimal);
    return 0;
}