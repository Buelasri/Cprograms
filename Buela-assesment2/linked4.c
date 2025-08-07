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

    void insertatend(int value){
        struct node*newnode=createnode(value);
        if(head==NULL){
            head=newnode;
            return;
    }
    struct node*temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
}

        
int main(){
    int choice,value;
    do{
        printf("\n linked list menu:\n"); 
        printf("1.insert at end\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter value:");
            scanf("%d",&value);
            insertatend(value);
            break;
            case 0:
            printf("exiting program.\n");
            break;
            default:
            printf("invalid choie.\n");
        }
    }while(choice!=0);
    return 0;
}
            






    

