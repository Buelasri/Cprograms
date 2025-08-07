#include<stdio.h>
#include<string.h>
struct user {
    char name[40];
    char role[10];
    int age;
};
int main(){
    struct user user_1,user_2;
    strcpy(user_1.name,"buela");
    strcpy(user_1.role,"admin");
    user_1.age=21;
    printf("detials of user 1:\n");
    printf("\tname:%s\n",user_1.name);
    printf("\tage:%d\n",user_1.age);
    printf("|trole:%s\n",user_1.role);
return 0;
}