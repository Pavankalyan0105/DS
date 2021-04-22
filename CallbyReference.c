#include <stdio.h>
void increment(int *y)
{
    *y=(*y)+1;//*y points to the value of a
    printf("\n%u",y);//gives the address of a
}
int main(){
   int a=5;
   increment(&a);
   printf("\n%d",a);
   printf("\n%d",&a);//y=a
}
