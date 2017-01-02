#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],i,j,k;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    for(i=n-1;i>=0 ; i--)
    {
        for(j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               k=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=k;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        cout << arr[i] << " ";
    }
        cout << arr[n-1] << endl;
    return 0;

}
