#include <iostream>
using namespace std;
class Node{ 
    public:
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int num)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = num;
    return newNode;

}

Node* insert(Node* root  , int data)
{
    // Node* root = *root_ref;

    if(root==NULL)
    {
        root = getNewNode(data);
    }
    else if(data<=(root->data))
        root->left =  insert(root->left, data);
    else root->right =  insert(root->right , data);
    return root;
}

bool search(Node* root , int num)
{
    if(root == NULL) return false;
    if(root->data == num) return true;
    else if(num<=root->data)  return search(root->left , num);
    else   return search(root->right , num);
}

int findMin(Node* root)
{
    if(root==NULL) return -1;
    if(root->left==NULL) return root->data;
    return findMin(root->left); 
}

int findMax(Node* root)
{
    if(root==NULL){
         cout<<"Tree is empty\n";
         return -1;
    }
    if(root->right==NULL) return root->data;
    return findMax(root->right);
}

int main()
{
    Node* root;
    root = insert(root , 1);
    root = insert(root , 2);
    root = insert(root , 300);
    root = insert(root , -4);
    root = insert(root , 5);
    root = insert(root , 6);
    root = insert(root , 7);
    root = insert(root , 8);
    cout<<root->data<<endl;
    search(root , 22)?cout<<"Found\n":cout<<"Not found\n";
    int minimum = findMin(root);
    cout<<" Minimum number in the tree is : "<<minimum<<endl;
    int maximum = findMax(root);
    cout<<"Maxiumum number in the tree is : "<<maximum<<endl;
}