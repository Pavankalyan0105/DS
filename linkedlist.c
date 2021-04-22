#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* root;
int main(){
    struct node *p;
    p= (struct node*)malloc(sizeof(struct node));
    printf("enter node data:");
    scanf("%d",&(p->data));
    p->link = NULL;
    if(root==NULL)
    {
        root=p;
    }
    else{
                struct node* temp;
                temp=NULL;
                while(temp->link != NULL)
                    temp->link = p;
                }

   return 0;
}
