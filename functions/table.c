#include<stdio.h>
void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
int main(){
    int num;
    printf("enter your choice:");
    scanf("%d",&num);
    printtable(num);
    return 0;
}