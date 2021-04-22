#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node Node;
Node* head=NULL;
void push(Node** head , int num)
{
    Node* new_Node = (Node*)malloc(sizeof(Node));
    new_Node->data = num;
    new_Node->next = *head;
    *head = new_Node;
}
void traverse(Node* head)
{
    if(head==NULL)
        printf("List is Empty");
    else{
        Node* temp;
        temp = head;
        while(temp!=NULL)
        {
            printf("%d -->  " , temp->data);
            temp = temp->next;
        }
        printf("NULL\n");

    }
}
void reverse(Node* p)
{
    if(p->next == NULL)
        head = p;
    else{
        reverse(p->next);
    }
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}
int main()
{
    push(&head , 34);
    push(&head , 35);
    push(&head , 36);
    push(&head , 37);
    push(&head , 38);
    push(&head , 39);
    push(&head , 40);
    traverse(head);
    reverse(head);
    return 0;
}