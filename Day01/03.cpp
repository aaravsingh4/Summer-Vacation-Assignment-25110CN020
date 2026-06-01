#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
}