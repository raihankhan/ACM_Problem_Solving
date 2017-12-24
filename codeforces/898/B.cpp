#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{
    int n,a,b,i,x,y,ymax;
    cin >> n >> a >> b ;
    ymax=n/b;
    for(y=0;y<=ymax;y++)
    {
        if((n-(b*y))%a==0)
        {
            x=(n-(b*y))/a;
            cout << "YES" << endl << x << " " << y << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}



