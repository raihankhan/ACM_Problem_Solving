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

int main()
{
    FastRead;
    string a,b;
    int i,j,k,p,t,n,o=0,z2=0,oz=0,z=0;
    lli cnt=0;

    cin >> n ;
    cin >> a >> b ;
    int one[n+1]={0};
    int zz[n+1]={0};
    int onezero[n+1]={0};
    int zero[n+1]={0};


    for(i=0 ; i<n ; i++)
    {
        if( a[i]=='1') o++;
        if( a[i]=='0' and b[i]=='0' ) z2++;
        if( a[i]=='1' and b[i]=='0' ) oz++;
        if( a[i]=='0'  ) z++;

        one[i]=o, zz[i]=z2 , onezero[i]=oz, zero[i]=z;

    }


    for ( i=0 ; i<n ; i++)
    {
        if( a[i]==b[i] and a[i]=='0' )
        {
            cnt+= o- one[i] ;
        }
        else if( a[i]==b[i] and a[i]=='1')
        {
           cnt+= z2 - zz[i] ;
        }
        else if( a[i]=='0' and b[i]=='1' )
        {
            cnt+= oz-onezero[i] ;
        }
        else if( a[i]=='1' and b[i]=='0' )
        {
            cnt+= z-zero[i] ;
        }


    }

    cout << cnt << endl;


    return 0;
}
