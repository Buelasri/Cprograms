#include<stdio.h>
int main(){
    FILE*fp;
    long pos;
    char ch;
    fp=fopen("file.txt","r");
    if(fp==NULL){
        printf("file not found.\n");
        return 1;
    }
    fseek(fp,4,SEEK_SET);
    pos=ftell(fp);
    printf("current file pointer position:%d\n",pos);
    ch=fgetc(fp);
    printf("character at position %ld: %c\n",pos,ch);
    fclose(fp);
    return 0;
}