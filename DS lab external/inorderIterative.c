 #include<stdio.h>

 struct tNode{
    int data;
    struct tNode* left;
    struct tNode* left;
 };

 struct sNode{
    int data;
    struct sNode* next; 
 };
 typedef struct tNode tNode;
 typedef struct sNode sNode;

 sNode* top = NULL;

 void push(tNode* nod)