#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter size of 1st and 2nd array : ";
    cin>>n>>m;
    unordered_set<int>a;
    cout<<"Enter elements of 1st array : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    int b[m];
    cout<<"Enter elements of 2nd array : ";
    for(int i=0;i<m;i++)
    cin>>b[i];
    cout<<"Common elements are : ";
    for(int i=0;i<m;i++)
    {
        if(a.find(b[i])!=a.end())
        {
            cout<<b[i]<<" ";
            a.erase(b[i]);
        }
    }
    return 0;
}