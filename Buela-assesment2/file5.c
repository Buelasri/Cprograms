#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("example.txt","w");
    if(fp==NULL){
        printf("file can't be openend.\n");
        return 1;
    }
    printf("enter text to append (end with #):\n");
    while((ch=getchar())!='#'){
        fputc(ch,fp);
    }
    fclose(fp);
    printf("content appended successfully,\n");
    return 0;
}