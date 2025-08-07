#include<stdio.h>
#include<string.h>
struct employee{
  
    int employeeid;
    float empsalary;
    char empname[50];
    char empdepartment[50];
    char empsurname[50];
};
int main(){
    struct employee e1;
    e1.employeeid=500;
   e1.empsalary=45000.0;
    strcpy(e1.empname,"vasundara");
    strcpy(e1.empdepartment,"security");
    strcpy(e1.empsurname,"mondru");
    
    printf("employeeid:%d\n",e1.employeeid);
    printf("empsalary:%.2f\n",e1.empsalary);
    printf("empname:%s\n",e1.empname);
    printf("empdepartment:%s\n",e1.empdepartment);
    printf("empsurname:%s\n",e1.empsurname);
    printf("--------e1 complted-------\n");

       struct employee e2;
     e2.employeeid=1500;
   e2.empsalary=80000.0;
     strcpy(e2.empname,"bannu");
     strcpy(e2.empdepartment,"manager");
     strcpy(e2.empsurname,"mondru");
    
     printf("employeeid:%d\n",e2.employeeid);
     printf("empsalary:%.2f\n",e2.empsalary);
     printf("empname:%s\n",e2.empname);
     printf("empdepartment:%s\n",e2.empdepartment);
     printf("empsurname:%s\n",e2.empsurname);
     printf("--------e2 complted-------\n");

      struct employee e3;
     e3.employeeid=12500;
    e3.empsalary=100000.0;
     strcpy(e3.empname,"bindu");
     strcpy(e3.empdepartment," chief manager");
     strcpy(e3.empsurname,"mondru");
    
     printf("employeeid:%.d\n",e3.employeeid);   
       printf("empsalary:%.2f\n",e3.empsalary);
    printf("empname:%s\n",e3.empname);
     printf("empdepartment:%s\n",e3.empdepartment);
     printf("empsurname:%s\n",e3.empsurname);
     printf("--------e3 complted-------");
    return 0;
}

