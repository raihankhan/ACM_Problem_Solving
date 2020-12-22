#include<stdio.h>
int main()
{
    int T,n,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        if(n>20)
            continue;
        else if(n==0)
            printf("0 0\n");
        else if(n<=10)
            printf("%d %d\n",n-1,1);
            else printf("%d %d\n",n-10,10);
    }
    return 0;
}
 