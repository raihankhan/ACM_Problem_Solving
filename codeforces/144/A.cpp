#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,min=101,max=0,p,q;
    cin >> n ;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]<=min) { min=arr[i] ; p=i;}
        if(arr[i]>max) {max=arr[i]; q=i;}
    }
    if(p>q) cout << q+n-p - 1 << endl;
    else cout << q+n-p-2 << endl;
    return 0;
}
