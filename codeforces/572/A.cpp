#include<bits/stdc++.h>
using namespace std;
int main()
{
    int na , nb , k , m,i,j=0 ;
       cin >> na >> nb >> k >> m ;
       long long int a[na],b[nb];
for(i=0;i<na;i++)
   scanf("%I64d",&a[i]);
for(i=0;i<nb;i++)
    scanf("%I64d",&b[i]);
   if(a[k-1]<b[nb-m])
            cout << "YES" << endl;
    else printf("NO\n");
    return 0;
}
