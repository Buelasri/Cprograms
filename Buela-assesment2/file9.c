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
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    printf("student data written to binary file.\n");
    return 0;
    
}