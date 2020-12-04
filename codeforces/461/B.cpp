#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
#define pf printf
#define sc scanf
using namespace std;
const int sz=1e5+7;
vector<int>g[sz];
int col[sz];
lli dp[sz][2];

void dfs(int u)
{
    dp[u][1]=col[u];    //if black
    dp[u][0]=1-col[u];  //if white

    lli ways=0;
    for(auto v:g[u])
    {
        dfs(v);
        dp[u][1]=( (dp[u][1]*(dp[v][1]+dp[v][0]))%M + (dp[u][0]*dp[v][1])%M )%M;
        dp[u][0]=(dp[u][0]*(dp[v][1]+dp[v][0]))%M;
    }

}

void test(int T)
{
    int n,i,p;
    sc("%d",&n);
    for(i=1; i<n; i++)
        sc("%d",&p),g[p].pb(i);
    for(i=0; i<n; i++)
        sc("%d",&col[i]);
    dfs(0);

    pf("%lld\n",dp[0][1]);
}
void Test()
{
    int T;
    scanf("%d",&T);
    for(int cs=1; cs<=T; cs++)
        test(cs);
}
int main()
{
    //Test();
    test(1);
    return 0;
}



