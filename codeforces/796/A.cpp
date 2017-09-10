#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,num=0,pos,a;
    int cnt=999999;
    vector <int> v;
    cin >> n >> m >>k ;
    for(i=0;i<n;i++)
        {
            cin >> a;
            v.push_back(a);
        }
     for(i=0;i<n;i++)
     {
         pos=abs(m-i-1);
         if(v[i]<=k and pos<=cnt and v[i]!=0)  cnt=pos;
     }
     cout << cnt * 10 << endl;
     return 0;

}
