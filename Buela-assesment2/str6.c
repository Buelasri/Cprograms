#include<stdio.h>
int main(){
    char c;
    printf("enter any letter:");
    scanf("%s",&c);
    if(c=='A'||c=='a'||c=='E'|| c=='e'||c=='I'||c=='i'||
    c=='O'|| c=='o'|| c=='U'|| c=='u'){
        printf(" vowel\n");
    }else{
        printf(" consonan\n");
    }
return 0;
}
