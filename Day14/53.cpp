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
    int b=0;
    cout << "enter the element to be searched ";
    cin >> k;
    for(int i=0;i<a.size();i++)
    {
        if(k==a[i])
        {   b++;
            cout << "found at position " << i+1 << "\n";
        }
    }
    if(b==0)
    {
        cout << "element not found";
    }
}