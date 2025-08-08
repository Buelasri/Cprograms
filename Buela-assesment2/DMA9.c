#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i;
    char**names,temp[100];
    printf("enter number of names:\n");
    scanf("%d",&n);
    getchar();
    names=malloc(n*sizeof(char*));
    for(i=0;i<n;i++){
        fgets(temp,sizeof(temp),stdin);
        temp[strcspn(temp,"\n")]=0;
        names[i]=malloc(strlen(temp)+1);
        strcpy(names[i],temp);
    }
    printf("names:\n");
    for(i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
        free(names[i]);
        return 0;
}