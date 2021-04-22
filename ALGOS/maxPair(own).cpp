
#include <iostream>
#include <vector>
using namespace std;

void maxPairWiseProduct(vector<long long int> &v , int siz)
{
    long long int max1=0,max2=0,min1=0,min2=0;
   if(siz==0) 
   {
       cout<<"No pairs";
       return;
   }
   if (siz==2)
   {
       cout<<v[0]*v[1];
       return;
   }
   for(int i=0;i<siz;++i)
   {
       if (v[i] > 0)
       {
           if (v[i] > max1)
           {
               max2 = max1;
               max1 = v[i];
           }
           else if(v[i] > max2) {
               max2 = v[i];
           }
       }
       else
       {
            if(v[i] < min1)
            {
                min2 = min1;
                min1 = v[i];
            }
            else if(v[i] < min2){
                min2 = v[i];
            }
       }
   }
   //cout<<max1<<"   "<<max2<<endl;
   //cout<<min1<<"   "<<min2<<endl<<endl;
   if(max1*max2 > min1*min2)
    cout<<max1*max2;
   else if (max1*max2 < min1*min2)
    cout<<min1*min2;
    else {
        if(max1*min2>max2*min1  && min1*max1<max1*min2 && min2*max2<max1*min2)
            cout<<max1*min2;
        else if(max1*min2<max2*min1  && min1*max1<max2*min1 && min2*max2<max2*min1)
            cout<<max2*min1;
        else if(max1*min1 > max2*min2) cout<<max1*min1;
        else cout<<max2*max2;
    }
   
}

int main()
{
    int siz;
    vector<long long int>v;
    cin>>siz;
    for(int i=0;i<siz;++i)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
    maxPairWiseProduct(v,siz);
  
    return 0;
}

