#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node *head = NULL ;
typedef struct Node Node;
void push(Node** head_ref  , int data)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = *head_ref;
    *head_ref = temp;
}
void traverse(Node** head_ref)
{
    Node* temp = *head_ref;
    while(temp != NULL)
    {
        printf("%d -> " , temp->data);
        temp=temp->next;
    }  
     printf("NULL \n");
}
void reverse_list(Node** head_ref)
{
    Node* prev    =  NULL;
    Node* current = *head_ref;
    Node* next    = NULL;
    while( current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev    = current;
        current = next;
    }
    *head_ref = prev;
    traverse(head_ref);
}
/*void reverse_list_interval(Node* head , int k)
{
    Node* prev    =  NULL;
    Node* current = head;
    Node* next    = NULL;
    int count=0;
    while(count <k && current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count+=1;
    }
    if(next!=NULL)
       head->next = reverse_list_interval(next,k);

    //return prev;
}*/
// Node* head=NULL;
Node* reverse_list_recursion(Node* p)
{
    if(p->next == NULL)
        head = p;
    else{
        reverse_list_recursion(p->next);
    }
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}
int main()
{
    push(&head , 10);
    push(&head , 9);
    push(&head , 8);
    push(&head , 7);
    push(&head , 6);
    push(&head , 5);
    push(&head , 4);
    push(&head , 3);
    push(&head , 2);
    push(&head , 1);
    traverse(&head); 
    reverse_list(&head);
    //reverse_list_interval(head , 3);
    traverse(&head);
    reverse_list_recursion(head);
    printf("Using recursion : \n");
    traverse(&head);

}
