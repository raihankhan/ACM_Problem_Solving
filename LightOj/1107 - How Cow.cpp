#include<bits/stdc++.h>
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
  using namespace std;
  int main()
{
    int t,x1,x2,y1,y2,xa,ya,i,n;
    cin >> t ;
    for(i=1;i<=t;i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 ;
        cin >> n ;
        cout << "Case " << i << ":" << endl;
        while(n--)
        {
            cin >> xa >> ya ;
            if(xa>x1 and xa<x2 and ya>y1 and ya<y2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
        return 0;
}
       