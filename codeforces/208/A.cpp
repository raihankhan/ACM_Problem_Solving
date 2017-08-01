
/*...........Bismillahir Rahmanir Rahim........
authur: raihankhanraka
*/
#include<bits/stdc++.h>
#define PI 3.14259
#define long long int ll

using namespace std;
int main()
{
    int i,n,k=-2;
    string s;
    cin >> s ;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
        {
            s[i]='7' ; s[i+1]='7' ; s[i+2]='7';
            i+=2;
        }
        else if(k==-2 )
        {
            k=i;
        }
    }
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='7')
        {
            if(s[i-1]=='7' and i>k) cout << " " << s[i];
            else cout << s[i];
        }
    }
    return 0;
}
