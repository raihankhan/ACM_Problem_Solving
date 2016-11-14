#include<stdio.h>
int main()
{
    int n,arr[4][4],i,j,x=0,y=0;
    scanf("%d",&n);
    while(n--)
    {
    for(i=0;i<3;i++)
    {
        scanf("%d",&j);
            y+=j;
    }
    if(y>=2)
            x=x+1;
            y=0;
    }
    printf("%d\n",x);
    return 0;
}
