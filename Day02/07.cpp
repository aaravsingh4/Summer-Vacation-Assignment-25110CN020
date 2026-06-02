#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int dig,prod=1;
    while (n>0)
    {
        dig=n%10;
        prod=prod*dig;
        n=n/10;
    }
    cout<<prod;
    return 0;
}