#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>a;
    while (cin>>n)
    {
        a.push_back(n);
    }
    int even=0;
    int odd=0;
    for (int i = 0; i <a.size(); i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }else
        {
            odd++;
        }    
    }
    cout<<"number of even elements is "<<even;
    cout<<endl;
    cout<<"number of odd elements is "<<odd;
    return 0;
}