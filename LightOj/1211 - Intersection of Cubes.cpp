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
    int t,n,i,j;
    int x1[1003],y1[1003],z1[1003], x2[1003],y2[1003],z2[1003];
    int xmin,ymin,zmin,xmax,ymax,zmax;
    lli volume;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n ;
        for(j=0;j<n;j++)
        {
            cin >> x1[j] >> y1[j] >> z1[j] >> x2[j] >> y2[j] >> z2[j] ;
        }
          xmin=ymin=zmin=0;
        xmax=ymax=zmax=1001;
            for(j=0;j<n;j++)
        {
            xmin=max(xmin,x1[j]);
            ymin=max(ymin,y1[j]);
            zmin=max(zmin,z1[j]);
              xmax=min(xmax,x2[j]);
            ymax=min(ymax,y2[j]);
            zmax=min(zmax,z2[j]);
        }
          volume= (xmax-xmin)*(ymax-ymin)*(zmax-zmin);
        if(volume<0) volume=0;
          cout << "Case " << i << ": " << volume << endl;
    }
        return 0;
}
       