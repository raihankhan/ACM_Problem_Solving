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
int fact(int n,int i)
{
    int tot=0,p=i;
     while(p<=n)
        {
            tot+=n/p;
            p=p*i;
        }
    return tot;
}
int powr(int n,int i)
{
    int tot=0;
      while(n%i==0)
    {
        tot++;
        n=n/i;
    }
    return tot;
}
int main()
{
    int t,i,n,r,p,q,two,five;
    scin(t);
    for(i=1;i<=t;i++)
    {
        scin(n);
        scin(r);
        scin(p);
        scin(q);
          two=fact(n,2)-fact(r,2)-fact(n-r,2)+(q*powr(p,2));
        five=fact(n,5)-fact(r,5)-fact(n-r,5)+(q*powr(p,5));
       // cout << two << " " <<five << endl;
        cout << "Case " << i << ": " << min(two,five) << endl;
      }
        return 0;
}
 