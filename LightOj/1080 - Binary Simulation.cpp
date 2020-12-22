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
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}
lli bigmod(lli n, lli k)
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
/*
int dx4[5] = {1, -1, 0, 0 };
int dy4[5] = {0, 0, 1, -1};
int dx8[9] = { 0 , 0 , -1 , 1 , -1 , -1 , 1 , 1 } ;
int dy8[9] = { -1 , 1 , 0 , 0 , -1 , 1 , -1 , 1 } ;
  int knightx[9] = { -1 , 1 , -2 , 2 , -2 , 2 , -1 , 1 } ;
int knighty[9] = { -2 , -2 , -1 , -1 , 1 , 1 , 2 , 2 } ;
  bool valid( int r , int c , int x , int y ){ if( x >= 1 && x <= r && y >= 1 && y <= c ) return 1 ; return 0 ; }
*/
  using namespace std;
int arr[p5];
int tree[4*p5];
  void invert(int tl,int tr,int l,int r,int node)
{
      if(l>tr or r<tl ) return;
      if(l<=tl and r>=tr)
    {
        tree[node]++;
        return;
    }
      int tm=(tl+tr)>>1;
    invert(tl,tm,l,r,node<<1);
    invert(tm+1,tr,l,r,(node<<1)|1);
  }
  int query(int tl,int tr,int i,int node)
{
    if(i>tr or i<tl ) return 0;
      if(i==tl and i==tr) return (arr[i]+tree[node])&1?1:0;
      int tm=(tl+tr)>>1;
      if(i<=tm)
     return (tree[node]+query(tl,tm,i,node<<1))&1?1:0;
    else
     return (tree[node]+query(tm+1,tr,i,(node<<1)|1))&1?1:0;
}
  int main()
{
    int len,k,t,n,i,j,q;
    char x;
      scin(t);
    getchar();
      rep(k,1, t+1)
    {
        char s[p5];
        sc("%s",&s);
          n=strlen(s);
          rep(i, 0, n)
        arr[i+1]=s[i]-'0';
          mem(tree,0);
        pf("Case %d:\n",k);
          scin(q);
        getchar();
          while(q--)
        {
          //  ok;
            scanf("%c",&x);
            getchar();
              if(x=='I')
            {
                scin2(i,j);
                invert(1,n,i,j,1);
            }
            if(x=='Q')
            {
                scin(i);
                pf("%d\n",query(1,n,i,1));
            }
              getchar();
        }
      }
    #ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}
   