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
bool dp[p5][5];
bool vis[p5][5];

veci sol;

bool solve(int ind,int a,int b,int c,int d,int now)
{
    if(a+b+c+d==0) return 1;
    if(ind==0)
    {
        if(a) { if(solve(ind+1,a-1,b,c,d,0)) { sol.pb(0); return 1; } }
        if(b) { if(solve(ind+1,a,b-1,c,d,1)) { sol.pb(1); return 1; } }
        if(c) { if(solve(ind+1,a,b,c-1,d,2)) { sol.pb(2); return 1; } }
        if(d) { if(solve(ind+1,a,b,c,d-1,3)) { sol.pb(3); return 1; } }
    }

    bool &ret = dp[ind][now];
    if(vis[ind][now]) return ret;
    else vis[ind][now]=1;

    if(now==0)
    {
        if(b)
        {
            ret=solve(ind+1,a,b-1,c,d,1);
            if(ret) { sol.pb(1); return ret; }
        }
    }
    if(now==1)
    {
        if(a)
        {
            ret=solve(ind+1,a-1,b,c,d,0);
            if(ret) { sol.pb(0); return ret; }
        }
        if(c)
        {
            ret=solve(ind+1,a,b,c-1,d,2);
            if(ret) { sol.pb(2); return ret; }
        }
    }
    if(now==2)
    {
        if(b)
        {
            ret=solve(ind+1,a,b-1,c,d,1);
            if(ret) { sol.pb(1); return ret; }
        }
        if(d)
        {
            ret=solve(ind+1,a,b,c,d-1,3);
            if(ret) { sol.pb(3); return ret; }
        }
    }
    if(now==3)
    {
        if(c)
        {
            ret=solve(ind+1,a,b,c-1,d,2);
            if(ret) { sol.pb(2); return ret; }
        }
    }

    return ret;

}

int main()
{
    int a,b,c,d;
    cin >> a >>  b >> c >> d;
    if(solve(0,a,b,c,d,-1))
    {
        int i;
        reverse(all(sol));
        cout << "YES" << endl;
        rep(i , 0 , sol.size()) cout << sol[i] << " ";
        pfn;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}



