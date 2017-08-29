#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,k,m,i,day=0;
    cin >> n >> k ;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        vec.push_back(m);
    }
    for(i=0;i<n-1;i++)
    {
        if(k>0) day++;
        if(vec[i]>8) { vec[i+1]+=(vec[i]-8); k=k-8; }
        else {   k=k-vec[i]; }
        if(k<=0)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
    if(vec[n-1]>8 and k>8 || vec[n-1]< k ) cout << "-1" << endl;
    else cout <<  i+1 << endl;
}
