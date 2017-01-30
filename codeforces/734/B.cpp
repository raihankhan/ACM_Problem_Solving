#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int k1,k2,k3,k4,ls,ns;
    cin >> k1 >> k2 >> k3 >> k4 ;
    ls=(k1<k3)? k1 : k3 ;
    ls=(ls<k4)? ls : k4 ;
    k1=k1-ls;
    ns=(k1<k2)?k1:k2 ;
    cout << (256*ls)+(32*ns) << endl ;
    return 0;
}


