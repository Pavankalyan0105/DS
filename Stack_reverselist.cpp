#include<iostream>
#include<stack>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* head=NULL;
void push(int num)
{
    Node* temp = (Node*)malloc(sizeof(Node*));
    temp->next = head;
    temp->data = num;
    head = temp;
}
void traverse()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"---->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void reverse()
{
    stack<Node*> S;
    Node* temp = head;
    while(temp!=NULL)
    {
        S.push(temp); //pushing the addresses to the stack
        temp = temp->next;
    }
    head = S.top();
    temp = head;
    S.pop();
    while(!S.empty())
    {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;

}
int main()
{
    push(9);
    push(8);
    push(7);
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    traverse();
    reverse();
    traverse();

}