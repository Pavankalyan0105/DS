

#include<bits/stdc++.h>
// #define ll long long
#define int long long
#define mod 1000000007
using namespace std;

void merge(vector<int>& v , int left , int mid , int right){

    int i=left , j= mid+1;

    vector<int> leftPart(v.size());
    vector<int> rightPart(v.size());

    for(i=left;i<=mid;i++){
        leftPart[i] = v[i];
    }
    for(i=mid+1;i<=right;i++){
        rightPart[i] = v[i];
    }


    vector<int> res;

    i=left,j=mid+1;

    while(i<=mid && j<=right){
       if(leftPart[i]<=rightPart[j]){
            res.push_back(leftPart[i]);
            i++;
       }
       else{
            res.push_back(rightPart[j]);
            j++;
       }
    }

    while(i<=mid)
    {
        res.push_back(leftPart[i]);i++;
    }

    while(j<=right){
        res.push_back(rightPart[j]);j++;
    }

    int k=0;
    for(i=left;i<=right;i++){
        v[i]  = res[k];
        k++;
    }

}





void Msort(vector<int>& v , int left , int right){

    if(left >= right) return;

    int mid = (left+right)/2;

    Msort(v , left , mid);
    Msort(v , mid+1 , right);

    merge(v , left , mid , right);

}





void solve(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    Msort(v , 0 , n-1);

    for(int i=0;i<n;i++) cout<<v[i]<<" ";

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




