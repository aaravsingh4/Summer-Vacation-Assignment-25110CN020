#include<bits/stdc++.h>
using namespace std;
int rv=0;
int rev(int n)
{
    if (n==0)
    {
        return rv;
    }
    int digit=n%10;
    rv =rv *10 +digit;
    return rev(n/10);
}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    cout<<rev(n);
    return 0;
}