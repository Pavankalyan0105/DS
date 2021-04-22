#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};
void append();
void addatbegin(){}
void addatafter(){}
void delete(){}
void display(){}
void length(){}
int main()
{
    int choice;

    while(1){
        printf("Single linked list operations:  \n");
        printf("1 . Append \n");
        printf("2.Add at begin\n");
        printf("3. Add at after");
        printf("4. Length\n");
        printf("5. Display\n");
        printf("6 . Delete\n");
        printf("7. Quit\n");

        printf("Enter your Choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:   append();
                            break;
        case 2:     addatbegin();
                            break;
        case 3:   addatafter();
                            break;
        case 4:     length();
                            break;
        case 5:     display();
                            break;
        case 6:     delete();
                            break;
        case 7: exit(1);
                            break;
        case 8: printf("Invalid choice");
                    break;
        }
    }
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
}
