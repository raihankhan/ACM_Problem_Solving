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
int power( int x, int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }

using namespace std;

int main()
{
    int n,ans,i,j,flag=0,k=0;
    char c='C';

    cin >> n ;
    ans=power(n,2)/2;
    if(n%2==1)
        {k=1; ans++; }
    cout << ans << endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(flag==0)  pf("%c",c);
            else pf(".");

            if(flag==0) flag=1;
            else flag=0;
        }
        pf("\n");
        if(k==0)
        {
        if(flag==0) flag=1;
            else flag=0;
        }
    }




    return 0;
}



