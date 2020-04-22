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
#define       pfn                  printf("\n")
#define       scin(x)              sc("%d",&(x))
#define       scin2(xx,zz)         scanf("%d %d",&xx,&zz)
#define       scln(x)              sc("%lld",&(x))
#define       scln2(xx,zz)         scanf("%lld %lld",&xx,&zz)
#define       min3(a,b,c)          min(a,b<c?b:c)
#define       max3(a,b,c)          max(a,b>c?b:c)
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

///------------------------------- Mudular functions----------------------------------------
/*
inline lli power(lli x, lli y){ lli temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
inline lli add(lli a, lli b) {a += b; return a >= M ? a - M : a;}
inline lli sub(lli a, lli b) {a -= b; return a < 0 ? a + M : a;}
inline lli mul(lli a, lli b) {return  (a * b) % M;}
lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}
lli bigmod(lli n, lli k )
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
///----------------------------------Graph moves----------------------------------------
/*
int dx4[5] = {1, -1, 0,  0};
int dy4[5] = {0,  0, 1, -1};
int dx8[9] = {0,  0, 1, -1, -1, 1, -1,  1};
int dy8[9] = {-1, 1, 0,  0,  1, 1, -1, -1};
int knightx[9] = {-2, -2, -1, -1,  1, 1, 2,  2};
int knighty[9] = {-1,  1, -2,  2, -2, 2, -1, 1};
bool valid( int r , int c , int x , int y ){ if( x >= 1 && x <= r && y >= 1 && y <= c ) return 1 ; return 0 ; }
*/

using namespace std;

int main()
{
    int n,i,j,p;
    string num,name;

    cin >> n ;

    vector< pair<int,string> > taxi;
    vector< pair<int,string> > pizza;
    vector< pair<int,string> > girls;

    vector<string>names;

    rep(i, 0, n)
    {
        cin >> p >> name  ;

        names.pb(name);

        int tx=0,pz=0,gf=0;

        while(p--)
        {
            cin >> num ;
            bool tf=0,pf=0;
            if(num[0]==num[1] and num[1]==num[3] and num[3]==num[4] and num[4]==num[6] and num[6]==num[7])
                tx++,tf=1;

            if(!tf)
            {
                if(num[0]>num[1] and num[1]>num[3] and num[3]>num[4] and num[4]>num[6] and num[6]>num[7])
                    pz++,pf=1;
            }

            if(!tf and !pf)
                gf++;
        }

        taxi.pb({tx,name});
        pizza.pb({pz,name});
        girls.pb({gf,name});
    }

    sort(all(taxi));
    sort(all(pizza));
    sort(all(girls));

    reverse(all(taxi));
    reverse(all(pizza));
    reverse(all(girls));

    int tmaxi=taxi[0].ff;
    int pmaxi=pizza[0].ff;
    int gmaxi=girls[0].ff;

    vector<string>tans;
    vector<string>pans;
    vector<string>gans;

    rep(i, 0, names.size())
    {
        rep(j, 0, taxi.size())
        {
            if(names[i]==taxi[j].ss and tmaxi==taxi[j].ff)
            {
                tans.pb(taxi[j].ss);
                break;
            }
        }
        rep(j, 0, pizza.size())
        {
            if(names[i]==pizza[j].ss and pmaxi==pizza[j].ff)
            {
                pans.pb(pizza[j].ss);
                break;
            }
        }
        rep(j, 0, girls.size())
        {
            if(names[i]==girls[j].ss and gmaxi==girls[j].ff)
            {
                gans.pb(girls[j].ss);
                break;
            }
        }
    }

    cout << "If you want to call a taxi, you should call:" ;
    p=tans.size()-1;
    rep(i, 0, tans.size())
    {
        if(p==i)
            cout << " " << tans[i] << "." << endl;
        else
            cout << " " << tans[i] << "," ;
    }

    cout << "If you want to order a pizza, you should call:" ;
    p=pans.size()-1;
    rep(i, 0, pans.size())
    {
        if(p==i)
            cout << " " << pans[i] << "." << endl;
        else
            cout << " " << pans[i] << "," ;
    }

    cout << "If you want to go to a cafe with a wonderful girl, you should call:" ;
    p=gans.size()-1;
    rep(i, 0, gans.size())
    {
        if(p==i)
            cout << " " << gans[i] << "." << endl;
        else
            cout << " " << gans[i] << "," ;
    }






#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}

