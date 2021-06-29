#include <iostream>
#include <queue>
using namespace std;

void display(priority_queue<int , vector<int> , greater<int>> &q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}
void display(priority_queue<int> &q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}




int main(){
    int n;
    cin>>n;
    vector<int> v(n ,0);
    priority_queue<int, vector<int> , greater<int>> q;

    for(int i=0;i<n;i++) cin>>v[i];
    
    for(int i=0;i<4;i++){
        q.push(v[i]);
    }

    for(int i=4;i<n;i++){
        if(v[i] > q.top()){
            q.pop();
            q.push(v[i]);
        }
    }





    display(q);
}