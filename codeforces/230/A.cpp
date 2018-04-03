#include<bits/stdc++.h>
#define PI                          acos(-1)
#define min3(a,b,c)          min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define READ(f)              freopen(f, "r", stdin)
#define WRITE(f)             freopen(f, "w", stdout)
#define lli                          long long int
#define ull                        unsigned long long int
#define pii                       pair < int, int>
#define pll                       pair < ll, ll>
#define sc                      scanf
#define scin(x)              sc("%d",&(x))
#define scln(x)              sc("%lld",&(x))
#define pf                     printf
#define ms(a,b)          memset(a,b,sizeof(a))
#define veci                vector<int>
#define vecl                vector<long long int>
#define vecp               vector< pair<int,int> >
#define pb                   push_back

long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;

int main()
{

    int s,n,i,j;
    cin >> s >> n ;

    int a,b;
    vector < pair<int,int> > v ;
    for(i=0;i<n;i++)
    {
        scin(a);
        scin(b);
        v.pb( make_pair(a,b) );
    }

    sort(v.begin(),v.end());

    for(i=0;i<n;i++)
    {
        if(s<= v[i].first)
        {
            cout << "NO" << endl; return 0;
        }
        else  s+= v[i].second;
    }

        cout << "YES" << endl;

    return 0;
}
