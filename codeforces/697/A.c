#include<stdio.h>
int main()
{
    int t,s,x;
    scanf("%d%d%d",&t,&s,&x);
    if (x>=t &&( (x-t)%s==0 || (x-t-1!=0 && (x-t-1)%s==0))) printf("YES\n");
    else printf("NO\n");
    return 0;
}
