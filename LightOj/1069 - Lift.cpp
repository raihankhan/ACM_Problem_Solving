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
    int t,i;
    int x,y;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> x >> y ;
        cout << "Case "<< i << ": "  << 19 + abs(x-y)*4 + x*4 << endl;
    }
        return 0;
}
     