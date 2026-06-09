#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    int rem;
    vector<int>binary;
    while (n!=0)
    {
        rem=n%2;
        binary.push_back(rem);
        n=n/2;
    }
    int count=0;
    for (int i = 0; i <binary.size(); i++)
    {
        if (binary[i]==1)
        {
            count++;
        }
        
    }
    cout<<"number of bits ";
    cout<<count;
    return 0;
}