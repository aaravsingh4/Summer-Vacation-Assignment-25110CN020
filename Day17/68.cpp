#include<bits/stdc++.h>
using namespace std;

int main(){
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
    cout<<"Common elements are : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}