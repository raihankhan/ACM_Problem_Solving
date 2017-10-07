/*
786
Source Code by Raihan Khan Raka( optimistic olaf )
Department of Computer Science and Engineering
Comilla University
*/

#define pi 3.1416
#define  pb push_back
//#define vec vector<int>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	vector < long long int > ab ;
	int n,i;
	long long int a,x=-1;
	cin >> n;
	for( i=0;i<n;i++)
    {
        scanf("%I64d",&a);
        while(a%2==0) a=a/2;
        while(a%3==0) a=a/3;
        ab.pb(a);
    }
    sort(ab.begin(),ab.end());
    if(ab[0]!=ab[n-1])
    cout <<  "No" << endl;
    else
    cout << "Yes" << endl;
    return 0;
}

