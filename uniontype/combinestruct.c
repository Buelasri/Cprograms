#include<stdio.h>
struct message{
    int id;
    union{
        int idata;
        float fdata;
        char cdata;
    }payload;
};
int main(){
    struct message msg;
    msg.payload.idata=101;
    msg.payload.fdata=45.67;
    printf("id:%d,data:%.2f\n",msg.payload.idata,msg.payload.fdata);
    return 0;
}
