#include <iostream>
#include <queue>
#include <stdlib.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int num)
{
    Node* newNode = new Node();
    newNode->data = num;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void leveOrder(Node* root)
{
    if(root==NULL) cout<<"No data found";
    queue <Node*> Q;
    Q.push(root);
    Node* curr;
    while (!Q.empty())
    {
        curr = Q.front();
        cout<<curr->data<<endl;
        if(curr->left != NULL) Q.push(curr->left); 
        if(curr->right!= NULL) Q.push(curr->right);
        Q.pop();
    }
    
}

Node* insert(Node* root , int data)
{
    if(root == NULL)
    {
        Node* newNode = getNewNode(data);
        return newNode;
    }

    if(data <= root->data) 
    {
        root->left = insert(root->left , data);
    }
    else {
        root->right = insert(root->right , data);
    }
    return root;

}

int main()
{
    Node* root;
    root = insert(root , 40);
    root = insert(root , 10);
    root = insert(root , 30);
    root = insert(root , 16);
    root = insert(root , 52);
    root = insert(root , 71);
    root = insert(root , 97);
    leveOrder(root);
}
//          40
//      10