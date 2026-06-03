#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for (int i = 2; i <=n; i++)
    {
        int sum=0;
        for (int j = 2; j<=i; j++)
        {
            if (i%j==0)
            {
                sum+=1;
            }

        }
        if (sum>1)
        {
            cout<<"this is not prime number"<<i;
            cout<<"\n";
        }else
        {
            cout<<"this is prime number"<<i;
            cout<<"\n";
        }
    }
    return 0;
}