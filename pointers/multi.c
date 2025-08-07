#include<stdio.h>
#include<string.h>
struct employee {
    int empid;
    char empname[20];
};
union data{
   float empsalary;
   char empsurname[20];
};
int main(){
    struct employee e1;
    e1.empid=234;
    strcpy(e1.empname,"vasundara");
    printf("empid:%d\n",e1.empid);
    printf("emname:%s\n",e1.empname);

    union data d;
    d.empsalary=25000;
   printf("empsalary:%.2f\n",d.empsalary);
   strcpy(d.empsurname,"mondru");
   printf("empsurname:%s\n",d.empsurname);
   return 0;
}

   



