#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int dig = 0;int a,b;
    cout<<"enter the value of n";
    cin>>n;
    a=n;
    b=n;
    while (n!=0)
    {
        dig++;
        n=n/10;
    }
    int sum=0;
    int digit=0;
    while (a!=0)
    {
        digit=a%10;
        sum=sum + round(pow(digit,dig));
        a=a/10;
    }
    if (sum==b)
    {
        cout<<"this is armstrong number";
    }else
    {
        cout<<"this is not armstrong number";
    }
    return 0;
}