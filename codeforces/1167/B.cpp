#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  Raihan Khan Raka  ( raihankhanraka@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering                                                          ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

/*....................................Values................................................*/
#define       inf                  1<<30
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
#define       scin(x)              sc("%d",&(x))
#define       scin2(x,y)           sc("d",&(x),&(y))
#define       scin3(x,y,z)         sc("d%d",&(x),&(y),&(z))
#define       scln(x)              sc("%lld",&(x))
#define       min3(a,b,c)          min(a,min(b,c))
#define       max3(a,b,c)          max(a,max(b,c))
#define       all(v)               v.begin(), v.end()
#define       ok                   cout << "ok" << endl
#define       mem(x,y)             memset(x,y,sizeof(x))
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
#define       ss                   stringstream

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

int main()
{
   int arr[10]={4 , 8, 15, 16, 23, 42};
   int vis[100]={0};
   int a,b,c,d,e,f,res,ac,ce,bd,df,i,k,q;
   rep(i , 0 , 6)
   vis[arr[i]]=1;

   printf("? 1 3\n");
   fflush(stdout);
   scanf("%d",&ac);

   printf("? 3 5\n");
   fflush(stdout);
   scanf("%d",&ce);
   rep(i , 0 , 6)
   if(ac%arr[i]==0 and ce%arr[i]==0)
   {
       k=ac/arr[i];
       q=ce/arr[i];
       if(k!=q and vis[k]==1 and vis[q]==1)
       {
       c=arr[i];
       a=ac/c;
       e=ce/c;
       break;
       }
   }

   printf("? 2 4\n");
   fflush(stdout);
   scanf("%d",&bd);

   printf("? 4 6\n");
   fflush(stdout);
   scanf("%d",&df);
   rep(i , 0 , 6)
    if(bd%arr[i]==0 and df%arr[i]==0)
   {
       k=bd/arr[i];
       q=df/arr[i];
       if(k!=q and vis[k]==1 and vis[q]==1)
       {
       d=arr[i];
       b=bd/d;
       f=df/d;
       break;
       }
   }

   printf("! %d %d %d %d %d %d\n", a,b,c,d,e,f);
    fflush(stdout);

#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}
