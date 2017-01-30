#include<bits/stdc++.h>
using namespace std ;
int gcd(int x,int y);
int main()
{
    int n,i,cnt=1;
    string s , p ;
    cin >> n ;
    cin >> s ;
    n--;
    while(n--)
    {
        cin >> p ;
        if(s[1]==p[0])
            cnt++;
        s=p;
    }
    cout << cnt << endl;
    return 0;
}

