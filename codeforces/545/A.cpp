#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j;
    cin >> n ;
    vector < int > fi ;
    for(i=0;i<n;i++)
        fi.push_back(i+1);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
             scanf("%d",&m);
                     if(i!=j)
                     {
                                if( m == 1 )
                                fi[i]=0;
                        else if( m == 2 )
                                fi[j]=0;
                        else if( m == 3 )
                       {
                          fi[i]=0; fi[j]=0;
                       }
                    }
        }
          int cnt=0;
          for(i=0;i<n;i++)
                if(fi[i]>0) cnt++;
          cout << cnt <<endl ;
          for(i=0;i<n;i++)
               {
                   if(fi[i]>0)
                    cout << fi[i] << " " ;
               }

}


