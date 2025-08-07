#include<stdio.h>
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
void moveeventoend(struct node**headref){
    if(*headref==NULL||(*headref)->next==NULL)
    return;
    struct node*end=*headref,*prev=NULL,*curr=*headref;
    while(end->next!=NULL)
    end=end->next;
    struct node*newend=end;
    while((curr!=end&&curr!=NULL)&&(curr->data%2==0)){
        newend->next=curr;
        curr->next=NULL;
        newend=curr;
        *headref=next;
        curr=*headref;
        while(curr!=end){
            if(curr->data%2==0){
                prev->next=curr->next;
                newend->next=curr;
                curr->next=NULL;
                newend=curr;
                curr=prev->next;
            }else{
                prev=curr;
                curr=curr->next;
            }

        }
        if(end->data%2==0&&curr==end){
            prev->next=curr->next;
            newend->next=curr;
            curr->next=NULL;
        }
    }
    void printlist(struct node*head){
        while(head!=NULL){
            printf("%d->",head->data);
            head=head->next;
        }
        printf("NULL\n");
    }
    void insert(struct node**head,int value){
        struct node*newnode=createnode(value);
        if(*head==NULL){
            *head=newnode;
            return;
        }
        struct node*temp=*head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newnode;
    }
    int main(){
        insert(&head,1);
        insert(&head,4);
        insert(&head,3);
        insert(&head,6);
        insert(&head,5);
        insert(&head,2);
        printf("Original list:\n");
        printlist(head);
        moveendtoend(&head);
        printf("after moving even nodes toend:\n");
        printlist(head);
    }
}