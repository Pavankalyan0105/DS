

#include<bits/stdc++.h>
// #define ll long long
#define int long long
#define mod 1000000007
using namespace std;

// ------------------ Merge sort ---------------------

void merge(vector<int>& arr , int l , int mid , int r){

    vector<int> merged(r-l+1);

    int i=l, j=mid+1,k=0;

    while(i<=mid && j<=r){

        if(arr[i] <= arr[j]){
            merged[k] = arr[i];
            i++;
        }
        else{
            merged[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        merged[k]  = arr[i];i+=1;k+=1;
    }
     while(j<=r){
        merged[k]  = arr[j];j+=1;k+=1;
    }


    for(auto i:merged){
        arr[l++] = i;
    }

}



void mergeSort(vector<int>& arr , int l , int r){

    if(l >= r) return;

    int mid = (l+r)/2;

    mergeSort(arr , l , mid);
    mergeSort(arr , mid+1 , r);

    merge(arr , l, mid , r);
}



// ------------------Bubble sort ---------------------


void bubbleSort(vector<int> arr){
    int n =arr.size();


    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){

            if(arr[j] > arr[j+1]) swap(arr[j+1] ,arr[j]);

        }
    }

    for(auto i:arr) cout<<i<<" ";
        cout<<endl;
}

// ------------------Selection sort ---------------------


void selectionSort(vector<int>  arr){
    int n = arr.size();

    for(int i=0;i<n;i++){
        int mini = i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[mini]) mini =  j;
        }

        swap(arr[mini] , arr[i]);

    }
    for(auto i:arr) cout<<i<<" ";
        cout<<endl;

} 

// ------------------Insertion sort ---------------------



void insertionSort(vector<int> arr){
    int n = arr.size();

    int i=1;
    while( i < n ){
        int j = i-1;
        int key = arr[i];

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
        i++;

    }

      for(auto i:arr) cout<<i<<" ";
        cout<<endl;

}


// ------------------Quick sort ---------------------


int partition(vector<int>& arr , int start , int end){
    int pivot = arr[end];
    int pIndex = start;

    for(int i=start ; i<end ;i++){
        if(arr[i] <= pivot){
            swap(arr[i] , arr[pIndex]);
            pIndex++;
        }
    }

    swap(arr[pIndex] , arr[end]);
    return  pIndex;

}

void quickSort(vector<int>& arr , int start, int end){

    if(start >= end) return;

    int p = partition(arr , start , end);
    quickSort(arr , start , p-1);
    quickSort(arr , p+1   , end);

}

// -------------------------------------------------------




void solve(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &e:arr) cin>>e;
    bubbleSort(arr);

    selectionSort(arr);

    insertionSort(arr);
    // for(auto i:arr) cout<<i;

    quickSort(arr , 0 , n-1);
    for(auto i:arr) cout<<i<<" ";
        cout<<endl;

}

int32_t main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T=1;
    // cin>>T;
    while(T--){
        solve();
    }

}



