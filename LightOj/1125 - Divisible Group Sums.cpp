#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
int arr[207];
lli dp[207][11][21];
int d,m,n;
  lli solve(int pos,int taken,lli sum)
{
    if(sum<0) sum+=d;
    if(taken==m) return sum==0;
    if(pos>=n) return 0;
      lli &ret=dp[pos][taken][sum];
    if(ret!=-1) return ret;
    lli res=0;
    res+=solve(pos+1,taken,sum);
    res+=solve(pos+1,taken+1,(sum+arr[pos])%d );
    return ret=res;
}
  void test(int T)
{
    int q,i;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      printf("Case %d:\n",T);
    while(q--)
    {
        scanf("%d %d",&d,&m);
        memset(dp,-1,sizeof(dp));
        printf("%lld\n",solve(0,0,0));
    }
}
void Test() {
    //freopen("input.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    Test();
    //test(1);
    return 0;
}
       