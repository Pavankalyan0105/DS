#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
void append();
struct node* head=NULL;
int main()
{
    append();
}
void append()
{
    int num;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to append : :  ");
    scanf("%d",&(temp->data));
    if(head==NULL)
    {
        head = temp;
        head->left = NULL;
        head->right=NULL;
    }
    else{
            struct node* ptr;
            ptr = head;
            while(ptr->right != NULL)
            {
                    ptr = ptr->right;
            }
            temp->left = ptr;
            ptr->right = temp;
    }
    printf("\n%d appended to the linked list\n",temp->data);
}


