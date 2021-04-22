#include<iostream>
#include<stack>
#include<cstring>
#include<cmath>
using namespace std;
bool isOperator(char ch)
{
    if(ch=='*' || ch=='/' || ch=='+' || ch=='-')
        return true;
    return false;
}
bool isNumber(char ch)
{
    if(ch>='0' && ch<='9') return true;
    return false;
}

int performOperation(char oper,int op1,int op2)
{
    int res=0;
    switch(oper)
    {
        case '*': res =  (op1*op2);
            break;
        case '+': res =  (op1+op2);
            break;
        case '-': res =  (op1-op2);
            break;
        case '/': res =  (op1/op2);
            break;
        default : cout<<"Invalid operator";
    }
    cout<<res<<endl;
    return res;
}


int evaluateExpression(char exp[])
{
    stack<int> S;
    int res=0;
    int n=strlen(exp);
    for(int i=(n-1);i>=0;i--)
    {

        if(isNumber(exp[i]))
            {
                int num=0,count=0;
                while(isNumber(exp[i]))
                {
                    num = (num) + ((int)exp[i]-48)*pow(10,count);
                    count+=1;
                    i-=1;
                }
                S.push(num);
                cout<<"pushed "<<S.top()<<endl;
                if(exp[i]==',') 
                {
                    cout<<exp[i];
                    continue;
                }
            }
        if(isOperator(exp[i]))
        {
            int op1 = (S.top()); cout<<"popped "<<S.top()<<endl; S.pop();
            int op2 = (S.top()); cout<<"popped "<<S.top()<<endl; S.pop();
            res = performOperation(exp[i],op1,op2);
            S.push(res); cout<<"pushed"<<S.top()<<endl;
        }
        
    }
    return S.top();
}




int main()
{
    char exp[45];
    cout<<"Enter prefix expression with operands seperated with commas(eg: -+*2,3+5,4,9):   ";
    cin>>exp;
    int res = evaluateExpression(exp);
    cout<<"Final anser is :  "<<res<<endl;
}