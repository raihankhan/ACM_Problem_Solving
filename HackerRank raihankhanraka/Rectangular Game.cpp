#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int  a,t,b,i,j,inf = 1 << 20  ;
    long long int x=inf , y = inf ;
    cin >> t ;
    while(t--)
    {
    cin  >> a >> b ;
    

    x= min( x, a) ;
    y= min( y, b) ;
    
    
    
        
    }
    cout << x*y << endl ;
    return 0;
}