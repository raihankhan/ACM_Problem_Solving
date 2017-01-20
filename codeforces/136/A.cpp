#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin >> n ;
    int arr[n+1];
    for( i=1;i<=n;i++)
    {
        cin >> m ;
        arr[m]=i;
    }
    for(i=1;i<=n;i++)
        cout << arr[i] << " " ;
    return 0;
}
