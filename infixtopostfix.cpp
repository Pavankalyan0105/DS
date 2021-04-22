#include<iostream>
#include<stack>
#include<string>
#include "call_to_postfix.cpp"

using namespace std;

bool hasHighPrecedence(char ex , char top)
{
    if(top == '(') return false;
    int arr[4]={'-','+','*','/'};
    int ex_index,top_index;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==ex)
            {
                ex_index = i;
                break;
            }
    }
        // cout<<"Ex_index"<<ex_index<<endl;
    for(int j=0;j<4;j++)
    {
        if(arr[j]==top)
            {
                top_index = j;
                break;
            }
    }
    // cout<<"top_index"<<top_index<<endl;shutdown -h now
    if(top_index>ex_index) return true;
    else return false;

}
bool isNumber(char ex)
{
    if(ex>='0' && ex<='9')
        return true;
    return false;
}
bool is_Operator(char ch)
{
    if(ch=='*' || ch=='+' || ch=='-' || ch=='/')
        return true;
    return false;
}
int main()
{
    stack<char> S;
    string  exp,res="";
    cout<<"Enter infix expression ::  ";
    cin>>exp;
    int n = exp.length();
    for(int i=0;i<n;++i)
    {
        if(exp[i]=='(')
        {
           S.push(exp[i]);
           continue; 
        }
        else if(exp[i]==')')
        {
            while(S.top()!='(')
            {
                res+=S.top();
                S.pop();
            }
            S.pop();
        }
       else if(isNumber(exp[i]))
        {
            if(isNumber(res[res.length()-1])) res+=',';
            while (isNumber(exp[i]))
            {
                res+=exp[i];    
                i++;
            }
            i--;
            
        }
        else if(is_Operator(exp[i]))
        {
            if(!S.empty() && S.top()!='(' && hasHighPrecedence(exp[i],S.top()) )
            {
                res+=S.top();
                S.pop();
            }
            S.push(exp[i]);
        }

    }
        while (!S.empty())
        {
            res+=S.top();
            S.pop();
        }
        
    cout<<res<<endl;

     cout<<evaluatePostfix(res)<<endl;

    return 0;
}