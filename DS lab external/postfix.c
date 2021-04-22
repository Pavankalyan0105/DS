#include<stdio.h>

int stack[30];
int top = -1;

void push(int ele)
{
    stack[++top] = ele;
}

int pop()
{
    return stack[top--];
}

int isDigit(char e)
{
    if(e>='0' && e<='9')
        return 1;
    return 0;
}

int evalPostfix(char* exp)
{
    char* e = exp;
    int result=0 , n3;
    while(*e != '\0')
    {
            if(isDigit(*e))
            {
                int num = *e-48;
                push(num);
            }
            else{
                int n1 = pop();
                int n2 = pop();
                switch(*e)
                {
                    case '+':n3 = n2+n1;
                            break;
                    case '-':n3 = n2-n1;
                            break;
                    case '*':n3 = n2*n1;
                            break;
                    case '/':n3 = n2-n1;
                            break;
                }
                push(n3);
            }
            e++;
    }
    result = pop();
    return result;

}
int main()
{
    char str[] = "23+54*9-+";
    int res = evalPostfix(str);
    printf("%d  " , res);

    return 0;
}
