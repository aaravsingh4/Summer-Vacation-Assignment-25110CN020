#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>a;
    while (cin>>n)
    {
        a.push_back(n);
    }
    int largest=a[0];
    int smallest=a[0];
    for (int i = 1; i <a.size(); i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
        if (a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    cout<<"largest element is "<<largest;
    cout<<endl;
    cout<<"smallest element is "<<smallest;
    return 0;
}