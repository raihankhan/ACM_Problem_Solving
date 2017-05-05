#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0,arr[101];
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cin >> arr[i] ;
        if(arr[i] % 2 == 0 )
            { arr[i]=-1 ; cnt++ ; }
    }
    if(cnt==1)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i] == -1) { cout << i+1 << endl ; break; }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i] != -1) { cout << i+1 << endl; break; }
        }
    }
    return 0;
}
