#include<bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int pd =0;
    if (n==0)
    {
        return 0;
    }
    int digit;
    while (n!=0)
    {
        digit=n%10;
        pd=pd*10+digit;
        n=n/10;
    }
    return pd;
}

int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    cout<<palindrome(n);
    if (n==palindrome(n))
    {
        cout<<" this is palindrome";
    }else
    {
        cout<<" this is not palindrome";
    }
}