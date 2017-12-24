#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{
    lli t,ans;
    int i,one=0,two=0,n;
    cin >> t ;
    for(i=0;i<t;i++)
    {
        cin >> n ;
        if(n==1) one++;
        else     two++;
    }
    if(one==two) { ans=one; one=0; }
    else if(two>one) { ans=one; one=0;}
    else { ans = two; one=one-two; }
    ans+= one/3 ;
    cout << ans << endl;
    return 0;
}


