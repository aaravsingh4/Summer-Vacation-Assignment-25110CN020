#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Generating the Fibonacci Series upto 10 terms"<<endl;
    int a=0;
    cout<<a<<",";
    int b=1;
    cout<<b<<",";
    int c;
    for (int i = 3; i <=10; i++)
    {
        c=a+b;
        cout<<c<<",";
        a=b;
        b=c;
    }
    return 0;
}