#include<string>
#include<iostream>
using namespace std;

int hashfun(char ch)
{
    return ch-'a';
}
int main()
{
    int arr[26]={0};

    string S = "a";
    for(int i=0;i<S.length();++i)
    {
        int count  = hashfun(S[i]);
        arr[count]++; 
    }
    char j;
    for(int i=0 ,j='a';i<26 ,j<='z' ;++i,++j)
    {
        cout<<char(j)<<"  -->  "<<arr[i]<<endl;
    }

}