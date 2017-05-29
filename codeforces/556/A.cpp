#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string x;
    cin  >> n >> x ;

    int one=0,zero=0;
    for(i=0;i<n;i++)
    {
       if(x[i]=='1') one++;
       else zero++;
    }
    cout << max(one,zero)-min(one,zero) << endl;
    return 0;
}
