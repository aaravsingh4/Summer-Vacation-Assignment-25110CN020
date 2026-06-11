#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }else
    {
        return b;
    }
}

int main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;
    int b;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<max(a,b);
    cout<<" is maximum";
}