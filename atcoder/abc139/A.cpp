#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s,t;
  int i,j,ans=0;
  
  cin >> s >> t ;
  
  for(i=0;i<=2;i++)
    if(s[i]==t[i]) ans++;
  cout << ans << endl;
  return 0;
}
