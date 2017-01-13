#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,day=1;
    cin >> n >> m ;
    while(day<=n)
    {
        if(day%m==0)
        ++n;
        day++;
    }
    cout << day-1 << endl;
    return 0;
}

