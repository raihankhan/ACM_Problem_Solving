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

#define       IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

int n,m;
char hor[30],ver[30];
bool vis[30][30];
stack< pair<int,int> > topsort;
bool valid(int i,int j)
{
    if(i>0 and i<n+1 and j>0 and j<m+1)
        return 1;
    return 0;
}
void dfs(int i,int j,int mod)
{
    vis[i][j]=1;
    //cout << i << " "<< j << endl;
    if(hor[i]=='>')
        if(valid(i,j+1) and !vis[i][j+1])
            dfs(i,j+1,mod);
    if(hor[i]=='<')
        if(valid(i,j-1) and !vis[i][j-1])
            dfs(i,j-1,mod);
    if(ver[j]=='v')
        if(valid(i+1,j) and !vis[i+1][j])
            dfs(i+1,j,mod);
    if(ver[j]=='^')
        if(valid(i-1,j) and !vis[i-1][j])
            dfs(i-1,j,mod);

    if(mod)
        topsort.push({i,j});
}

int main()
{
    int i,j,com=0,a,b;

    scin2(n,m);

    rep(i, 1, n+1) cin >> hor[i];
    rep(i, 1, m+1) cin >> ver[i];

    rep(i, 1, n+1)
    {
        rep(j, 1, m+1)
        {
            if(!vis[i][j])
                dfs(i,j,1);
        }
    }

    mem(vis,false);
    rep(i, 1, n+1) hor[i]= ( hor[i]=='>'?'<':'>');   // reversing edges
    rep(i, 1, m+1) ver[i]= ( ver[i]=='^'?'v':'^');

    while(!topsort.empty())                          // finding scc
    {
        i=topsort.top().ff;
        j=topsort.top().ss;
        if(!vis[i][j])
            com++,dfs(i,j,0);                        // reverse edge dfs
        topsort.pop();
    }

    if(com==1)
        pf("YES\n");
    else
        pf("NO\n");


#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}

