#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;    
};
typedef struct Node Node;

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


void inOrder(Node* root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d " , root->data);
        inOrder(root->right);
    }

}

Node* FindMin(Node* root)
{
    if(root->left == NULL) return root;
    return FindMin(root->left);
}

Node* Delete(Node* root  ,int data)
{
    if(root == NULL) return root;
    
    if(data < root->data)       root->left  = Delete(root->left , data);
    else if(data > root->data)  root->right = Delete(root->right , data);

    else{

        //case1: NO child
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            root = NULL;
            return root;
        }
        //case2: one child
        else if(root->left== NULL)
        {
            Node* temp = root;
            root = root->right;
            free(temp);
            return root;
        }
        else if(root->right== NULL)
        {
            Node* temp = root;
            root = root->left;
            free(temp);
            return root;
        }
        //case3: two children
        else{

            Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }

    }
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
    printf("\n");
    root = DeleteNode(root , 24);
    inOrder(root);
    printf("\n");


}