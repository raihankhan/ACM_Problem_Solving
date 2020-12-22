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
  /*....................................Functions.............................................*/
#define       sqr(x)               x*x
#define       sc                   scanf
#define       pf                   printf
#define       scin(x)              sc("%d",&(x))
#define       scin2(x,y)            sc("d",&(x),&(y))
#define       scin3(x,y,z)          sc("d%d",&(x),&(y),&(z))
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
  #define       FastRead             ios_base::sync_with_stdio(0);cin.tie(0)
    //int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
/*
int dx[5] = {1, -1, 0, 0 };
int dy[5] = {0, 0, 1, -1};
*/
  using namespace std;
  lli x;
  lli bigmod(lli number,lli power)
{
    if(power==0)
        return 1;
      x = bigmod(number,power/2);
        x = ((x%M)*(x%M))%M;
       if(power & 1)
        x=((number%M)*(x%M))%M;
      return x;
}
      lli sum_div(lli n , lli m)
{
    lli p,cnt=0,i, ans=1;
    while(n%2==0)
    {
        cnt++;
        n=n/2;
    }
      //ok;
    if(cnt)
    {
        p=(cnt*m + 1);
        ans=ans*(bigmod(2,p)-1);
      }
      for(i=3 ; i*i<=n ; i+=2)
    {
        cnt=0;
          while(n%i==0)
        {
            cnt++;
            n=n/i;
        }
          if(cnt)
        {
            p=( cnt*m +1 );
            ans= ( ans *  ( bigmod(i , p)-1LL +M) ) % M;
            ans= ( ans *    bigmod(i-1LL , M-2)  ) % M;
            }
    }
      if(n>2)
    {
        ans= (  ans  * ( bigmod ( n , m+1 )-1+M  )  ) % M ;
        ans= (  ans  * bigmod( n-1 , M-2)  ) % M ;
      }
        return ans;
  }
  int main()
{
    lli t,n,m, i , ans;
    //READ("input.txt");
    //WRITE("o.txt");
      scln(t);
      rep(i , 1 , t+1)
    {
        scln(n);
        scln(m);
              if(m==0)
        ans=1;
        else
        ans = sum_div(n , m);
              cout << "Case " << i << ": " << ans << endl;
    }
    #ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}
 