#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter dimensions 1st matrix : \n";
    cin>>m>>n;

    int x,y;
    cout<<"Enter dimensions 2nd matrix : \n";
    cin>>x>>y;

    if(n==x)
    {
        int a[m][n];
        cout<<"Enter elements of 1st matrix : \n";
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];

        int b[x][y];
        cout<<"Enter elements of 2nd matrix : \n";
        for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
        cin>>b[i][j];

        int c[m][y];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<y;j++)
            {
                int sum=0;
                for(int k=0;k<x;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        cout<<"Answer is : \n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<y;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else
    cout<<"Multiplication is not possible";
    return 0;
}