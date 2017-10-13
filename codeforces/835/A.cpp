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
    int s,v1,v2,t1,t2,k,m;
    cin >> s >> v1 >> v2 >> t1 >> t2 ;

	k=(s*v1) + (2*t1);
	m=(s*v2) + (2*t2);
	if(k<m)
        cout << "First" << endl;
    else if(k>m) cout << "Second" << endl;
    else  cout << "Friendship" << endl;
    return 0;
}

