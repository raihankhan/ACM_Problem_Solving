#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,num=0,x,cnt=0,a=0;
    cin >> m ;
    while(m)
    {
        x=m%10;
        if(x==4 or x==7)
            num++;
        m=m/10;
    }
    while(num)
    {
        x=num%10;
        if(x == 4 or x== 7 )
        cnt++;
        num=num/10 ;
        a++;
    }
    if (a==cnt and a!=0) cout << "YES" << endl ;
    else cout << "NO" << endl ;
    return 0;
}
