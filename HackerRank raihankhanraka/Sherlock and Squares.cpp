#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long int q,a,b;
    cin >> q ;
    while(q--)
    {
        cin >> a >>b ;
        a=ceil ( sqrt(a) ) ;
        b=floor(sqrt(b));
        cout << b - a +1 << endl;
    }
    

    return 0;
}

