#include<stdio.h>

void swap(int* a , int* b)
{
    int  t = *a;
    *a = *b;
    *b = t;
}

void heapify(int *arr , int size , int i)
{
    int l = (2*i)+1;
    int r = (2*i)+2;
    int smallest = i;

    if(l<size && arr[l]<arr[smallest]) smallest = l;
    if(r<size && arr[r]<arr[smallest]) smallest = r;

    if(smallest != i)
    {
        swap(&arr[smallest] , &arr[i]);
        heapify(arr ,size , smallest);
    }


}


void heapSort(int *arr, int size)
{
    int n = (size/2)-1;

    for(int i=n;i>=0;i--)
    {
        heapify(arr , size , i);
    }
}

void printHeap(int arr [], int size)
{
    for(int i=0;i<size;i++)
        printf("%d  " , arr[i]);
        printf("\n");
}


int main()
{
    int arr[] = {1,3,5,4,6,13,10,9,8,15,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr , size);
    printHeap(arr , size);
    return 0;
}