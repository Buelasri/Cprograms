#include<stdio.h>
char calculategrade(float percentage){
    if(percentage>=90) return 'A';
    else if(percentage>=75) return 'B';
   else if(percentage>=60) return 'C';
   else if(percentage>=50) return 'D';
   else return 'E';
}
   int main(){
    float marks,total;
    printf("enter total marks obtained(out of 500):");
    scanf("%f",&marks);
    total=(marks/500)*100;
    printf("percentage:%.2f%%\n",total);
    printf("grade:%c\n",calculategrade(total));
    return 0;
   }
   
