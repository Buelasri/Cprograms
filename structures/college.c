#include <stdio.h>
#include <string.h>
enum department
{
    CSE,
    ECE,
    EEE,
    CSC,
};

struct student
{
    int id;
    char name[50];
    char gender;
    float fee;
    long long phonenumber;
    unsigned int age;
    float salary;
    enum department dept;
};
int main()
{
    struct student sdt;
    sdt.id = 101;
    strcpy(sdt.name, "Buela");
    sdt.gender = 'M';
    sdt.fee = 55000.50;
    sdt.phonenumber = 9875478921;
    sdt.age = 30;
    sdt.dept = CSE;

    char *deptnames[] = {"CSE", "ECE", "EEE", "CSC"};

    printf("--------student information------\n");
    printf("ID  :%d\n", sdt.id);
    printf("name  :%s\n", sdt.name);
    printf("gender  :%c\n", sdt.gender);
    printf("age  :%u\n", sdt.age);
    printf("fee  :%.2f\n", sdt.salary);
    printf("phonenumber  :%lld\n", sdt.phonenumber);
    printf("department  :%d\n", deptnames[sdt.dept]);

    printf("--------student s1 information------\n");
    struct student sdt1;
    sdt1.id = 201;
    strcpy(sdt.name, "sri");
    sdt1.gender = 'M';
    sdt1.fee = 65000.50;
    sdt1.phonenumber = 9875478921;
    sdt1.age = 25;
    sdt1.dept = ECE;

    //    char *deptnames[] = {"CSE", "ECE", "EEE", "CSC"};
    printf("--------student information------\n");
    printf("ID  :%d\n", sdt1.id);
    printf("name  :%s\n", sdt1.name);
    printf("gender  :%c\n", sdt1.gender);
    printf("age  :%u\n", sdt1.age);
    printf("fee  :%.2f\n", sdt1.fee);
    printf("phonenumber  :%lld\n", sdt1.phonenumber);
    printf("department  :%d\n", deptnames[sdt1.dept]);
printf("---------student s2 information----------\n");
struct student sdt2;
    sdt2.id = 301;
    strcpy(sdt2.name, "sree");
    sdt2.gender = 'F';
    sdt2.fee = 85000.50;
    sdt2.phonenumber = 7767478921;
    sdt2.age = 26;
    sdt2.dept=CSC;

    //    char *deptnames[] = {"CSE", "ECE", "EEE", "CSC"};
    printf("--------student information------\n");
    printf("ID  :%d\n", sdt2.id);
    printf("name  :%s\n", sdt2.name);
    printf("gender  :%c\n", sdt2.gender);
    printf("age  :%u\n", sdt2.age);
    printf("fee  :%.2f\n", sdt2.fee);
    printf("phonenumber  :%lld\n", sdt2.phonenumber);
    printf("department  :%d\n", deptnames[sdt2.dept]);


    return 0;
}
