#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int dig,rev=0;
    while (n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    cout<<rev;
    return 0;
}