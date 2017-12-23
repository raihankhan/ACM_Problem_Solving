#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{
    int n,m,k,i,a,b,c=0;

    cin >> n >> m ;
    k=n;
    while(n--)
    {
        cin >> a >> b ;
        if(c>=a) c=max(c,b);

    }

    if(c>=m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


