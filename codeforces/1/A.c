#include<stdio.h>
int main()
{
    long long int a,b,c,s,row,column;
    scanf("%I64d%I64d%I64d",&a,&b,&c);
    if(a%c==0)
        row=a/c;
    else
        row=(a/c)+1;
    if(b%c==0)
        column=b/c;
    else
        column=(b/c)+1;
    s=row*column;
    printf("%I64d\n",s);
    return 0;
}
