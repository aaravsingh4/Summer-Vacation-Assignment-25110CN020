#include<bits/stdc++.h>
using namespace std;

int arm(int n)
{
    int dig = 0;
    int a;
    a=n;
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
    return sum;
}

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<arm(n);
    if (n==arm(n))
    {
        cout<<" this is armstrong number";
    }
    else
    {
        cout<<" this not armstrong number";
    }
}