#include<bits/stdc++.h>
  using namespace std;
  int main()
{
    int t,i;
    double AD,AB, AC, BC ,rat ;
    cin >> t ;
    for(i=1;i<=t;i++)
    {
        cin >> AB >>  AC >> BC >> rat ;
        AD=AB*(sqrt(rat)/sqrt(rat+1));
        printf("Case %d: %.10lf\n",i,AD);
    }
    return 0;
}
   