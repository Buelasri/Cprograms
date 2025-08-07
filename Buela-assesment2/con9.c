#include<stdio.h>
int main(){
    int i,a=0,b=0;
    for(i=1;i<=100;i++){
        if(i%2==0)
        a++;
        else
        b++;
    }
    printf("even number:%d\n",a);
    printf("odd number:%d\n",b);
    return 0;
}