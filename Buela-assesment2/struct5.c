#include<stdio.h>
struct date
{
    int day,month,year;
};
struct student{
    int rollno;
    char name[50];
    struct date dob;
};
int main(){
    struct student s1={101,"buela",{15,8,2008}};
printf("name:%s\n",s1.name);
printf("dob:%02d-%02d-%d\n",s1.dob.day,s1.dob.month,s1.dob.year);
return 0;
}