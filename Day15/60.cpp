#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> a;
    while(cin>>n)
    {
        if(n == -1)
            break;
        a.push_back(n);
    }
    int b=a.size();
    for(int i=0;i<b;i++)
    {
        if(a[i]==0)
        {
            int temp=a[i];
            for(int j=i;j<b-1;j++)
            {
                a[j]=a[j+1];
            }
            a[b-1]=temp;
        }
    }
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
}