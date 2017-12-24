#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{
    lli m,n;
    cin >> m ;
    n=m%10;
    if(n==0)
        cout << m << endl;
    else if(n<=5)
        cout << m-n << endl;
    else
        cout << m+(10-n) << endl;
    return 0;
}


