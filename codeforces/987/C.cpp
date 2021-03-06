#include<bits/stdc++.h>

#define PI                          acos(-1)
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)        max(a,max(b,c))
#define   READ(f)             freopen(f, "r", stdin)
#define  WRITE(f)            freopen(f, "w", stdout)
#define               lli             long long int
#define              ull            unsigned long long int
#define              pii            pair < int, int>
#define              pll            pair < ll, ll>
#define              sc            scanf
#define       scin(x)           sc("%d",&(x))
#define       scln(x)           sc("%lld",&(x))
#define              pf             printf
#define          veci            vector<int>
#define          vecl            vector<long long int>
#define         vecp            vector<  pair<lli,lli > >
#define             pb            push_back
#define             inf            1<<30
#define            mp            make_pair
#define             ss            stringstream
#define         all(v)           v.begin(), v.end()
#define mem(x,y)            memset(x,y,sizeof(x))
#define             M            1000000007
long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;

int main()
{
    int n,i,j,k,m;
    lli s[3004],w[3004],dp[3004][2],maxi=inf ,tot;
    scin(n);
    for(i=0;i<n;i++)    scln(s[i]);
    for(i=0;i<n;i++)    scln(w[i]);

    for(i=0;i<n;i++)
    {
        maxi=inf;
        for(j=n;j>i; j--)
        {
            if(s[j]>s[i])
            {
                maxi=min(maxi, w[j]);
            }
        }
        dp[i][1]=maxi;
        maxi=inf;
        for(j=0;j<i;j++)
        {
            if(s[j]<s[i])
            {
                maxi= min(maxi, w[j]);
            }
        }
        dp[i][0]=maxi;
    }
    maxi=inf;
    for(i=0;i<n;i++)
    {
        tot=w[i] + dp[i][0] + dp[i][1];
        maxi=min(maxi,tot);
    }

    if(maxi==inf)
        cout<<-1<<endl;
    else
    cout<<maxi<<endl;

    return 0;
}
