#include<bits/stdc++.h>
#define lli long long int
#define Mod 998244353
using namespace std;
int main()
{
	lli n, m, res=1,i;
	scanf("%lld%lld", &n, &m);
	for (i = 1; i <= n + m; i++)
    {
		res = res * 2 % Mod;
	}
	printf("%lld\n", res);
}