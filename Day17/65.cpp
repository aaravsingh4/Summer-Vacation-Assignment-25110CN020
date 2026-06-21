#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter size of 1st and 2nd array :";
    cin>>n>>m;
    int a[n],b[m];
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
    int c[n+m];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=n;i<n+m;i++)
    {
        c[i]=b[i-n];
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }
}