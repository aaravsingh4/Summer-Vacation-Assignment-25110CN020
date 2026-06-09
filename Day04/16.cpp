#include<bits/stdc++.h>
using namespace std;

int main(){
    int start;
    cout<<"enter the value of start";
    cin>>start;
    int range;
    cout<<"enter the value of range";
    cin>>range;
    for (int i = start; i <=range; i++)
    {  
    int dig = 0;
    int temp=i;
    int a,b;
    a=i;
    b=i;
    while (temp!=0)
    {
        dig++;
        temp=temp/10;
    }
    int sum=0;
    int digit=0;
    while (a!=0)
    {
        digit=a%10;
        sum=sum + round(pow(digit,dig));
        a=a/10;
    }
    if (sum==b)
    {
        cout<<i;
        cout<<" this is armstrong number";
        cout<<endl;
    }else
    {
        cout<<i;
        cout<<" this is not armstrong number";
        cout<<endl;
    } 
    }

    return 0;
}