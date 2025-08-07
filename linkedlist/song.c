#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct song{
    char title[100];
    struct song* next;
};
struct song*head=NULL;
struct song*createsong(char title[]){
    struct song*newsong=(struct song*)malloc(sizeof(struct song));
    strcpy(newsong->title,title);
    newsong->next=NULL;
    return newsong;
}
void addsong(char title[]){
    struct song*newsong=createsong(title);
    if(head==NULL){
        head=newsong;
    }else{
        struct song*temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=newsong;
    }
    printf("song'%s'added to playlist.\n",title);
}
void deletesong(char title[]){
    struct song*temp=head,*prev=NULL;
    while(temp!=NULL&&strcmp(temp->title,title)!=0){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("song'%s'not found!\n",title);
        return;
    }
    if (prev==NULL){
        head=temp->next;
    }else{
        prev->next=temp->next;
    }
    free(temp);
    printf("song'%s'removed frpm playlist.\n",title);
}
void searchsong(char title[]){
    struct song*temp=head;
    int pos=1;
    while(temp!=NULL){
        if(strcmp(temp->title,title)==0){
            printf("sond'%s' found at position %d\n",title,pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    printf("song'%s'not found in playlist.\n",title);
}
void displayplaylist(){
    if (head==NULL){
        printf("playlist is empty.\n");
        return;
    }
    struct song*temp=head;
    printf("your playlist:\n");
    while(temp!=NULL){
        printf("->%s\n",temp->title);
        temp=temp->next;
    }
}
void playnext(){
    if (head==NULL){
        printf("no songs in playlist.\n");
        return;
    }
    printf("now playing:%s\n",head->title);
    struct song*temp=head;
    head=head->next;
    free(temp);
}
int main(){
    int choice;
    char title[100];
    do{
        printf("\nplaylist manager\n");
        printf("1.add song\n");
        printf("2.delete song\n");
        printf("3.search song\n");
        printf("4.display playlist\n");
        printf("5.play next song\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
            printf("enter song title:");
            fgets(title,100,stdin);
            title[strcspn(title,"\n")]=0;
            addsong(title);
            break;
            case 2:
            printf("enter song to delete:");
            fgets(title,100,stdin);
            title[strcspn(title,"\n")]=0;
            deletesong(title);
            break;
            case 3:
            printf("enter song to search::");
            fgets(title,100,stdin);
            title[strcspn(title,"\n")]=0;
            searchsong(title);
            break;
            case 4:
            displayplaylist();
            break;
            case 5:
            playnext();
            break;
            case 0:
            printf("exiting playlist manager.goodbye!\n");
            break;
            default:
            printf("invalid choice.try again.\n");
        }
    }while(choice!=0);
    return 0;
}