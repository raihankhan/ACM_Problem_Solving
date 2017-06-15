#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,l;
    cin >> m >> n ;
    int arr[n];
    for(i=0;i<n;i++)  cin >> arr[i];
    sort(arr,arr+n);
    l=arr[n-1]-arr[0];
    for(i=0;i<=n-m;i++)
    {
        l=min(l,arr[i+m-1]-arr[i]);
    }
    cout << l << endl;
    return 0;
}
