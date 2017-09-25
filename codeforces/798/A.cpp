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
string s;
int checkpalin(int i, int n , int mid)
{
    int cnt=0;
    for( ; i < mid ; i++)
    {
        if(s[i]!=s[n-i]) cnt++;
    }
    return cnt;
}
using namespace std;
int main()
{
    cin >> s ;
    int x;
    int len=s.length();
    x=checkpalin(0,len-1,len/2);
    if(len%2==0)
    if(x==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    else
        if(x<=1) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}

