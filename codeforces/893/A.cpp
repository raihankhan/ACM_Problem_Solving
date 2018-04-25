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
    bool arr[5]={false, true,true,false};

    int n,i,j,k=1;
    scin(n);
    int rs[n+3];
    for(i=0;i<n;i++)
        scin(rs[i]);

    for(i=0;i<n;i++)
    {
            if(arr[ rs[i] ] == false )
            { cout << "NO" << endl; return 0; }
            else
            {
                if(rs[i]==1) swap(arr[2],arr[3]);
                else  if(rs[i]==2) swap(arr[1],arr[3]);
                else  if(rs[i]==3) swap(arr[1],arr[2]);
            }
    }

    cout << "YES" << endl;

    return 0;
}
