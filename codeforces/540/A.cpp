#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int t,i,sum,k;
    cin >> t;
    cin >> a >> b ;
    sum=0;
    for(i=0;i<t;i++)
    {
        k=a[i]-b[i];
        if(k<0) k=(-1)*k;
        if(k>5) k=10-k;
        sum=sum+k;
    }
    cout << sum << endl;
    return 0;
}
