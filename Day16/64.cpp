#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j])
            {
                a.erase(a.begin()+j);
            }
        }
    }
    for(auto b:a)
    {
        cout<<b<<" ";
    }
}