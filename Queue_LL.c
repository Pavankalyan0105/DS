#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node Node;

Node* front = NULL;
Node* rear  = NULL;

int isEmpty()
{
    if(front == NULL && rear == NULL)
        return 1;
    else return 0;
}
void enqueue(int num)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = num;
    temp->next = NULL;
    if(isEmpty())
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue()
{
    Node* temp = front;
    if(isEmpty())
    {
        return ;
    }
    if(rear == front)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    free(temp);
}

void print()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    Node* temp=front;
    while (temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}
int main()
{
    enqueue(2); 
    enqueue(4);
    print();   //2 4 
    dequeue();
    print();   //4
    enqueue(5);
    print();   //4 5
    dequeue();
    print(); // 5
}