#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> a;
    while (cin>>n)
    {
        a.push_back(n);
    }
    for (int i = 0; i <a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}