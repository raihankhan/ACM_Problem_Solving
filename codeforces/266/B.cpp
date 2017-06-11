#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    string s;
    cin >> n >> t >> s;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]=='B' and s[j+1]=='G')
               {
                   swap(s[j],s[j+1]);
                j++;
               }
        }
    }
    cout << s << endl;
    return 0;
}
