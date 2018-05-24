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
#define         vecp            vector<  pair<int,int> >
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
    int n,i,j,k;
    veci pos;
    veci neg;
    veci zero;
    scin(n);
    for(i=0;i<n;i++)
    {
        scin(k);
        if(k>0) pos.pb(k);
        else if(k<0) neg.pb(k);
        else zero.pb(k);
    }
    if(neg.size()%2==0)
    {
        j=neg.back();
        zero.pb(j);
        neg.pop_back();
    }
    if(pos.size()==0)
    {
        j=neg.back();
        pos.pb(j);
        neg.pop_back();
         j=neg.back();
        pos.pb(j);
        neg.pop_back();
    }
    cout << neg.size() << " " ;
    for(i=0;i<neg.size()-1;i++) cout << neg[i] << " " ;
    cout << neg[i] << endl;
     cout << pos.size() << " " ;
    for(i=0;i<pos.size()-1;i++) cout << pos[i] << " " ;
    cout << pos[i] <<  endl;
     cout << zero.size() << " " ;
    for(i=0;i<zero.size()-1;i++) cout << zero[i] << " " ;
    cout << zero[i] << endl;

    return 0;
}
