#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]={0};
    printf("enter your string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    printf("\ncharacter frequencies:\n");
    for(int i=0;i<256;i++){
        if(freq[i]>0 && i!='\n'){
            printf("'%c'=%d\n",i,freq[i]);
        }
    }
    return 0;
}