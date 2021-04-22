#include <stdio.h>



void merge(int arr[] , int l , int m , int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;

    int left[n1] , right[n2];

    for(i=0;i<n1;i++)
        left[i] = arr[l+i];
    
    for(j=0;j<n2;j++)
        right[j] = arr[m+j+1];
    

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j])
            {
                arr[k] = left[i];
                i++;
            }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }


    while (i<n1)
    {
            arr[k] = left[i];
            k++;
            i++;
    }

    while (j<n2)
    {
            arr[k] = right[j];
            j++;
            k++;
    }

    

}

void mergeSort(int arr[] , int l , int r)
{
    if(l<r)
    {
        int m = (r+l)/2;
        mergeSort(arr ,l , m);
        mergeSort(arr , m+1 , r);
        merge(arr , l ,m ,r);
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
    mergeSort(arr , 0 , size-1);
    print(arr , size);

}

