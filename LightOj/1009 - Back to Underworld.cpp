#include<bits/stdc++.h>
  #define       PI                        acos(-1)
#define       min3(a,b,c)        min(a,min(b,c))
#define       max3(a,b,c)       max(a,max(b,c))
#define       READ(f)             freopen(f, "r", stdin)
#define       WRITE(f)            freopen(f, "w", stdout)
#define       lli                         long long int
#define       ull                        unsigned long long int
#define       pii                       pair < int, int>
#define       pll                        pair < ll, ll>
#define       sc                       scanf
#define       scin(x)                sc("%d",&(x))
#define       scln(x)                sc("%lld",&(x))
#define       pf                        printf
#define       veci                    vector<int>
#define       vecl                    vector<long long int>
#define       vecp                   vector<  pair<int,int> >
#define       pb                      push_back
#define       inf                      1<<30
#define       mp                     make_pair
#define       ss                      stringstream
#define       all(v)                  v.begin(), v.end()
#define       mem(x,y)          memset(x,y,sizeof(x))
#define       FastRead         ios_base::sync_with_stdio(0);cin.tie(0)
#define       M                      1000000007
//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;
veci grph[20006];
int  vis[20006];
bool s;
int black,red;
void dfs(int src, bool clr)
{
    vis[src]=2;
    if(clr==0) black++; else red++;
      int i;
    for(i=0;i<grph[src].size();i++)
        if( vis[grph[src][i] ] == 1)
            dfs( grph[src][i] , !clr );
}
  int main()
{
    int n,t,i,j,k,p,m,u,v,sum;
    scin(t);
    for(i=1;i<=t;i++)
    {
        scin(n);
        for(j=0;j<20004;j++) grph[j].clear();
        mem(vis,0);
        for(j=0;j<n;j++)
        {
            scin(u);
            scin(v);
            vis[u]=vis[v]=1;
            grph[u].pb(v);
            grph[v].pb(u);
        }
          sum=0;
        for(j=0;j<20004;j++)
        {
            if(vis[j]==1)
            {
                black=0; red=0;
                s=0;
                  dfs(j,s);
                  sum+=max(black,red);
            }
        }
          cout << "Case " << i << ": " << sum << endl;
      }
          return 0;
}
 