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
int arr[107];
int dp[107][55][55][3];
//states- current index, even remaining , odd remaining , last position parity
int n;
int solve(int ind,int ev,int od,int last)
{
    if(ind==n+1) return 0;
    int &ret = dp[ind][ev][od][last];
    if(ret!=-1) return ret;

    if(arr[ind])
    {
        int paritynow=arr[ind]&1;
        if(ind==1)
            ret=solve(ind+1,ev,od,paritynow);
        else
        {
            if(paritynow==last)
               ret=solve(ind+1,ev,od,paritynow);
            else ret=1+solve(ind+1,ev,od,paritynow);
        }
    }
    else
    {
        int evennia=107,oddnia=107;
        if(ind==1)
        {
            if(ev) evennia=solve(ind+1,ev-1,od,0);
            if(od) oddnia=solve(ind+1,ev,od-1,1);
        }
        else
        {
            if(ev and last==0) evennia=solve(ind+1,ev-1,od,0);
            if(ev and last==1) evennia=1+solve(ind+1,ev-1,od,0);
            if(od and last==1) oddnia=solve(ind+1,ev,od-1,1);
            if(od and last==0) oddnia=1+solve(ind+1,ev,od-1,1);
        }

        ret=min(evennia,oddnia);
    }

    return ret;

}

int main()
{
    int i,ev,od,p;

    scin(n);

    if(n&1)
        ev=n>>1,od=ev+1;
    else ev=n>>1,od=ev;

    rep(i, 1, n+1)
    {
        scin(arr[i]);
        if(arr[i] and arr[i]&1) od--;
        else if(arr[i]) ev--;
    }

    mem(dp,-1);
    pf("%d\n",solve(1,ev,od,0));



#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}


