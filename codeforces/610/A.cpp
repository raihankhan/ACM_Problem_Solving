#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin >> n;
    if(n%2!=0 or n<5)
        cout << 0 << endl;
    else
    {
        if(n%4!=0)
            cout << n/4 << endl;
        else
        cout << (n/4)-1 << endl;
    }
    return 0;
}
