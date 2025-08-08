#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int characters=0,words=0,lines=0;
    fp=fopen("example1.txt","r");
    if(fp=NULL){
        printf("file not found\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        characters++;
        if(ch==' '||ch=='\t'||ch=='\n')
        words++;
        if(ch=='\n')
        lines++;
    }
    fclose(fp);
    printf("characters:%d\n",characters);
    printf("words:%d\n",words+1);
    printf("lines:%d\n",lines+1);
    return 0;
}