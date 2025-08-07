#include<stdio.h>
struct student{
char name[30];
int age;
int roll_number;
};
int main(){
    struct student student_1;
    struct student *sp=&student_1;
    printf("enter the details of the student(student_1)\n");
    printf("\tname:");
    scanf("%s",sp->name);
    printf("\tage:");
    scanf("%d",sp->age);
    printf("\trollnumber:");
    scanf("%d",sp->roll_number);
    printf("display the details of the student_1 using structure pointer\n");
    printf("\tname:%s\n",sp->name);
    printf("\tage:%d\n",sp->age);
    printf("\trollnumber:%d",sp->roll_number);
    
    return 0;
}