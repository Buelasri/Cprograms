#include<stdio.h>
struct employee{
    int id;
    char name[30];
    float salary;
};
int main(){
    struct employee e[1]={
        {1,"bindu",50000},
        {2,"buela",60000},
        {3,"sree",30000},
        {4,"nirosha"800000};
        {5,"bannu"999999};
    };
    return 0;
}
