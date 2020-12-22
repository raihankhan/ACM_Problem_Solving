#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[104]={0};
    int n,i,k,l;
    cin >> n ;
    for(i=1;i<=n;i++)
    {
        cin >> k ;
        arr[k]++;
    }
    for(i=1;i<=n;i++)
    {
       
        if(arr[i]==0 ) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
