
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
    vec v;
    int a,sum=0,d,i,j;
    int arr[6]={0};
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        v.pb(a);
        sum+=a;
    }
    int maxi=0;
    sort(v.begin(),v.end());
    for( i=0;i<5;i++)
    {
        if(v[i]==v[i+1])
        {
        d=0;
        for( j=i;j<i+3 and j<5 ;j++)
            if(v[i]==v[j] )
            d+=v[i];
        if(maxi < d) maxi=d;
        }
    }
    cout << sum-maxi << endl;
    return 0;
}
