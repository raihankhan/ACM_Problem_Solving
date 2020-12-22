#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;;
    cin >> t ;
    while(t--)
    {
        cin >> m ;
        cin >> n ;
        int arr[n+1];
        for(i=0;i<n;i++)
            cin >> arr[i] ;
        
       
    
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<i and arr[i]+arr[j]!=m) j++;
        
        if(arr[i]+arr[j]==m and j<i) 
        {
            cout << j+1 << " " << i+1 << endl; 
            break;
        }
    }

       
    }

}