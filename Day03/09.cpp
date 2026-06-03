#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int sum=0;
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            cout<<"number is not prime number";
            return 0;
        } 
    }
    cout<<"number is prime number";
    return 0;
}