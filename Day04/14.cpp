#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int a=0;
    if (n>=1)
    {
    cout<<a<<",";
    }
    int b=1;
    if (n>=2)
    {
    cout<<b<<",";
    }
    int c;
    if (n>2)
    {   
    for (int i = 2; i <n; i++)
    {
        c=a+b;
        cout<<c<<",";
        a=b;
        b=c;
    }
    }
    return 0;
}
