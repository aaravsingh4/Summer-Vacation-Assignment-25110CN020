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
    vector<int> b;
    int c = 0;
    for(int i = 0; i <a.size(); i++)
    {
        for(int j = i + 1; j <a.size(); j++)
        {
            if(a[i] == a[j])
            {
                b.push_back(a[i]);
                c++;
                break;
            }
        }
    }
    cout << "Duplicate elements are : ";
    for(int i = 0; i < c; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}