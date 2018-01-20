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
    int t,n,a,i;
    veci v;
    double temp;
    cin >> t;
    n=t;
    while(t--)
    {
        cin >> a ;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(i=n-1;i>=0;i--)
    {
        temp=sqrt(v[i]);
        temp=int(temp)*int(temp);
        if(temp!=v[i])
        {
        cout << v[i] << endl;
        break;
        }

    }



    return 0;
}



