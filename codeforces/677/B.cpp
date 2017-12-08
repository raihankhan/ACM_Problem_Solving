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
    long long int h,k,a,len=0,n,sec=0,i;
    cin >> n >> h >> k ;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(len+a>h) {sec++; len=0; }
        len=len+a;
        sec+=len/k;
        len=len%k;
    }
    if(len>0) sec++;
    cout << sec << endl;

    return 0;
}

