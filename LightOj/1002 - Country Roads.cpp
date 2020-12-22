#include<bits/stdc++.h>
// LIGHTOJ 1002
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
veci edge[505];
int d[505] , cost[505][505];
  struct data
{
    int city,dist;
     bool operator<(const data& p) const { return dist>p.dist;}
};
  void djikstra(int src)
{
    priority_queue< data> q ;
      data u,v;
      d[src]=0;
    u.city=src;
    u.dist=0;
    q.push(u);
        while(!q.empty())
    {
        u=q.top();
        q.pop();
          if(d[u.city] != u.dist)
            continue;//Optimization.itemoddhe konota ese jdi update kore fele then r korar drkr nei. CF 450D
          for(int j=0;j<edge[u.city].size();j++)
        {
            v.city=edge[u.city][j];
            v.dist= max( u.dist , cost[u.city][v.city] );
            if(d[v.city]>v.dist)
            {
                d[v.city]=v.dist;
                q.push(v);
            }
        }
    }
  }
    void initialize()
{
    for(int i=0;i<505;i++)
    {
        edge[i].clear();
        d[i]=inf;
        for(int j=0;j<505;j++)
        {
            cost[i][j]=inf;
            cost[j][i]=inf;
        }
    }
  }
int main()
{
    int t,i,j,k,n,m,src,u,v,w;
      scin(t);
      for ( i=1 ; i<= t ;i++)
    {
        scin(n);
        scin(m);
            initialize();
        for (j=0; j < m ;j++)
        {
            scin(u);
            scin(v);
            scin(w);
              if(w< cost[u][v] ) {
            edge[u].pb(v);
            edge[v].pb(u);
              cost[u][v]=w; cost[v][u]=w;
            }
          }
          scin(src);
        djikstra(src);
          pf("Case %d:\n",i);
        for(j=0;j<n;j++)
        {
            if(d[j]==inf)
                pf("Impossible\n");
            else pf("%d\n",d[j]);
        }
        }
          return 0;
}
 