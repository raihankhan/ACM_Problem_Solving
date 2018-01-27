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

    int n,x,i,j,k;
    cin >> n ;

    while(n--)
    {
        cin >> x ;
        k=0;
        for(i=0;i<=34;i++)
        {
            for(j=0;j<=15;j++)
            {
                if((3*i+7*j)==x)
                {
                    cout << "YES" << endl; k=1; break;
                }

            }
            if(k==1) break;
        }
        if(k==0) cout << "NO" << endl;
    }

    return 0;
}



