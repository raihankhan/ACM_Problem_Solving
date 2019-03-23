#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  Raihan Khan Raka  ( raihankhanraka@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering                                                          ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

/*....................................Values................................................*/
#define       inf                  1<<30
#define       p5                   100007
#define       p6                   1000007
#define       PI                   acos(-1)
#define       M                    1000000007

/*....................................Functions.............................................*/
#define       sqr(x)               x*x
#define       sc                   scanf
#define       pf                   printf
#define       scin(x)              sc("%d",&(x))
#define       scin2(x,y)            sc("d",&(x),&(y))
#define       scin3(x,y,z)          sc("d%d",&(x),&(y),&(z))
#define       scln(x)              sc("%lld",&(x))
#define       min3(a,b,c)          min(a,min(b,c))
#define       max3(a,b,c)          max(a,max(b,c))
#define       all(v)               v.begin(), v.end()
#define       ok                   cout << "ok" << endl
#define       mem(x,y)             memset(x,y,sizeof(x))
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
#define       ss                   stringstream

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
int arr[6][6];
int r,c;
void clr()
{
    int i,j;

    rep(i, 1, 5)
    {
        if(arr[i][0]==4)
        {
            rep(j, 0, 5)
            {
                arr[i][j]=0;
                arr[0][j]--;
            }
        }
    }

    rep(j, 1, 5)
    {
        if(arr[0][j]==4)
        {
            rep(i, 0, 5)
            {
                arr[i][j]=0;
                arr[i][0]--;
            }
        }
    }
    arr[0][0]=0;
    return;
}
void chkver()
{
    int i,j;
    rep(j, 1, 5)
    {
        rep( i, 1, 4)
        {

            if(arr[i][j]==0 and arr[i+1][j]==0)
            {
                arr[i][j]=1,arr[i+1][j]=1;
                r=i,c=j;
                arr[i][0]++, arr[0][j]++;
                arr[i+1][0]++, arr[0][j]++;
                //clr();
                return;
            }
        }
    }
}

void chkhor()
{
    int i,j;
    rep( i, 1, 5)
    {
        rep(j, 1, 4)
        {
            if(arr[i][j]==0 and arr[i][j+1]==0)
            {
                arr[i][j]=1,arr[i][j+1]=1;
                r=i,c=j;
                arr[i][0]++, arr[0][j]++;
                arr[i][0]++, arr[0][j+1]++;
                // clr();
                return;
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;

    int len = s.length(),i,j,k;

    rep(i, 0, len)
    {
        if(s[i]=='0')
        {
            chkver();
            cout << r << " " << c << endl;
        }
        else
        {
            chkhor();
            cout << r << " " << c << endl;
        }

        /*rep(k , 0 , 5)
        {
            rep(j , 0 , 5)
            {
                cout << arr[k][j] << " ";
            }
            cout << endl;
        }*/
        clr();
    }



#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}

