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

int dx4[5] = {1, -1, 0,  0};
int dy4[5] = {0,  0, 1, -1};
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

vector< vector<lli> > dp;
vector< vector<char> > v;
lli h,w,k;
void initialize_dp(vector< vector<lli> >&dp)
{
    lli i,j;
    rep(i , 1 , h+1)
    rep(j , 1 , w+1) dp[i][j]=1LL<<32;
}
lli bfs(lli x1,lli y1,lli x2, lli y2)
{
    lli i,j,x,y,a,b,level=0;

    queue< pair<lli,lli> > q;
    q.push({x1,y1});
    dp[x1][y1]=level;

    while(!q.empty())
    {
        x=q.front().ff;
        y=q.front().ss;
        //vis[x][y]=1;
        q.pop();

        rep(i, 0, 4)
        {
            rep(j, 1, k+1 )
            {
                a=x+(j*dx4[i]);
                b=y+(j*dy4[i]);

                if(valid(h,w,a,b))
                {
                    if(v[a][b]!='@' and dp[a][b]>dp[x][y])
                    {
                        if(dp[a][b]>(dp[x][y]+1)) dp[a][b]=dp[x][y]+1,q.push({a,b});
                    }
                    else
                        break;
                }
                else
                    break;
            }
        }
    }
    if(dp[x2][y2]==(1LL<<32)) dp[x2][y2]=-1;
    return dp[x2][y2];

}

int main()
{
    IOS;
    lli x1,x2,y1,y2,i,j;

    cin >> h >> w >> k >> x1 >> y1 >> x2 >> y2;
    v.resize(h+3);
    dp.resize(h+3);

    rep(i, 1, h+1)
    {
        v[i].resize(w+3);
        dp[i].resize(w+3);
        rep(j, 1, w+1)
        {
            cin >> v[i][j];
        }
    }

    initialize_dp(dp);
    dp[x1][y1]=0;
    lli mini=bfs(x1,y1,x2,y2);

    cout << mini << endl;


    return 0;
}



