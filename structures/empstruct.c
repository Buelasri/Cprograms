#include <stdio.h>
#include <string.h>
enum department
{
    HR,
    IT,
    SALES,
    FINANCE,
};
struct employee
{
    int id;
    char name[50];
    char gender;
    float salary;
    double bonus;
    long long phonenumber;
    short experience;
    unsigned int age;
    enum department dept;
};
int main()
{
    struct employee emp;
    emp.id = 101;
    strcpy(emp.name, "aarav sharma");
    emp.gender = 'M';
    emp.salary = 55000.50;
    emp.bonus = 8000.75f;
    emp.phonenumber = 9875478921;
    emp.experience = 5;
    emp.age = 30;
    emp.dept = IT;

    char*deptnames[] = {"HR", "IT", "SALES", "FINANCE"};

    printf("--------employee information------\n");
    printf("ID  :%d\n", emp.id);
    printf("name  :%s\n", emp.name);
    printf("gender  :%c\n", emp.gender);
    printf("age  :%u\n", emp.age);
    printf("salary  :%.2f\n", emp.salary);
    printf("bonus  :%.2lf\n", emp.bonus);
    printf("phonenumber  :%lld\n", emp.phonenumber);
    printf("experience  :%hd years\n", emp.experience);
    printf("department  :%d\n", deptnames[emp.dept]);

    printf("--------employee e1 information------\n");

struct employee emp;
    emp.id = 201;
    strcpy(emp    .name, "sharma");
    emp.gender = 'M';
    emp.salary = 80000.50;
    emp.bonus = 7000.75f;
    emp.phonenumber = 98754778654;
    emp.experience = 10;
    emp.age = 40;
    emp.dept = SALES;

    char *deptnames[] = {"HR", "IT", "SALES", "FINANCE"};

    printf("--------employee information------\n");
    printf("ID  :%d\n", emp.id);
    printf("name  :%s\n", emp.name);
    printf("gender  :%c\n", emp.gender);
    printf("age  :%u\n", emp.age);
    printf("salary  :%.2f\n", emp.salary);
    printf("bonus  :%.2lf\n", emp.bonus);
    printf("phonenumber  :%lld\n", emp.phonenumber);
    printf("experience  :%hd years\n", emp.experience);
    printf("department  :%d\n", deptnames[emp.dept]);
    printf("--------employee e2 information------\n");
struct employee emp;
    emp.id = 301;
    strcpy(emp.name, "sharm");
    emp.gender = 'M';
    emp.salary = 70000.50;
    emp.bonus = 9000.75f;
    emp.phonenumber = 98754767654;
    emp.experience = 20;
    emp.age = 50;
    emp.dept = FINANCE;

    char *deptnames[] = {"HR", "IT", "SALES", "FINANCE"};

    printf("--------employee information------\n");
    printf("ID  :%d\n", emp.id);
    printf("name  :%s\n", emp.name);
    printf("gender  :%c\n", emp.gender);
    printf("age  :%u\n", emp.age);
    printf("salary  :%.2f\n", emp.salary);
    printf("bonus  :%.2lf\n", emp.bonus);
    printf("phonenumber  :%lld\n", emp.phonenumber);
    printf("experience  :%hd years\n", emp.experience);
    printf("department  :%d\n", deptnames[emp.dept]);
   
    return 0;
}

