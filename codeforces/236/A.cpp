#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,len;
    string s;
    cin >> s ;
    len=s.length();
    int cnt=0;
    for(i=0;i<len;i++)
    {
        if(s[i]!='.')
        {
            cnt++;
        for(j=i+1;j<len;j++)
        {
            if(s[i]==s[j])  s[j]='.' ;
        }
        }
    }
    if(cnt%2==0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
