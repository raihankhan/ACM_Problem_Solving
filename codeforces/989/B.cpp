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
    int n,p,i,j,k=0;
    string s;
    scin(n);
    scin(p);
    cin >> s ;

    for(i=0;i<s.length()-p;i++)
    {
        if(s[i]=='.' and s[i+p]=='.') { s[i]='0' ; s[i+p]='1'; }
        else if (s[i]=='.' )
        {
            if(s[i+p]=='0') s[i]='1';
            else s[i]='0';
        }
        else if(s[i+p]=='.')
        {
            if(s[i]=='0') s[i+p]='1';
            else s[i+p]='0';
        }
    }

    for(  ;i<s.length();i++)
        if(s[i]=='.') s[i]='0';

        for(i=0;i<s.length()-p;i++)
            if(s[i]!=s[i+p])
            {
                cout << s << endl;
                return 0;
            }

        cout << "No" << endl;

    return 0;
}
