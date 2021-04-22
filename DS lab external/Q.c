
#include <stdio.h>

#define SIZE 5
int front=-1 , rear = -1;
int Q[SIZE];
void enQueue(int num)
{
    if(rear == SIZE-1)
        printf("Queue is full");
    else{
        if(front = -1)
            front = 0;
        rear++; // for circular rear = (rear+1)%SIZE;
        Q[rear] = num;
        printf("%d enQueued" , Q[rear]);
    }
    printf("\n");

}

void deQueue()
{
    if(front == -1)
        printf("Queue is Empty");
    else{
        if(front == rear)   front = rear = -1;
        else    front+=1;   // for circular: front = (front+1)%size;  
    }
    printf("\n");
}

void display()
{
    int temp = front;
    while(temp!=(rear+1))
        {
            printf("%d---" , Q[temp]);
            temp++;
        }
            printf("\n");

}

int main()
{
    deQueue();

  //enQueue 5 elements
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // 6th element can't be added to because the queue is full
  enQueue(6);

  display();

  deQueue();
  display();


    return 0;
}
