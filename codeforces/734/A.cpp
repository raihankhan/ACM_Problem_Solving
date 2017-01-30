#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i,t;
    string s;
    cin >> t;
    cin >> s;
    int A=0 , D=0;
    for(i=0;i<t;i++)
    {
        if(s[i]=='A')
            A++;
        else D++;
    }
    if(A==D)
        cout << "Friendship" << endl ;
    else if (A>D)
        cout << "Anton" << endl ;
    else cout << "Danik" << endl ;
    return 0;
}


