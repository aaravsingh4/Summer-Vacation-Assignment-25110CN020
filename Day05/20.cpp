#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int largest = 1;
    for(int i = 2; i <= n; i++)
    {   if(n % i == 0)
        {   int count = 0;
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    count++;
                }
            }
            if(count == 2)
            {
                largest = i;
            }
        }
    }
    cout << "Largest Prime Factor = " << largest;
    return 0;
}