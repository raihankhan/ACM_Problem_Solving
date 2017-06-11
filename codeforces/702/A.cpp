#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,k;
cin >> n ;
int arr[n];
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    j=1; k=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]) k++;
        if(k>j) j=k;
        if(arr[i]<=arr[i-1]) k=1;
    }
    cout << j << endl;
return 0;
}

