#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int temp;
    int a;
    a=n;
    int sum=0;
    while (a!=0)
    {
        temp=a%10;
        a=a/10;
        int fact =1;
        for (int i = 1; i <=temp; i++)
        {
            fact = fact * i;
        }
        sum=sum+fact;
    }
    if (sum==n)
    {
        cout<<"this is strong number";
    }else
    {
        cout<<"this is not strong number";
    }
    return 0;
}