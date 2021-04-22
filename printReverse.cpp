#include <iostream>
using namespace std;

void printReverse(int* a , int n)
{
    for(int i=(n-1);i>=0;i--)
        cout<<(a[i])<<" ";
        cout<<endl;
}
int main() {
	//code
	int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        printReverse(arr , n);
    }
	return 0;
}