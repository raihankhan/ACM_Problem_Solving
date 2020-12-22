#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, n,j=0,t,i;
    cin >> t;
    for(i=1;i<=t;i++)
    {
    cin >> n;
    a=0;
    while(n!=0)
    {
        j=n%2;
        if(j==1) a++;
        n=n/2;
    }
    if(a%2==0)
    cout << "Case " << i << ": even" << endl ;
    else
        cout << "Case " << i << ": odd" << endl ;
    }
    return 0;
}
 