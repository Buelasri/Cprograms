#include<stdio.h>
int main(){
int a[]={5,6,7,8,3,1};
int n = sizeof(a)/sizeof(a[0]);
int first =a[0],second =-1;
for(int i=1;i<n;i++)    
{
    if(a[i]>first){
        second =first;
        first=a[i];
    }else if (a[i]>second && a[i]!=first){
        second=a[i];
    }
}
printf("second largest=%d",second);
return 0;
}                                                                                                                            