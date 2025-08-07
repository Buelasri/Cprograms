#include<stdio.h>
#include<math.h>
struct coordinate{
    int x;
    int y;
};
float getdistance(struct coordinate *X,struct coordinate *Y){
    int x_diff=X->x-Y->x;
    int y_diff=X->y-Y->y;
    float distance =sqrt((x_diff*x_diff)+(y_diff*y_diff));
    return distance;
}
int main(){
    struct coordinate a,b;
    a.x=5,a.y=6;
    b.x=4,b.y=7;
    float distance=getdistance(&a,&b);
    printf("distance between points(%d,%d)and (%d,%d)=%.3f",a.x,a.y,b.x,b.y,distance);
    return 0;
}