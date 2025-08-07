#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct directory{
    char name[50];
    struct directory *subdir;
    struct directory *next;
};
struct directory*createdir(char name[])
{
    struct directory *dir=(struct directory*)malloc(sizeof(struct directory));
    strcpy(dir->name,name);
    dir->subdir=NULL;
    dir->next=NULL;
    return dir;
}
void addsubdirectory(struct directory *parent,char name[]){
struct directory *newsub=createdir(name);
if(parent->subdir==NULL)
parent->subdir=newsub;
else{
    struct directory *temp=parent->subdir;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newsub;
}
}
void printtree(struct directory *dir,int depth){
    if(dir==NULL)return;
    for(int i=0;i<depth;i++)
    printf(" ");
    printf("|---%s\n",dir->name);
    printtree(dir->subdir,depth+1);
    printtree(dir->next,depth);
}
int main(){
    struct directory *root=createdir("Root");
    addsubdirectory(root,"documents");
    addsubdirectory(root,"downloads");
    addsubdirectory(root->subdir,"projects");
    addsubdirectory(root->subdir,"resumes");
    addsubdirectory(root->subdir,"movies");
    printf("directory tree structure:\n");
    printtree(root,0);
    return 0;
}

