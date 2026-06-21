#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    set<int>a;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    int y=1;
    cout<<"Missing numbers are :";
    for(auto b:a)
    {
        while(y<b)
        {
            cout<<y<<" ";
            y++;
        }
        y++;
    }
}