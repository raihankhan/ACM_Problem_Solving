#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  Raihan Khan Raka  ( raihankhanraka@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering                                                          ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

#define       PI                   acos(-1)
#define       min3(a,b,c)          min(a,min(b,c))
#define       max3(a,b,c)          max(a,max(b,c))
#define       READ(f)              freopen(f, "r", stdin)
#define       WRITE(f)             freopen(f, "w", stdout)
#define       lli                  long long int
#define       ull                  unsigned long long int
#define       pii                  pair < int, int>
#define       pll                  pair < ll, ll>
#define       sc                   scanf
#define       scin(x)              sc("%d",&(x))
#define       scln(x)              sc("%lld",&(x))
#define       pf                   printf
#define       veci                 vector<int>
#define       vecl                 vector<long long int>
#define       vecp                 vector<  pair<int,int> >
#define       pb                   push_back
#define       inf                  1<<30
#define       mp                   make_pair
#define       ss                   stringstream
#define       all(v)               v.begin(), v.end()
#define       mem(x,y)             memset(x,y,sizeof(x))
#define       FastRead             ios_base::sync_with_stdio(0);cin.tie(0)
#define       M                    1000000007
#define       rep( i , a , b )     for( i=a ; i<b ; i++)
#define       rev( i , a , b )     for( i=a ; i>b ; i--)
//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
/*
int dx[5] = {1, -1, 0, 0 };
int dy[5] = {0, 0, 1, -1};
*/

using namespace std;
set<lli>s;
set<lli> :: iterator it;
void factorize(lli a, lli b)
{
    lli i;

    if(a%2==0)
    {
        s.insert(2);

        while(a%2==0)
        {
            a=a/2;
        }
    }
     if(b%2==0)
    {
        s.insert(2);

        while(b%2==0)
        {
            b=b/2;
        }
    }

    rep( i , 3 , sqrt(a)+2)
    {
        if( a%i==0) s.insert(i);

        while(a%i==0)
            a=a/i;

    }

    if(a>2) s.insert(a);

    rep( i , 3 , sqrt(b)+2)
    {
        if( b%i==0) s.insert(i);

        while(b%i==0)
            b=b/i;

    }

    if(b>2) s.insert(b);



}

int main()
{
    FastRead;
    lli n,a,b,x,y,k=0,p=0,i,j,m;
    bool ok=true;
    vecp v;
    cin >> n ;

    cin >> a >> b ;

    v.pb(mp(a,b));

    factorize(a,b);

    //for( auto i:s) cout << i << " " ;


    rep(i, 1, n)
    {
        cin >> a >> b ;
        v.pb(mp(a,b));

    }

    for( auto i:s)
    {
        ok=true;
        rep(j, 0, n)
        {
            if( v[j].first%i!=0 and v[j].second%i!=0 )
            {
                ok=false;
                break;
            }
        }

        if(ok)
        {
            cout << i << endl;
            return 0;
        }

    }

    if(!ok) cout << -1 << endl;





    return 0;
}
