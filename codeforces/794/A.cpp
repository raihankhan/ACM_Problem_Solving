#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,n,sum=0,m;
    cin >> a >> b >> c ;
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cin >> m ;
        if(m<c and m>b) sum++;
    }
    cout << sum << endl;
    return 0;
}
