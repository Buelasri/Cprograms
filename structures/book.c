#include<stdio.h>
#include<string.h>
struct book{
    int id;
    float price;
    char booktitle[100];
    char bookname[50];
    char bookauthor[50];
};
int main(){
    struct book b1;
    b1.id=101;
    b1.price=500;
  strcpy(b1.booktitle,"c-language");
    strcpy(b1.bookname,"structures");
    strcpy(b1.bookauthor,"richic");
    printf("id:%d\n",b1.id);
    printf("price:%.2f\n",b1.price);
    printf("booktitle:%s\n",b1.booktitle);
    printf("bookname:%s\n",b1.bookname);
    printf("bookauthor:%s\n",b1.bookauthor);
    printf("--------b1 complted-------\n");

     struct book b2;
   b2.id=202;
     b2.price=1000;
    strcpy(b2.booktitle,"friends");
     strcpy(b2.bookname,"hidden snakes");
     strcpy(b2.bookauthor,"sree");
     printf("id:%d\n",b2.id);
     printf("price:%.2f\n",b2.price);
     printf("booktitle:%s\n",b2.booktitle);
     printf("bookname:%s\n",b2.bookname);
     printf("bookauthor:%s\n",b2.bookauthor);
     printf("---------b2 completed-------\n");

     struct book b3;
     b3.id=303;
     b3.price=1500;
    strcpy(b3.booktitle,"friends");
     strcpy(b3.bookname,"hidden snakes");
     strcpy(b3.bookauthor,"sree");
     printf("id:%d\n",b3.id);
     printf("price:%.2f\n",b3.price);
     printf("booktitle:%s\n",b3.booktitle);
     printf("bookname:%s\n",b3.bookname);
     printf("bookauthor:%s\n",b3.bookauthor);
    printf("--------b3 completed------");

    return 0;
}