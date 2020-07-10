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

int main()
{
    int n,m,i,j,k,rem,rmov=0,cmov=0;

    scin2(n,m);
    int g[n+7][m+7];
    int arr[n+7][m+7],row[n+7],col[m+7];
    int brr[n+7][m+7],ro[n+7],co[m+7];
    rep(i, 1, n+1) row[i]=M,ro[i]=M;
    rep(i, 1, m+1) col[i]=M,co[i]=M;

    rep(i, 1, n+1)
    {
        rep(j,1, m+1)
        {
            scin(g[i][j]);
            row[i]=min(row[i],g[i][j]);
            co[j]=min(co[j],g[i][j]);
        }
    }

    rep(i, 1, n+1)
    {
        rep(j,1, m+1)
        {
            arr[i][j]=row[i];
        }
        rmov+=row[i];
    }

    rep(j, 1, m+1)
    {
        rep(i,1, n+1)
        {
            brr[i][j]=co[j];
        }
        cmov+=co[j];
    }

    rep(i, 1, n+1)
    {
        rep(j,1, m+1)
        {
            if(arr[i][j]!=g[i][j] and col[j]==M)
            {
                col[j]=g[i][j]-arr[i][j];
                rmov+=col[j];
                rep(k, 1, n+1)
                {
                    arr[k][j]+=col[j];
                }
            }
            if(brr[i][j]!=g[i][j] and ro[i]==M)
            {
                ro[i]=g[i][j]-brr[i][j];
                cmov+=ro[i];
                rep(k, 1, m+1)
                {
                    brr[i][k]+=ro[i];
                }
            }
        }
    }

    rep(i, 1, n+1)
    {
        rep(j,1, m+1)
        {
            if(arr[i][j]!=g[i][j])
            {
                return pf("-1\n"),0;
            }
        }
    }

    if(rmov<=cmov)
    {
        pf("%d\n",rmov);

        rep(i, 1, n+1)
        {
            if(row[i]!=M)
                while(row[i])
                {
                    pf("row %d\n",i);
                    row[i]--;
                }
        }

        rep(i, 1, m+1)
        {
            if(col[i]!=M)
                while(col[i])
                {
                    pf("col %d\n",i);
                    col[i]--;
                }
        }
    }
    else
    {
        pf("%d\n",cmov);

        rep(i, 1, n+1)
        {
            if(ro[i]!=M)
                while(ro[i])
                {
                    pf("row %d\n",i);
                    ro[i]--;
                }
        }

        rep(i, 1, m+1)
        {
            if(co[i]!=M)
                while(co[i])
                {
                    pf("col %d\n",i);
                    co[i]--;
                }
        }
    }

    return 0;
}


