#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;
int length(){
    if(root == NULL)
       { 
           printf("\nList is Empty");
           return 0;}
    struct node* temp = root;
    int count=0;
    printf("\nDATA :::");
    while (temp!=NULL)
    {
        count+=1;
       // printf("  %d  ",temp->data);
        temp = temp->right;
    }
    return count;  
}
void traverse(){
    if(root == NULL)
       { 
           printf("\nList is Empty");
       }
    struct node* temp = root;
    int count=0;
    printf("\nDATA :::");
    while (temp!=NULL)
    {
        printf("  %d  ",temp->data);
        temp = temp->right;
    }
}
void addatafter()
{
    int num,pos,len = length();
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter data to insert :  ");
    scanf("%d",&num);
    printf("\nEnter position  :  ");
    scanf("%d",&pos);
    if(pos > len+1){
        printf("Invalid location");
    }
    else{
    temp->left = NULL;
    temp->data = num;
    temp->right = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else{
        struct node* p = root;
        int count=1;
        while(count < pos)
        {
            p = p->right;
            count+=1;
        }
        temp->right = p->right;
        p->right->left = temp;
        temp->left = p;
        p->right = temp;
    }
    }
    
}
void addatbegin()
{
    int num;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data  : ");
    scanf("%d",&(temp->data));
    temp->left = NULL;
    temp->right = NULL;
    if(root == NULL)
        root  = temp;
    else{
        root->left = temp;
        temp->right = root;
        root = temp;
    }
}

int main(){
    addatbegin();
    addatbegin();
    addatbegin();
    addatbegin();
    addatafter();
    addatafter();
    traverse();
}
