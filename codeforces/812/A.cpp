#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5] ,i , j , k ,p , l ,d;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<4;j++)
        cin >> arr[i][j] ;
     }
     d=0;
     for(i=0;i<=3;i++)
     {
         if(arr[i][3]==1 )
        {
            if(arr[i][1]==1) d=1;
            if(arr[i][0]==1) d=1;
            if(arr[i][2]==1) d=1;
            k=i+1;
             for(l=0;l<3;l++)
            {
                if(k>3) k=k-4;
                if(arr[k][l]==1) d=1 ;
                k++ ;
            }
        }
     }
      if(d==1 ) cout << "YES" << endl ;
        else if (d==0) cout << "NO" << endl ;
        return 0 ;
}
