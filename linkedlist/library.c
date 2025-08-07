#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union category{
    char academic[20];
    char fiction[20];
};
struct book{
    int bookid;
    char title[50];
    float price;
    union category category;
    int type;
    struct book*next;
};
struct book*library=NULL;
struct book*createbook(int id,char title[],float price,int type,char catval[]){
    struct book*newbook=(struct book*)malloc(sizeof(struct book));
    newbook->bookid=id;
    strcpy(newbook->title,title);
    newbook->price=price;
    newbook->type=type;
    if(type==1)
    strcpy(newbook->category.academic,catval);
    else
    strcpy(newbook->category.fiction,catval);
    newbook->next=NULL;
    return newbook;
}
void insertbook(struct book*newbook){
    if(library==NULL){
        library=newbook;
        return;
    }
    struct book*temp=library;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newbook;
}
void displaybooks(){
    struct book*temp=library;
    printf("\n-----library inventory-----\n");
    while(temp!=NULL){
        printf("id:%d|title:%s|price:%.2f|category:",temp->bookid,temp->title,temp->price);
        if(temp->type==1)
        printf("academic-%s\n",temp->category.academic);
        else
        printf("fiction-%s\n",temp->category.fiction);
        temp=temp->next;
    }
}
void deletebook(int id){
    struct book*temp=library,*prev=NULL;
    while(temp!=NULL&&temp->bookid!=id){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("book not found\n");
        return;
    }
    if(prev==NULL)
    library=temp->next;
    else
    prev->next=temp->next;
    free(temp);
    printf("book deleted.\n");
}
int main(){
    int choice,id,type;
    float price;
    char title[50],categoryval[30];
    do{
        printf("\n1.add block\n2.view books\n3.delete book\n4.exit\nenter choice:");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
            printf("enter book id:");
            scanf("%d",&id);
            getchar();
            printf("enter title:");
            fgets(title,50,stdin);
            title[strcspn(title,"\n")]=0;
            printf("enter price:");
            scanf("%f",&price);
            printf("type(1=academic,2=fiction):");
            scanf("%d",&type);
            getchar();
            printf("enter category name:");
            fgets(categoryval,30,stdin);
            categoryval[strcspn(categoryval,"\n")]=0;
            insertbook(createbook(id,title,price,type,categoryval));
            break;
            case 2:
            displaybooks();
            break;
            case 3:
            printf("enter book id to delete:");
            scanf("%d",&id);
            deletebook(id);
            break;
            case 4:
            printf("exiting.\n");
            break;
            default:
            printf("invalid choice.\n");
        }
    }while(choice!=4);
    return 0;
}