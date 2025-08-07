#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("example2.txt","w");
    if(fp==NULL){
        printf("file cant be opened.\n");
        return 1;
    }
    int num;
    float f;
    char str[100];
fscanf(FILE*,"%d %f %s",&num,&f,str);
printf("integer:%d\n",num);
printf("float:%.2f\n",f);
printf("character:%s\n",str);
    fclose(fp);
    return 0;
}