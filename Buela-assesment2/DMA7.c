#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c,i,j,**a;
    printf("rows & columns:");
    scanf("%d%d",&r,&c);
    a=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    a[i]=(int*)malloc(c*sizeof(int));
    printf("enter elements:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d",a[i][j]);
            printf("\n");
        }
    for(i=0;i<r;i++)
    free(a[i]);
    free(a);
return 0;
    }