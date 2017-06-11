#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,l,m,n,d,i,ans=0;
cin >> k >> l >> m >> n >> d ;
for(i=1;i<=d;i++)
    if(i%k==0 or i%l==0 or i%m==0 or i%n==0) ans++;
cout << ans<< endl;
return 0;
}
