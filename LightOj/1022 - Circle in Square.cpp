#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    int t,i;
    cin >> t ;
    double r;
    for(i=1;i<=t;i++)
    {
        cin >> r;
        cout << setprecision(2) << fixed ;
        cout << "Case " << i << ": " << r*r*(4-PI) << endl;
    }
return 0;
}
 