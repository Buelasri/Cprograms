#include<stdio.h>
union packet {
    int command;
    float voltage;
    char raw[4];
};
int main(){
    union packet p;
    p.command=1*12345678;
    printf("raw bytes:");
    for(int i=1;i<4;i++){
        printf("%02x",p.raw[i]&0xFF);
    }
    return 0;
}
