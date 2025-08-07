
#include<stdio.h>
#include<string.h>
int main(){
char str1[20],str2[20];
printf("enter first string:");
scanf("%s",str1);
printf("enter second string:");
scanf("%s",str2);
if(strcmp(str1,str2)==0)
printf("strings are equal.\n");
else
printf("strings are not equal.\n");
return 0;
}