#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter size : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    cout<<"Enter search element : ";
    cin>>s;
    int max=n-1,min=0,c=0;
    while(min<=max)
        {
            int mid=(max+min)/2;
            if(a[mid]==s)
             {
                cout<<"Element found at "<<mid+1<<" position";
                c++;
                break;
             }
             else if(a[mid]>s)
             {
                 max=mid-1;
             }
             else
             {
                 min=mid+1;
             }
        }
    if(c==0)
    cout<<"Element not found ";
    return 0;
}