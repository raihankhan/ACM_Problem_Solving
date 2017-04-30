#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,n,m,i,j=0;
    cin >> n >> a;
    for(i=1;i<=n;i++)
    {
        m=n*i;
        if(a%i==0 and a<=m)
            j++;
    }
    cout << j ;
    return 0 ;
}
