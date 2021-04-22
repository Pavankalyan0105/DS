#include<stdio.h>

void swap(int* a , int* b)
{
    int  t = *a;
    *a = *b;
    *b = t;
}

void insertionSort(int arr[] , int size)
{
    for(int i=0;i<size;i++)
    {
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key)
        {
                arr[j+1] = arr[j];
                j--;
        }

        arr[j+1] = key;
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
    insertionSort(arr , size);
    print(arr , size);

}

