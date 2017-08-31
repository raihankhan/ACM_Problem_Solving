#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    int i,j,k;
    cin >> s ;
    s="00" + s ;
    for(i=0;i<s.length();i++)
    {
        for(j=i+1;j<s.length();j++)
        {
            for(  k=j+1;k<s.length() ; k++ )
            {
                int l= (s[i]-'0') * 100 + (s[j]-'0') * 10 + (s[k]-'0');
                if(l%8==0)
                { cout << "YES" << endl << l << endl; return 0; }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
