#include<stdio.h>
int main(){
    char c;
    printf("enter your choice");
    scanf("%c",&c);
    if (c=='A'|| c=='a'|| c=='E'||c=='e'|| c=='I'||c=='i'|| c=='O'||c=='o'|| c=='U'||c=='u'){
        printf("it is a vowel\n",c);
    }else{
        printf("it is a consonant\n",c);
    }
        return 0;
    }