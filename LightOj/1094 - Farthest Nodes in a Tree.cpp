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
  veci edges[30007];
bool visited[30007];
veci weight[30007];
int mxsum[30007];
int mpsum[30007];
int tmp,sum;
    void initialize()
{
    mem(visited, false);
    mem(mxsum, 0);
    mem(mpsum, 0);
    for(int i=0;i<30007;i++) { edges[i].clear(); weight[i].clear(); }
}
  int dfs(int x)
{
    visited[x] = true;
        for(int i=0; i<edges[x].size() ; i++)
    {
            if( visited[ edges[x][i] ] == false )
        {
           tmp = weight[x][i] + dfs( edges[x][i] );
             if( tmp >= mxsum[x] )
           {
               mpsum[x]=mxsum[x];
               mxsum[x]=tmp;
           }
           else if( tmp >= mpsum[x] )
           {
               mpsum[x] = tmp;
           }
        }
        }
    if(sum <= mxsum[x]+mpsum[x] )
        sum = mxsum[x] + mpsum[x] ;
      return mxsum[x] ;
  }
  int main()
{
    int t,n,u,v,w,i,j,k;
    //READ("in.txt");
      scin(t);
      for( k=1 ; k<=t ; k++)
    {
        initialize();
        scin(n);
          for(i=0; i<n-1; i++)
        {
            scin(u);
            scin(v);
            scin(w);
              edges[ u ].pb( v );
            edges[ v ].pb( u );
            weight[ u ].pb( w );
            weight[ v ].pb( w );
        }
          sum=tmp=0;
        dfs(0);
          pf("Case %d: %d\n", k , sum );
      }
          return 0;
}
 