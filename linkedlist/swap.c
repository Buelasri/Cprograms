on#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*createnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void insert(struct node**head,int value){
    struct node*newnode=createnode(value);
    if (*head==NULL){
        *head=newnode;
        return;
    }
    struct node*temp=*head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
}
void swapnodes(struct node**head,int x,int y){
    if (x=y)return;
    struct node*prevX=NULL,*currX=*head;
    while(currX!=NULL&&currX->data!=x){
        prevX=currX;
        currX=currX->next;
    }
    struct node*prevY=NULL,*currY=*head;
    while(currY!=NULL&&currY->data!=y){
        prevY=currY;
        currY=currY->next;
    }
    if(currX==NULL||currY==NULL){
        printf("One or both values not found.\n");
        return;
    }
    if (prevX!=NULL)
    prevX->next=currY;
    else
    *head=currY;
    if(prevY!=NULL)
    prevY->next=currX;
    else
    *head=currX;
struct node*temp=currX->next;
currX->next=currY->next;
currY->next=temp;
}
void printlist(struct node*head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
int main(){
    struct node*head=NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    insert(&head,50);
    printf("original list:\n");
    printlist(head);
    int x=20,y=40;
    printf("\n swapping %d and %d\n)",x,y);
    swapnodes(&head,x,y);
    printf("list after swap:\n");
    printlist(head);
    return 0;
}
