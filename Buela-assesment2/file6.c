#include<stdio.h>
int main([
    FILE*fp;
    int roll;
    char name[50];
    float marks;
    fp=fopen("student.txt","w");
    fprintf(fp,"101 john 55.5\n");
    fclose(fp);
    fp=fopen("student.txt","r");
    fscanf(fp,"%d %s %f",&roll,name,&marks);
    fclose(fp);
    printf("roll:%d\n",roll);
    printf("name:%s\n",name);
    printf("marks:%.2f\n",marks);
    return 0;
])