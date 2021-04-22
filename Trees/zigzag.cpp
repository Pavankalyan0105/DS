#include <iostream>
#include <stack>
using namespace std;

class Node{
    public:
        Node* left;
        int data;
        Node* right;
};


Node* getNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root , int data)
{
    Node* newNode = getNewNode(data);

    if( root == NULL)
        root = newNode;

    else if(data <= root->data)
        root->left = insert(root->left, data);
    else 
        root->right = insert(root->right , data);

    return root;
}

void inorder(Node* root)
{
    if(root)   
    {
        inorder(root->left);
        cout<<root->data<<"  ";
        inorder(root->right);
    }
}


//Starts from left
void zigzag1(Node* root)
{

    if(root==NULL)
    {
        cout<<"Tree is empty!"<<endl;
        return;
    }
    
    stack<Node*> s1,s2;
    Node* temp = NULL;
    int count=1;

    s1.push(root);

    while(!s1.empty() || !s2.empty())
    {
        if(count%2 == 1)
        {
            while(!s1.empty())
            {
                temp = s1.top();
                cout<<temp->data<<"  ";
                if(temp->left) s2.push(temp->left);
                if(temp->right) s2.push(temp->right);

                s1.pop();
            }
        }

        else{
            while(!s2.empty())
            {
                temp = s2.top();
                cout<<temp->data<<"  ";
                if(temp->right) s1.push(temp->right);
                if(temp->left) s1.push(temp->left);

                s2.pop();
            }
        }
        count+=1;
    }
}


//Starts from right
void zigzag2(Node* root)
{

    if(root==NULL)
    {
        cout<<"Tree is empty!"<<endl;
        return;
    }
    
    stack<Node*> s1,s2;
    Node* temp = NULL;
    int count=1;

    s1.push(root);

    while(!s1.empty() || !s2.empty())
    {
        if(count%2 == 1)
        {
            while(!s1.empty())
            {
                temp = s1.top();
                cout<<temp->data<<"  ";
                if(temp->right) s2.push(temp->right);
                if(temp->left) s2.push(temp->left);

                s1.pop();
            }
        }

        else{
            while(!s2.empty())
            {
                temp = s2.top();
                cout<<temp->data<<"  ";
                if(temp->left) s1.push(temp->left);
                if(temp->right) s1.push(temp->right);

                s2.pop();
            }
        }
        count+=1;
    }
}





int main()
{
    Node* root = NULL;

    root = insert(root , 8);
    root = insert(root , 2);
    root = insert(root , 9);
    root = insert(root , 10);
    root = insert(root , 7);
    root = insert(root , 3);
    root = insert(root , 1);

    inorder(root);
    cout<<endl;

    zigzag1(root);
    cout<<endl;
    
    zigzag2(root);
    cout<<endl;


}