#include <stdio.h>

// Selection Sort
void sort(int arr[] , int size)
{
    int min;
    for(int i=0;i<size-1;i++)
    {
        min = arr[i];
        for(int j=i+1;j<size;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[6] = {2,4,1,5,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
        printf("%d  " , arr[i]);
        printf("\n");
    sort(arr , size);

    for(int i=0;i<size;i++)
        printf("%d  " , arr[i]);
        printf("\n");


}   