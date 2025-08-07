#include<stdio.h>
struct employee{
    int id;
    char name[30];
    float salary;
};
int main(){
    struct employee e[3]={
        {1,"bindu",50000},
        {2,"buela",60000},
        {3,"sree",30000},
    };
    for(int i=0;i<3;i++){
        printf("id:%d|name:%s|salary:%.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}