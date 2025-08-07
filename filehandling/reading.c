#include<stdio.h>
int main(){
    FILE*fp;
    char ch;
    fp=fopen("example3.txt","r");
    if(fp==NULL){
        printf("file cant be opened.\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}