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
    long long int n,m;
    cin >> n >> m ;
    if(n==1)
        cout << n << endl;
    else
    if(n-m<m) cout << --m << endl;
    else cout << ++m << endl;
    return 0;
}


