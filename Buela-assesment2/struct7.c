#include<stdio.h>
struct student {
    int rollno;
    float marks;
};
int main(){
    int i,n;
    float total=0,average;
    printf("enter number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("enter roll number of student %d:",i+1);
        scanf("%d",&s[i].rollno);
        printf("enter your marks %d:",i+1);
        scanf("%f",&s[i].marks);
        total+=s[i].marks;
    }
    average=total/n;
    printf("\n average marks=%.2f\n",average);
    return 0;
}