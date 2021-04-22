#include<stdio.h>
int binarySearch(int arr[] , int size  , int ele)
{
    int left = 0;
    int right = size-1;

    while(left <= right)
    {

        int mid = (left+right)/2;
        // printf("mid ==  %d\n ",mid);
        if(ele < arr[mid])
            right = mid-1;
        else if(ele > arr[mid])
            left = mid+1;
        else if(ele == arr[mid])
            return mid+1;
    }

    return 0;
}

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    int size = 10;
    int ele = 11;
    int res = binarySearch(arr , size , ele);

    if(res)
        printf("Found at %d position \n" , res);
    else printf("Not found\n");
    printf("%d\n" , res);

}