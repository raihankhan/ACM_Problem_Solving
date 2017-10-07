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
	long long int a,b,c=0,i;
	cin >> a >> b ;
	if(a>b) swap(a,b);
	for(i=1;i<=a;i++)
        c+=((i%5)+b)/5;
    cout << c << endl;
    return 0;
}
