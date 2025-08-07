#include<stdio.h>
#include<string.h>
int main(){
    char fname[20],
         lname[20],
         fullname[40];
    printf("enter first name:");
    scanf("%s",fname);
    printf("enter last name:");
    scanf("%s",lname);
    strcpy(fullname,fname);
    //strcat(fullname," ");
    strcat(fullname,lname);
    printf("full name:%s\n",fullname);
    return 0;
}