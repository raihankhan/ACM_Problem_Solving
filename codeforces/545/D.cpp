#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,time=0,i,cnt=0;
    cin >> n;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i] ;
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=time)
        {
            time+=arr[i] ; cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
