#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    priority_queue<int>a;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    
}