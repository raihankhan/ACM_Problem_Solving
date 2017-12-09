/*
786
Source Code by Raihan Khan Raka( optimistic olaf )
Department of Computer Science and Engineering
Comilla University
*/

#define pi 3.1416
#define  pb push_back
#define vec vector<int>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int  n,i,j,cnt=0;
    cin >> n ;
    char arr[n+2][n+2];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
           cin >> arr[i][j] ;
      for(i=0;i<=n+1;i++)
        for(j=0;j<=n+1;j++)
       {
           if(i==0 or i==n+1 or j==0 or j==n+1)
           arr[i][j]='x';
       }

       for(i=1;i<=n;i++)
       {
           cnt=0;
        for(j=1;j<=n;j++)
           {
               if(arr[i+1][j]=='o' ) cnt++;
               if(arr[i-1][j]=='o' ) cnt++;
               if(arr[i][j+1]=='o' ) cnt++;
               if(arr[i][j-1]=='o' ) cnt++;
               if(cnt%2!=0) { cout << "NO" << endl; return 0; }
           }

       }
      cout << "YES" << endl;

    return 0;
}

