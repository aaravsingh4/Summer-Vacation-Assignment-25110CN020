#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (i==1||i==n||j==1||j==n)
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }
            //Day 09 Work   
        }
        cout<<endl;
    }
    return 0;
}