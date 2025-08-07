#include<stdio.h>
#include<string.h>
struct student{
    int rollnumber;
    float marks;
    char name[20];
};
int main(){
    struct student s1;
    s1.rollnumber=1;
    s1.marks=80;
    strcpy(s1.name,"buela");
    printf("roll number:%d\n",s1.rollnumber);
    printf("marks:%.2f\n",s1.marks);
    printf("name:%s\n",s1.name);
    struct student s2;
    s2.rollnumber=2;
    s2.marks=30;
    strcpy(s2.name,"sree");
    printf("rollnumber:%d\n",s2.rollnumber);
    printf("marks:%.2f\n",s2.marks);
    printf("name:%s\n",s2.name);
    return 0;
}