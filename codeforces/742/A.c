#include<stdio.h>
int main()
{
    long long int n,a,i;
    int arr[6]={1,8,4,2,6};
    scanf("%I64d",&n);
    if(n==0)
        a=arr[0];
    else if(n<5 )
        a=arr[n];
    else if(n%4==0)
    {
        a=arr[4];
    }
    else if(n>=5)
    {
        i=n%4;
        a=arr[i];
    }
    printf("%I64d\n",a);
    return 0;
}
