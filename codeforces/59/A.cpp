#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,small=0,cap=0;
    string s;
    cin >> s ;
    len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]>=97&&s[i]<=122)  small++;
        else                              cap++;
    }
    if(small>=cap)
    {
             for(i=0;i<len;i++)
             s[i]=tolower(s[i]);
             cout << s <<endl;
   }
   else
   {
            for(i=0;i<len;i++)
            s[i]=toupper(s[i]);
            cout << s <<endl;
   }
    return 0;
}

