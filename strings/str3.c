#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="buela";
    char s2[]="sri";
    strcat(s1,s2);
    
    printf("%s",s1);
    // puts(s2);
    return 0;
}