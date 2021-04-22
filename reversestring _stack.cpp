#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
void reverseString(char C[] ,int size )
{
    stack<char> S;
    for(int i=0;i<size;i++)
    {
        S.push(C[i]);
    }
    for(int j=0;j<size;j++)
    {
        C[j] = S.top();
        S.pop();
    }
}
int main()
{
    char C[45];
    cout<<"Enter a String to reverse : ";
    cin>>C;
    reverseString(C , strlen(C));
    cout<<"Reversed string is : "<<C<<endl;
}