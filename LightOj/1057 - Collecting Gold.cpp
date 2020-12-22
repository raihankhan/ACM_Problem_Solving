#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
int m,n,totalgold;
int dp[16][1<<15];
vector< pair<int,int> > gold;
pair<int,int> root;
  int dis(pair<int,int>&a, pair<int,int>&b)
{
    return max( abs(a.first-b.first), abs(a.second-b.second));
}
  int solve(int curr,int state)
{
   // cout << curr << " " << state << endl;
    if(__builtin_popcount(state)==totalgold) return dis(gold[curr-1],root);
    int &ret=dp[curr][state];
    if(ret!=-1) return ret;
      int res=INT_MAX;
    if(curr==0)
    {
        for(int i=0;i<totalgold;i++)
            res=min(res, dis(root,gold[i]) + solve(i+1,state|(1<<i)));
    }
    else
    {
        for(int i=0;i<totalgold;i++)
        {
            if((state&(1<<i))==0)
            res=min(res,dis(gold[curr-1],gold[i])+solve(i+1,state|(1<<i)));
        }
    }
      return ret=res;
  }
void test(int T)
{
    scanf("%d %d",&m,&n);
    string s;
    gold.clear();
      for(int i=0;i<m;i++)
    {
        cin >> s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='x') root={i,j};
            if(s[j]=='g') gold.push_back({i,j});
        }
    }
      totalgold=gold.size();
    int ans;
      memset(dp,-1,sizeof(dp));
     if(totalgold==0)  ans=0;
    else ans=solve(0,0);
    printf("Case %d: %d\n",T,ans);
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
     