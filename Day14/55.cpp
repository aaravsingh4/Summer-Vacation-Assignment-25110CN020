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
    int max1=a[0];
    int max2=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(max1<a[i])
        {   
            max2=max1;
            max1=a[i];
        }
        else if (max1>a[i] && max2<a[i])
        {
            max2=a[i];
        }
    }
    if(max1==max2)
    {
        cout << "either all element are same or only one element is present";
    }
    else
    {
        cout << "second maximum is " << max2;
    }
    return 0;
}