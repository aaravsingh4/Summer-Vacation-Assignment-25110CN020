#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int cmax=0;
    int y;
    for(auto b:a)
    {
        int c=count(a.begin(),a.end(),b);
        if(c>cmax)
        {
            cmax=c;
            y=b;
        }
    }
    cout<<"Maximum frequency element is : "<<y;
}