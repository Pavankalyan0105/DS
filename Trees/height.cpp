#include <iostream>
#include <stdlib.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;
};

Node* getNewNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
Node* insert(Node* root ,int data)
{
    if(root==NULL)
    {
        root = getNewNode(data);
    }
    else if(data<=root->data) 
        root->left = insert(root->left,data);
    else root->right = insert(root->right , data);
    return root;
}

int max(int a , int b)
{
    return a>b?a:b;
}
int height(Node* root)
{
    if(root == NULL)
        return -1;
    int left_height  =  height(root->left);
    int right_height =  height(root->right);
    return max(left_height , right_height)+1;
}
int main()
{
    Node* root;
    root = insert(root , 1);
    root = insert(root , -4);
    root = insert(root , 3);
    // root = insert(root , 4);
    // root = insert(root , 5);
    // root = insert(root , 6);
    // root = insert(root , 7);
    cout<<height(root)<<endl;
    return 0;
}