#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  Raihan Khan Raka  ( raihankhanraka@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering                                                          ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

/*....................................Values................................................*/
#define       p5                   100007
#define       p6                   1000007
#define       PI                   acos(-1)
#define       M                    1000000007
#define       white                0
#define       gray                 1
#define       black                2
/*....................................Functions.............................................*/
#define       sqr(x)               x*x
#define       sc                   scanf
#define       pf                   printf
#define       pfn                  printf("\n")
#define       scin(x)              sc("%d",&(x))
#define       scin2(xx,zz)         scanf("%d %d",&xx,&zz)
#define       scln(x)              sc("%lld",&(x))
#define       scln2(xx,zz)         scanf("%lld %lld",&xx,&zz)
#define       min3(a,b,c)          min(a,b<c?b:c)
#define       max3(a,b,c)          max(a,b>c?b:c)
#define       all(v)               v.begin(), v.end()
#define       ok                   cout << "ok" << endl
#define       mem(x,y)             memset(x,y,sizeof(x))
#define       clr(a)               a.clear()
#define       READ(f)              freopen(f, "r", stdin)
#define       WRITE(f)             freopen(f, "w", stdout)

/*...................................Data_Types............................................*/
#define       lli                  long long int
#define       ull                  unsigned long long int
#define       pii                  pair < int, int>
#define       pll                  pair < ll, ll>
#define       veci                 vector<int>
#define       vecl                 vector<long long int>
#define       vecp                 vector<  pair<int,int> >
#define       mapstrint            map< string , int >
#define       mapstrstr            map< string , string >
#define       mapint               map< int, int >
#define       uset                 unordered_set
#define       umap                 unordered_map
#define       pq                   priority_queue

#define       pb                   push_back
#define       mp                   make_pair
#define       ff                   first
#define       ss                   second

/*.....................................Loops...............................................*/
#define       rep( i , a , b )     for( i=a ; i<b ; i++)
#define       rev( i , a , b )     for( i=a ; i>=b ; i--)
#define       repx( i ,a,b, x)     for( i=a ; i<b ; i+=x)
#define       test(t)              int t; scin(t); while(t--)
#define       doshomik(x)          fixed << setprecision(x)
#define       IOS                  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};

///------------------------------- Mudular functions----------------------------------------
/*
inline lli power(lli x, lli y){ lli temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
inline lli add(lli a, lli b) {a += b; return a >= M ? a - M : a;}
inline lli sub(lli a, lli b) {a -= b; return a < 0 ? a + M : a;}
inline lli mul(lli a, lli b) {return  (a * b) % M;}
lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}
lli bigmod(lli n, lli k )
{
    lli ans=1;
    while(k)
    {
        if(k&1)
            ans=(ans*n)%M;
        k=k>>1;
        n=(n*n)%M;
    }

    return ans;
}
*/
///----------------------------------Graph moves----------------------------------------
/*
int dx4[5] = {1, -1, 0,  0};
int dy4[5] = {0,  0, 1, -1};
int dx8[9] = {0,  0, 1, -1, -1, 1, -1,  1};
int dy8[9] = {-1, 1, 0,  0,  1, 1, -1, -1};
int knightx[9] = {-2, -2, -1, -1,  1, 1, 2,  2};
int knighty[9] = {-1,  1, -2,  2, -2, 2, -1, 1};
bool valid( int r , int c , int x , int y ){ if( x >= 1 && x <= r && y >= 1 && y <= c ) return 1 ; return 0 ; }
*/

using namespace std;

void err(istream_iterator<string> it) { cerr << endl; }
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) { cerr  << "[ " << *it << " = " << a << " ] " ; err(++it, args...);  }
///...............................Code Starts Here........................................
class Edge
{
public:
    int u,v,w,idu,idv;
}edge[p5];

vecp g[1007];
veci bad;
int n,m,l,s,t;

lli dijkstra(int u)
{
    priority_queue< pair<lli,int> > q;
    lli inf=1e18;
    vecl dis(n,inf);
    vector<bool>vis(n,false);
    dis[s]=0;
    q.push({dis[s],s});

    while(!q.empty())
    {
        u=q.top().ss;
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;

        for(auto v:g[u])
        {
            if( dis[u]+v.ss<dis[v.ff])
            {
                dis[v.ff]=dis[u]+v.ss;
                q.push({-dis[v.ff],v.ff});
            }
        }
    }

    return dis[t];
}

void print_edges()
{
    pf("YES\n");
    int i;
    rep(i , 0 , m)
    pf("%d %d %d\n",edge[i].u,edge[i].v,edge[i].w);
}

int main()
{
    scanf("%d %d %d %d %d",&n,&m,&l,&s,&t);

    int i,u,v,w;
    lli need;
    rep(i , 0 , m)
    {
        scanf("%d %d %d",&u,&v,&w);
        if(w)
        {
            g[u].pb({v,w});
            g[v].pb({u,w});
        }
        else
        {
            w=1;
            g[u].pb({v,w});
            g[v].pb({u,w});
            bad.pb(i);
        }

        edge[i].u=u;
        edge[i].v=v;
        edge[i].w=w;
        edge[i].idu=g[u].size()-1;
        edge[i].idv=g[v].size()-1;
    }

    lli sl=dijkstra(s);

    if(l<sl) return pf("NO\n")&0;
    else if(l==sl)
    {
        print_edges();
        return 0;
    }
    else
    {
        for(auto i:bad)
        {
            need=l-sl;
            if(!need)
            {
                print_edges();
                return 0;
            }

            g[edge[i].u][edge[i].idu].ss+=need;
            g[edge[i].v][edge[i].idv].ss+=need;
            edge[i].w+=need;
            sl=dijkstra(s);
            //error(sl);
        }
    }

    need=l-sl;
    if(!need)
        print_edges();
    else
    pf("NO\n");

    return 0;
}


