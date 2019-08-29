#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  Raihan Khan Raka  ( raihankhanraka@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering                                                          ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

/*....................................Values................................................*/
#define       p5                   100007
#define       p6                   1000007
#define       PI                   acos(-1)
#define       M                    1000000007
#define       inf                  1LL << 62
#define       white                0
#define       gray                 1
#define       black                2
/*....................................Functions.............................................*/
#define       sqr(x)               x*x
#define       sc                   scanf
#define       pf                   printf
#define       pfn                  printf("\n)
#define       scin(x)              sc("%d",&(x))
#define       scin2(xx,zz)         scanf("%d %d",&xx,&zz)
#define       scln(x)              sc("%lld",&(x))
#define       scln2(xx,zz)         scanf("%lld %lld",&xx,&zz)
#define       min3(a,b,c)          min(a,min(b,c))
#define       max3(a,b,c)          max(a,max(b,c))
#define       all(v)               v.begin(), v.end()
#define       ok                   cout << "ok" << endl
#define       mem(x,y)             memset(x,y,sizeof(x))
#define       clr(a)               a.clear()
#define       READ(f)              freopen(f, "r", stdin)
#define       WRITE(f)             freopen(f, "w", stdout)

/*...................................Data_Types............................................*/
#define       lli                  long long int
#define       ull                  unsigned long long int
#define       pii                  pair < int, int>
#define       pll                  pair < ll, ll>
#define       veci                 vector<int>
#define       vecl                 vector<long long int>
#define       vecp                 vector<  pair<int,int> >
#define       mapstrint            map< string , int >
#define       mapstrstr            map< string , string >
#define       mapint               map< int, int >
#define       uset                 unordered_set
#define       umap                 unordered_map
#define       pq                   priority_queue

#define       pb                   push_back
#define       mp                   make_pair
#define       ff                   first
#define       ss                   second

/*.....................................Loops...............................................*/
#define       rep( i , a , b )     for( i=a ; i<b ; i++)
#define       rev( i , a , b )     for( i=a ; i>=b ; i--)
#define       repx( i ,a,b, x)     for( i=a ; i<b ; i+=x)

#define       IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
if(x==0) return y;
return gcd(y%x,x);
}
lli bigmod(lli n, lli k)
{
lli ans=1;
while(k)
{
if(k&1)
ans=(ans*n)%M;
k=k>>1;
n=(n*n)%M;
}

return ans;
}
*/
/*
int dx4[5] = {1, -1, 0, 0 };
int dy4[5] = {0, 0, 1, -1};
int dx8[9] = { 0 , 0 , -1 , 1 , -1 , -1 , 1 , 1 } ;
int dy8[9] = { -1 , 1 , 0 , 0 , -1 , 1 , -1 , 1 } ;

int knightx[9] = { -1 , 1 , -2 , 2 , -2 , 2 , -1 , 1 } ;
int knighty[9] = { -2 , -2 , -1 , -1 , 1 , 1 , 2 , 2 } ;

bool valid( int r , int c , int x , int y ){ if( x >= 1 && x <= r && y >= 1 && y <= c ) return 1 ; return 0 ; }
*/

using namespace std;
vector<lli > vec;
void seive(lli n)
{
    vec.pb(2);
    lli i,j,cnt;
    for(i=3;i<=n;i+=2)
    {
        cnt=0;

        for(j=0;vec[j]<=sqrt(i);j++)
        {
            if(i%vec[j]==0) { cnt=1; break;}
        }

        if(cnt==0) vec.pb(i);
    }

}

bool num_div(lli p,lli n,lli sz)
{
    bool ans=1;

    lli cnt,x=1,i;

    rep(i , 0 , sz)
    {
        cnt=0;
        if(vec[i]>p) break;
        while(p%vec[i]==0)
        {
            p/=vec[i];
            cnt++;
        }
        if(cnt) x*=(cnt+1);//cout << "div " << cnt+1 << endl;

    }

    if(p>2) x<<=1;
    //cout << " x = " << x << endl;
    if(x==n+2) return 1;
    else return 0;
}
int main()
{
    lli t,n,i,j,p,k;

    scln(t);
    seive(1000007);
    lli sz=vec.size();
    while(t--)
    {
        scln(n);
        lli arr[n+7];
        rep(i , 0 , n) scln(arr[i]);

        bool okk1=false,okk2=true;

        if(n==1)
        {
            p=arr[0]*arr[0];
            if(num_div(p , n , sz))
                cout << p << endl;
            else cout << -1 << endl;
        }
        else
        {
            sort(arr,arr+n);
            p=arr[0]*arr[n-1];
          //  cout << "P = " << p << endl ;
            okk1=num_div(p , n , sz)?true:false;
            rep(i , 0 , n)
            {
                if(p%arr[i]!=0)
                    okk2=false;
            }
           // cout << okk1 << " " << okk2 << endl;
            if(okk1 and okk2)
                cout << p << endl;
            else
                cout << -1 << endl;

        }

    }

#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << "
         ms" << endl;
#endif
    return 0;
}

