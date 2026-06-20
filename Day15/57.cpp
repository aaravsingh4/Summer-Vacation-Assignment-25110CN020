#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> a;
    while(cin >> n)
    {
        if(n == -1)
            break;
        a.push_back(n);
    }
    int temp;
    int b=a.size();
    for(int i=0;i<b/2;i++)
    {
        temp=a[b-1-i];
        a[b-1-i]=a[i];
        a[i]=temp;
    }
    cout<<"Reversed array is : ";
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}