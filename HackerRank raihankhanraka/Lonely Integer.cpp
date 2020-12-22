#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,k;
    cin >> n ;
    
    m=0;
    
    for(i=0;i<n;i++)
    {
        cin >> k ;
        m=m^k;
    }
    
    cout << m << endl;
}