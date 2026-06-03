#include<iostream>
using namespace std;
int lcm(int a,int b)
{
    int lcm;
    for(int i=a;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}
int main()
{
    int a,b,l=1;
    cout<<"Enter a number :";
    cin>>a>>b;
    l=lcm(a,b);
    cout<<"LCM ="<<l;
    return 0;
}