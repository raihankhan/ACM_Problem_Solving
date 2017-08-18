#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=9,q=4;
    cin >> n ;
    if(n%2==1) cout << p << " " << n-p << endl;
    else cout << q << " " << n-q << endl;
    return 0;
}
