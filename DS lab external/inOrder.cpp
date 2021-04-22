#include <iostream>
#include <stack>
using namespace std;

class Node
{
    public:
    Node* left;
    int data;
    Node* right;
};

void inOrder(Node* root)
{
    stack<Node*> S;
    Node* curr = root;
    while(1)
    {
        
        while(curr)
        {
            S.push(curr);
            curr = curr->left;
        }
        if(S.empty())
            return;

        curr = S.top();S.pop();
        cout<<curr->data;
        if(curr->right)
            curr = curr->right;

    }
}

Node* newNode(int data)
{
    Node* temp =  (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


Node* insert(Node* root , int data)
{
    if(root == NULL)
        return newNode(data);
    if(data < root->data)
        root->left  = insert(root->left , data);
    else
        root->right = insert(root->right , data);

    return root;
}




int main()
{
    Node* root;
    root = insert(root , 24);
    root = insert(root , 45);
    root = insert(root , 43);
    root = insert(root , 4);
    root = insert(root , 5);
    inOrder(root);
    //   swap(&3,&4);==
    return 0;
  
}