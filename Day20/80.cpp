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

    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=a[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is : "<<sum<<"\n";
    }
    return 0;
}