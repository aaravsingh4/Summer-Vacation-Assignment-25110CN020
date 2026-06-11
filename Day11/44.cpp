#include<bits/stdc++.h>
using namespace std;
int fact(int n,int factorial)
{
    for (int i = n; i >=1; i--)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    int factorial=1;
    cout<<fact(n,1);
}