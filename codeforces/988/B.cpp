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
//#define       M                      1000000007
//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i+1;
    }

    return 0;
}

int main()
{
    string arr[102];
    int n,i,j,k=0,m,p;
    scin(n);
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(isSubstring(arr[i], arr[j])) { swap(arr[i],arr[j]); }
          //  cout << arr[i]  << " " << arr[j] << endl;
        }
    }
    k=0;
    for(i=n-1;i>=1;i--)
    {
        if(isSubstring(arr[i],arr[i-1]) ) k++;
    }

    if(k==n-1)
    {
        cout << "YES" << endl;
    for(i=n-1;i>=0;i--)
        cout << arr[i] << endl;
    }
    else cout << "NO" << endl;





    return 0;
}
