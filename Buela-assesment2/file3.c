#include<stdio.h>
int main(){
    FILE *f1,*f2;
    char c;
    f1=fopen("file1.txt","r");
    f2=fopen("example2.txt","w");
    while((c=fgetc(f1))!=EOF)
    fputc(c,f2);
    fclose(f1);
    fclose(f2);
    return 0;
}