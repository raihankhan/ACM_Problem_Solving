#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,p,q,j=0;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> p >> q;
        if(q-p>=2) j++;
    }
    printf("%d\n",j);
    return 0;
}

