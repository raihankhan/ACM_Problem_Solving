#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
int dig[12];
lli dp[12][12];
int m,n;
  lli solve(int pos,int prev)
{
    if(pos==n) return 1;
    if(dp[pos][prev]!=-1) return dp[pos][prev];
    lli res=0,i;
    if(pos==0)
    {
        for(i=0;i<m;i++)
        res+=solve(pos+1,dig[i]);
    }
    else
    {
        for(i=0;i<m;i++)
        {
            if(abs(prev-dig[i])<=2)
            res+=solve(pos+1,dig[i]);
        }
    }
      return dp[pos][prev]=res;
}
  void test(int T)
{
    int i;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        scanf("%d",&dig[i]);
    memset(dp,-1,sizeof(dp));
    printf("Case %d: %lld\n",T,solve(0,0));
  }
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    Test();
    return 0;
}
     