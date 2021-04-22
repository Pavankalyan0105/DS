#include <stdio.h>

// Bubble Sort
void sort(int arr[] , int size)
{
    int min;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j+1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        for(int k=0;k<size;k++)
        printf("%d  " , arr[k]);
        printf("\n");
    }
}

int main()
{
    int arr[] = {2,7,4,1,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
        printf("%d  " , arr[i]);
        printf("\n");
    sort(arr , size);
    printf("Finally the sorted array is  :  ");
    for(int i=0;i<size;i++)
        printf("%d  " , arr[i]);
        printf("\n");


}   