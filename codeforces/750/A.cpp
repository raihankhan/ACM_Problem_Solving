#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,m,j;
    cin >> n >> k ;
    m=240-k;
    for(i=n;i>=0;i--)
    {
        if(   (5*i*(i+1)/2)  <= m  ) break;
    }
    cout << i << endl;
    return 0;
}
