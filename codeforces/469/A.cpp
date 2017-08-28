#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> ab;
    int a,b,t,m,i;
    cin >> t ;
    cin >> a;
    for(i=1;i<=a;i++)
    {
        cin >> m;
        ab.insert(m);
    }
    cin >> b;
    for(i=1;i<=b;i++)
    {
        cin >> m;
        ab.insert(m);
    }
    if(*ab.end()==t) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}
