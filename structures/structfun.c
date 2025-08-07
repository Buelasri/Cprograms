#include<stdio.h>
struct student{
   int rollnumber;
   float marks;
};
void display(struct student s){
    printf("roll number:%d\n",s.rollnumber);
    printf("marks:%.2f\n",s.marks);
}
int main(){    
    struct student s1={101,90.5};
    display(s1);
    return 0;
}
