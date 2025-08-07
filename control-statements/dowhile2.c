#include<stdio.h>
int main(){
    char c='Z';
    do{
        printf("%c\n",c);
        c--;
    }while(c>='A');
    return 0;
}