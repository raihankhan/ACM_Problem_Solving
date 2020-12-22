#include<stdio.h>
int main()
{
    int t,i,m,n,way;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        if(m==1 || n==1)
            way=m*n;
        else if(m==2 || n==2)
        {
            if(m>n)
            {
                n=m; m=2;
            }
            if(n<5) way=4;
            else if(n>=5 && n%4==0)  way=n;
            else if(n>=5 && n%4!=0)
            {
                if(n%2==0) way=m+n;
                else if(n%2==1) way=n+1;
            }
        }
        else way=((m*n)+1)/2 ;
        printf("Case %d: %d\n",i,way);
    }
    return 0;
}
 