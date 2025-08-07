#include<stdio.h>
struct student {
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct student s={101,"john",88.5};
    FILE*fp;
    fp=fopen("student.dat","wb");
    if(fp==NULL){
        printf("file not opened \n");
        return 1;
    }
    while(fread(&s,sizeof(s),1,fp)){
        printf("roll:%d\n",s.roll);
        printf("name:%s\n"s.name);
        printf("marks:%.2f\n",s.marks);
    }
    fclose(fp);
    return 0;
}