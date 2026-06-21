#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> a;
    while(cin >> n)
    {
        if(n == -1)
            break;
        a.push_back(n);
    }
    int s;
    cout<<"Enter sum : ";
    cin>>s;
    cout<<"Pair are : ";
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(i+j==s)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
}