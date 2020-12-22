#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
vector< pair<int,int> >g[107];
void clean(int n)
{
    for(int i=1;i<=n;i++) g[i].clear();
}
void dijkstra(int u,int n,int T)
{
    priority_queue< pair<int,int> > pq;
    vector<int>dis(n+2,INT_MAX);
    vector<bool>vis(n+2,0);
      dis[u]=0;
    pq.push({-dis[u],u});
      while(!pq.empty())
    {
        u=pq.top().second;
        pq.pop();
          if(vis[u]) continue;
        vis[u]=1;
          for(auto v:g[u])
        {
            if(dis[u]+v.second<dis[v.first])
            {
                dis[v.first]=dis[u]+v.second;
                pq.push({-dis[v.first],v.first});
            }
        }
    }
      if(dis[n]==INT_MAX)
        printf("Case %d: Impossible\n",T);
    else
        printf("Case %d: %d\n",T,dis[n]);
  }
  void test(int T)
{
    int n,m,u,v,w,i,j,k,p;
    scanf("%d %d",&n,&m);
    while(m--)
    {
        scanf("%d %d %d",&u,&v,&w);
        g[u].pb({v,w});
        g[v].pb({u,w});
    }
      dijkstra(1,n,T);
    clean(n);
}
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    Test();
    //test(1);
    return 0;
}
       