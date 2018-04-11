#include<bits/stdc++.h>

#define PI                          acos(-1)
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)        max(a,max(b,c))
#define   READ(f)             freopen(f, "r", stdin)
#define  WRITE(f)            freopen(f, "w", stdout)
#define               lli             long long int
#define              ull            unsigned long long int
#define              pii            pair < int, int>
#define              pll            pair < ll, ll>
#define              sc            scanf
#define       scin(x)           sc("%d",&(x))
#define       scln(x)           sc("%lld",&(x))
#define              pf             printf
#define          veci            vector<int>
#define          vecl            vector<long long int>
#define         vecp            vector<  pair<int,int> >
#define             pb            push_back
#define             inf            1<<30
#define            mp            make_pair
#define             ss            stringstream
#define         all(v)           v.begin(), v.end()
#define mem(x,y)            memset(x,y,sizeof(x))
#define             M            1000000007
long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;

string tostring(lli n)
{
    string  s ;
    int a;
    while(n)
    {
        a=n%10;
        s+= (a+'0');
        n=n/10;
    }
    reverse(s.begin(),s.end());
    return s;
}

 int issubstr(string root,string sub)
 {
     int i,j,len=0;
     for(i=0,j=0;i<root.length();i++)
        if(root[i]==sub[j])
        j++;

     if(j==sub.length())
        return 1;
     else return 0;
 }
int main()
{

    lli n ;
    veci v;
    string root,sub;
    scln(n);

    for(lli i=1; i*i <=n ;i++)
            v.pb(i*i);

     root = tostring(n);
    // cout << root << endl;

     for(lli i=v.size()-1;i>=0;i--)
     {
         sub=tostring(v[i]);

         if( issubstr(root,sub) )
        {
             cout << root.length()-sub.length() << endl;

             return 0;
        }

     }

    cout <<   "-1" <<    endl;

    return 0;
}
