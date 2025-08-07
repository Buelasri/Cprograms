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

void insertatposition(int pos,int value){
    if (pos<1){
        printf("invalid position!\n");
        return;
    }
    
     struct node*newnode=createnode(value);
     struct node*temp=head;
     for(int i=1;i<pos-1&&temp!=NULL;i++)
     temp=temp->next;

     if(temp==NULL){
        printf("position out of range!\n");
        free(newnode);
        return;
     }
     newnode->next=temp->next;
     temp->next=newnode;
    }

int main(){
    int choice,value,pos;
    do{
        printf("\n linked list menu:\n");
        printf("1.insert at position\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter position and value:");
            scanf("%d %d",&pos,&value);
            insertatposition(pos,value);
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
            






    

