#include <iostream>
using namespace std;
typedef long long ll;
ll memo[12121212]={0};
ll fib(int num)
{
    ll result;
    if(memo[num]!=0)
        return memo[num];
    if(num<=2)  
            result = 1;
    else    
            result  = fib(num-1)+fib(num-2);

        memo[num] = result;
    return result;
}
// Normal Recursive
ll naivefib(int num)
{
    if(num<=2) return 1;
    else return fib(num-1)+fib(num-2);
}

int main()
{
    
    cout<<fib(35)<<endl;


}