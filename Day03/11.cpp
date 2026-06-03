#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int hcf;
    for(int i=1; i<=a&&i<=b ;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    return hcf;
}
int main()
{
    int a,b,hcf=1;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    hcf=gcd(a,b);
    cout<<"HCF ="<<hcf;
}