#include<stdio.h>
struct student {
    int id;
    char name[20];
};
int main(){
    struct student a[]={
        { 1,"buela"},
        {2,"sree"}
        
    };
    struct student b[]={
        {3,"bnnu"},
        {4,"bindu"}
    };
    int size1=sizeof(a)/size of(a[0]);
    int size2=sizeof(b)/size of(b{0});
    int total=size1+size2;
    struct student merged[total];
    for(int i=0;i<size1;i++){
        merged[i]=a[i];
    }
    for(int i=0;i<size2;i++){
        merged[size1+i]=b[i];
    }
    printf("merged structure array:\n");
    for(int i=0;i<total;i++){
        printf("ID:%d,name:%s\n",merged[i].id,merged[i].name);
    }
    return 0;
}