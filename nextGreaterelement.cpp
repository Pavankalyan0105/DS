#include <iostream>
#include <stack>
using namespace std;
typedef long long int ll;

void solve()
{
    stack<ll> S;
    ll n,i;
    cin>>n;
    ll arr[n],res[n];
    
    for(i=0;i<n;i++)
        cin>>arr[i];
     
    S.push(0);   
    for(i=1;i<n;i++)
    {
        while(!S.empty() && arr[i]>arr[S.top()])
        {
            res[S.top()] = arr[i];
            S.pop();
        }
        S.push(i);
    }
    
    while(!S.empty())
    {
        res[S.top()] = -1;
        S.pop();
    }
    for(i=0;i<n;i++) cout<<res[i]<<" |  ";
    
}


int main() {
	//code
	
	int T;
	cin>>T;
	while(T--)
	    solve();
	return 0;
}