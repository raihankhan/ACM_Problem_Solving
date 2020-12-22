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
#define pb              push_back
long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;
  int main()
{
    int t,i;
    lli n,j,bin,base;
    veci v;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n;
          v.clear();
        while(n>=2)
        {
            v.pb(n%2);
            n=n/2;
        }
        v.pb(n);
        v.pb(0);
          reverse(v.begin(),v.end());
        next_permutation(v.begin(),v.end());
          base=1;
        bin=0;
        for(j=v.size()-1;j>=0;j--)
        {
            bin+=v[j]*base;
            base*=2;
        }
          cout << "Case " << i << ": " << bin << endl;
      }
          return 0;
}
       