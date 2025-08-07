#include<stdio.h>
int main(){
    char c;
    for(int i=5;i>=1;i--)
    {
        for(c='A';c<='A'+i;c++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}