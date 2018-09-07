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
#define       p6                   1000007

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

lli a[p6];
lli b[p6];
lli c[p6];
lli d[p6];

int main()
{
    lli n , i , j , k ,maxi , p;

    scln(n);

    rep(i , 0 , n)
    scln(a[i]);

    rep(i , 0 , n)
    scln(b[i]);


    sort(a , a+n , greater<int>());
    sort(b , b+n , greater<int>());

    int mov=0;
    bool turn=true;
    i=0,j=0,k=0,p=0;
    while(mov<2*n)
    {
        if(turn)
        {
        if(a[i]>=b[j])
        {
            k+=a[i];
            i++;
        }
        else j++;

        turn = false;
        }
        else
        {
            if(b[j]>=a[i])
        {
            p+=b[j];
            j++;
        }
        else i++;

        turn = true;
        }
        mov++;
    }

    cout << k-p << endl;
    return 0;
}
