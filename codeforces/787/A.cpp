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

int main()
{
    int a,b,c,d,m,n,i,j,ans=-1,rightside=0;
    cin >> a  >> b >> c >> d ;
    rightside=b-d;

    for(m=0;m<=100;m++)
    {
        for(n=0;n<=100;n++)
        {
            if(m*c-n*a==rightside)
            {
                ans=(b+(n*a));
                cout << ans << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
