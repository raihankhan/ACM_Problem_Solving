#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,fac=1;
    cin >> a >> b;
    if(b<a) a=b;
    for(i=2;i<=a;i++)
    fac*=i;
    cout << fac << endl;
    return 0;
}

