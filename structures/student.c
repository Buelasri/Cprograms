#include<stdio.h>
struct student{
    int rollnumber;
    float marks;
};
int main(){
    struct student s1;
    s1.rollnumber=101;
    s1.marks=88.5;
    printf("roll number:%d\n",s1.rollnumber);
    printf("marks:%.2f\n",s1.marks);
    struct student s2;
    s2.rollnumber=202;
    s2.marks=37.5;
    printf("rollnumber:%d\n",s2.rollnumber);
    printf("marks:%.2f\n",s2.marks);
    return 0;
}