#include<stdio.h>
struct student{
   int rollnumber;
   float marks;
};
int main(){
    struct student s;

printf("enter roll number:");
scanf("%d",&s.rollnumber);
printf("enter marks:");
scanf("%f",&s.marks);
printf("rollnumber:%d\n",s.rollnumber);
printf("marks:%.2f\n",s.marks);
return 0;
}

