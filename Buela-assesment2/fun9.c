#include<stdio.h>
int countdigits(int n){
    int count=0;
    if(n==0)return 1;
    while(n!=0){
    n/=10;
    count++;
}
return count;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("digits =%d",countdigits(num));
    return 0;
}