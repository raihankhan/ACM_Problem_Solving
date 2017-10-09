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
	int n ,i,ca,cb;
	vector < string > b ;
	string a,c ;
	cin >> n ;
	cin >> a;
	b.pb(a);
	ca=1;
	cb=0;
	for(i=1;i<n;i++)
    {
        cin >> a ;
        if(a==b[0])
            ca++;
        else { cb++; c=a ; }
    }
    if(ca>cb) cout << b[0] << endl;
    else cout << c << endl;
    return 0;
}

