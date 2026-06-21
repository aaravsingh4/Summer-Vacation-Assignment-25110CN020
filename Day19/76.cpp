#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter dimensions matrix : \n";
    cin>>m>>n;

    int a[m][n];
    cout<<"Enter elements of matrix : \n";
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    int s=0;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(i==j)
    s=s+a[i][j];
    cout<<"Sum of diagonal is : "<<s;
}