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
void deleteatend(int value){
   struct node*temp=head;
   struct node*prev=NULL;
   while(temp!=NULL&&temp->data!=value){
    prev=temp;
    temp=temp->next;
   }
   if(temp==NULL){
    printf("value %d not found.\n",value);
    return;
   }
   if(prev==NULL){
    head=temp->next;
   }else{
    prev->next=temp->next;
   }
   free(temp);
   printf("value %d deleted.\n",value);
} 
int main(){
    int choice,value,pos;
    do{
        
        printf("1.delete at end\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){  
            case 1:
            printf("enter value to delete:");
            scanf("%d",&value);
            deleteatend(value);
            break;
            default:
            printf("invalid choie.\n");
        }
    }while(choice!=0);
    return 0;
}