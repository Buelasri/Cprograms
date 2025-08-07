#include<stdio.h>
int main(){
    float radius,area;
    printf("enter your choice :");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;

    printf("area of circle %f\n",area);
    return 0;
}