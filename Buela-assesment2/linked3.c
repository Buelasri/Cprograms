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
void insertatbeginning (int value){
    struct node*newnode=createnode(value);
    newnode->next=head;
        head=newnode;
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
    int choice,value;
    do{
        printf("\n linked list menu:\n");
        printf("1.insert at beginning\n");
        printf("2.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter value:");
            scanf("%d",&value);
            insertatbeginning(value);
            break;
            case 2:
            printf("exiting...\n");
            break;
            default:
            printf("invalid choice!\n");
        }
    }while(choice!=0);
    return 0;
}