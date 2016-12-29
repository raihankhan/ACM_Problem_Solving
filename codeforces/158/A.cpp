#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    int arr[100];
    cin >> n >> k ;
    j=0;
    for(i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }

        for(i=0;i<n;i++)
    {
        if(arr[k-1]==0)
        {
            if(arr[i]>arr[k-1])
            j++;
        }
       else if(arr[i]>=arr[k-1])
            j++;
    }

    cout << j << endl;

    return 0;
}
