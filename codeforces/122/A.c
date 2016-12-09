#include<stdio.h>
int main()
{
    int arr[20]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,i,set=0;
    scanf("%d",&n);
    for(i=0;i<=13;i++)
    {
        if(n==arr[i])
        {
            set=1;
            break;
        }
    }
    if(set==0)
    {
        for(i=0;i<=13;i++)
    {
        if(n%arr[i]==0)
        {
             set=1;
             break;
        }
    }
    }
    if(set==1)
    printf("YES\n");
    else if(set==0) printf("NO\n");
}
