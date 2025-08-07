#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct page{
    char url[100];
    struct page*prev;
    struct page*next;
};
struct page*current=NULL;
void visitpage(char url[]){
    struct page*newpage=(struct page*)malloc(sizeof(struct page));
    strcpy(newpage->url,url);
    newpage->prev=current;
    newpage->next=NULL;
    if(current!=NULL){
        current->next=newpage;
    }
    current=newpage;
    printf("visited:%s\n",url);
}
void goback(){
    if(current==NULL|| current->prev==NULL){
        printf("cannot go back.no previous page.\n");
        return;
    }
    current = current->prev;
    printf("back to:%s\n",current->url);
}
void goforward(){
    if(current==NULL|| current->next==NULL){
        printf("cannot go forward.no next page.\n");
        return;
    }
    current = current->next;
    printf("forward to:%s\n",current->url);
}
void showcurrentpage(){
    if (current==NULL){
        printf("no pages visited yet.\n");
    }else{
        printf("current page:%s\n",current->url);
    }
}
void showhistory(){
    if(current==NULL){
        printf("no browsing history.\n");
        return;
    }
    struct page*temp=current;
    while(temp->prev!=NULL){
        temp=temp->prev;
    }
    printf("browsing history:\n");
    while(temp!=NULL){
        if(temp==current)
        printf("->%s[CURRENT]\n",temp->url);
        else
        printf("->%s\n",temp->url);
        temp=temp->next;
    }
}
int main(){
    int choice;
    char url[100]; 

    do{
        printf("\n browser history manager\n");
        printf("1.visit new page\n");
        printf("2.go back\n");
        printf("3.go forward\n");
        printf("4.show current page\n");
        printf("5.show full history\n");
        printf("0.exit\n");
        printf("enter your choice;");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
            printf("enter URL:");
            fgets(url,100,stdin);
            url[strcspn(url,"\n")]=0;
            visitpage(url);
            break;
            case 2:
            goback();
            break;
            case 3:
            goforward();
            break;
            case 4:
            showcurrentpage();
            break;
            case 5:
            showhistory();
            break;
            case 0:
            printf("exiting browser manager.\n");
            break;
            default:
            printf("invalid option!\n");
        }
    }while(choice!=0);
    return 0;
}