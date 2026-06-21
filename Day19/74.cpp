#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter dimensions matrix : \n";
    cin>>m>>n;

    int a[m][n];
    cout<<"Enter elements of 1st matrix : \n";
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    int b[m][n];
    cout<<"Enter elements of 2nd matrix : \n";
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>b[i][j];

    int c[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    c[i][j]=a[i][j]-b[i][j];

    cout<<"Difference of matrix is : \n ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<c[i][j]<<" ";
        cout<<"\n";
    }
}