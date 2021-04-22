#include <iostream>
#include <stdlib.h>

using namespace std;

class Node{
    public: int data;
            Node* next;
};

void fun(Node** head)
{
    cout<<&(*head)<<endl;

}
int main()
{
    Node* head = (Node*)malloc(sizeof(Node*));
    fun(&head);
    cout<<&head<<endl;
}