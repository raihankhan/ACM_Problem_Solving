#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0,i;
    string s ;
    string h="hello" ;
    cin >> s;
    int len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]==h[j])
            j++;
    }
    if(j>=5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
