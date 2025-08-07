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

int search(int value){
    struct node*temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==value)
        return pos;
        temp=temp->next;
        pos++;
    }
    return-1;
}
int main(){
    int choice,value,pos;
    do{
        printf("\n linked list menu:\n");
        printf("1.select value\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            
            case 1:
            printf("enter value to search:");
            scanf("%d",&value);
            pos=search(value);
            if(pos!=-1)
            printf("value %d found at position %d.\n",value,pos);
            else
            printf("value %d not found.\n",value);
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
            






    

