#include<bits/stdc++.h>
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define FILL(a,v) memset(a,v,sizeof(a))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{

    int n,i,f=-1,l=-1,k,dis;
    cin >> n ;
    lli arr[n],s;
    scanf("%lld",&arr[0]);
    s=arr[0];
    for(i=1;i<n;i++) { scanf("%lld",&arr[i]); if(arr[i]<s) s=arr[i]; }

    for(i=0;i<n;i++)
    {
        if(arr[i]==s and f>-1) { l=i; k=i; break; }
        if(arr[i]==s and f==-1) { f=i; }

    }
    dis=l-f;
    for(i=k+1;i<n;i++)
    {
        if(arr[i]==s) { f=l; l=i; if((l-f)<dis) dis=l-f; }
    }
    cout << dis << endl;
    return 0;
}

