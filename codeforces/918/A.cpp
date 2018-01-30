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
    int n,i,k=0,temp;
    cin >> n ;
    int arr[20]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987};
    char str[1001];
    memset(str,'o',(n+2)*sizeof(str[0]));
    for(i=0;i<17;i++)
        str[arr[i]]='O';
    for(i=1;i<=n;i++)
        cout << str[i] ;
    cout << endl;


    return 0;
}



