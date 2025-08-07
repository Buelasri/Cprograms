#include<stdio.h>
struct coordinate{
int x,y;
};
int main(){
    struct coordinate first__point;
    struct coordinate*cp;
    cp=&first__point;
    (*cp).x=5;
    (*cp).y=10;
    printf("first coordinate(x,y)=(%d,%d)",(*cp).x,(*cp).y);
    return 0;
}
