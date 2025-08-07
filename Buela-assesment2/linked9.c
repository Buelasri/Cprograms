#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node*head=NULL;
struct node*createnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=value;
   newnode->next=NULL;
    return newnode;
}
void reverselist(){
    struct node*prev=NULL,*current=head,*next=NULL;
    while (current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    printf("list reversed.\n");
}
void display(){
    struct node*temp=head;
    if(head==NULL){
        printf("list is empty.\n");
        return;
    }
    printf("linked list:");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int choice,value,pos;
    do{
        
        printf("1.reverse list\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            reverselist();
            break;
            default:
            printf("invalid choie.\n");
        }
    }while(choice!=0);
    return 0;
}
            