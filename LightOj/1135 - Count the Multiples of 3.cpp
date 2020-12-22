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
#define       lc(n)           n<<1
#define       rc(n)           (n<<1)|1
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
struct data
{
    int one,two,three;
} tree[4*p5];
int lz[4*p5];
  inline void build(int tl,int tr,int n)
{
    if(tl==tr)
    {
        tree[n].one=0;
        tree[n].two=0;
        tree[n].three=1;
        return;
    }
    int tm=(tl+tr)>>1;
      build(tl,tm,lc(n));
    build(tm+1,tr,rc(n));
      tree[n].one=tree[lc(n)].one+tree[rc(n)].one;
    tree[n].two=tree[lc(n)].two+tree[rc(n)].two;
    tree[n].three=tree[lc(n)].three+tree[rc(n)].three;
  }
  inline void update(int tl,int tr,int l,int r,int n)
{
    if(lz[n])
    {
        if(lz[n]%3==1)
        {
            int temp=tree[n].one;
            tree[n].one=tree[n].three;
            tree[n].three=tree[n].two;
            tree[n].two=temp;
        }
        else if(lz[n]%3==2)
        {
            int temp=tree[n].three;
            tree[n].three=tree[n].one;
            tree[n].one=tree[n].two;
            tree[n].two=temp;
        }
          if(tl!=tr)
        {
            lz[lc(n)]+=lz[n];
            lz[rc(n)]+=lz[n];
        }
          lz[n]=0;
    }
      if(l>tr or r<tl) return;
      if(tl>=l and tr<=r)
    {
        int temp=tree[n].one;
        tree[n].one=tree[n].three;
        tree[n].three=tree[n].two;
        tree[n].two=temp;
          if(tl!=tr)
        {
            lz[lc(n)]++;
            lz[rc(n)]++;
        }
        return;
    }
      int tm=(tl+tr)>>1;
      update(tl,tm,l,r,lc(n));
    update(tm+1,tr,l,r,rc(n));
      tree[n].one=tree[lc(n)].one+tree[rc(n)].one;
    tree[n].two=tree[lc(n)].two+tree[rc(n)].two;
    tree[n].three=tree[lc(n)].three+tree[rc(n)].three;
}
  inline int query(int tl,int tr,int l,int r,int n)
{
    if(lz[n])
    {
        if(lz[n]%3==1)
        {
            int temp=tree[n].one;
            tree[n].one=tree[n].three;
            tree[n].three=tree[n].two;
            tree[n].two=temp;
        }
        else if(lz[n]%3==2)
        {
            int temp=tree[n].three;
            tree[n].three=tree[n].one;
            tree[n].one=tree[n].two;
            tree[n].two=temp;
        }
          if(tl!=tr)
        {
            lz[lc(n)]+=lz[n];
            lz[rc(n)]+=lz[n];
        }
          lz[n]=0;
    }
      if(l>tr or r<tl) return 0;
      if(tl>=l and tr<=r)
        return tree[n].three;
      int tm=(tl+tr)>>1;
      return query(tl,tm,l,r,lc(n)) + query(tm+1,tr,l,r,rc(n));
}
  int main()
{
    int T,t,n,p,i,j,a,b,k;
      scin(t);
      rep(T, 1, t+1)
    {
        scin2(n,k);
          build(0,n-1,1);
          pf("Case %d:\n",T);
        while(k--)
        {
            scin(p);
            scin2(a,b);
            if(p)
            {
                pf("%d\n",query(0,n-1,a,b,1));
            }
            else
            {
                update(0,n-1,a,b,1);
            }
        }
          mem(tree,0);
        mem(lz,0);
    }
      #ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}
       