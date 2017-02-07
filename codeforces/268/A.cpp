#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c;
    cin >> n ;
    int arr[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            cin >> arr[i][j] ;
    c=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           if(arr[i][0]==arr[j][1])
                c+=1;
    cout << c << endl ;
    return 0;
}
