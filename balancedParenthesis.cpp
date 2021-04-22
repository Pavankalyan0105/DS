#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
bool arePair(char opening , char closing)
{
    if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;   
}
bool checkBalancedParenthesis(char str[])
{
    stack<char> S;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] =='[' || str[i] == '(' || str[i] =='{')
        {
            S.push(str[i]);
        }
        else  if(str[i] ==']' || str[i] == ')' || str[i] =='}')
        {
            if(S.empty())
                return false;
            if(arePair(S.top(),str[i]))
                S.pop();
            else 
                return false;
        }
    }
    return S.empty()?true:false;
}

int main()
{
    char str[30]="](){}[]([{})";
    bool res = checkBalancedParenthesis(str);

    if(res==0) cout<<"Not Balanced"; else cout<<"Balanced";
    cout<<endl;
}