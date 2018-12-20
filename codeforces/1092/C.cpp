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

#define       FastRead             ios_base::sync_with_stdio(0);cin.tie(0)


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
bool cmp(pair<string, int > &a, pair<string, int > &b)
{
    return a.first.length()<b.first.length();
}
int main()
{
    vector<pair<string, int > >v(307);
    char ans[307];
    string s,pref,suff;
    bool cnt=false;
    int n,i,j,p,k,len;

    scin(n);

    p=2*n-2;
    rep(i, 0, p)
    {
        cin >> v[i].first;
        v[i].second=i;
    }

    sort(v.begin(), v.begin()+p, cmp );

    pref=v[0].first;
    suff=v[1].first;
    ans[v[0].second]='P';
    ans[v[1].second]='S';

    for(i=2; i<p ; i+=2)
    {
        if( pref + v[i].first.back() == v[i].first and v[i+1].first.front() +suff == v[i+1].first  )
        {
            pref=v[i].first;
            suff=v[i+1].first;
            ans[v[i].second]='P';
            ans[v[i+1].second]='S';
        }
        else if( pref + v[i+1].first.back() == v[i+1].first and v[i].first.front() +suff == v[i].first  )
        {
            suff=v[i].first;
            pref=v[i+1].first;
            ans[v[i].second]='S';
            ans[v[i+1].second]='P';
        }
        else
        {
            cnt=true;
            break;
        }
    }

    if(cnt)
    {
        suff=v[0].first;
        pref=v[1].first;
        ans[v[0].second]='S';
        ans[v[1].second]='P';

        for(i=2; i<p ; i+=2)
        {
            if( pref + v[i].first.back() == v[i].first and v[i+1].first.front() +suff == v[i+1].first  )
            {
                pref=v[i].first;
                suff=v[i+1].first;
                ans[v[i].second]='P';
                ans[v[i+1].second]='S';
            }
            else if( pref + v[i+1].first.back() == v[i+1].first and v[i].first.front() +suff == v[i].first  )
            {
                suff=v[i].first;
                pref=v[i+1].first;
                ans[v[i].second]='S';
                ans[v[i+1].second]='P';
            }
        }
    }

    rep(i, 0, p)
    cout << ans[i] ;
    cout << endl;



#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}

