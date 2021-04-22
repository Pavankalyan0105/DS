#include<stdio.h>
#include <stdlib.h>
void traverse();
void push();
void pop();
struct node{
    int data;
    struct node* link;
};
struct node* top=NULL;
int main()
{
    pop();
    push();
    push();
    push();
    pop();
    pop();
    pop();
    //traverse();
    
    traverse();
    return 0;
}
void push(){
    int num;
    struct node* temp;
    printf("\nEnter data to push into the stack :  ");
    scanf("%d",&num);
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = top;
    top = temp;
    printf("%d is pushed into the stack",num);
}

void traverse()
{
    if (top==NULL)
    {
        printf("\nStack underflow");
    }
    else{
        struct node* temp = top;
        while(temp != NULL)
        {
            printf("\n%d",temp->data);
            temp = temp->link;
        }
    }
}
void pop()
{
    if(top == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        struct node* temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp = top;
        top = temp->link;
        temp->link = NULL;
    }
    
}