#include <stdio.h>
#include <stdlib.h>


//PROTOTYPES
void append();
int length();
void addatbegin();
void addatafter();
void delete();
void display();
void swap();

struct node{
    int data;
    struct node* link;
};
int len; //GLOBAL VARIABLE  FOR LENGTH

//MAIN FUNCTION
int main()
{
    int choice;

    while(1){
        printf("\nSingle linked list operations:  \n");
        printf(" 1 .  Append \n");
        printf(" 2.  Add at begin\n");
        printf(" 3.   Add at after\n");
        printf(" 4.   Length\n");
        printf(" 5.  Display\n");
        printf(" 6 .  Delete\n");
        printf(" 7.  Swap\n");
        printf(" 8.  Quit\n");

        printf("Enter your Choice ::   ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:   append();
                            break;
        case 2:     addatbegin();
                            break;
        case 3:   addatafter();
                            break;
        case 4:   len = length();
        printf("\nLength is ::  - - - - - - - - - - - - -> %d\n ",len);
                            break;
        case 5:     display();
                            break;
        case 6:     delete();
                            break;
        case 7:     swap();
                            break;
        case 8: exit(1);
        default: printf("Invalid output");
        }
    }
    return 0;
}
struct node *root;

void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("ENter element to append  ::    ");
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
void delete(){
            len=length();
            int loc,i=1;
    struct node* temp;
    printf("\nEnter node number to delete  :     ");
    scanf("%d",&loc);
    if(loc > len){
        printf("Invalid input\n");
    }
    else if(loc==1){
        temp=root;
        temp = temp->link;
        root = temp;
        temp=NULL;
}
 else{

        struct node  *p , *q;
        p=root;
        while(i < loc-1){
          p = p->link;
            i++;
            }
            q = p->link;
            p->link = q->link;
            q->link = NULL;
            free(q);
}}
int length(){
    struct node* temp;
    int count=0;
    temp = root;
    while(temp != NULL){
        count++;
        temp = temp->link;
    }

    return count;
}
void display(){
    struct node* temp;
    temp =root;
    if(temp==NULL){
        printf("No data found.....");
    }
    else{
    printf("\nLinked List data    ::::   ");
    while(temp!=NULL){
        printf("  %d  , ",temp->data);
        temp = temp->link;
            }
    }
}
void addatbegin(){
    struct node* temp;
    int num;
    printf("Enter element to add :  ");
    scanf("%d",&num);
    temp = (struct node*)malloc(sizeof(struct node));
    temp ->data = num;//intialising the node

    temp->link = root;
    root = temp;
}
void addatafter(){
        int loc,num,i=1;
        printf("\n Enter the location after which you want to add     : ");
        scanf("%d",&loc);
        printf("\n Enter the element to add    : ");
        scanf("%d",&num);

        len = length();
        if (loc > length){
            printf("Invalid location");//loc exceeded length
            printf("\nCurrently list is having %d  nodes",len);
        }
        else if(loc<=length){
            // adding in between
            struct node *temp ,* p;
            temp = root;
            p = (struct node*)malloc(sizeof(struct node));//Creating new node to insert
            p->data = num;//Assigning the element to the new node
            p->link = NULL;//New node points to NULL
            while(i<loc){
                    temp = temp->link;
                    i++;
            }
            p->link = temp->link;
            temp->link = p;
        }
}

