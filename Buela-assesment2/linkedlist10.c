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
int countnodes(){
    struct node*temp=head;
    int count =0;
    while (temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    int choice,value,pos;
    do{
        printf("1.count nodes\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            
            case 1:
            printf("total nodes:%d\n",countnodes());
            break;
            default:
            printf("invalid choie.\n");
        }
    }while(choice!=0);
    return 0;
}
            






    

