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
#define       rev( i , a , b )     for( i=a ; i>=b ; i--)
#define       p5                   100007

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

int main()
{
    int n , w , b , i , maxi=0 , arr[30] ;

    scin(n);
    scin(w);
    scin(b);


    rep(i , 0 , n)
    scin(arr[i]);

    rep(i , 0 , n/2)
    {
        if(arr[i] == arr[n-i-1] and arr[i]!=2 )
            continue;
        else
        {
            if( (arr[i]==0 and arr[n-i-1]==1) or ( arr[i]==1 and arr[n-i-1]==0))

                {cout << -1 << endl; return 0; }
            else
            {
                if( arr[i]==2 and arr[n-i-1]==2) maxi+= (2*min(w,b));

                else if( arr[n-1-i]==1 or arr[i]==1) maxi+=b;
                else if( arr[n-1-i]==0 or arr[i]==0) maxi+=w;


            }
        }
    }

    if(n&1 and arr[n/2]==2) maxi+=min(w,b);

    cout << maxi << endl;


    return 0;
}

