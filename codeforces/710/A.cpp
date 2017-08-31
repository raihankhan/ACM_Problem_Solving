#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin >> s ;
    if( (s[0]=='a' and s[1]=='1') or (s[0]=='a' and s[1]=='8') or (s[0]=='h' and s[1]=='1') or (s[0]=='h' and s[1]=='8')  )
        cout << "3" << endl ;
    else if( s[0]=='a' or s[0]=='h' or s[1]=='1' or s[1]=='8')
        cout << "5" << endl;
    else
        cout << "8" << endl;
    return 0;
}

