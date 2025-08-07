#include<stdio.h>
#include<string.h>
struct user{
    char name[40];
    char role[10];
    int age;
};
int main(){
    struct user user_1,user_2;
    strcpy(user_1.name,"buela");
    strcpy(user_1.role,"admin");
    user_1.age=17;
    strcpy(user_2.name,"sree");
    strcpy(user_2.role,"customer");
    user_1.age=18;
    printf("details of user1:\n");
    printf("\tname:%s\n",user_1.name);
    printf("\tage:%d\n",user_1.age);
    printf("\trole:%s\n",user_1.role);
    printf("details of user2:\n");
    printf("\tname:%s\n",user_2.name);
    printf("\tage:%d\n",user_2.age);
    printf("\trole:%s\n",user_2.role);
    return 0;
}
