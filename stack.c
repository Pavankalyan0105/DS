#include<stdio.h>
#define CAPACITY 5
void puch(int);
int pop();
int peek();
int stack[CAPACITY] , top = -1;
int main()
{
    int choice , ele , num;
    while(1)
 {
    printf("\n1 . Push\n");
    printf("2 . Pop\n");
    printf("3 . Pop\n");
    printf("4 . Traverse\n");
    printf("5 . Exit");
    printf("\nEnter your choice :  ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter an element : ");
            scanf("%d",&ele);
            push(ele);
            break;
        case 2: num =  pop();
                        if (num!=0)
                                printf("\nPopped element is %d\n\n",num);
                        else
                                printf("Stack Underflow\n\n");
                        break;
        case 3:peek();
                        break;
        case 4:traverse();
                        break;
        case 5:exit(1);
        default : printf("Invalid Input\n\n");
    }
   }
}
void push(int ele)
{
    if (isFull())
        printf("Stack Overflow\ n");
    else
         stack[++top] = ele;
         printf("\n%d is pushed to the stack\n\n",ele);
}
int pop()
{
    if(isNull())
        return 0;
    else
        return stack[top--];
}
int peek()
{
    if(isNull()){
        printf("\nStack Underflow\n\n");
        return -1;
    }
    else
        return stack[top];
}
int isFull()
{
    if (top == CAPACITY-1)
        return 1;
    else return 0;
}
int isNull()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void traverse()
{
    if(isNull())
        printf("\nStack Underflow\n\n");
    else{
        for(int i=0;i<=top;i++)
            printf("%d   ",stack[i]);
    }
}

