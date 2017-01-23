#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int i,len;
    cin >> a >> b ;
    len=a.size();
    for(i=0;i<len;i++)
    {
        if(a[i]=='1' && b[i]=='1')
        cout << "0" ;
        else if(a[i]=='0'&&b[i]=='0')
        cout << "0" ;
        else cout << "1" ;
    }
    cout<< endl;
    return 0;
}
