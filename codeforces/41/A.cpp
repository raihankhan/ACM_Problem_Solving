#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    int t,i,len1,len2,a=0;
    cin >> s;
    cin >> ss;
    len1=s.length();
    len2=ss.length();
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s[i]==ss[len2-i-1])
                a++;
        }
        if(a==len1)
            cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    else cout <<"NO"<<endl;
    return 0;
}
