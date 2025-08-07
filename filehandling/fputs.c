#include<stdio.h>
int main(){
    FILE*fp=fopen("output.txt","r");
    if (fp!=NULL){
        fputs("this is a line in the file.\n",fp);
    }else{
        printf("error opening file\n");
    }
}