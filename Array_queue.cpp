#include<iostream>
using namespace std;

int Q[10001];
int front = -1 , rear = -1;

bool isEmpty()
{
    if(rear == -1 && front == -1)
        return true;
    return false;
}

void enqueue(int num)
{
    if(isEmpty())
    {
        rear = 0;
        front = 0;

    }
    else
    {
        rear+=1;
    }
    Q[rear] = num;
    
}

void dequeue()
{
    
    if(isEmpty())
        return;
    else if(rear == front)
    {
        rear  = -1;
        front = -1;
    }
    else
        front+=1;
}
void traverse()
{
    if(isEmpty())
    {
        cout<<"Queue is NILL";
    }
    else
        for(int i=front;i<=rear;i++)
            cout<<Q[i]<<"  ";

    cout<<endl;
}
int main()
{
    int a;
    dequeue();
    enqueue(23);
    enqueue(34);
    enqueue(56);
    enqueue(90);
    traverse();
    dequeue();
    dequeue();
    traverse();
    dequeue();
    traverse();
    dequeue();
    dequeue();
    traverse();
    return 0;
}




