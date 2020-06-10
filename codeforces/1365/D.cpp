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
#define       inf                  1LL << 62
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
#define       test(t)              int t; cin >> t; while(t--)
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

int dx4[5] = {-1, 1, 0,  0};
int dy4[5] = {0,  0, -1, 1};
int dx8[9] = {0,  0, 1, -1, -1, 1, -1,  1};
int dy8[9] = {-1, 1, 0,  0,  1, 1, -1, -1};
int knightx[9] = {-2, -2, -1, -1,  1, 1, 2,  2};
int knighty[9] = {-1,  1, -2,  2, -2, 2, -1, 1};
bool valid( int r, int c, int x, int y )
{
    if( x >= 1 && x <= r && y >= 1 && y <= c )
        return 1 ;
    return 0 ;
}


using namespace std;

void err(istream_iterator<string> it)
{
    cerr << endl;
}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr  << "[ " << *it << " = " << a << " ] " ;
    err(++it, args...);
}
///...............................Code Starts Here........................................
char maze[102][52][52];
int t,n,m,cntg,cntb;
vecp g[102],b[102],e[102];
bool vis[102][52][52];

void clean()
{
    int i,j;
    rep(i,0,n) rep(j,0,m) vis[t][i][j]=0;
}

void dfsg(int x,int y)
{
    if(maze[t][x][y]=='#') return;
    if(maze[t][x][y]=='G')
        cntg++;
    vis[t][x][y]=1;
    int i,xn,yn;
    rep(i, 0, 4)
    {
        xn=x+dx4[i];
        yn=y+dy4[i];
        if(xn>=0 and xn<n and yn>=0 and yn<m)
        {
            if(!vis[t][xn][yn] and maze[t][xn][yn]!='#')
                dfsg(xn,yn);
        }
    }
}
void dfsb(int x,int y)
{
    if(maze[t][x][y]=='#') return;
    if(maze[t][x][y]=='B')
        cntb++;
    vis[t][x][y]=1;
    int i,xn,yn;
    rep(i, 0, 4)
    {
        xn=x+dx4[i];
        yn=y+dy4[i];
        if(xn>=0 and xn<n and yn>=0 and yn<m)
        {
            if(!vis[t][xn][yn] and maze[t][xn][yn]!='#')
                dfsb(xn,yn);
        }
    }
}
int main()
{
    int i,j,k;
    IOS;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;

        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                char &p=maze[t][i][j];
                cin >> p ;
                if(p=='.')
                    e[t].pb({i,j});
                if(p=='G')
                    g[t].pb({i,j});
                if(p=='B')
                    b[t].pb({i,j});
            }
        }
        int xn,yn;
        rep(i, 0, b[t].size() )
        {
            rep(j, 0, 4 )
            {
                xn=b[t][i].ff+dx4[j];
                yn=b[t][i].ss+dy4[j];

                if(xn>=0 and xn<n and yn>=0 and yn<m)
                {
                    if(maze[t][xn][yn]=='.' or maze[t][xn][yn]=='G')
                    {
                        maze[t][xn][yn]='#';
                    }
                }
            }
        }

        cntg=0,cntb=0;
        clean();
        dfsb(n-1,m-1);
        clean();
        dfsg(n-1,m-1);

        //error(cntb,cntg);

        if(cntb==0 and cntg==g[t].size())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}



