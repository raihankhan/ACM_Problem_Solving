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
    int ax,ay,bx,by,cx,cy,dx,dy,area;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy ;
        dx=ax-bx+cx;
        dy=ay-by+cy;
        area=(abs((ax*by + bx*cy + cx*dy + dx*ay )-(ay*bx + by*cx + cy*dx + dy*ax )))/2;
        cout << "Case "<< i << ": "  << dx<<" " << dy << " "  << area   << endl;
    }
        return 0;
}
 