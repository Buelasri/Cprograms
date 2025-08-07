#include<stdio.h>
struct student {
    int id;
    float marks;
};
struct student getstudent(){
    struct student s;
    s.id=101;
    s.marks=92.5;
    return s;
}
int main(){
    struct student s1;
    s1=getstudent();
    printf("ID:%d\n",s1.id);
    printf("marks:%.2f\n",s1.marks);
    return 0;
}