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

    string a,b,c;
    int i,j,cnt,m;
    cin >> a >> b;
    cnt=a.length();
    c=a[0];
    for(i=1;i<cnt;i++)
    {
        if(a[i]<b[0]) c+=a[i];
        else break;
    }
    c+=b[0];

    cout << c << endl;
    return 0;
}


