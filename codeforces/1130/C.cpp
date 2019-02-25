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
using namespace std;

int dx[5] = {1, -1, 0, 0 };
int dy[5] = {0, 0, 1, -1};
bool visited[55][55];
char maze[55][55];
int n;
int r1, c1, r2, c2;
queue < pair<int,int> > q;
vecp v1,v2;

bool bfs(int i,int j)
{
    q.push(mp(i,j));
    visited[i][j] = true;
    v1.pb(mp(i,j));

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int p = 0; p < 4; p++)
        {
            i = x + dx[p];
            j = y + dy[p];
            if(visited[i][j]==false && i>= 1 && j >= 1 && i <= n && j <= n && maze[i][j] != '1' )
            {
                visited[i][j] = true;
                q.push(mp(i,j));
                //cout << maze[i][j] << " " <<  i << " " << j << endl;
                if(i==r2 and j==c2) return true;
                v1.pb(mp(i,j));
            }
        }
    }
    return false;
}

void bfs1(int i,int j)
{
    q.push(mp(i,j));
    visited[i][j] = true;
    v2.pb(mp(i,j));

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int p = 0; p < 4; p++)
        {
            i = x + dx[p];
            j = y + dy[p];
            if(!visited[i][j] && i>= 1 && j >= 1 && i <= n && j <= n && maze[i][j] != '1' )
            {
                if(visited[i][j] == false)
                {
                    visited[i][j] = true;
                    q.push(mp(i,j));
                    v2.pb(mp(i,j));
                }
            }
        }
    }
}


int main()
{
    int i,j;
    cin >> n;
    cin >> r1 >> c1;
    cin >> r2 >> c2;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            cin >> maze[i][j];
    }

    bool ans;
    ans=bfs(r1, c1);
    if(ans)
    {
        cout << "0" << endl;
        return 0;
    }
    else
    {
        bfs1(r2, c2);
    }

    lli k=inf,p;
    for( i=0 ; i<v1.size() ; i++)
    {
        for(j=0; j<v2.size() ; j++)
        {
            p=((v1[i].first-v2[j].first)*(v1[i].first-v2[j].first))+( (v1[i].second-v2[j].second)*(v1[i].second-v2[j].second) ) ;
            k=min(k, p);
        }
    }

    cout << k << endl;


#ifdef HOME
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
    return 0;
}
