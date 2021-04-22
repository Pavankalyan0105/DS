#include <stdio.h>
char stack[20];
int top=-1;


char peek()
{
    return stack[top];
}
char pop()
{
    if(top == -1)
        return 0;
    return stack[top--];
}

void push(char e)
{
    stack[++top] = e;
}

int priority(char c1)
{
    if(c1 == '(')   return 0;
    if(c1 == '+' || c1=='-')    return 1;
    if(c1 == '*' || c1=='/')    return 2;
    return -1;
}


int isDigit(char e)
{
    if(e >= '0' && e<='9')
        return 1;
    return 0;
}


void infixToPostfix(char* exp)
{
    int size = sizeof(exp);
    char res[size];
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(isDigit(exp[i]))
        {
            res[k++] = exp[i];
        }
        // else if(exp[i]=='(')
        //     push(exp[i]);
        // else if(exp[i]==')')
        // {
        //     char p;
        //     while(p=pop() != ')')
        //         res[k++] = p;
        // }
        else{
            while(top!=-1 && priority(peek())>=priority(exp[i]))
            {
                res[k++] = pop();
            }
            push(exp[i]);
        }
    }
    while(top!=-1)
    {
        res[k++] = pop();
    }

    printf("%s \n " , res);

}


int main()
{
    char str[] = "2+4*9-4";
    infixToPostfix(str);
    
    return 0;
}