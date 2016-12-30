#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,b,i,total=0,h=0;
     cin >> n ;
     for(i=0;i<n;i++)
     {
         cin >> a >> b ;
         total=total+b-a;
         if(total>h)
            h=total;
     }
     cout << h << endl;
     return 0;
}
