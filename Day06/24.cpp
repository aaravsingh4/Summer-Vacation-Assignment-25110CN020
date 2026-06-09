#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x ";
    cin>>x;
    int n;
    cout<<"to the power ";
    cin>>n;
    int result=1;
    for (int i = 0; i < n; i++)
    {
        result=result*x;
    }
    cout<<result;
    return 0;
}