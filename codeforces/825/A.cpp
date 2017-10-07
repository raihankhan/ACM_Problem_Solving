#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,k,j=0;
    cin >> n;
    string m;
    cin >> m;
    m[n]='\n';
    k=0;
    for(i=0;i<=m.length();i++)
    {
        if(m[i]=='1' ) k++;
        else if((m[i]=='0' or m[i]=='\n')and m[i-1]=='1') { cout << k ; k=0;  }
        else cout << j ;

    }
return 0;
}
