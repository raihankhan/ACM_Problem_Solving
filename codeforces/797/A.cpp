#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int k,i,j,m;
    cin >> n >> k;
    int arr[k];
    for(i=0;i<k-1;i++)
    {
        m=0;
        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {
                arr[i]=j; m=1; break;
            }
        }
        n=n/arr[i];
        if(m==0 ) {cout << "-1" << endl; return 0; }

    }

    arr[k-1]=n;
    for(i=0;i<k;i++)
        cout << arr[i] <<" " ;
   return 0;
}
