#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> a;
    while(cin >> n)
    {
        if(n == -1)
            break;
        a.push_back(n);
    }
    int m;
    cout<<"Enter times you want to shift the array to left : ";
    cin>>m;
    int b=a.size();
    for(int i=1;i<=m;i++)
    {
        int temp=a[0];
        for(int i=0;i<b-1;i++)
        {
            a[i]=a[i+1];
        }
        a[b-1]=temp;
    }
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}