#include <iostream>
#include <stack>
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
    newNode->left =NULL;
    newNode->right = NULL;
    return newNode;
}
Node* insert(Node* root , int data)
{
    if(root == NULL)
    {
        root = getNewNode(data);
        return root;
    }
    if(data <= root->data) root->left = insert(root->left , data);
    else                   root->right = insert(root->right , data);

    return root;
}


/////   PRE ORDER CODE

void preOrder(Node* root)
{
    if(root == NULL)
        return;
    cout<<root->data<<"  ";
    preOrder(root->left);
    preOrder(root->right);
}

void Inorder(Node* root)
{
    if(root == NULL)
        return;
    Inorder(root->left);
    cout<<root->data<<"  ";
    Inorder(root->right);
}

void iterativeInorder(Node *root)
{
    if(root==NULL) return;
        stack<Node*> S;
        S.push(root);

        while(!S.empty())
        {
            Node* curr = S.top();

            if(!S.empty() && curr!= NULL)
            {
                S.push(curr->left);
                curr = curr->left;
                continue;
            }
            cout<<S.top()->data;
            
            if(curr->right!=NULL) S.push(curr->right);
            if(curr->left!=NULL)  S.push(curr->right);
        }
    
}


int main()
{
    Node* root=NULL;
    root = insert(root , 40);
    root = insert(root , 10);
    root = insert(root , 50);
    root = insert(root , 20);
    root = insert(root , 45);
    root = insert(root , 60);
    root = insert(root , 1);
    root = insert(root , 23);
    preOrder(root);
    cout<<endl;
    iterativeInorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
}