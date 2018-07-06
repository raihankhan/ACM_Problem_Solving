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
double tem[6000];
double sum[6000];
double avg(int x, int y)
{
       return ((sum[y]-sum[x-1] ) / (1.0*(y-x+1))) ;
}
int main()
{
    double n,k,p,maxi=0,g,d;
    int i,j;


    cin >> n >> k ;

    for(i=1;i<=n;i++) { cin >> tem[i] ; sum[i]=tem[i]+sum[i-1]; }


    for(i=1;i<=n;i++)
    {
        for(j=i+k-1;j<=n;j++)
        {
            //cout << "jh" << endl;
            maxi=max(maxi,avg(i,j ) );
            //cout << i << " " << j << endl;
        }
    }

    cout << setprecision(15) << fixed <<  maxi << endl;

    return 0;
}
