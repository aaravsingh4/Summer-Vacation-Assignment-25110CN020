#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>a;
    while (cin>>n)
    {
        if (n==-1)
        {
            break;
        }
        a.push_back(n);
    }
    int k;
    cout<<"enter the element whose frequency you want ";
    cin>>k;
    int count=0;
    for (int i = 0; i <a.size(); i++)
    {
        if (a[i]==k)
        {
            count++;
        }
        
    }
    cout<<"this element "<<k<<" is occuring "<<count<<" times";
    return 0;
}