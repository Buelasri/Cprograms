#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    float *marks;
    printf("enter number of students:");
    scanf("%d",&n);
    marks=(float*)malloc(n*sizeof(float));
    if(marks==NULL){
        printf("memory allocation failed !");
        return 1;
    }
        printf("enter marks of %d students\n ",n);
        for(i=0;i<n;i++){
            scanf("%f",&marks[i]);
        }
        printf("\nstudent marks:\n");
        for(i=0;i<n;i++){
            printf("student %d: %.2f\n",i+1,marks[i]);
        }

        free(marks);
        return 0;
    }
