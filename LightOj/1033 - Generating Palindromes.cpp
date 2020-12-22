#include<bits/stdc++.h>
  using namespace std;
  int a[102][102];
  int main()
{
    string text,pattern;
      int t,l1;
    scanf("%d",&t);
      for(int ca=1; ca<=t; ca++)
    {
        cin>>text;
        pattern=text;
        reverse(pattern.begin(),pattern.end());
          l1=text.size();
          memset(a,0,sizeof(a));
          for(int i=1; i<=l1; i++)
        {
            for(int j=1; j<=l1; j++)
            {
                if(text[i-1]==pattern[j-1]) a[i][j]=a[i-1][j-1]+1;
                else a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
          cout<<"Case "<<ca<<": "<<l1-a[l1][l1]<<endl;
      }
}
 