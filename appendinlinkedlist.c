#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};
int main()
{
    append();
    return 0;

}
struct node *root;
void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("ENter element to append: \n");
    scanf("%d", &(temp -> data));
    temp -> link = NULL;
    if (root==NULL){
        root = temp;
    }
    else{
        struct node *p;
        p = root;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link =temp;
    }
    printf("root --------------->   %d\n",root);
    printf("root->data --------->   %d\n",root->data);
    printf("root->link---------->   %d\n",root->link);

}
