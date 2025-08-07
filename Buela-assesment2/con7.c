#include<stdio.h>
int main(){
    int n=10,i,sum;
    for(i=sum=0;i<=n;i++){
        sum+=i;
    }
    printf("sum using for loop=%d\n",sum);
   // printf(------using while loop------);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum using while loop=%d\n",sum);
    //printf(--------using do while loop-----);
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("sum using do while loop=%d\n",sum);
}