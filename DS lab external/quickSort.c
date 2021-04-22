#include<stdio.h>

void swap(int* a , int* b)
{
    int  t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[] , int low , int high)
{

    int pivot  = arr[high];

    int pIndex = low;

    for(int i=low;i<high;i++)
    {
        if(arr[i] <= pivot)
        {
            swap(&arr[pIndex] , &arr[i]);
            pIndex++;
        }
    }

    swap(&arr[high] , &arr[pIndex]);

    return pIndex;


}

void quickSort(int arr[], int low , int high)
{
    if(low < high)
    {
        int pIndex = partition(arr ,low , high);
        quickSort(arr , low , pIndex-1);
        quickSort(arr , pIndex+1 , high);
    }
}


void print(int arr[] , int size)
{
    for(int i=0;i<size;i++)
        printf("%d  " , arr[i]);
        printf("\n");

}

int main()
{
    int arr[10] = {134,32,73,34,45,86,74,8,9,0};

    int size = 10;
    quickSort(arr , 0 , size-1);
    print(arr , size);

}
