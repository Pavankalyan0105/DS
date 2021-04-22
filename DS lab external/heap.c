#include <stdio.h>

void swap(int* a , int* b)
{
    int  t = *a;
    *a = *b;
    *b = t;
}

void heapify(int arr[] , int n ,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[largest])  largest = l;
    if(r<n && arr[r]>arr[largest])  largest = r;

    if(largest != i)   
    {
        swap(&arr[i] , &arr[largest]);
        heapify(arr, n , largest);
    }
}


void buildHeap(int arr[] , int size)
{
    int startIdx = (size/2)-1;

    for(int i=startIdx;i>=0;i--)
    {
        heapify(arr , size ,i);
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
    buildHeap(arr , size);
    printHeap(arr , size);
    return 0;
}