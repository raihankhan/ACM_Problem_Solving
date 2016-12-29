#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,j=0,i;
     string bit;
     cin >> n;
     for(i=0;i<n;i++)
    {
        cin >> bit;
        if(bit[0]=='+' and bit[1]=='+'||bit[1]=='+' and bit[2]=='+')
            j=j+1;
        else if(bit[0]=='-' and bit[1]=='-'||bit[1]=='-' and bit[2]=='-')
            j=j-1;
    }
        cout << j << endl ;
     return 0;
 }
