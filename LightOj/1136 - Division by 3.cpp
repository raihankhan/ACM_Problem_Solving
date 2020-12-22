#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,m,n,l;
    cin >> t ;
    for(k=1;k<=t;k++)
    {
    long long int a,b;
    if(a>b) swap(a,b);
    cin >> a >> b ;
    if(b%3==0) b++;
    m=b-a ;
    n=m/3;
    l=m-n;
    if((a+1)%3==0 and (b-1)%3 !=0 ) l++;
    cout << "Case " << k << ": " << l << endl ;
    }
    return 0;
}
 