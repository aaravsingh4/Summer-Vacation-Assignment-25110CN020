#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int rem;
    cout<<"enter the value of n";
    cin>>n;
    vector<int> binary;
    while (n!=0)
    {   
        rem=n%2;
        binary.push_back(rem);
        n=n/2;

    }
    for (int i = binary.size()-1; i >=0; i--)
    {
        cout<<binary[i];
    }
    
    return 0;

}