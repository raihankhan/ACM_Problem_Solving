
#include<bits/stdc++.h>
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

using namespace std;

int main()
{

    string s1,s2,in;
    int len,i,temp;
    cin>>s1;
    cin>>s2;
    cin>>in;
    len=in.length();
    string out[len];
    for(i=0;i<len;i++)
    {
        if(in[i]>=48 && in[i]<=57)
            out[i]=in[i];
        else if(in[i]>=65 && in[i]<=90)
        {
            in[i]=in[i]+32;
            temp=s1.find(in[i]);
            out[i]=s2[temp]-32;
        }
        else
        {
            temp=s1.find(in[i]);
            out[i]=s2[temp];
        }
    }
    for(i=0;i<len;i++)
        cout<<out[i];
    cout<<endl;

    return 0;
}


