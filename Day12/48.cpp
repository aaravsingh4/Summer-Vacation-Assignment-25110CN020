#include<bits/stdc++.h>
using namespace std;
int perf(int n)
{
    int sum=0;
    for (int i = 1; i <n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }    
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    cout<<perf(n);
    if (perf(n)==n)
    {
        cout<<" this number is perfect number";
    }else
    {
        cout<<" this number is not perfect number";
    }
}