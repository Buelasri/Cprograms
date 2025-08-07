#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("example1.txt","w");
    if(fp==NULL){
        printf("file cant be opened.\n");
        return 1;
    }
    fprintf(fp,"this is my assessment!\n");
    
    fclose(fp);
    return 0;
}