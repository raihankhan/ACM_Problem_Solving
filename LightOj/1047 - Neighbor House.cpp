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
#define vecp            vector< pair<int,int> >
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
      int arr[30][4];
      int t,i,j,n,cost;
      cin >> t ;
    for(i=1;i<=t;i++)
    {
        cin >> n ;
          for(j=0;j<n;j++)
            cin >> arr[j][0] >> arr[j][1] >> arr[j][2] ;
          for(j=1;j<n;j++)
        {
            arr[j][0]+=min(arr[j-1][1],arr[j-1][2]);
            arr[j][1]+=min(arr[j-1][0],arr[j-1][2]);
            arr[j][2]+=min(arr[j-1][0],arr[j-1][1]);
        }
          cost=min3(arr[n-1][0],arr[n-1][1],arr[n-1][2]);
          cout << "Case " << i << ": " << cost << endl;
    }
      return 0;
}
 