#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,i,mx=1,r=1;
    cin >> n ;
    long long int arr[n];
    for(i=0;i<n;i++)
        scanf("%I64d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
      {
          cnt++;
          if(cnt>mx) mx=cnt;
      }
        else cnt=1;
    }
    if(mx==1) mx=cnt;
    cout << mx<< endl;
    return 0;
}
