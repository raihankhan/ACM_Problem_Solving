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
//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;
int a[22][22];
char arr[22][22];
int cnt,w,h,i,j,k;
void visit(int j,int k)
{
    if(j+1<h and a[j+1][k]==0 and arr[j+1][k]=='.')
    {
        a[j+1][k]=1;
        cnt++;
        visit(j+1,k);
    }
    if(j-1>=0 and a[j-1][k]==0 and arr[j-1][k]=='.')
    {
        a[j-1][k]=1;
        cnt++;
        visit(j-1,k);
    }
    if(k+1<w and a[j][k+1]==0 and arr[j][k+1]=='.')
    {
        a[j][k+1]=1;
        cnt++;
        visit(j,k+1);
    }
    if(k-1>=0 and a[j][k-1]==0 and arr[j][k-1]=='.')
    {
        a[j][k-1]=1;
        cnt++;
        visit(j,k-1);
    }
}
int main()
{
    int t,iw,ih;
   // READ("input.txt");
    scin(t);
    for(i=1;i<=t;i++)
    {
        scin(w);
        scin(h);
        cnt=0;
          for(j=0;j<h;j++)
            for(k=0;k<w;k++)
        {
            cin >> arr[j][k] ;
            if(arr[j][k]=='@') { ih=j; iw=k; cnt=1; }
        }
          mem(a,0);
        a[ih][iw]=1;
        visit(ih,iw);
          cout << "Case " << i << ": " << cnt << endl;
    }
                return 0;
}
 