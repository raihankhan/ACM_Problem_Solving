#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,len,j=0,k=0;
    cin >> s;
    len=s.length();
    for(i=1;i<len;i++)
       {
        if(s[i]>=65&&s[i]<=90)
            j++;
       }
         if(j==len-1)
        {
            if(s[0]>=65&&s[0]<=90)
                s[0]=tolower(s[0]);
            else
            s[0]=toupper(s[0]);
           for(i=1;i<len;i++)
                s[i]=tolower(s[i]);
        }


    cout <<s<<endl ;
    return 0;
}
