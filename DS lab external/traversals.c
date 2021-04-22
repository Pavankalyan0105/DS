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
    if(root == NULL) return;

        inOrder(root->left);
        printf("%d " , root->data);
        inOrder(root->right);

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
    // root = Delete(root , 24);
    inOrder(root);
    printf("\n");


}