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

    lli l;
    double maxi;
    int n ,i , j ;
    cin >> n >> l ;

    lli arr[n];

    for(i=0;i<n;i++)
        scln(arr[i]);

    sort(arr,arr+n);

    maxi=max(arr[0]-0,l-arr[n-1]);

    for(i=1;i<n;i++)
    {
        maxi=max(maxi, (arr[i]-arr[i-1])/2.0 ) ;
    }

    cout << fixed << setprecision(10) << maxi << endl;

    return 0;
}
