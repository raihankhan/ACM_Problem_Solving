#include<bits/stdc++.h>
  #define       PI                        acos(-1)
#define       min3(a,b,c)        min(a,min(b,c))
#define       max3(a,b,c)       max(a,max(b,c))
#define       READ(f)             freopen(f, "r", stdin)
#define       WRITE(f)            freopen(f, "w", stdout)
#define       lli                         long long int
#define       ull                        unsigned long long int
#define       pii                       pair < int, int>
#define       pll                        pair < ll, ll>
#define       sc                       scanf
#define       scin(x)                sc("%d",&(x))
#define       scln(x)                sc("%lld",&(x))
#define       pf                        printf
#define       veci                    vector<int>
#define       vecl                    vector<long long int>
#define       vecp                   vector<  pair<int,int> >
#define       pb                      push_back
#define       inf                      1<<30
#define       mp                     make_pair
#define       ss                      stringstream
#define       all(v)                  v.begin(), v.end()
#define       mem(x,y)          memset(x,y,sizeof(x))
#define       FastRead         ios_base::sync_with_stdio(0);cin.tie(0)
#define       M                      1000000007
#define       rep( i , a , b )     for( i=a ; i<b ; i++)
#define       rev( i , a , b )     for( i=a ; i>b ; i--)
//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;
int dx[5] = { 1, -1, 0, 0};
int dy[5] = { 0,  0, 1, -1};
char pos[22][22] ;
int dp[22][22];
bool visited[22][22];
int m,n;
  void initialize()
{
    mem(pos,0);
    mem(dp,0);
    mem(visited,false);
}
      void bfs( int x, int y  )
{
    int i,a,b ;
    pair<int, int > curr ;
    queue< pair<int,int> > q ;
      q.push( mp(x,y) );
    visited[x][y] = true;
        while( !q.empty() )
    {
        curr = q.front();
        q.pop();
        a= curr.first;
        b= curr.second;
          //  cout << "ok" << endl;
            rep(  i, 0,  4 )
        {
              if( a+dx[i] <0 or a+dx[i]>=m or b+dy[i]>=n or b+dy[i]<0) continue;
            if (pos[ a+dx[i] ][ b+dy[i] ] == '#' or pos[ a+dx[i] ][ b+dy[i] ] == 'm') continue;
            if ( visited[ a+dx[i] ][ b+dy[i] ] == false   )
            {
                visited[ a+dx[i] ][ b+dy[i] ] = true ;
                q.push( mp( a+dx[i], b+dy[i] ) );
                dp[ a+dx[i] ][ b+dy[i] ] = dp[a][b]+1;
            }
        }
      }
  }
  int main()
{
    int t,i,j,k,x,y,ax,bx,cx,ay,by,cy;
      //READ("in.txt");
    scin(t);
      for( k=1; k<=t ; k++)
    {
        scin(m);
        scin(n);
          initialize();
          for(i=0; i< m ; i++)
        {
            for( j=0 ; j<n; j++)
            {
                cin >> pos[i][j] ;
                if( pos[i][j] == 'h' )
                {
                    x=i, y=j;
                }
                if( pos[i][j] == 'a' )
                {
                    ax=i, ay=j;
                }
                if( pos[i][j] == 'b' )
                {
                    bx=i, by=j;
                }
                if( pos[i][j] == 'c' )
                {
                    cx=i, cy=j;
                }
            }
        }
            dp[x][y] = 0 ;
          //cout << "ok" << endl;
        bfs(x,y);
          // cout << "ok" << endl;
           //for(i=0;i<m;i++) { for(j=0 ; j<n ; j++) { cout << dp[i][j] << " " ;} cout << endl; }
        pf("Case %d: %d\n", k, max3(dp[ax][ay], dp[bx][by], dp[cx][cy]    )  );
        }
            return 0;
}
 