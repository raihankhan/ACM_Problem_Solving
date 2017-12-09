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
    int n,b,d,m,i,cnt=0;
    long long int sum=0;
    cin >> n >> b >> d ;
    for(i=0;i<n;i++)
    {
        cin >> m ;
        if(m>b) m=0;
        sum+=m;
        if(sum>d) { cnt++; sum=0; }
    }
    cout << cnt << endl;
    return 0;
}

