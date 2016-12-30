#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len,i,x=0;
    cin >> s ;
    len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            x=1;
            break;
        }
    }
    if(x==1) cout << "YES" << endl ;
    else      cout << "NO" << endl ;
    return 0;
}
