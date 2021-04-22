#include <iostream>
#include <algorithm>
using namespace std;

struct Activity{
    int s_time , f_time;
};

bool comapareForSorting(Activity a , Activity b)
{
    return a.f_time < b.f_time;
}
int countActivities(int start[] , int end[] , int n)
{
    int count=0;
    int curr = 0;
    int next = curr+1;

    while(next<n)
    {
        if(start[next] >= end[curr])
        {
            count+=1;
            curr = next;
        }
        next++;
    }
    return count+1;
}
int main()
{
    Activity arr[] = {{20,30},{10,20},{12,25},{23,34}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n , comapareForSorting);
    int start[n] , end[n];
    for(int i=0;i<n;i++)
    {
        start[i] = arr[i].s_time;
        end[i]   = arr[i].f_time;
    }
    // for(int j=0;j<n;j++) cout<<start[j]<<"--->"<<end[j]<<endl;
    cout<<countActivities(start ,end , n)<<endl;


}