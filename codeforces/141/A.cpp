#include<bits/stdc++.h>
#define PI                          acos(-1)
#define min3(a,b,c)          min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define READ(f)              freopen(f, "r", stdin)
#define WRITE(f)             freopen(f, "w", stdout)
#define lli                          long long int
#define ull                        unsigned long long int
#define pii                       pair < int, int>
#define pll                       pair < ll, ll>
#define sc                      scanf
#define scin(x)              sc("%d",&(x))
#define scln(x)              sc("%lld",&(x))
#define pf                     printf
#define ms(a,b)          memset(a,b,sizeof(a))
#define veci                vector<int>
#define vecl                vector<long long int>
#define vecp               vector< pair<int,int> >
#define pb                   push_back

long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;

int main()
{

    string guest,host,pile,temp;
    cin >> guest >> host >> pile ;

    int plen=pile.length();
    int hlen=host.length();
    int glen=guest.length();

    int i,j,gnt,hnt,pnt,ans=1;

    gnt=0;
    temp=pile;
    for(i=0;i<glen;i++)
    {
        for(j=0;j<plen;j++)
        {
            if(temp[j]==guest[i] )
                { gnt++; temp[j]='-'; break; }
        }
    }

     hnt=0;
    // temp=pile;
    for(i=0;i<hlen;i++)
    {
        for(j=0;j<plen;j++)
        {
            if(temp[j]==host[i] )
               {  hnt++;   temp[j]='-'; break; }
        }
    }

    pnt=0;
    for(i=0;i<plen;i++)
        if(temp[i]=='-')
            pnt++;

    if(gnt==glen and hnt==hlen and pnt==plen)
        cout << "YES" << endl;
    else cout << "NO" << endl;



    return 0;
}
