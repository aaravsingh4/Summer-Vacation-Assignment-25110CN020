#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter dimension of square matrix : \n";
    cin>>n;

    int a[n][n];
    cout<<"Enter elements of matrix : \n";
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    int b[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    b[i][j]=a[j][i];

    int c=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(a[i][j]==b[i][j])
        c++;
    }

    if(c==n*n)
    cout<<"Matrix is Symmetric";
    else
    cout<<"Not Symmetric";
    return 0;
}