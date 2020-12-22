#include<bits/stdc++.h>
  using namespace std;
  int main()
{
    char a[27];
    int t,n,k,i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d%d",&n,&k);
        char let='A';
        for(i=0;i<n;i++)
        {
            a[i]=let;
            let++;
        }
        printf("Case %d:\n",j);
        do
        {
            if(k==0) break;
            for(i=0;i<n;i++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
            k--;
        }while(next_permutation(a,a+n));
    }
    return 0;
}
 