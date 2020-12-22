#include<bits/stdc++.h>
#define PI              acos(-1)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define READ(f)         freopen(f, "r", stdin)
#define WRITE(f)        freopen(f, "w", stdout)
#define lli             long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define veci            vector<int>
#define vecl            vector<long long int>
#define vecp            vector< pair<int,int> >
#define pb              push_back
  long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;
  bool compare(pair<int,int>a, pair<int,int>b)
{
    if(a.first==b.first)
        return a.second>b.second;
    else return a.first<b.first;
}
int divisors(int n)
{
    int div=1,i;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0) div++;
    }
    return div;
}
  int main()
{
    int t,i,n;
    vecp v;
    cin >>  t ;
    for(i=1;i<1001;i++)
    {
        v.pb(make_pair(divisors(i),i));
      }
      sort(v.begin(),v.end(),compare);
    for(i=1;i<=t;i++)
    {
        cin >> n ;
        cout << "Case " << i << ": " << v[n-1].second << endl;
      }
        return 0;
}
       