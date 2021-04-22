#include<stack>
#include<cstring>
#include<iostream>
using namespace std;

bool isNumeric(char ch)
{
    if(ch>='0' && ch <='9')
        return true;
    return false;
}
bool isOperator(char ch)
{
    if(ch=='*' || ch=='/' || ch=='-' ||ch=='+')

        return true;
    return false;
}
int performOperation(char ch , int op1 , int op2)
{

    if(ch=='*') return op1*op2;
    else if(ch=='-') return op1-op2;
    else if(ch=='+') return op1+op2;
    return op1/op2;
}

int evaluatePostfix(string exp)
{
    stack<int> S;
    int n = exp.length();
    for(int i=0;i<n;i++)
    {
        if(isNumeric(exp[i]))
        {
            int num = 0;
            while(isNumeric(exp[i]))
            {
                num = num*10 + int(exp[i])-48;
                i++;
            }
            S.push(num);
        }
        
        if(exp[i]==',') continue;
        int res;
        if(isOperator(exp[i]))
        {
            int op2 = S.top();  S.pop();
            int op1 = S.top();  S.pop();
            res = performOperation(exp[i],op1,op2);
            S.push(res);
        }
    }
    return S.top();
}
