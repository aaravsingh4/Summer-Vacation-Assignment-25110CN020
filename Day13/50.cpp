#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>a;
    while (cin>>n)
    {
        a.push_back(n);
    }
    float sum=0;
    for (int i = 0; i <a.size(); i++)
    {
        sum+=a[i];
    }
    cout<<"sum "<<sum;
    cout<<endl;
    float average=sum/a.size();
    cout<<"average "<<average;
    return 0;
}