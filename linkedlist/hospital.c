#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union contact {
    char mobile[15];
    char email[30];
};
struct patient{
    int id;
    char name[50];
    int age;
    char gender;
    union contact contact;
    int contacttype;
    struct patient*next;
};
struct patient*head=NULL;
struct patient*createpatient(int id,char name[],int age,char gender,char contactinfo[],int type){
    struct patient*newpatient=(struct patient*)malloc(sizeof(struct patient));
    newpatient->id=id;
    strcpy(newpatient->name,name);
    newpatient->age=age;
    newpatient->gender=gender;
    newpatient->contacttype=type;
    if(type==1)
    strcpy(newpatient->contact.mobile,contactinfo);
    else
    strcpy(newpatient->contact.email,contactinfo);
    newpatient->next=NULL;
    return newpatient;
}
void insertpatient(struct patient*newpatient){
    if(head==NULL){
        head=newpatient;
        return;
    }
    struct patient*temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newpatient;
}
void displaypatients(){
    struct patient*temp=head;
    printf("\n----patient records----\n");
if(!temp){
    printf("no patient records found.\n");
    return;
}
while(temp!=NULL){
    printf("ID:%d|name:%s|age:%d|gender:%c",temp->id,temp->name,temp->age,temp->gender);
    if(temp->contacttype==1)
    printf("mobile:%s\n",temp->contact.mobile);
    else 
    printf("email:%s\n",temp->contact.email);
    temp=temp->next;
}
}
struct patient*searchpatientbyid(struct patient*node,int id){
    if(node==NULL)
    return NULL;
    if(node->id==id)
    return node;
    return searchpatientbyid(node->next,id);
}
    void deletepatient(int id){
        struct patient*temp=head,*prev=NULL;
        while(temp!=NULL&&temp->id!=id){
            prev=temp;
            temp=temp->next;
        }
            if(temp!=NULL){
                printf("patient with id %dnot found.\n",id);
                return;
            }
            if(prev==NULL)
            head=temp->next;
            else 
            prev->next=temp->next;
            free(temp);
            printf("patient with id %d deleted successfully.\n",id);
        }
        int main(){
            int choice,id,age,contacttype;
            char name[50],gender,contactinfo[50];
            do{
                printf("\n===== hospital patient management======\n");
                printf("1.add patient\n");
                printf("2.display patient\n");
                printf("3.search patient by id\n");
                printf("4.delete patient\n");
                printf("5.exit\n");
                printf("enter your choice:");
                scanf("%d",&choice);
                getchar();
                switch(choice){
            
        

    case 1:
    printf("enter id:");
    scanf("%d",&id);
    getchar();
    printf("enter name:");
    fgets(name,50,stdin);
    name[strcspn(name,"\n")]=0;
    printf("enter age:");
    scanf("%d",&age);
    getchar();
    printf("enter gender(M/F):");
    scanf("%c",&gender);
    getchar();
    printf("contact type(1=mobile,2=email):");
    scanf("%d",&contacttype);
    getchar();
    printf("enter contact:");
    fgets(contactinfo,50,stdin);
    contactinfo[strcspn(contactinfo,"\n")]=0;
    insertpatient(createpatient(id,name,age,gender,contactinfo,contacttype));
    printf("patient added successfully.\n");
    break;
    case 2:
    displaypatients();
    break;
    case 3: 
    printf("enter id to search:");
    scanf("%d",&id);
    struct patient*found=searchpatientbyid(head,id);
     if(found){
        printf("patient found:%s,age:%d\n,found->name,found->age");
    }else{
        printf("patient not found\n");
    }
    break;
    case 4:
    printf("enter id to delete:");
    scanf("%d",&id);
    deletepatient(id);
    break;
    case 5:
    printf("exiting systen....\n");
    default:
    printf("invalid choice.try again\n");
}
    }while(choice!=5);
    return 0;
}
    



