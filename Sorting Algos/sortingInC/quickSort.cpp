#include<iostream>
using namespace std;


int partition(int* arr , int start , int end)
{
    int pIndex = start;
    int pivot  = arr[end];
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i] , arr[pIndex]);
            pIndex+=1;
        }
    }
    swap(arr[pIndex] , arr[end]);

    return pIndex;
}

void quickSort(int* arr , int start , int end)
{
    if(start>=end)
        return;
    int pIndex = partition(arr , start , end);
    quickSort(arr , start , pIndex-1);
    quickSort(arr , pIndex+1 , end);
}

int main()
{
    int arr[] = {23,435,23,121,21,21,212121,34,56,5,67,43,246523,452,2323,4,4,3,3,1,-21,56,7,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr , 0 ,length-1);
    
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
}