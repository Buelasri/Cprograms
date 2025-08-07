#include<stdio.h>
int main(){
    int  a[8]={1,2,2,3,4,4,5,5};
    int n=8,i,j,k;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    for(k=j;k<n-(a[i]==a[j]);k++)
    return 0;
}