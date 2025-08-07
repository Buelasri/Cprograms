#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("student.txt","r+");
    if(fp==NULL){
        printf("file not found.\n");
        return 1;
    }
    fseek(fp,28,SEEK_SET);
    fprintf(fp,"90.5");
    fclose(fp);
    printf(" data modified successfully.\n");
    return 0;
}