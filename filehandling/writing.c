#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("example3.txt","w");
    if(fp==NULL){
        printf("file cant be opened.\n");
        return 1;
    }
    fprintf(fp,"hello,file handling in c third file!\n");
    
    fclose(fp);
    return 0;
}