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
    int n,x,i,a,sum=0;
    cin >> n >> x ;
    for(i=0;i<n;i++)
    { cin >> a; sum+=a; }
    if(sum<0)
        sum=-sum;
    if(sum==0) {cout << "0" << endl; return  0;}
	if(sum%x==0) {cout << sum/x << endl; return 0;}
	else {cout << (sum/x) + 1<< endl; return 0;}

    return 0;
}

