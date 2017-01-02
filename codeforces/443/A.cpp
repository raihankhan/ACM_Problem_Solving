#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char p[1000];
    getchar();
    getline(cin,s);

    int i,j,k,len;
    len=s.length();
    j=0;
    for(i=0;i<len;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            p[j]=s[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        for(k=j-1;k>i;k--)
        {
            if(p[i]==p[k])
                p[k]='0';
        }
    }
    k=j;
    for(i=0;i<j;i++)
    {
        if(p[i]=='0')
           k--;
    }
    cout << k << endl;
    return 0;
}
