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
void insertatposition(int pos,int value){
    if (pos<1){
        printf("invalid position!\n");
        return;
    }
    if (pos==1){
        insertatbeginning(value);
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
void deletebyvalue(int value){
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
int countnodes(){
    struct node*temp=head;
    int count =0;
    while (temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
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
        printf("\n linked list menu:\n");
        printf("1.insert at beginning\n");
        printf("2.insert at end\n");
        printf("3.insert at position\n");
        printf("4.delete by value\n");
        printf("5.select value\n");
        printf("6.count nodes\n");
        printf("7.reverse list\n");
        printf("8.display list\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter value:");
            scanf("%d",&value);
            insertatbeginning(value);
            break;
            case 2:
            printf("enter value:");
            scanf("%d",&value);
            insertatend(value);
            break;
            case 3:
            printf("enter position and value:");
            scanf("%d %d",&pos,&value);
            insertatposition(pos,value);
            break;
            case 4:
            printf("enter value to delete:");
            scanf("%d",&value);
            deletebyvalue(value);
            break;
            case 5:
            printf("enter value to search:");
            scanf("%d",&value);
            pos=search(value);
            if(pos!=-1)
            printf("value %d found at position %d.\n",value,pos);
            else
            printf("value %d not found.\n",value);
            break;
            case 6:
            printf("total nodes:%d\n",countnodes());
            break;
            case 7:
            reverselist();
            break;
            case 8:
            display();
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
            






    

