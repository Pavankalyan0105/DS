#include<bits/stdc++.h>
using namespace std;
 
int solution()
{
    int n1,n2,n3;
    vector<int> v1,v2,v3; 
    int sum1=0,sum2=0,sum3=0,num;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;++i) 
    {
        cin>>num;
        sum1+=num;
        v1.push_back(num);
    }
    for(int i=0;i<n2;++i) 
    {
        cin>>num;
        sum2+=num;
        v2.push_back(num);
    }
    for(int i=0;i<n3;++i) 
    {
        cin>>num;
        sum3+=num;
        v3.push_back(num);
    }
    // cout<<sum1<<endl;
   // show(sum1,sum2,sum3);
    while(sum1!=sum2 || sum1!=sum3 || sum2!=sum3)
    {
        if(sum1>sum3 && sum1>sum2)
        {
            sum1-=v1[0];
            v1.erase(v1.begin());
        }
        else{
            if(sum2>sum3)
            {
                sum2-=v2[0];
                v2.erase(v2.begin());
            }
            else{
                sum3-=v3[0];
                v3.erase(v3.begin());
            }
        }
    }
    //cout<<sum1;
    return sum1;
    

}
int main()
{
    cout<<solution();
    return 0;
}
