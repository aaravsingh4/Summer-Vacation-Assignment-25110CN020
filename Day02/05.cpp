#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int m,sum=0;
    while (n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<sum;
    return 0;
}