#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter size of 1st and 2nd arrays : ";
    cin>>n>>m;
    vector<int>a(n),b(m);
    cout<<"Enter elements of 1st array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter elements of 2nd array : ";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    set<int>c;
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        c.insert(x);
    }
    for(int i=n;i<n+m;i++)
    {
        int x=b[i-n];
        c.insert(x);
    }
    for(auto b:c)
    {
        cout<<b<<" ";
    }
    return 0;
}