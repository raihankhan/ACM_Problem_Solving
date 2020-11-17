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
#define       scin3(xx,yy,zz)      scanf("%d %d %d",&xx,&yy,&zz)
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

class dt
{
public:
    int x1,x2,x3,y1,y2,y3;
    dt(int a,int b,int c,int d,int e,int f)
    {
        x1=a,y1=b;
        x2=c,y2=d;
        x3=e,y3=f;
    }
};
vector<dt>ans;
int arr[107][107];
void fun1(int i,int j)
{
    if(arr[i][j]==1)
    {
        ans.pb(dt(i,j,i+1,j,i+1,j+1));
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i,j,i+1,j,i,j+1));
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i,j,i,j+1,i+1,j+1));
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
    }
    else if(arr[i][j+1]==1)
    {
        ans.pb(dt(i,j,i+1,j,i,j+1));
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i,j,i,j+1,i+1,j+1)); //RU
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i,j+1,i+1,j,i+1,j+1));
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
    }
    else if(arr[i+1][j]==1)
    {
        ans.pb(dt(i,j,i,j+1,i+1,j)); //LU
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i,j,i+1,j,i+1,j+1)); //LD
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i+1,j,i+1,j+1,i,j+1)); //RD
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
    }
    else if(arr[i+1][j+1]==1)
    {
        ans.pb(dt(i,j,i,j+1,i+1,j+1)); //RU
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i,j,i+1,j,i+1,j+1)); //LD
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        ans.pb(dt(i+1,j,i+1,j+1,i,j+1)); //RD
        arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
    }
}

void fun2(int i,int j)
{
    pair<int,int>zero;
    vecp one;
    if(arr[i][j]==0)
        zero= {i,j};
    else
        one.pb({i,j});
    if(arr[i][j+1]==0)
        zero= {i,j+1};
    else
        one.pb({i,j+1});
    if(arr[i+1][j]==0)
        zero= {i+1,j};
    else
        one.pb({i+1,j});
    if(arr[i+1][j+1]==0)
        zero= {i+1,j+1};
    else
        one.pb({i+1,j+1});

    ans.pb(dt(zero.ff,zero.ss,one[0].ff,one[0].ss,one[1].ff,one[1].ss));
    arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
    fun1(i,j);
}

void fun3(int i,int j)
{
    if(arr[i][j]==1 and arr[i][j+1]==1 and arr[i+1][j]==1)
        ans.pb(dt(i,j,i,j+1,i+1,j)); //LU
    else if(arr[i][j]==1 and arr[i+1][j]==1 and arr[i+1][j+1]==1)
        ans.pb(dt(i,j,i+1,j,i+1,j+1)); //LD
    else if(arr[i+1][j]==1 and arr[i+1][j+1]==1 and arr[i][j+1]==1)
        ans.pb(dt(i+1,j,i+1,j+1,i,j+1)); //RD
    else if(arr[i][j]==1 and arr[i][j+1]==1 and arr[i+1][j+1]==1)
        ans.pb(dt(i,j,i,j+1,i+1,j+1)); //RU

    arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
}
void fun4(int i,int j)
{
    ans.pb(dt(i,j,i,j+1,i+1,j)); //LU
    arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
    fun1(i,j);
}
void checker(int i,int j)
{
    int sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
    if(sum==0)
        return;
    else if(sum==1)
    {
        fun1(i,j);
    }
    else if(sum==2)
    {
        fun2(i,j);
    }
    else if(sum==3)
    {
        fun3(i,j);
    }
    else if(sum==4)
    {
        fun4(i,j);
    }
}
void test(int T)
{
    int n,m,i,j,k;
    string s;
    scin2(n,m);

    rep(i, 1, n+1)
    {
        cin >> s;
        rep(j, 1, m+1)
        arr[i][j]=s[j-1]-'0';
    }
    ans.clear();

    rep(i , 1 , n-1)
    {
        rep(j , 1 , m+1)
        if(arr[i][j])
        {
            if(j==m)
            {
                ans.pb(dt(i,j,i+1,j,i+1,j-1)); //RU
                arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
            }
            else
            {
                ans.pb(dt(i,j,i+1,j,i+1,j+1)); //LU
                arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
            }
        }
    }

    if(m&1)
    {
        if(arr[n-1][m])
        {
            ans.pb(dt(n-1,m,n-1,m-1,n,m-1));
            arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        }
        if(arr[n][m])
        {
            ans.pb(dt(n,m,n,m-1,n-1,m-1));
            arr[ans.back().x1][ans.back().y1]^=1,arr[ans.back().x2][ans.back().y2]^=1,arr[ans.back().x3][ans.back().y3]^=1;
        }
    }

    i=n-1;
    repx(j , 1 , m , 2 )
    {
        checker(i,j);
    }

    k=ans.size();
    /*
    rep(i, 1, n+1)
    {
        rep(j, 1, m+1)
        cout << arr[i][j] ;
        pfn;
    }
    */


    pf("%d\n",k);
    rep(i, 0, k)
    {
        pf("%d %d %d %d %d %d\n",ans[i].x1,ans[i].y1,ans[i].x2,ans[i].y2,ans[i].x3,ans[i].y3);
    }

}
void Test()
{
    int T;
    scanf("%d\n",&T);
    for(int cs=1; cs<=T; cs++)
        test(cs);
}
int main()
{
    Test();
    //test(1);
    return 0;
}

