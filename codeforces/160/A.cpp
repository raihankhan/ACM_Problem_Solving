#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sm1=0,sm2=0,x=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        {scanf("%d",&arr[i]); sm1+=arr[i]; }
        sort(arr,arr+n);

        for(i=n-1;i>=0;i--)
        {
            x++;
            sm2+=arr[i];
            if(sm2>(sm1-sm2)) break;
        }
    cout << x << endl;
    return 0;
}
