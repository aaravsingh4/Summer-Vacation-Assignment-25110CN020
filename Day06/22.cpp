#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter binary number ";
    cin>>s;
    vector<int>binary;
    for (int i = 0; i <s.size(); i++)
    {
        binary.push_back(s[i] - '0');
    }
    int decimal=0;
    int power = binary.size()-1;

    for (int i=0;i<binary.size();i++)
    {
        decimal=decimal + binary[i] * pow(2,power);
        power--;
    }
    cout<<decimal;
    return 0;
}