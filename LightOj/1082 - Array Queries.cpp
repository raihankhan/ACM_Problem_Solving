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
int  arr[100005];
int tree[300015];
int build_segment_tree(int l,int r,int node)
{
    int x,y;
      if(l==r)
    {
        tree[node]=arr[l];
        return arr[l];
    }
      x=build_segment_tree(  l  , (l+r)/2 , 2*node);
    y=build_segment_tree( (l+r)/2 +1 , r , 2*node+1 );
      tree[node]=min(x,y);
      return tree[node];
}
int query(int l,int r,int a,int b,int node)
{
    int  x  , y ;
      if(b<l or a>r) return inf;
    if(a<=l and b>=r) return tree[node];
       x=query(  l  , (l+r)/2 , a , b ,   2*node);
     y=query( (l+r)/2 + 1 , r , a , b ,  2*node+1 );
       return min(x,y);
    }
    int main()
{
    int t,n,i,q,j,val,l,r;
    FastRead;
    //READ("input.txt");
    scin(t);
    for(i=1;i<=t;i++)
    {
        scin(n);
        scin(q);
        for(j=1;j<=n;j++) scin(arr[j]);
          build_segment_tree(1,n,1);
          pf("Case %d:\n", i);
        for(j=0;j<q;j++)
        {
            scin(l);
            scin(r);
            pf("%d\n", query(1,n,l,r,1));
        }
    }
          return 0;
}
 