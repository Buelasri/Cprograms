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
void removeduplicates(struct node*head){
    struct node*ptr1=head,*ptr2,*dup;
    while(ptr1!=NULL&&ptr1->next!=NULL){
        ptr2=ptr1;
        while(ptr2->next!=NULL){
            if(ptr1->data==ptr2->next->data){
                dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                free(dup);
            }else{
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
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
    insert(&head,10);
    insert(&head,30);
    insert(&head,20);
    printf("original list:\n");
    printlist(head);
    removeduplicates(head);
    printf("list after removing duplicates:\n");
    printlist(head);
    return 0;

}