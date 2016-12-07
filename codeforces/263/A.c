#include<stdio.h>
int main()
{
    int arr[7][7],i,j,a,b,x=0;
    for(i=1;i<=5;i++)
        for(j=1;j<=5;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                a=i; b=j;
            }
        }
        while(a!=3)
        {
            if(a<3)
                a=a+1;
            else if(a>3)
                a=a-1;
                x++;
        }
        while(b!=3)
        {
            if(b<3)
                b=b+1;
            else if(b>3)
                b=b-1;
            x++;
        }

    printf("%d\n",x);
    return 0;

}
